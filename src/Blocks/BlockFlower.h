
#pragma once

#include "BlockHandler.h"





class cBlockFlowerHandler final :
	public cBlockHandler
{
	using Super = cBlockHandler;

public:

	using Super::Super;

private:

	virtual cItems ConvertToPickups(const NIBBLETYPE a_BlockMeta, const cItem * const a_Tool) const override
	{
		NIBBLETYPE meta = a_BlockMeta & 0x7;
		return cItem(m_BlockType, 1, meta);
	}





	virtual bool CanBeAt(const cChunk & a_Chunk, const Vector3i a_Position, const NIBBLETYPE a_Meta) const override
	{
		const auto BottomPos = a_Position.addedY(-1);

		return cChunkDef::IsValidHeight(BottomPos) && IsBlockTypeOfDirt(a_Chunk.GetBlock(BottomPos));
	}





	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) const override
	{
		UNUSED(a_Meta);
		return 7;
	}
} ;




