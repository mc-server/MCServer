
// BlockBanner.h

#pragma once

#include "BlockEntity.h"
#include "Mixins.h"
#include "ChunkInterface.h"

#include "../BlockEntities/BannerEntity.h"


class cEntity;
class cPlayer;
class cWorldInterface;

/*
	may either be placed on top of a block or on the side (may overlap)
	has no collisions
	hitbox is one block tall
	water and lava flow around banners (water goes through the bottom part if placed onto a wall)
	lava can spawn fire blocks next to the banner but doesn't burn the banner
	cannot be moved by pistons
	breaks if block below is broken

	sounds:
		Description                            |sound             | Volume | Pitch |dist
		Breaking the block                      block.wood.break    1.0     0.8     16
		Falling on the block with fall damage   block.wood.fall	    0.5     0.75    16
		Mining the block                        block.wood.hit      0.25    0.5     16
		Placing the block                       block.wood.place    1.0     0.8     16
		Walking on the block                    block.wood.step	    0.15    1.0     16

	Block data:
		Standing:
			direction
		Wall:
			direction
*/


class cBlockBannerHandler :
	public cBlockEntityHandler
{
	using Entity = cBlockEntityHandler;

public:

	cBlockBannerHandler(BLOCKTYPE a_BlockType):
		Entity(a_BlockType)
	{
	}





	virtual cItems ConvertToPickups(
		NIBBLETYPE a_BlockMeta,
		cBlockEntity * a_BlockEntity,
		const cEntity * a_Digger,
		const cItem * a_Tool
	) override
	{
		if ((a_BlockEntity == nullptr) || (a_BlockEntity->GetBlockType() != E_BLOCK_STANDING_BANNER) ||(a_BlockEntity->GetBlockType() != E_BLOCK_WALL_BANNER))
		{
			return {};
		}
		// transfer cBannerPatternContainer back to the item
		auto BannerEntity = static_cast<cBannerEntity *>(a_BlockEntity);

		return cItem(E_ITEM_BANNER, 1, a_BlockMeta);
	}





	virtual void OnPlacedByPlayer(
		cChunkInterface & a_ChunkInterface, cWorldInterface & a_WorldInterface, cPlayer & a_Player,
		const sSetBlock & a_BlockChange
	) override
	{
	}





	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) override
	{
		UNUSED(a_Meta);
		// Todo: find out which color is which
		return 0;
	}
} ;
