
#pragma once

#include "ItemHandler.h"
#include "../World.h"
#include "../Entities/Player.h"

#include "../Blocks/BlockHandler.h"
#include "../BlockInServerPluginInterface.h"





class cItemShovelHandler : public cItemHandler
{
	typedef cItemHandler super;
public:
	cItemShovelHandler(int a_ItemType)
		: cItemHandler(a_ItemType)
	{
	}

	virtual bool OnDiggingBlock(cWorld * a_World, cPlayer * a_Player, const cItem & a_Item, int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_Dir) override
	{
		BLOCKTYPE Block = a_World->GetBlock(a_BlockX, a_BlockY, a_BlockZ);
		if (Block == E_BLOCK_SNOW)
		{
			cChunkInterface ChunkInterface(a_World->GetChunkMap());
			cBlockInServerPluginInterface PluginInterface(*a_World);
			BlockHandler(Block)->DropBlock(ChunkInterface, *a_World, PluginInterface, a_Player, a_BlockX, a_BlockY, a_BlockZ);

			a_World->SetBlock(a_BlockX, a_BlockY, a_BlockZ, E_BLOCK_AIR, 0);
			a_Player->UseEquippedItem();
			return true;
		}
		return false;
	}

	virtual bool CanHarvestBlock(BLOCKTYPE a_BlockType) override
	{
		if (a_BlockType == E_BLOCK_SNOW)
		{
			return true;
		}
		return super::CanHarvestBlock(a_BlockType);
	}

	virtual bool CanRepairWithRawMaterial(short a_ItemType) override
	{
		switch (m_ItemType)
		{
			case E_ITEM_WOODEN_SHOVEL:  return (a_ItemType == E_BLOCK_PLANKS);
			case E_ITEM_STONE_SHOVEL:   return (a_ItemType == E_BLOCK_COBBLESTONE);
			case E_ITEM_IRON_SHOVEL:    return (a_ItemType == E_ITEM_IRON);
			case E_ITEM_GOLD_SHOVEL:    return (a_ItemType == E_ITEM_GOLD);
			case E_ITEM_DIAMOND_SHOVEL: return (a_ItemType == E_ITEM_DIAMOND);
		}
		return false;
	}

	virtual float GetStrVsBlock(BLOCKTYPE a_Block)
	{
		if (a_Block == E_BLOCK_CLAY || a_Block == E_BLOCK_DIRT || a_Block == E_BLOCK_FARMLAND || a_Block == E_BLOCK_GRASS || a_Block == E_BLOCK_GRAVEL || a_Block == E_BLOCK_MYCELIUM || a_Block == E_BLOCK_SAND || a_Block == E_BLOCK_SNOW || a_Block == E_BLOCK_SNOW_BLOCK || a_Block == E_BLOCK_SOULSAND /* a_Block == 208 (GRASS_PATH, not implemented yet) */) {
			switch (m_ItemType) {
				case E_ITEM_WOODEN_SHOVEL: return 2.0f;
				case E_ITEM_STONE_SHOVEL:  return 4.0f;
				case E_ITEM_IRON_SHOVEL:   return 6.0f;
				case E_ITEM_GOLD_SHOVEL:   return 12.0f;
				case E_ITEM_DIAMOND_SHOVEL: return 8.0f;
			}
		} else {
			return super::GetStrVsBlock(a_Block);
		}
		ASSERT(!"Something is wrong here... ask mohe2015");
		return 1.0f;
	}

};
