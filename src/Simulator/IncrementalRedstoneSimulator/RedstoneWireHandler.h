
#pragma once

#include "RedstoneHandler.h"
#include "Registries/BlockStates.h"





namespace RedstoneWireHandler
{
	/** A unified representation of wire direction. */
	enum class TemporaryDirection
	{
		Up,
		Side
	};

	/** Invokes Callback with the wire's left, front, and right direction state corresponding to Offset.
	Returns a new block constructed from the directions that the callback may have modified. */
	template <class OffsetCallback>
	static BlockState DoWithDirectionState(const Vector3i Offset, BlockState Block, OffsetCallback Callback)
	{
		auto North = Block::RedstoneWire::North(Block);
		auto South = Block::RedstoneWire::South(Block);
		auto West = Block::RedstoneWire::West(Block);
		auto East = Block::RedstoneWire::East(Block);

		if (Offset.x == -1)
		{
			Callback(South, West, North);
		}
		else if (Offset.x == 1)
		{
			Callback(North, East, South);
		}

		if (Offset.z == -1)
		{
			Callback(West, North, East);
		}
		else if (Offset.z == 1)
		{
			Callback(East, South, West);
		}

		return Block::RedstoneWire::RedstoneWire(East, North, 0, South, West);
	}

	/** Adjusts a given wire block so that the direction represented by Offset has state Direction. */
	static void SetDirectionState(const Vector3i Offset, BlockState & Block, TemporaryDirection Direction)
	{
		Block = DoWithDirectionState(Offset, Block, [Direction](auto, auto & Front, auto)
		{
			using FrontState = std::remove_reference_t<decltype(Front)>;
			switch (Direction)
			{
				case TemporaryDirection::Up:
				{
					Front = FrontState::Up;
					return;
				}
				case TemporaryDirection::Side:
				{
					Front = FrontState::Side;
					return;
				}
			}
		});
	}

	static bool IsDirectlyConnectingMechanism(BlockState a_Block, const Vector3i a_Offset)
	{
		switch (a_Block.Type())
		{
			case BlockType::Repeater:
			{
				auto Facing = Block::Repeater::Facing(a_Block);
				if ((Facing == eBlockFace::BLOCK_FACE_XM) || (Facing == eBlockFace::BLOCK_FACE_XP))
				{
					// Wire connects to repeater if repeater is aligned along X
					// and wire is in front or behind it (#4639)
					return a_Offset.x != 0;
				}
				return a_Offset.z != 0;
			}
			case BlockType::Comparator:
			{
				return Block::Comparator::Powered(a_Block);  // TODO: Sanity Check
			}
			case BlockType::RedstoneBlock:
			case BlockType::Lever:
			case BlockType::RedstoneTorch:
			case BlockType::RedstoneWallTorch:
			case BlockType::RedstoneWire:
			case BlockType::AcaciaButton:
			case BlockType::BirchButton:
			case BlockType::CrimsonButton:
			case BlockType::DarkOakButton:
			case BlockType::JungleButton:
			case BlockType::OakButton:
			case BlockType::PolishedBlackstoneButton:
			case BlockType::SpruceButton:
			case BlockType::StoneButton:
			case BlockType::WarpedButton: return true;  // TODO: Sanity Check
			default: return false;
		}
	}

	/** Temporary. Discovers a wire's connection state, including terracing, storing the block inside redstone chunk data.
	TODO: once the server supports block states this should go in the block handler, with data saved in the world. */
	static void SetWireState(const cChunk & Chunk, const Vector3i Position)
	{
		auto Block = Block::RedstoneWire::RedstoneWire();
		const auto YPTerraceBlock = Chunk.GetBlock(Position + OffsetYP);
		const bool IsYPTerracingBlocked = cBlockInfo::IsSolid(YPTerraceBlock) && !cBlockInfo::IsTransparent(YPTerraceBlock);

		// Loop through laterals, discovering terracing connections:
		for (const auto & Offset : RelativeLaterals)
		{
			auto Adjacent = Position + Offset;
			auto NeighbourChunk = Chunk.GetRelNeighborChunkAdjustCoords(Adjacent);

			if ((NeighbourChunk == nullptr) || !NeighbourChunk->IsValid())
			{
				continue;
			}


			auto LateralBlock = NeighbourChunk->GetBlock(Adjacent);

			if (IsDirectlyConnectingMechanism(LateralBlock, Offset))
			{
				// Any direct connections on a lateral means the wire has side connection in that direction:
				SetDirectionState(Offset, Block, TemporaryDirection::Side);

				// Temporary: this case will eventually be handled when wires are placed, with the state saved as blocks
				// When a neighbour wire was loaded into its chunk, its neighbour chunks may not have loaded yet
				// This function is called during chunk load (through AddBlock). Attempt to tell it its new state:
				if ((NeighbourChunk != &Chunk) && (LateralBlock.Type() == BlockType::RedstoneWire))
				{
					auto & NeighbourBlock = DataForChunk(*NeighbourChunk).WireStates.find(Adjacent)->second;
					SetDirectionState(-Offset, NeighbourBlock, TemporaryDirection::Side);
				}

				continue;
			}

			if (
				!IsYPTerracingBlocked &&  // A block above us blocks all YP terracing, so the check is static in the loop
				(Adjacent.y < (cChunkDef::Height - 1)) &&
				(NeighbourChunk->GetBlock(Adjacent + OffsetYP).Type() == BlockType::RedstoneWire)  // Only terrace YP with another wire
			)
			{
				SetDirectionState(Offset, Block, TemporaryDirection::Up);

				if (NeighbourChunk != &Chunk)
				{
					auto & NeighbourBlock = DataForChunk(*NeighbourChunk).WireStates.find(Adjacent + OffsetYP)->second;
					SetDirectionState(-Offset, NeighbourBlock, TemporaryDirection::Side);
				}

				continue;
			}

			if (
				// IsYMTerracingBlocked (i.e. check block above lower terracing position, a.k.a. just the plain adjacent)
				(!cBlockInfo::IsSolid(LateralBlock) || cBlockInfo::IsTransparent(LateralBlock)) &&
				(Adjacent.y > 0) &&
				(NeighbourChunk->GetBlock(Adjacent + OffsetYM).Type() == BlockType::RedstoneWire)  // Only terrace YM with another wire
			)
			{
				SetDirectionState(Offset, Block, TemporaryDirection::Side);

				if (NeighbourChunk != &Chunk)
				{
					auto & NeighbourBlock = DataForChunk(*NeighbourChunk).WireStates.find(Adjacent + OffsetYM)->second;
					SetDirectionState(-Offset, NeighbourBlock, TemporaryDirection::Up);
				}
			}
		}

		auto & States = DataForChunk(Chunk).WireStates;
		const auto FindResult = States.find(Position);
		if (FindResult != States.end())
		{
			if (Block != FindResult->second)
			{
				FindResult->second = Block;

				// TODO: when state is stored as the block, the block handler updating via SetBlock will do this automatically
				// When a wire changes connection state, it needs to update its neighbours:
				Chunk.GetWorld()->WakeUpSimulators(cChunkDef::RelativeToAbsolute(Position, Chunk.GetPos()));
			}

			return;
		}

		DataForChunk(Chunk).WireStates.emplace(Position, Block);
	}

	static PowerLevel GetPowerDeliveredToPosition(const cChunk & a_Chunk, Vector3i a_Position, BlockState a_Block, Vector3i a_QueryPosition, BlockState a_QueryBlock, bool IsLinked)
	{
		// Starts off as the wire's meta value, modified appropriately and returned
		auto Power = Block::RedstoneWire::Power(a_Block);
		const auto QueryOffset = a_QueryPosition - a_Position;

		if (
			(QueryOffset == OffsetYP) ||  // Wires do not power things above them
			(IsLinked && (a_QueryBlock.Type() == BlockType::RedstoneWire))  // Nor do they link power other wires
		)
		{
			return 0;
		}

		if (QueryOffset == OffsetYM)
		{
			// Wires always deliver power to the block underneath
			return Power;
		}

		const auto & Data = DataForChunk(a_Chunk);
		const auto Block = Data.WireStates.find(a_Position)->second;

		DoWithDirectionState(QueryOffset, Block, [a_QueryBlock, &Power](const auto Left, const auto Front, const auto Right)
		{
			using LeftState = std::remove_reference_t<decltype(Left)>;
			using FrontState = std::remove_reference_t<decltype(Front)>;
			using RightState = std::remove_reference_t<decltype(Right)>;

			// Wires always deliver power to any directly connecting mechanisms:
			if (Front != FrontState::None)
			{
				if ((a_QueryBlock.Type() == BlockType::RedstoneWire) && (Power != 0))
				{
					// For mechanisms, wire of power one will still power them
					// But for wire-to-wire connections, power level decreases by 1:
					Power--;
				}

				return;
			}

			/*
			Okay, we do not directly connect to the wire.
			1. If there are no DC mechanisms at all, the wire powers all laterals. Great, left and right are both None.
			2. If there is one DC mechanism, the wire "goes straight" along the axis of the wire and mechanism.
				The only possible way for us to be powered is for us to be on the opposite end, with the wire pointing towards us.
				Check that left and right are both None.
			3. If there is more than one DC, no non-DCs are powered. Left, right, cannot both be None.
			*/
			if ((Left == LeftState::None) && (Right == RightState::None))
			{
				// Case 1
				// Case 2
				return;
			}

			// Case 3
			Power = 0;
		});

		return Power;
	}

	static void Update(cChunk & a_Chunk, cChunk & CurrentlyTicking, Vector3i a_Position, BlockState a_Block, const PowerLevel a_Power)
	{
		LOGREDSTONE("Evaluating dusty the wire (%d %d %d) %i", a_Position.x, a_Position.y, a_Position.z, Power);

		if (Block::RedstoneWire::Power(a_Block) == a_Power)
		{
			return;
		}

		using namespace Block;
		a_Chunk.SetBlock(a_Position, RedstoneWire::RedstoneWire
		(
			RedstoneWire::East(a_Block),
			RedstoneWire::North(a_Block),
			a_Power,
			RedstoneWire::South(a_Block),
			RedstoneWire::West(a_Block)
		));

		// Notify all positions, sans YP, to update:
		for (const auto & Offset : RelativeAdjacents)
		{
			if (Offset == OffsetYP)
			{
				continue;
			}

			UpdateAdjustedRelative(a_Chunk, CurrentlyTicking, a_Position, Offset);
		}
	}

	static void ForValidSourcePositions(const cChunk & a_Chunk, Vector3i a_Position, BlockState a_Block, ForEachSourceCallback & Callback)
	{
		UNUSED(a_Block);

		Callback(a_Position + OffsetYP);
		Callback(a_Position + OffsetYM);

		const auto & Data = DataForChunk(a_Chunk);
		const auto Block = Data.WireStates.find(a_Position)->second;

		// Figure out, based on our pre-computed block, where we connect to:
		for (const auto & Offset : RelativeLaterals)
		{
			const auto Relative = a_Position + Offset;
			Callback(Relative);

			DoWithDirectionState(Offset, Block, [&a_Chunk, &Callback, Relative](auto, const auto Front, auto)
			{
				using FrontState = std::remove_reference_t<decltype(Front)>;

				if (Front == FrontState::Up)
				{
					Callback(Relative + OffsetYP);
				}
				else if (Front == FrontState::Side)
				{
					// Alas, no way to distinguish side lateral and side diagonal
					// Have to do a manual check to only accept power from YM diagonal if there's a wire there

					const auto YMDiagonalPosition = Relative + OffsetYM;
					if (
						BlockState QueryBlock = 0;
						cChunkDef::IsValidHeight(YMDiagonalPosition.y) &&
						a_Chunk.UnboundedRelGetBlock(YMDiagonalPosition, QueryBlock) &&
						(QueryBlock == BlockType::RedstoneWire)
					)
					{
						Callback(YMDiagonalPosition);
					}
				}
			});
		}
	}
};
