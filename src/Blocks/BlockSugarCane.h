
#pragma once

#include "BlockPlant.h"





class cBlockSugarcaneHandler final :
	public cBlockPlant<false>
{
	using Super = cBlockPlant<false>;

public:

	using Super::Super;

private:

	virtual bool CanBeAt(const cChunk & a_Chunk, Vector3i a_Position, BlockState a_Self) const override
	{
		if (a_Position.y <= 0)
		{
			return false;
		}

		switch (a_Chunk.GetBlock(a_Position.addedY(-1)).Type())
		{
			case BlockType::Dirt:
			case BlockType::GrassBlock:
			case BlockType::Farmland:
			case BlockType::Sand:
			{
				static const Vector3i Coords[] =
				{
					{-1, -1,  0},
					{ 1, -1,  0},
					{ 0, -1, -1},
					{ 0, -1,  1},
				} ;
				for (size_t i = 0; i < ARRAYCOUNT(Coords); i++)
				{
					BlockState Block;
					if (!a_Chunk.UnboundedRelGetBlock(a_Position + Coords[i], Block))
					{
						// Too close to the edge, cannot simulate
						return true;
					}
					if ((Block.Type() == BlockType::Water) || (Block.Type() == BlockType::FrostedIce))
					{
						return true;
					}
				}  // for i - Coords[]
				// Not directly neighboring a water block
				return false;
			}
			case BlockType::SugarCane:
			{
				return true;
			}
			default: return false;
		}
	}





	virtual ColourID GetMapBaseColourID() const override
	{
		return 7;
	}





	virtual int Grow(cChunk & a_Chunk, Vector3i a_RelPos, unsigned char a_NumStages = 1) const override
	{
		// Check the total height of the sugarcane blocks here:
		int TopY = a_RelPos.y + 1;
		while (
			(TopY < cChunkDef::Height) &&
			(a_Chunk.GetBlock({a_RelPos.x, TopY, a_RelPos.z}).Type() == BlockType::SugarCane)
		)
		{
			++TopY;
		}
		int bottom = a_RelPos.y - 1;
		while (
			(bottom > 0) &&
			(a_Chunk.GetBlock({a_RelPos.x, bottom, a_RelPos.z}).Type() == BlockType::SugarCane)
		)
		{
			--bottom;
		}

		// Grow by at most a_NumStages, but no more than max height:
		auto toGrow = std::min<unsigned char>(a_NumStages, a_Chunk.GetWorld()->GetMaxSugarcaneHeight() + 1 - (TopY - bottom));
		Vector3i TopYPos(a_RelPos.x, TopY, a_RelPos.z);
		for (int i = 0; i < toGrow; i++)
		{
			if (cBlockAirHandler::IsBlockAir(a_Chunk.GetBlock(TopYPos.addedY(i))))
			{
				a_Chunk.SetBlock(TopYPos.addedY(i), Block::SugarCane::SugarCane());
			}
			else
			{
				return i;
			}
		}  // for i
		return toGrow;
	}

	virtual PlantAction CanGrow(cChunk & a_Chunk, Vector3i a_RelPos) const override
	{
		// Only allow growing if there's an air block above:
		if (((a_RelPos.y + 1) < cChunkDef::Height) && (cBlockAirHandler::IsBlockAir(a_Chunk.GetBlock(a_RelPos.addedY(1)))))
		{
			return Super::CanGrow(a_Chunk, a_RelPos);
		}
		return paStay;
	}
} ;




