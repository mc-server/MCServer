
#pragma once

#include "ItemHandler.h"
#include "Blocks/BlockDropSpenser.h"





class cItemDropSpenserHandler :
	public cItemHandler
{
	using Super = cItemHandler;

public:

	using Super::Super;

private:

	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) override
	{
		BlockState BlockToPlace;
		switch (BlockItemConverter::FromItem(a_HeldItem.m_ItemType))
		{
			case BlockType::Dispenser: BlockToPlace = Block::Dispenser::Dispenser(RotationToBlockFace(a_Player.GetYaw()), false); break;
			case BlockType::Dropper:   BlockToPlace = Block::Dropper::Dropper(RotationToBlockFace(a_Player.GetYaw()), false); break;
			default: return false;
		}
		return a_Player.PlaceBlock(a_PlacePosition, BlockToPlace);
	}
};
