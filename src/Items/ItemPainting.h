
#pragma once

#include "ItemHandler.h"
#include "../World.h"
#include "../Entities/Player.h"
#include "../Entities/Painting.h"





class cItemPaintingHandler:
	public cItemHandler
{
	using Super = cItemHandler;

public:

	cItemPaintingHandler(Item a_ItemType):
		Super(a_ItemType)
	{
	}





	virtual bool OnItemUse(
		cWorld * a_World,
		cPlayer * a_Player,
		cBlockPluginInterface & a_PluginInterface,
		const cItem & a_HeldItem,
		const Vector3i a_ClickedBlockPos,
		eBlockFace a_ClickedBlockFace
	) override
	{
		// Paintings can't be flatly placed:
		if (
			(a_ClickedBlockFace == BLOCK_FACE_NONE) ||
			(a_ClickedBlockFace == BLOCK_FACE_YM) ||
			(a_ClickedBlockFace == BLOCK_FACE_YP)
		)
		{
			return false;
		}

		// Make sure block that will be occupied is free:
		auto PlacePos = AddFaceDirection(a_ClickedBlockPos, a_ClickedBlockFace);
		auto PlaceBlock = a_World->GetBlock(PlacePos);
		if (PlaceBlock.Type() != BlockType::Air)
		{
			return false;
		}

		// Define all the possible painting titles
		static const std::array<AString, 26> gPaintingTitlesList =
		{
			"Kebab",
			"Aztec",
			"Alban",
			"Aztec2",
			"Bomb",
			"Plant",
			"Wasteland",
			"Wanderer",
			"Graham",
			"Pool",
			"Courbet",
			"Sunset",
			"Sea",
			"Creebet",
			"Match",
			"Bust",
			"Stage",
			"Void",
			"SkullAndRes",
			"Wither",
			"Fighters",
			"Skeleton",
			"DonkeyKong",
			"Pointer",
			"Pigscene",
			"BurningSkull"
		};

		auto PaintingTitle = gPaintingTitlesList[static_cast<size_t>(a_World->GetTickRandomNumber(gPaintingTitlesList.size() - 1))];
		auto Painting = std::make_unique<cPainting>(PaintingTitle, a_ClickedBlockFace, PlacePos);
		auto PaintingPtr = Painting.get();
		if (!PaintingPtr->Initialize(std::move(Painting), *a_World))
		{
			return false;
		}

		if (!a_Player->IsGameModeCreative())
		{
			a_Player->GetInventory().RemoveOneEquippedItem();
		}
		return true;
	}
};




