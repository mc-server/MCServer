
#pragma once

#include "Registries/BlockStates.h"

class cItemHayBaleHandler : public cItemHandler
{
	using Super = cItemHandler;

public:

	cItemHayBaleHandler() : Super(Item::HayBale) {}

	virtual bool IsPlaceable(void) override
	{
		return true;
	}

protected:
	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, Vector3i a_PlacePosition, eBlockFace a_ClickedBlockFace, Vector3i a_CursorPosition) override
	{
		auto Facing = DisplacementYawToFacing(a_PlacePosition, a_Player.GetEyePosition(), a_Player.GetYaw());
		auto Axis = Block::HayBale::Axis::X;
		switch (Facing)
		{
			case BLOCK_FACE_NONE:
			{
				ASSERT(!"Facing is NONE");
				break;
			}
			case BLOCK_FACE_XM:
			case BLOCK_FACE_XP:
			{
				Axis = Block::HayBale::Axis::X;
				break;
			}
			case BLOCK_FACE_YM:
			case BLOCK_FACE_YP:
			{
				Axis = Block::HayBale::Axis::Y;
				break;
			}
			case BLOCK_FACE_ZM:
			case BLOCK_FACE_ZP:
			{
				Axis = Block::HayBale::Axis::Z;
				break;
			}
		}
		a_Player.PlaceBlock(a_PlacePosition, Block::HayBale::HayBale(Axis));
		return true;
	}
};
