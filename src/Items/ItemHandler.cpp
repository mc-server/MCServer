
#include "Globals.h"
#include "ItemHandler.h"
#include "../World.h"
#include "../Entities/Player.h"
#include "../FastRandom.h"
#include "../BlockInServerPluginInterface.h"
#include "../Chunk.h"

// Handlers:
#include "ItemAnvil.h"
#include "ItemArmor.h"
#include "ItemAxe.h"
#include "ItemBanner.h"
#include "ItemBed.h"
#include "ItemBigFlower.h"
#include "ItemBoat.h"
#include "ItemBottle.h"
#include "ItemBow.h"
#include "ItemBucket.h"
#include "ItemButton.h"
#include "ItemChest.h"
#include "ItemCloth.h"
#include "ItemComparator.h"
#include "ItemCookedFish.h"
#include "ItemDoor.h"
#include "ItemDropSpenser.h"
#include "ItemDye.h"
#include "ItemEmptyMap.h"
#include "ItemEnchantingTable.h"
#include "ItemEndCrystal.h"
#include "ItemEnderchest.h"
#include "ItemEndPortalFrame.h"
#include "ItemEyeOfEnder.h"
#include "ItemFenceGate.h"
#include "ItemFishingRod.h"
#include "ItemFood.h"
#include "ItemFoodSeeds.h"
#include "ItemFurnace.h"
#include "ItemGlazedTerracotta.h"
#include "ItemGoldenApple.h"
#include "ItemHoe.h"
#include "ItemHopper.h"
#include "ItemItemFrame.h"
#include "ItemJackOLantern.h"
#include "ItemLadder.h"
#include "ItemLeaves.h"
#include "ItemLever.h"
#include "ItemLighter.h"
#include "ItemLilypad.h"
#include "ItemMap.h"
#include "ItemMilk.h"
#include "ItemMinecart.h"
#include "ItemMobHead.h"
#include "ItemNetherWart.h"
#include "ItemObserver.h"
#include "ItemPainting.h"
#include "ItemPickaxe.h"
#include "ItemPiston.h"
#include "ItemPlanks.h"
#include "ItemPoisonousPotato.h"
#include "ItemPotion.h"
#include "ItemPumpkin.h"
#include "ItemQuartz.h"
#include "ItemRail.h"
#include "ItemRawChicken.h"
#include "ItemRawFish.h"
#include "ItemRedstoneDust.h"
#include "ItemRedstoneRepeater.h"
#include "ItemRottenFlesh.h"
#include "ItemSapling.h"
#include "ItemSeeds.h"
#include "ItemShears.h"
#include "ItemShovel.h"
#include "ItemSideways.h"
#include "ItemSign.h"
#include "ItemSlab.h"
#include "ItemSnow.h"
#include "ItemSoup.h"
#include "ItemSpawnEgg.h"
#include "ItemSpiderEye.h"
#include "ItemStairs.h"
#include "ItemSword.h"
#include "ItemThrowable.h"
#include "ItemTorch.h"
#include "ItemTrapdoor.h"
#include "ItemTripwireHook.h"
#include "ItemVine.h"

#include "../Blocks/BlockHandler.h"
#include "SimplePlaceableItemHandler.h"
#include "../Registries/BlockItemConverter.h"
#include "../Protocol/Palettes/Upgrade.h"




bool cItemHandler::m_HandlerInitialized = false;
cItemHandler * cItemHandler::m_ItemHandler[2268];





cItemHandler * cItemHandler::GetItemHandler(int a_ItemType)
{
	if ((a_ItemType < 0) || (static_cast<size_t>(a_ItemType) >= ARRAYCOUNT(m_ItemHandler)))
	{
		// Either nothing (-1), or bad value, both cases should return the air handler
		if (a_ItemType < -1)
		{
			ASSERT(!"Bad item type");
		}
		a_ItemType = 0;
	}

	if (!m_HandlerInitialized)
	{
		// We need to initialize
		memset(m_ItemHandler, 0, sizeof(m_ItemHandler));
		m_HandlerInitialized = true;
	}
	if (m_ItemHandler[a_ItemType] == nullptr)
	{
		m_ItemHandler[a_ItemType] = CreateItemHandler(a_ItemType);
	}
	return m_ItemHandler[a_ItemType];
}





cItemHandler * cItemHandler::CreateItemHandler(int a_ItemType)
{
	switch (a_ItemType)
	{
		default:                       return new cItemHandler(a_ItemType);

		// Single item per handler, alphabetically sorted:
		case E_ITEM_BANNER:              return new cItemBannerHandler(a_ItemType);
		case E_BLOCK_BIG_FLOWER:         return new cItemBigFlowerHandler;
		case E_BLOCK_CHEST:              return new cItemChestHandler(a_ItemType);
		case E_BLOCK_ENCHANTMENT_TABLE:  return new cItemEnchantingTableHandler(a_ItemType);
		case E_BLOCK_LEAVES:             return new cItemLeavesHandler(a_ItemType);
		case E_BLOCK_LILY_PAD:           return new cItemLilypadHandler(a_ItemType);
		case E_BLOCK_HEAD:               return new cItemMobHeadHandler(a_ItemType);
		case E_BLOCK_NEW_LEAVES:         return new cItemLeavesHandler(a_ItemType);
		case E_BLOCK_PUMPKIN:            return new cItemPumpkinHandler;
		case E_BLOCK_PURPUR_SLAB:        return new cItemSlabHandler(E_BLOCK_PURPUR_SLAB,  E_BLOCK_PURPUR_DOUBLE_SLAB);
		case E_BLOCK_RED_SANDSTONE_SLAB: return new cItemSlabHandler(E_BLOCK_RED_SANDSTONE_SLAB,  E_BLOCK_DOUBLE_RED_SANDSTONE_SLAB);
		case E_BLOCK_SAPLING:            return new cItemSaplingHandler(a_ItemType);
		case E_BLOCK_STONE_SLAB:         return new cItemSlabHandler(E_BLOCK_STONE_SLAB,  E_BLOCK_DOUBLE_STONE_SLAB);
		case E_BLOCK_TRAPPED_CHEST:      return new cItemChestHandler(a_ItemType);
		case E_BLOCK_WOODEN_SLAB:        return new cItemSlabHandler(E_BLOCK_WOODEN_SLAB, E_BLOCK_DOUBLE_WOODEN_SLAB);
		case E_BLOCK_WOOL:               return new cItemClothHandler(a_ItemType);
		case E_ITEM_BED:                 return new cItemBedHandler(a_ItemType);
		case E_ITEM_BOTTLE_O_ENCHANTING: return new cItemBottleOEnchantingHandler();
		case E_ITEM_BOW:                 return new cItemBowHandler();
		case E_ITEM_BREWING_STAND:       return new cSimplePlaceableItemHandler(a_ItemType, BlockType::BrewingStand);
		case E_ITEM_CAKE:                return new cSimplePlaceableItemHandler(a_ItemType, BlockType::Cake);
		case E_ITEM_CAULDRON:            return new cSimplePlaceableItemHandler(a_ItemType, BlockType::Cauldron);
		case E_ITEM_COMPARATOR:          return new cItemComparatorHandler(a_ItemType);
		case E_ITEM_DYE:                 return new cItemDyeHandler(a_ItemType);
		case E_ITEM_EGG:                 return new cItemEggHandler();
		case E_ITEM_EMPTY_MAP:           return new cItemEmptyMapHandler();
		case E_ITEM_ENDER_PEARL:         return new cItemEnderPearlHandler();
		case E_ITEM_END_CRYSTAL:         return new cItemEndCrystalHandler(a_ItemType);
		case E_ITEM_EYE_OF_ENDER:        return new cItemEyeOfEnderHandler();
		case E_ITEM_FIRE_CHARGE:         return new cItemLighterHandler(a_ItemType);
		case E_ITEM_FIREWORK_ROCKET:     return new cItemFireworkHandler();
		case E_ITEM_FISHING_ROD:         return new cItemFishingRodHandler(a_ItemType);
		case E_ITEM_FLINT_AND_STEEL:     return new cItemLighterHandler(a_ItemType);
		case E_ITEM_FLOWER_POT:          return new cSimplePlaceableItemHandler(a_ItemType, BlockType::FlowerPot);
		case E_ITEM_GLASS_BOTTLE:        return new cItemBottleHandler();
		case E_ITEM_MAP:                 return new cItemMapHandler();
		case E_ITEM_MILK:                return new cItemMilkHandler();
		case E_ITEM_ITEM_FRAME:          return new cItemItemFrameHandler(a_ItemType);
		case E_ITEM_NETHER_WART:         return new cItemNetherWartHandler(a_ItemType);
		case E_ITEM_PAINTING:            return new cItemPaintingHandler(a_ItemType);
		case E_ITEM_POTIONS:             return new cItemPotionHandler();
		case E_ITEM_REDSTONE_DUST:       return new cItemRedstoneDustHandler(a_ItemType);
		case E_ITEM_REDSTONE_REPEATER:   return new cItemRedstoneRepeaterHandler(a_ItemType);
		case E_ITEM_SHEARS:              return new cItemShearsHandler(a_ItemType);
		case E_ITEM_SIGN:                return new cItemSignHandler(a_ItemType);
		case E_ITEM_HEAD:                return new cItemMobHeadHandler(a_ItemType);
		case E_ITEM_SNOWBALL:            return new cItemSnowballHandler();
		case E_ITEM_SPAWN_EGG:           return new cItemSpawnEggHandler(a_ItemType);
		case E_ITEM_STRING:              return new cSimplePlaceableItemHandler(a_ItemType, BlockType::Tripwire);
		case E_ITEM_SUGARCANE:           return new cSimplePlaceableItemHandler(a_ItemType, BlockType::SugarCane);
		case E_BLOCK_ACTIVATOR_RAIL:       return new cItemRailHandler(a_ItemType);
		case E_BLOCK_ANVIL:                return new cItemAnvilHandler(a_ItemType);
		case E_BLOCK_BIG_FLOWER:           return new cItemBigFlowerHandler;
		case E_BLOCK_CHEST:                return new cItemChestHandler(a_ItemType);
		case E_BLOCK_DETECTOR_RAIL:        return new cItemRailHandler(a_ItemType);
		case E_BLOCK_DISPENSER:            return new cItemDropSpenserHandler(a_ItemType);
		case E_BLOCK_DROPPER:              return new cItemDropSpenserHandler(a_ItemType);
		case E_BLOCK_ENCHANTMENT_TABLE:    return new cItemEnchantingTableHandler(a_ItemType);
		case E_BLOCK_ENDER_CHEST:          return new cItemEnderchestHandler(a_ItemType);
		case E_BLOCK_END_PORTAL_FRAME:     return new cItemEndPortalFrameHandler(a_ItemType);
		case E_BLOCK_FURNACE:              return new cItemFurnaceHandler(a_ItemType);
		case E_BLOCK_HAY_BALE:             return new cItemSidewaysHandler(a_ItemType);
		case E_BLOCK_HEAD:                 return new cItemMobHeadHandler(a_ItemType);
		case E_BLOCK_HOPPER:               return new cItemHopperHandler(a_ItemType);
		case E_BLOCK_IRON_TRAPDOOR:        return new cItemTrapdoorHandler(a_ItemType);
		case E_BLOCK_JACK_O_LANTERN:       return new cItemJackOLanternHandler(a_ItemType);
		case E_BLOCK_LADDER:               return new cItemLadderHandler(a_ItemType);
		case E_BLOCK_LEAVES:               return new cItemLeavesHandler(a_ItemType);
		case E_BLOCK_LEVER:                return new cItemLeverHandler(a_ItemType);
		case E_BLOCK_LILY_PAD:             return new cItemLilypadHandler(a_ItemType);
		case E_BLOCK_LOG:                  return new cItemSidewaysHandler(a_ItemType);
		case E_BLOCK_NEW_LEAVES:           return new cItemLeavesHandler(a_ItemType);
		case E_BLOCK_NEW_LOG:              return new cItemSidewaysHandler(a_ItemType);
		case E_BLOCK_OBSERVER:             return new cItemObserverHandler(a_ItemType);
		case E_BLOCK_PISTON:               return new cItemPistonHandler(a_ItemType);
		case E_BLOCK_PLANKS:               return new cItemPlanksHandler(a_ItemType);
		case E_BLOCK_POWERED_RAIL:         return new cItemRailHandler(a_ItemType);
		case E_BLOCK_PUMPKIN:              return new cItemPumpkinHandler(a_ItemType);
		case E_BLOCK_PURPUR_SLAB:          return new cItemSlabHandler(a_ItemType);
		case E_BLOCK_QUARTZ_BLOCK:         return new cItemQuartzHandler(a_ItemType);
		case E_BLOCK_RAIL:                 return new cItemRailHandler(a_ItemType);
		case E_BLOCK_REDSTONE_TORCH_ON:    return new cItemTorchHandler(a_ItemType);
		case E_BLOCK_RED_SANDSTONE_SLAB:   return new cItemSlabHandler(a_ItemType);
		case E_BLOCK_SAPLING:              return new cItemSaplingHandler(a_ItemType);
		case E_BLOCK_SNOW:                 return new cItemSnowHandler(a_ItemType);
		case E_BLOCK_STICKY_PISTON:        return new cItemPistonHandler(a_ItemType);
		case E_BLOCK_STONE_BUTTON:         return new cItemButtonHandler(a_ItemType);
		case E_BLOCK_STONE_SLAB:           return new cItemSlabHandler(a_ItemType);
		case E_BLOCK_TORCH:                return new cItemTorchHandler(a_ItemType);
		case E_BLOCK_TRAPDOOR:             return new cItemTrapdoorHandler(a_ItemType);
		case E_BLOCK_TRAPPED_CHEST:        return new cItemChestHandler(a_ItemType);
		case E_BLOCK_TRIPWIRE_HOOK:        return new cItemTripwireHookHandler(a_ItemType);
		case E_BLOCK_VINES:                return new cItemVineHandler(a_ItemType);
		case E_BLOCK_WOODEN_BUTTON:        return new cItemButtonHandler(a_ItemType);
		case E_BLOCK_WOODEN_SLAB:          return new cItemSlabHandler(a_ItemType);
		case E_BLOCK_WOOL:                 return new cItemClothHandler(a_ItemType);
		case E_ITEM_BANNER:                return new cItemBannerHandler(a_ItemType);
		case E_ITEM_BED:                   return new cItemBedHandler(a_ItemType);
		case E_ITEM_BOTTLE_O_ENCHANTING:   return new cItemBottleOEnchantingHandler();
		case E_ITEM_BOW:                   return new cItemBowHandler();
		case E_ITEM_BREWING_STAND:         return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_BREWING_STAND);
		case E_ITEM_CAKE:                  return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_CAKE);
		case E_ITEM_CAULDRON:              return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_CAULDRON);
		case E_ITEM_COMPARATOR:            return new cItemComparatorHandler(a_ItemType);
		case E_ITEM_DYE:                   return new cItemDyeHandler(a_ItemType);
		case E_ITEM_EGG:                   return new cItemEggHandler();
		case E_ITEM_EMPTY_MAP:             return new cItemEmptyMapHandler();
		case E_ITEM_ENDER_PEARL:           return new cItemEnderPearlHandler();
		case E_ITEM_END_CRYSTAL:           return new cItemEndCrystalHandler(a_ItemType);
		case E_ITEM_EYE_OF_ENDER:          return new cItemEyeOfEnderHandler();
		case E_ITEM_FIREWORK_ROCKET:       return new cItemFireworkHandler();
		case E_ITEM_FIRE_CHARGE:           return new cItemLighterHandler(a_ItemType);
		case E_ITEM_FISHING_ROD:           return new cItemFishingRodHandler(a_ItemType);
		case E_ITEM_FLINT_AND_STEEL:       return new cItemLighterHandler(a_ItemType);
		case E_ITEM_FLOWER_POT:            return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_FLOWER_POT);
		case E_ITEM_GLASS_BOTTLE:          return new cItemBottleHandler();
		case E_ITEM_HEAD:                  return new cItemMobHeadHandler(a_ItemType);
		case E_ITEM_ITEM_FRAME:            return new cItemItemFrameHandler(a_ItemType);
		case E_ITEM_MAP:                   return new cItemMapHandler();
		case E_ITEM_MILK:                  return new cItemMilkHandler();
		case E_ITEM_NETHER_WART:           return new cItemNetherWartHandler(a_ItemType);
		case E_ITEM_PAINTING:              return new cItemPaintingHandler(a_ItemType);
		case E_ITEM_POTIONS:               return new cItemPotionHandler();
		case E_ITEM_REDSTONE_DUST:         return new cItemRedstoneDustHandler(a_ItemType);
		case E_ITEM_REDSTONE_REPEATER:     return new cItemRedstoneRepeaterHandler(a_ItemType);
		case E_ITEM_SHEARS:                return new cItemShearsHandler(a_ItemType);
		case E_ITEM_SIGN:                  return new cItemSignHandler(a_ItemType);
		case E_ITEM_SNOWBALL:              return new cItemSnowballHandler();
		case E_ITEM_SPAWN_EGG:             return new cItemSpawnEggHandler(a_ItemType);
		case E_ITEM_STRING:                return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_TRIPWIRE);
		case E_ITEM_SUGARCANE:             return new cSimplePlaceableItemHandler(a_ItemType, E_BLOCK_SUGARCANE);

		case E_ITEM_WOODEN_HOE:
		case E_ITEM_STONE_HOE:
		case E_ITEM_IRON_HOE:
		case E_ITEM_GOLD_HOE:
		case E_ITEM_DIAMOND_HOE:
		{
			return new cItemHoeHandler(a_ItemType);
		}

		case E_ITEM_WOODEN_PICKAXE:
		case E_ITEM_STONE_PICKAXE:
		case E_ITEM_IRON_PICKAXE:
		case E_ITEM_GOLD_PICKAXE:
		case E_ITEM_DIAMOND_PICKAXE:
		{
			return new cItemPickaxeHandler(a_ItemType);
		}

		case E_ITEM_WOODEN_SHOVEL:
		case E_ITEM_STONE_SHOVEL:
		case E_ITEM_IRON_SHOVEL:
		case E_ITEM_GOLD_SHOVEL:
		case E_ITEM_DIAMOND_SHOVEL:
		{
			return new cItemShovelHandler(a_ItemType);
		}

		case E_ITEM_WOODEN_AXE:
		case E_ITEM_STONE_AXE:
		case E_ITEM_IRON_AXE:
		case E_ITEM_GOLD_AXE:
		case E_ITEM_DIAMOND_AXE:
		{
			return new cItemAxeHandler(a_ItemType);
		}

		case E_ITEM_WOODEN_SWORD:
		case E_ITEM_STONE_SWORD:
		case E_ITEM_IRON_SWORD:
		case E_ITEM_GOLD_SWORD:
		case E_ITEM_DIAMOND_SWORD:
		{
			return new cItemSwordHandler(a_ItemType);
		}

		case E_ITEM_BUCKET:
		case E_ITEM_WATER_BUCKET:
		case E_ITEM_LAVA_BUCKET:
		{
			return new cItemBucketHandler(a_ItemType);
		}

		case E_ITEM_BEETROOT_SEEDS:
		case E_ITEM_MELON_SEEDS:
		case E_ITEM_PUMPKIN_SEEDS:
		case E_ITEM_SEEDS:
		{
			return new cItemSeedsHandler(a_ItemType);
		}

		case E_ITEM_POTATO: return new cItemFoodSeedsHandler(a_ItemType, FoodInfo(1, 0.6));
		case E_ITEM_CARROT: return new cItemFoodSeedsHandler(a_ItemType, FoodInfo(3, 6.6));

		case E_ITEM_ACACIA_DOOR:
		case E_ITEM_BIRCH_DOOR:
		case E_ITEM_DARK_OAK_DOOR:
		case E_ITEM_JUNGLE_DOOR:
		case E_ITEM_SPRUCE_DOOR:
		case E_ITEM_IRON_DOOR:
		case E_ITEM_WOODEN_DOOR:
		{
			return new cItemDoorHandler(a_ItemType);
		}

		case E_ITEM_MINECART:
		case E_ITEM_CHEST_MINECART:
		case E_ITEM_FURNACE_MINECART:
		case E_ITEM_MINECART_WITH_TNT:
		case E_ITEM_MINECART_WITH_HOPPER:
		{
			return new cItemMinecartHandler(a_ItemType);
		}

		case E_BLOCK_ACACIA_FENCE_GATE:
		case E_BLOCK_BIRCH_FENCE_GATE:
		case E_BLOCK_DARK_OAK_FENCE_GATE:
		case E_BLOCK_JUNGLE_FENCE_GATE:
		case E_BLOCK_OAK_FENCE_GATE:
		case E_BLOCK_SPRUCE_FENCE_GATE:
		{
			return new cItemFenceGateHandler(a_ItemType);
		}

		case E_BLOCK_ACACIA_WOOD_STAIRS:
		case E_BLOCK_BIRCH_WOOD_STAIRS:
		case E_BLOCK_BRICK_STAIRS:
		case E_BLOCK_COBBLESTONE_STAIRS:
		case E_BLOCK_DARK_OAK_WOOD_STAIRS:
		case E_BLOCK_JUNGLE_WOOD_STAIRS:
		case E_BLOCK_NETHER_BRICK_STAIRS:
		case E_BLOCK_OAK_WOOD_STAIRS:
		case E_BLOCK_PURPUR_STAIRS:
		case E_BLOCK_QUARTZ_STAIRS:
		case E_BLOCK_RED_SANDSTONE_STAIRS:
		case E_BLOCK_SANDSTONE_STAIRS:
		case E_BLOCK_SPRUCE_WOOD_STAIRS:
		case E_BLOCK_STONE_BRICK_STAIRS:
		{
			return new cItemStairsHandler(a_ItemType);
		}

		case E_BLOCK_WHITE_GLAZED_TERRACOTTA:
		case E_BLOCK_ORANGE_GLAZED_TERRACOTTA:
		case E_BLOCK_MAGENTA_GLAZED_TERRACOTTA:
		case E_BLOCK_LIGHT_BLUE_GLAZED_TERRACOTTA:
		case E_BLOCK_YELLOW_GLAZED_TERRACOTTA:
		case E_BLOCK_LIME_GLAZED_TERRACOTTA:
		case E_BLOCK_PINK_GLAZED_TERRACOTTA:
		case E_BLOCK_GRAY_GLAZED_TERRACOTTA:
		case E_BLOCK_LIGHT_GRAY_GLAZED_TERRACOTTA:
		case E_BLOCK_CYAN_GLAZED_TERRACOTTA:
		case E_BLOCK_PURPLE_GLAZED_TERRACOTTA:
		case E_BLOCK_BLUE_GLAZED_TERRACOTTA:
		case E_BLOCK_BROWN_GLAZED_TERRACOTTA:
		case E_BLOCK_GREEN_GLAZED_TERRACOTTA:
		case E_BLOCK_RED_GLAZED_TERRACOTTA:
		case E_BLOCK_BLACK_GLAZED_TERRACOTTA:
		{
			return new cItemGlazedTerracottaHandler(a_ItemType);
		}

		// Food (please keep alpha-sorted):
		case E_ITEM_BAKED_POTATO:     return new cItemFoodHandler(a_ItemType, FoodInfo(5, 6));
		case E_ITEM_BEETROOT:         return new cItemFoodHandler(a_ItemType, FoodInfo(1, 1.2));
		case E_ITEM_BREAD:            return new cItemFoodHandler(a_ItemType, FoodInfo(5, 6));
		case E_ITEM_CHORUS_FRUIT:     return new cItemFoodHandler(a_ItemType, FoodInfo(4, 2.4));
		case E_ITEM_COOKED_CHICKEN:   return new cItemFoodHandler(a_ItemType, FoodInfo(6, 7.2));
		case E_ITEM_COOKED_MUTTON:    return new cItemFoodHandler(a_ItemType, FoodInfo(6, 9.6));
		case E_ITEM_COOKED_PORKCHOP:  return new cItemFoodHandler(a_ItemType, FoodInfo(8, 12.8));
		case E_ITEM_COOKED_RABBIT:    return new cItemFoodHandler(a_ItemType, FoodInfo(5, 6));
		case E_ITEM_COOKIE:           return new cItemFoodHandler(a_ItemType, FoodInfo(2, 0.5));
		case E_ITEM_GOLDEN_CARROT:    return new cItemFoodHandler(a_ItemType, FoodInfo(6, 14.4));
		case E_ITEM_MELON_SLICE:      return new cItemFoodHandler(a_ItemType, FoodInfo(2, 1.2));
		case E_ITEM_PUMPKIN_PIE:      return new cItemFoodHandler(a_ItemType, FoodInfo(8, 4.8));
		case E_ITEM_RED_APPLE:        return new cItemFoodHandler(a_ItemType, FoodInfo(4, 2.4));
		case E_ITEM_RAW_BEEF:         return new cItemFoodHandler(a_ItemType, FoodInfo(3, 1.8));
		case E_ITEM_RAW_MUTTON:       return new cItemFoodHandler(a_ItemType, FoodInfo(2, 1.2));
		case E_ITEM_RAW_PORKCHOP:     return new cItemFoodHandler(a_ItemType, FoodInfo(3, 1.8));
		case E_ITEM_RAW_RABBIT:       return new cItemFoodHandler(a_ItemType, FoodInfo(3, 1.8));
		case E_ITEM_STEAK:            return new cItemFoodHandler(a_ItemType, FoodInfo(8, 12.8));

		// Special-case food with their own handler
		case E_ITEM_COOKED_FISH: return new cItemCookedFishHandler();
		case E_ITEM_GOLDEN_APPLE:        return new cItemGoldenAppleHandler();
		case E_ITEM_POISONOUS_POTATO: return new cItemPoisonousPotatoHandler();
		case E_ITEM_RAW_CHICKEN: return new cItemRawChickenHandler();
		case E_ITEM_RAW_FISH: return new cItemRawFishHandler();
		case E_ITEM_ROTTEN_FLESH: return new cItemRottenFleshHandler();
		case E_ITEM_SPIDER_EYE: return new cItemSpiderEyeHandler();

		// Soup:
		case E_ITEM_BEETROOT_SOUP: return new cItemSoupHandler(a_ItemType, FoodInfo(6, 7.2));
		case E_ITEM_MUSHROOM_SOUP: return new cItemSoupHandler(a_ItemType, FoodInfo(6, 7.2));
		case E_ITEM_RABBIT_STEW: return new cItemSoupHandler(a_ItemType, FoodInfo(10, 12));

		// Armor:
		case E_ITEM_ELYTRA:
		case E_ITEM_LEATHER_CAP:
		case E_ITEM_GOLD_HELMET:
		case E_ITEM_CHAIN_HELMET:
		case E_ITEM_IRON_HELMET:
		case E_ITEM_DIAMOND_HELMET:
		case E_ITEM_LEATHER_TUNIC:
		case E_ITEM_GOLD_CHESTPLATE:
		case E_ITEM_CHAIN_CHESTPLATE:
		case E_ITEM_IRON_CHESTPLATE:
		case E_ITEM_DIAMOND_CHESTPLATE:
		case E_ITEM_LEATHER_PANTS:
		case E_ITEM_GOLD_LEGGINGS:
		case E_ITEM_CHAIN_LEGGINGS:
		case E_ITEM_IRON_LEGGINGS:
		case E_ITEM_DIAMOND_LEGGINGS:
		case E_ITEM_LEATHER_BOOTS:
		case E_ITEM_GOLD_BOOTS:
		case E_ITEM_CHAIN_BOOTS:
		case E_ITEM_IRON_BOOTS:
		case E_ITEM_DIAMOND_BOOTS:
		{
			return new cItemArmorHandler(a_ItemType);
		}

		case E_ITEM_ACACIA_BOAT:
		case E_ITEM_BIRCH_BOAT:
		case E_ITEM_BOAT:
		case E_ITEM_DARK_OAK_BOAT:
		case E_ITEM_JUNGLE_BOAT:
		case E_ITEM_SPRUCE_BOAT:
		{
			return new cItemBoatHandler(a_ItemType);
		}
	}
}





void cItemHandler::Deinit()
{
	for (size_t i = 0; i < ARRAYCOUNT(m_ItemHandler); i++)
	{
		delete m_ItemHandler[i];
		m_ItemHandler[i] = nullptr;
	}
	memset(m_ItemHandler, 0, sizeof(m_ItemHandler));  // Don't leave any dangling pointers around, just in case
	m_HandlerInitialized = false;
}





cItemHandler::cItemHandler(int a_ItemType)
{
	m_ItemType = a_ItemType;
}





void cItemHandler::OnPlayerPlace(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_ClickedBlockPosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition)
{
	if (a_ClickedBlockFace == BLOCK_FACE_NONE)
	{
		// Clicked in the air, no placement possible
		return;
	}

	if (!cChunkDef::IsValidHeight(a_ClickedBlockPosition.y))
	{
		// The clicked block is outside the world, ignore this call altogether (GH #128):
		return;
	}

	const auto & World = *a_Player.GetWorld();
	auto ClickedBlock = World.GetBlock(a_ClickedBlockPos);
	cChunkInterface ChunkInterface(a_World.GetChunkMap());

	// Check if the block ignores build collision (water, grass etc.):
	if (cBlockHandler::For(ClickedBlock.Type()).DoesIgnoreBuildCollision(World, a_HeldItem, a_ClickedBlockPosition, ClickedBlockMeta, a_ClickedBlockFace, true))
	{
		// Try to place the block at the clicked position:
		if (!CommitPlacement(a_Player, a_HeldItem, a_ClickedBlockPosition, a_ClickedBlockFace, a_CursorPosition))
		{
			// The placement failed, the blocks have already been re-sent, re-send inventory:
			a_Player.GetInventory().SendEquippedSlot();
			return;
		}
	}
	else
	{
		const auto PlacedPosition = AddFaceDirection(a_ClickedBlockPosition, a_ClickedBlockFace);

		if (!cChunkDef::IsValidHeight(PlacedPosition.y))
		{
			// The block is being placed outside the world, ignore this packet altogether (GH #128):
			return;
		}

		auto PlaceBlock = a_World.GetBlock(PlacedBlockPos);

		// Clicked on side of block, make sure that placement won't be cancelled if there is a slab able to be double slabbed.
		// No need to do combinability (dblslab) checks, client will do that here.
		if (!cBlockHandler::For(PlaceBlock.Type()).DoesIgnoreBuildCollision(ChunkInterface, PlacedBlockPos, a_Player, OldBlock))
		{
			// Tried to place a block into another?
			// Happens when you place a block aiming at side of block with a torch on it or stem beside it
			return;
		}

		// Try to place the block:
		if (!CommitPlacement(a_Player, a_HeldItem, PlacedPosition, a_ClickedBlockFace, a_CursorPosition))
		{
			// The placement failed, the blocks have already been re-sent, re-send inventory:
			a_Player.GetInventory().SendEquippedSlot();
			return;
		}
	}

	// Remove the "placed" item:
	if (a_Player.IsGameModeSurvival())
	{
		a_Player.GetInventory().RemoveOneEquippedItem();
	}
}





bool cItemHandler::OnItemUse(
	cWorld * a_World, cPlayer * a_Player, cBlockPluginInterface & a_PluginInterface, const cItem & a_Item,
	const Vector3i a_ClickedBlockPos, eBlockFace a_ClickedBlockFace
)
{
	UNUSED(a_World);
	UNUSED(a_Player);
	UNUSED(a_PluginInterface);
	UNUSED(a_Item);
	UNUSED(a_ClickedBlockPos);
	UNUSED(a_ClickedBlockFace);

	return false;
}





bool cItemHandler::OnDiggingBlock(
	cWorld * a_World,
	cPlayer * a_Player,
	const cItem & a_HeldItem,
	const Vector3i a_ClickedBlockPos,
	eBlockFace a_ClickedBlockFace
)
{
	UNUSED(a_World);
	UNUSED(a_Player);
	UNUSED(a_HeldItem);
	UNUSED(a_ClickedBlockPos);
	UNUSED(a_ClickedBlockFace);

	return false;
}





void cItemHandler::OnEntityAttack(cPlayer * a_Attacker, cEntity * a_AttackedEntity)
{
	UNUSED(a_AttackedEntity);
	a_Attacker->UseEquippedItem(dlaAttackEntity);
}





void cItemHandler::OnFoodEaten(cWorld * a_World, cPlayer * a_Player, cItem * a_Item)
{
	UNUSED(a_World);
	UNUSED(a_Player);
	UNUSED(a_Item);
}





short cItemHandler::GetDurabilityLossByAction(eDurabilityLostAction a_Action)
{
	UNUSED(a_Action);

	return 0;
}





char cItemHandler::GetMaxStackSize(void)
{
	if (m_ItemType < 256)
	{
		// All blocks can stack up to 64
		return 64;
	}

	switch (m_ItemType)
	{
		case E_ITEM_ACACIA_DOOR:          return 64;
		case E_ITEM_ARMOR_STAND:          return 16;
		case E_ITEM_ARROW:                return 64;
		case E_ITEM_BAKED_POTATO:         return 64;
		case E_ITEM_BANNER:               return 16;
		case E_ITEM_BEETROOT:             return 64;
		case E_ITEM_BEETROOT_SEEDS:       return 64;
		case E_ITEM_BIRCH_DOOR:           return 64;
		case E_ITEM_BLAZE_POWDER:         return 64;
		case E_ITEM_BLAZE_ROD:            return 64;
		case E_ITEM_BONE:                 return 64;
		case E_ITEM_BOOK:                 return 64;
		case E_ITEM_BOTTLE_O_ENCHANTING:  return 64;
		case E_ITEM_BOWL:                 return 64;
		case E_ITEM_BREAD:                return 64;
		case E_ITEM_BREWING_STAND:        return 64;
		case E_ITEM_BUCKET:               return 16;
		case E_ITEM_CARROT:               return 64;
		case E_ITEM_CAULDRON:             return 64;
		case E_ITEM_CHORUS_FRUIT:         return 64;
		case E_ITEM_CLAY:                 return 64;
		case E_ITEM_CLAY_BRICK:           return 64;
		case E_ITEM_CLOCK:                return 64;
		case E_ITEM_COAL:                 return 64;
		case E_ITEM_COMPARATOR:           return 64;
		case E_ITEM_COMPASS:              return 64;
		case E_ITEM_COOKED_CHICKEN:       return 64;
		case E_ITEM_COOKED_FISH:          return 64;
		case E_ITEM_COOKED_MUTTON:        return 64;
		case E_ITEM_COOKED_PORKCHOP:      return 64;
		case E_ITEM_COOKED_RABBIT:        return 64;
		case E_ITEM_COOKIE:               return 64;
		case E_ITEM_DARK_OAK_DOOR:        return 64;
		case E_ITEM_DIAMOND:              return 64;
		case E_ITEM_DRAGON_BREATH:        return 64;
		case E_ITEM_DYE:                  return 64;
		case E_ITEM_EGG:                  return 16;
		case E_ITEM_EMERALD:              return 64;
		case E_ITEM_EMPTY_MAP:            return 64;
		case E_ITEM_ENDER_PEARL:          return 16;
		case E_ITEM_EYE_OF_ENDER:         return 64;
		case E_ITEM_FEATHER:              return 64;
		case E_ITEM_FERMENTED_SPIDER_EYE: return 64;
		case E_ITEM_FIRE_CHARGE:          return 64;
		case E_ITEM_FIREWORK_ROCKET:      return 64;
		case E_ITEM_FIREWORK_STAR:        return 64;
		case E_ITEM_FLINT:                return 64;
		case E_ITEM_FLOWER_POT:           return 64;
		case E_ITEM_GHAST_TEAR:           return 64;
		case E_ITEM_GLASS_BOTTLE:         return 64;
		case E_ITEM_GLISTERING_MELON:     return 64;
		case E_ITEM_GLOWSTONE_DUST:       return 64;
		case E_ITEM_GOLD:                 return 64;
		case E_ITEM_GOLDEN_APPLE:         return 64;
		case E_ITEM_GOLDEN_CARROT:        return 64;
		case E_ITEM_GOLD_NUGGET:          return 64;
		case E_ITEM_GUNPOWDER:            return 64;
		case E_ITEM_HEAD:                 return 64;
		case E_ITEM_JUNGLE_DOOR:          return 64;
		case E_ITEM_IRON:                 return 64;
		case E_ITEM_IRON_DOOR:            return 64;
		case E_ITEM_IRON_NUGGET:          return 64;
		case E_ITEM_ITEM_FRAME:           return 64;
		case E_ITEM_LEAD:                 return 64;
		case E_ITEM_LEATHER:              return 64;
		case E_ITEM_MAGMA_CREAM:          return 64;
		case E_ITEM_MAP:                  return 64;
		case E_ITEM_MELON_SEEDS:          return 64;
		case E_ITEM_MELON_SLICE:          return 64;
		case E_ITEM_NETHER_BRICK:         return 64;
		case E_ITEM_NETHER_QUARTZ:        return 64;
		case E_ITEM_NETHER_WART:          return 64;
		case E_ITEM_PAINTING:             return 64;
		case E_ITEM_PAPER:                return 64;
		case E_ITEM_POISONOUS_POTATO:     return 64;
		case E_ITEM_POPPED_CHORUS_FRUIT:  return 64;
		case E_ITEM_POTATO:               return 64;
		case E_ITEM_PRISMARINE_CRYSTALS:  return 64;
		case E_ITEM_PRISMARINE_SHARD:     return 64;
		case E_ITEM_PUMPKIN_PIE:          return 64;
		case E_ITEM_PUMPKIN_SEEDS:        return 64;
		case E_ITEM_RABBITS_FOOT:         return 64;
		case E_ITEM_RABBIT_HIDE:          return 64;
		case E_ITEM_RAW_BEEF:             return 64;
		case E_ITEM_RAW_CHICKEN:          return 64;
		case E_ITEM_RAW_FISH:             return 64;
		case E_ITEM_RAW_MUTTON:           return 64;
		case E_ITEM_RAW_PORKCHOP:         return 64;
		case E_ITEM_RAW_RABBIT:           return 64;
		case E_ITEM_RED_APPLE:            return 64;
		case E_ITEM_REDSTONE_DUST:        return 64;
		case E_ITEM_REDSTONE_REPEATER:    return 64;
		case E_ITEM_ROTTEN_FLESH:         return 64;
		case E_ITEM_SEEDS:                return 64;
		case E_ITEM_SIGN:                 return 16;
		case E_ITEM_SLIMEBALL:            return 64;
		case E_ITEM_SNOWBALL:             return 16;
		case E_ITEM_SPAWN_EGG:            return 64;
		case E_ITEM_SPECTRAL_ARROW:       return 64;
		case E_ITEM_SPIDER_EYE:           return 64;
		case E_ITEM_SPRUCE_DOOR:          return 64;
		case E_ITEM_STEAK:                return 64;
		case E_ITEM_STICK:                return 64;
		case E_ITEM_STRING:               return 64;
		case E_ITEM_SUGAR:                return 64;
		case E_ITEM_SUGAR_CANE:           return 64;
		case E_ITEM_TIPPED_ARROW:         return 64;
		case E_ITEM_WHEAT:                return 64;
		case E_ITEM_WOODEN_DOOR:          return 64;
		// By default items don't stack:
		default:                          return 1;
	}
}





bool cItemHandler::IsTool()
{
	// TODO: Rewrite this to list all tools specifically
	return
		((m_ItemType >= 256) && (m_ItemType <= 259)) ||
		(m_ItemType == 261) ||
		((m_ItemType >= 267) && (m_ItemType <= 279)) ||
		((m_ItemType >= 283) && (m_ItemType <= 286)) ||
		((m_ItemType >= 290) && (m_ItemType <= 294)) ||
		(m_ItemType == 325) ||
		(m_ItemType == 346);
}





bool cItemHandler::IsFood(void)
{
	return false;
}





bool cItemHandler::IsDrinkable(short a_ItemDamage)
{
	UNUSED(a_ItemDamage);

	return false;
}





bool cItemHandler::IsPlaceable(void)
{
	// We can place any block that has a corresponding E_BLOCK_TYPE:
	return (m_ItemType >= 1) && (m_ItemType <= E_BLOCK_MAX_TYPE_ID);
}





bool cItemHandler::CanRepairWithRawMaterial(short a_ItemType)
{
	UNUSED(a_ItemType);
	return false;
}





bool cItemHandler::CanHarvestBlock(BlockState a_Block)
{
	switch (a_Block.Type())
	{
		case BlockType::Anvil:
		case BlockType::ChippedAnvil:
		case BlockType::DamagedAnvil:
		case BlockType::BlackGlazedTerracotta:
		case BlockType::CoalBlock:
		case BlockType::RedstoneBlock:
		case BlockType::BlueGlazedTerracotta:
		case BlockType::BoneBlock:
		case BlockType::BrewingStand:
		case BlockType::Bricks:
		case BlockType::BrickStairs:
		case BlockType::BrownGlazedTerracotta:
		case BlockType::Cauldron:
		case BlockType::CoalOre:
		case BlockType::Cobblestone:
		case BlockType::CobblestoneStairs:
		case BlockType::CobblestoneWall:
		case BlockType::Cobweb:
		case BlockType::CyanGlazedTerracotta:
		case BlockType::DiamondBlock:
		case BlockType::DiamondOre:
		case BlockType::Dispenser:
		case BlockType::Dropper:
		case BlockType::EmeraldOre:
		case BlockType::EnchantingTable:
		case BlockType::EndStoneBricks:
		case BlockType::EndStone:
		case BlockType::Furnace:
		case BlockType::GoldBlock:
		case BlockType::GoldOre:
		case BlockType::GrayGlazedTerracotta:
		case BlockType::GreenGlazedTerracotta:
		case BlockType::HeavyWeightedPressurePlate:
		case BlockType::Hopper:
		case BlockType::IronBars:
		case BlockType::IronBlock:
		case BlockType::IronDoor:
		case BlockType::IronOre:
		case BlockType::IronTrapdoor:
		case BlockType::LapisBlock:
		case BlockType::LapisOre:
		case BlockType::LightBlueGlazedTerracotta:
		case BlockType::LightGrayGlazedTerracotta:
		case BlockType::LightWeightedPressurePlate:
		case BlockType::LimeGlazedTerracotta:
		case BlockType::MagentaGlazedTerracotta:
		case BlockType::MagmaBlock:
		case BlockType::Spawner:
		case BlockType::MossyCobblestone:
		case BlockType::Netherrack:
		case BlockType::NetherBricks:
		case BlockType::NetherBrickFence:
		case BlockType::NetherBrickStairs:
		case BlockType::NetherQuartzOre:
		case BlockType::Observer:
		case BlockType::Obsidian:
		case BlockType::OrangeGlazedTerracotta:
		case BlockType::PinkGlazedTerracotta:
		case BlockType::Prismarine:
		case BlockType::PurpleGlazedTerracotta:
		case BlockType::PurpurBlock:
		case BlockType::PurpurPillar:
		case BlockType::PurpurSlab:
		case BlockType::PurpurStairs:
		case BlockType::QuartzBlock:
		case BlockType::QuartzStairs:
		case BlockType::RedstoneOre:
		case BlockType::RedGlazedTerracotta:
		case BlockType::RedNetherBricks:
		case BlockType::RedSandstone:
		case BlockType::RedSandstoneSlab:
		case BlockType::RedSandstoneStairs:
		case BlockType::Sandstone:
		case BlockType::SandstoneStairs:
		case BlockType::SnowBlock:
		case BlockType::Stone:
		case BlockType::StoneBricks:
		case BlockType::StoneBrickStairs:
		case BlockType::StonePressurePlate:
		case BlockType::StoneSlab:
		case BlockType::Vine:
		case BlockType::WhiteGlazedTerracotta:
		case BlockType::YellowGlazedTerracotta:
			// Concrete
		case BlockType::BlackConcretePowder:
		case BlockType::BlueConcretePowder:
		case BlockType::BrownConcretePowder:
		case BlockType::CyanConcretePowder:
		case BlockType::GrayConcretePowder:
		case BlockType::GreenConcretePowder:
		case BlockType::LightBlueConcretePowder:
		case BlockType::LightGrayConcretePowder:
		case BlockType::LimeConcretePowder:
		case BlockType::MagentaConcretePowder:
		case BlockType::OrangeConcretePowder:
		case BlockType::PinkConcretePowder:
		case BlockType::PurpleConcretePowder:
		case BlockType::RedConcretePowder:
		case BlockType::WhiteConcretePowder:
		case BlockType::YellowConcretePowder:
		{
			return false;
		}
		default: return true;
	}
}





bool cItemHandler::EatItem(cPlayer * a_Player, cItem * a_Item)
{
	auto FoodInfo = GetFoodInfo(a_Item);
	return a_Player->Feed(FoodInfo.FoodLevel, FoodInfo.Saturation);
}





cItemHandler::FoodInfo cItemHandler::GetFoodInfo(const cItem * a_Item)
{
	UNUSED(a_Item);
	return FoodInfo(0, 0);
}





float cItemHandler::GetBlockBreakingStrength(BlockState a_Block)
{
	return 1.0f;
}





bool cItemHandler::CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition)
{
	ASSERT(m_ItemType < 256);  // Items with IDs above 255 should all be handled by specific handlers.

	// By default, all blocks can be placed and the meta is copied over from the item's damage value:
	return a_Player.PlaceBlock(
		a_PlacePosition,
		static_cast<BLOCKTYPE>(m_ItemType),
		static_cast<NIBBLETYPE>(a_HeldItem.m_ItemDamage & 0x0f)
	);
}
