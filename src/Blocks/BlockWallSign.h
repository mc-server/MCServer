
#pragma once

#include "BlockHandler.h"
#include "Chunk.h"





class cBlockWallSignHandler :
	public cBlockHandler
{
	typedef cBlockHandler super;

public:
	cBlockWallSignHandler(BLOCKTYPE a_BlockType) :
		super(a_BlockType)
	{
	}

	virtual void ConvertToPickups(cItems & a_Pickups, NIBBLETYPE a_BlockMeta) override
	{
		a_Pickups.push_back(cItem(E_ITEM_SIGN, 1, 0));
	}

	static void GetBlockCoordsBehindTheSign(NIBBLETYPE a_BlockMeta, int & a_BlockX, int & a_BlockZ)
	{
		switch (a_BlockMeta)
		{
			case 2:  a_BlockZ++; break;
			case 3:  a_BlockZ--; break;
			case 4:  a_BlockX++; break;
			case 5:  a_BlockX--; break;
			default: break;
		}
	}

	static NIBBLETYPE DirectionToMetaData(eBlockFace a_Direction)
	{
		switch (a_Direction)
		{
			case BLOCK_FACE_ZM: return 0x2;
			case BLOCK_FACE_ZP: return 0x3;
			case BLOCK_FACE_XM: return 0x4;
			case BLOCK_FACE_XP: return 0x5;
			case BLOCK_FACE_NONE:
			case BLOCK_FACE_YP:
			case BLOCK_FACE_YM:
			{
				break;
			}
		}
		return 0x2;
	}

	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) override
	{
		UNUSED(a_Meta);
		return 13;
	}
} ;




