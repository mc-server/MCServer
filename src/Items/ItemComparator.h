
#pragma once

#include "ItemHandler.h"
#include "../Blocks/BlockComparator.h"





class cItemComparatorHandler:
	public cItemHandler
{
	using Super = cItemHandler;

public:

	cItemComparatorHandler(Item a_ItemType):
		cItemHandler(a_ItemType)
	{
	}





	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) override
	{
		return a_Player.PlaceBlock(a_PlacePosition, Block::Comparator::Comparator(RotationToBlockFace(a_Player.GetYaw()), Block::Comparator::Mode::Compare, false));
	}





	virtual bool IsPlaceable(void) override
	{
		return true;
	}
} ;




