#pragma once

#include "BlockHandler.h"
#include "../Chunk.h"
#include "Mixins.h"
#include "BlockSlab.h"


class cBlockLeverHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

	/** Extracts the ON bit from metadata and returns if true if it is set */
	static bool IsLeverOn(BlockState a_Block)
	{
		return Block::Lever::Powered(a_Block);
	}

	static inline void Flip(cChunkInterface & a_ChunkInterface, Vector3i a_Position)
	{
		auto Self = a_ChunkInterface.GetBlock(a_Position);
		Self = Block::Lever::Lever(Block::Lever::Face(Self), Block::Lever::Facing(Self), !Block::Lever::Powered(Self));
		a_ChunkInterface.FastSetBlock(a_Position, Self);
	}

private:

	virtual bool OnUse(
		cChunkInterface & a_ChunkInterface,
		cWorldInterface & a_WorldInterface,
		cPlayer & a_Player,
		const Vector3i a_BlockPos,
		eBlockFace a_BlockFace,
		const Vector3i a_CursorPos
	) const override
	{
		Flip(a_ChunkInterface, a_BlockPos);
		a_WorldInterface.WakeUpSimulators(a_BlockPos);
		a_WorldInterface.GetBroadcastManager().BroadcastSoundEffect("block.lever.click", a_BlockPos, 0.5f, IsLeverOn(a_ChunkInterface.GetBlock(a_BlockPos)) ? 0.6f : 0.5f);
		return true;
	}





	virtual cItems ConvertToPickups(BlockState a_Block, const cItem * a_Tool) const override
	{
		// Reset meta to zero:
		return cItem(Item::Lever, 1, 0);
	}





	virtual bool IsUseable(void) const override
	{
		return true;
	}





	virtual bool CanBeAt(const cChunk & a_Chunk, Vector3i a_Position, BlockState a_Self) const override
	{
		auto Self = a_Chunk.GetBlock(a_Position);

		// Find the type of block the lever is attached to:
		auto NeighborFace = Block::Lever::Facing(Self);
		auto NeighborPos = AddFaceDirection(a_Position, NeighborFace, true);
		if (!cChunkDef::IsValidHeight(NeighborPos.y))
		{
			return false;
		}

		BlockState Neighbour;
		if (!a_Chunk.UnboundedRelGetBlock(NeighborPos, Neighbour))
		{
			return false;
		}

		// Allow any full block or the "good" side of a half-slab:
		if (cBlockInfo::FullyOccupiesVoxel(Neighbour))
		{
			return true;
		}

		else if (cBlockSlabHandler::IsAnySlabType(Neighbour))
		{
			switch (Block::Lever::Face(Self))
			{
				case Block::Lever::Face::Floor:   return cBlockSlabHandler::IsSlabTop(Neighbour);
				case Block::Lever::Face::Wall:    return false;
				case Block::Lever::Face::Ceiling: return !cBlockSlabHandler::IsSlabTop(Neighbour);
			}
		}

		return false;
	}





	virtual BlockState RotateCCW(BlockState a_Block) const override
	{
		using namespace Block;
		return Lever::Lever(Lever::Face(a_Block), RotateBlockFaceCCW(Lever::Facing(a_Block)), Lever::Powered(a_Block));
	}





	virtual BlockState RotateCW(BlockState a_Block) const override
	{
		using namespace Block;
		return Lever::Lever(Lever::Face(a_Block), RotateBlockFaceCW(Lever::Facing(a_Block)), Lever::Powered(a_Block));
	}





	virtual ColourID GetMapBaseColourID() const override
	{
		return 0;
	}
} ;




