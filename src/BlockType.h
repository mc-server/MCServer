#pragma once

#include "ChunkDef.h"

// tolua_begin



enum ENUM_BLOCK_TYPE  // : unsigned char
{
	E_BLOCK_AIR = 0,
	E_BLOCK_STONE = 1,
	E_BLOCK_GRASS = 2,
	E_BLOCK_DIRT = 3,
	E_BLOCK_COBBLESTONE = 4,
	E_BLOCK_PLANKS = 5,
	E_BLOCK_SAPLING = 6,
	E_BLOCK_BEDROCK = 7,
	E_BLOCK_WATER = 8,
	E_BLOCK_STATIONARY_WATER = 9,
	E_BLOCK_LAVA = 10,
	E_BLOCK_STATIONARY_LAVA  = 11,
	E_BLOCK_SAND = 12,
	E_BLOCK_GRAVEL = 13,
	E_BLOCK_GOLD_ORE = 14,
	E_BLOCK_IRON_ORE = 15,
	E_BLOCK_COAL_ORE = 16,
	E_BLOCK_LOG = 17,
	E_BLOCK_LEAVES = 18,
	E_BLOCK_SPONGE = 19,
	E_BLOCK_GLASS = 20,
	E_BLOCK_LAPIS_ORE = 21,
	E_BLOCK_LAPIS_BLOCK = 22,
	E_BLOCK_DISPENSER = 23,
	E_BLOCK_SANDSTONE = 24,
	E_BLOCK_NOTE_BLOCK = 25,
	E_BLOCK_BED = 26,
	E_BLOCK_POWERED_RAIL = 27,
	E_BLOCK_DETECTOR_RAIL = 28,
	E_BLOCK_STICKY_PISTON = 29,
	E_BLOCK_COBWEB = 30,
	E_BLOCK_TALL_GRASS = 31,
	E_BLOCK_DEAD_BUSH = 32,
	E_BLOCK_PISTON = 33,
	E_BLOCK_PISTON_EXTENSION = 34,
	E_BLOCK_WOOL = 35,
	E_BLOCK_PISTON_MOVED_BLOCK = 36,
	E_BLOCK_DANDELION = 37,
	E_BLOCK_FLOWER = 38,
	E_BLOCK_BROWN_MUSHROOM = 39,
	E_BLOCK_RED_MUSHROOM = 40,
	E_BLOCK_GOLD_BLOCK = 41,
	E_BLOCK_IRON_BLOCK = 42,
	E_BLOCK_DOUBLE_STONE_SLAB = 43,
	E_BLOCK_STONE_SLAB = 44,
	E_BLOCK_BRICK = 45,
	E_BLOCK_TNT = 46,
	E_BLOCK_BOOKCASE = 47,
	E_BLOCK_MOSSY_COBBLESTONE = 48,
	E_BLOCK_OBSIDIAN = 49,
	E_BLOCK_TORCH = 50,
	E_BLOCK_FIRE = 51,
	E_BLOCK_MOB_SPAWNER = 52,
	E_BLOCK_OAK_WOOD_STAIRS = 53,
	E_BLOCK_CHEST = 54,
	E_BLOCK_REDSTONE_WIRE = 55,
	E_BLOCK_DIAMOND_ORE = 56,
	E_BLOCK_DIAMOND_BLOCK = 57,
	E_BLOCK_CRAFTING_TABLE = 58,
	E_BLOCK_WORKBENCH = 58,
	E_BLOCK_WHEAT = 59,
	E_BLOCK_CROPS = E_BLOCK_WHEAT,
	E_BLOCK_FARMLAND = 60,
	E_BLOCK_FURNACE = 61,
	E_BLOCK_LIT_FURNACE = 62,
	E_BLOCK_BURNING_FURNACE = 62,
	E_BLOCK_SIGN_POST = 63,
	E_BLOCK_OAK_DOOR = 64,
	E_BLOCK_LADDER = 65,
	E_BLOCK_RAIL = 66,
	E_BLOCK_MINECART_TRACKS = 66,
	E_BLOCK_COBBLESTONE_STAIRS = 67,
	E_BLOCK_WALLSIGN = 68,
	E_BLOCK_LEVER = 69,
	E_BLOCK_STONE_PRESSURE_PLATE = 70,
	E_BLOCK_IRON_DOOR = 71,
	E_BLOCK_WOODEN_PRESSURE_PLATE = 72,
	E_BLOCK_REDSTONE_ORE = 73,
	E_BLOCK_REDSTONE_ORE_GLOWING = 74,
	E_BLOCK_REDSTONE_TORCH_OFF = 75,
	E_BLOCK_REDSTONE_TORCH_ON = 76,
	E_BLOCK_STONE_BUTTON = 77,
	E_BLOCK_SNOW = 78,
	E_BLOCK_ICE = 79,
	E_BLOCK_SNOW_BLOCK = 80,
	E_BLOCK_CACTUS = 81,
	E_BLOCK_CLAY = 82,
	E_BLOCK_SUGARCANE = 83,
	E_BLOCK_REEDS = 83,
	E_BLOCK_JUKEBOX = 84,
	E_BLOCK_FENCE = 85,
	E_BLOCK_PUMPKIN = 86,
	E_BLOCK_NETHERRACK = 87,
	E_BLOCK_SOULSAND = 88,
	E_BLOCK_GLOWSTONE = 89,
	E_BLOCK_NETHER_PORTAL = 90,
	E_BLOCK_JACK_O_LANTERN = 91,
	E_BLOCK_CAKE = 92,
	E_BLOCK_REDSTONE_REPEATER_OFF = 93,
	E_BLOCK_REDSTONE_REPEATER_ON = 94,
	E_BLOCK_STAINED_GLASS = 95,
	E_BLOCK_TRAPDOOR = 96,
	E_BLOCK_SILVERFISH_EGG = 97,
	E_BLOCK_STONE_BRICKS = 98,
	E_BLOCK_HUGE_BROWN_MUSHROOM = 99,
	E_BLOCK_HUGE_RED_MUSHROOM = 100,
	E_BLOCK_IRON_BARS = 101,
	E_BLOCK_GLASS_PANE = 102,
	E_BLOCK_MELON = 103,
	E_BLOCK_PUMPKIN_STEM = 104,
	E_BLOCK_MELON_STEM = 105,
	E_BLOCK_VINES = 106,
	E_BLOCK_OAK_FENCE_GATE = 107,
	E_BLOCK_BRICK_STAIRS = 108,
	E_BLOCK_STONE_BRICK_STAIRS = 109,
	E_BLOCK_MYCELIUM = 110,
	E_BLOCK_LILY_PAD = 111,
	E_BLOCK_NETHER_BRICK = 112,
	E_BLOCK_NETHER_BRICK_FENCE = 113,
	E_BLOCK_NETHER_BRICK_STAIRS = 114,
	E_BLOCK_NETHER_WART = 115,
	E_BLOCK_ENCHANTMENT_TABLE = 116,
	E_BLOCK_BREWING_STAND = 117,
	E_BLOCK_CAULDRON = 118,
	E_BLOCK_END_PORTAL = 119,
	E_BLOCK_END_PORTAL_FRAME = 120,
	E_BLOCK_END_STONE = 121,
	E_BLOCK_DRAGON_EGG = 122,
	E_BLOCK_REDSTONE_LAMP_OFF = 123,
	E_BLOCK_REDSTONE_LAMP_ON = 124,
	E_BLOCK_DOUBLE_WOODEN_SLAB = 125,
	E_BLOCK_WOODEN_SLAB = 126,
	E_BLOCK_COCOA_POD = 127,
	E_BLOCK_SANDSTONE_STAIRS = 128,
	E_BLOCK_EMERALD_ORE = 129,
	E_BLOCK_ENDER_CHEST = 130,
	E_BLOCK_TRIPWIRE_HOOK = 131,
	E_BLOCK_TRIPWIRE = 132,
	E_BLOCK_EMERALD_BLOCK = 133,
	E_BLOCK_SPRUCE_WOOD_STAIRS = 134,
	E_BLOCK_BIRCH_WOOD_STAIRS = 135,
	E_BLOCK_JUNGLE_WOOD_STAIRS = 136,
	E_BLOCK_COMMAND_BLOCK = 137,
	E_BLOCK_BEACON = 138,
	E_BLOCK_COBBLESTONE_WALL = 139,
	E_BLOCK_FLOWER_POT = 140,
	E_BLOCK_CARROTS = 141,
	E_BLOCK_POTATOES = 142,
	E_BLOCK_WOODEN_BUTTON = 143,
	E_BLOCK_HEAD = 144,
	E_BLOCK_ANVIL = 145,
	E_BLOCK_TRAPPED_CHEST = 146,
	E_BLOCK_LIGHT_WEIGHTED_PRESSURE_PLATE = 147,
	E_BLOCK_HEAVY_WEIGHTED_PRESSURE_PLATE = 148,

	E_BLOCK_INACTIVE_COMPARATOR = 149,
	E_BLOCK_ACTIVE_COMPARATOR = 150,
	E_BLOCK_DAYLIGHT_SENSOR = 151,
	E_BLOCK_BLOCK_OF_REDSTONE = 152,

	E_BLOCK_NETHER_QUARTZ_ORE = 153,
	E_BLOCK_HOPPER = 154,
	E_BLOCK_QUARTZ_BLOCK = 155,
	E_BLOCK_QUARTZ_STAIRS = 156,
	E_BLOCK_ACTIVATOR_RAIL = 157,

	E_BLOCK_DROPPER = 158,
	E_BLOCK_STAINED_CLAY = 159,  // Synonym to terracotta
	E_BLOCK_TERRACOTTA = 159,  // Synonym to stained clay
	E_BLOCK_STAINED_GLASS_PANE = 160,
	E_BLOCK_NEW_LEAVES = 161,  // Acacia and Dark Oak IDs in Minecraft 1.7.x
	E_BLOCK_NEW_LOG = 162,
	E_BLOCK_ACACIA_WOOD_STAIRS = 163,
	E_BLOCK_DARK_OAK_WOOD_STAIRS = 164,
	E_BLOCK_SLIME_BLOCK = 165,
	E_BLOCK_BARRIER = 166,
	E_BLOCK_IRON_TRAPDOOR = 167,
	E_BLOCK_PRISMARINE_BLOCK = 168,
	E_BLOCK_SEA_LANTERN = 169,
	E_BLOCK_HAY_BALE = 170,
	E_BLOCK_CARPET = 171,
	E_BLOCK_HARDENED_CLAY = 172,
	E_BLOCK_BLOCK_OF_COAL = 173,
	E_BLOCK_PACKED_ICE = 174,
	E_BLOCK_BIG_FLOWER = 175,
	E_BLOCK_STANDING_BANNER = 176,
	E_BLOCK_WALL_BANNER = 177,
	E_BLOCK_INVERTED_DAYLIGHT_SENSOR = 178,
	E_BLOCK_RED_SANDSTONE = 179,
	E_BLOCK_RED_SANDSTONE_STAIRS = 180,
	E_BLOCK_DOUBLE_RED_SANDSTONE_SLAB = 181,
	E_BLOCK_RED_SANDSTONE_SLAB = 182,
	E_BLOCK_SPRUCE_FENCE_GATE = 183,
	E_BLOCK_BIRCH_FENCE_GATE = 184,
	E_BLOCK_JUNGLE_FENCE_GATE = 185,
	E_BLOCK_DARK_OAK_FENCE_GATE = 186,
	E_BLOCK_ACACIA_FENCE_GATE = 187,
	E_BLOCK_SPRUCE_FENCE = 188,
	E_BLOCK_BIRCH_FENCE = 189,
	E_BLOCK_JUNGLE_FENCE = 190,
	E_BLOCK_DARK_OAK_FENCE = 191,
	E_BLOCK_ACACIA_FENCE = 192,
	E_BLOCK_SPRUCE_DOOR = 193,
	E_BLOCK_BIRCH_DOOR = 194,
	E_BLOCK_JUNGLE_DOOR = 195,
	E_BLOCK_ACACIA_DOOR = 196,
	E_BLOCK_DARK_OAK_DOOR = 197,
	E_BLOCK_END_ROD = 198,
	E_BLOCK_CHORUS_PLANT = 199,
	E_BLOCK_CHORUS_FLOWER = 200,
	E_BLOCK_PURPUR_BLOCK = 201,
	E_BLOCK_PURPUR_PILLAR = 202,
	E_BLOCK_PURPUR_STAIRS = 203,
	E_BLOCK_PURPUR_DOUBLE_SLAB = 204,
	E_BLOCK_PURPUR_SLAB = 205,
	E_BLOCK_END_BRICKS = 206,
	E_BLOCK_BEETROOTS = 207,
	E_BLOCK_GRASS_PATH = 208,
	E_BLOCK_END_GATEWAY = 209,
	E_BLOCK_REPEATING_COMMAND_BLOCK = 210,
	E_BLOCK_CHAIN_COMMAND_BLOCK = 211,
	E_BLOCK_FROSTED_ICE = 212,
	E_BLOCK_MAGMA = 213,
	E_BLOCK_NETHER_WART_BLOCK = 214,
	E_BLOCK_RED_NETHER_BRICK = 215,
	E_BLOCK_BONE_BLOCK = 216,
	E_BLOCK_STRUCTURE_VOID = 217,
	E_BLOCK_OBSERVER = 218,
	E_BLOCK_WHITE_SHULKER_BOX = 219,
	E_BLOCK_ORANGE_SHULKER_BOX = 220,
	E_BLOCK_MAGENTA_SHULKER_BOX = 221,
	E_BLOCK_LIGHT_BLUE_SHULKER_BOX = 222,
	E_BLOCK_YELLOW_SHULKER_BOX = 223,
	E_BLOCK_LIME_SHULKER_BOX = 224,
	E_BLOCK_PINK_SHULKER_BOX = 225,
	E_BLOCK_GRAY_SHULKER_BOX = 226,
	E_BLOCK_LIGHT_GRAY_SHULKER_BOX = 227,
	E_BLOCK_CYAN_SHULKER_BOX = 228,
	E_BLOCK_PURPLE_SHULKER_BOX = 229,
	E_BLOCK_BLUE_SHULKER_BOX = 230,
	E_BLOCK_BROWN_SHULKER_BOX = 231,
	E_BLOCK_GREEN_SHULKER_BOX = 232,
	E_BLOCK_RED_SHULKER_BOX = 233,
	E_BLOCK_BLACK_SHULKER_BOX = 234,
	E_BLOCK_WHITE_GLAZED_TERRACOTTA = 235,
	E_BLOCK_ORANGE_GLAZED_TERRACOTTA = 236,
	E_BLOCK_MAGENTA_GLAZED_TERRACOTTA = 237,
	E_BLOCK_LIGHT_BLUE_GLAZED_TERRACOTTA = 238,
	E_BLOCK_YELLOW_GLAZED_TERRACOTTA = 239,
	E_BLOCK_LIME_GLAZED_TERRACOTTA = 240,
	E_BLOCK_PINK_GLAZED_TERRACOTTA = 241,
	E_BLOCK_GRAY_GLAZED_TERRACOTTA = 242,
	E_BLOCK_LIGHT_GRAY_GLAZED_TERRACOTTA = 243,
	E_BLOCK_CYAN_GLAZED_TERRACOTTA = 244,
	E_BLOCK_PURPLE_GLAZED_TERRACOTTA = 245,
	E_BLOCK_BLUE_GLAZED_TERRACOTTA = 246,
	E_BLOCK_BROWN_GLAZED_TERRACOTTA = 247,
	E_BLOCK_GREEN_GLAZED_TERRACOTTA = 248,
	E_BLOCK_RED_GLAZED_TERRACOTTA = 249,
	E_BLOCK_BLACK_GLAZED_TERRACOTTA = 250,
	E_BLOCK_CONCRETE = 251,
	E_BLOCK_CONCRETE_POWDER = 252,
	// ...
	E_BLOCK_STRUCTURE_BLOCK = 255,

	// Keep these two as the last values. Update the last block value to the last block with an id less than 255 when adding another block
	// IsValidBlock() depends on this (255 gets checked additionally because there is a gap. See https://minecraft.gamepedia.com/Data_values#Block_IDs

	E_BLOCK_UNFINISHED = 254,  // Special type used as a placeholder, signifying that the block lacks implementation

	E_BLOCK_NUMBER_OF_TYPES = E_BLOCK_CONCRETE_POWDER + 1,  ///< Number of individual (different) blocktypes
	E_BLOCK_MAX_TYPE_ID = E_BLOCK_NUMBER_OF_TYPES - 1,  ///< Maximum BlockType number used

	// Synonym or ID compatibility
	E_BLOCK_YELLOW_FLOWER = E_BLOCK_DANDELION,
	E_BLOCK_RED_ROSE = E_BLOCK_FLOWER,
	E_BLOCK_WOODEN_DOOR = E_BLOCK_OAK_DOOR,
	E_BLOCK_FENCE_GATE = E_BLOCK_OAK_FENCE_GATE,
	E_BLOCK_WOODEN_STAIRS = E_BLOCK_OAK_WOOD_STAIRS
};





enum ENUM_ITEM_TYPE : short
{
	E_ITEM_EMPTY = -1,

	E_ITEM_FIRST = 256,  // First true item type

	E_ITEM_IRON_SHOVEL = 256,
	E_ITEM_IRON_PICKAXE = 257,
	E_ITEM_IRON_AXE = 258,
	E_ITEM_FLINT_AND_STEEL = 259,
	E_ITEM_RED_APPLE = 260,
	E_ITEM_BOW = 261,
	E_ITEM_ARROW = 262,
	E_ITEM_COAL = 263,
	E_ITEM_DIAMOND = 264,
	E_ITEM_IRON = 265,
	E_ITEM_GOLD = 266,
	E_ITEM_IRON_SWORD = 267,
	E_ITEM_WOODEN_SWORD = 268,
	E_ITEM_WOODEN_SHOVEL = 269,
	E_ITEM_WOODEN_PICKAXE = 270,
	E_ITEM_WOODEN_AXE = 271,
	E_ITEM_STONE_SWORD = 272,
	E_ITEM_STONE_SHOVEL = 273,
	E_ITEM_STONE_PICKAXE = 274,
	E_ITEM_STONE_AXE = 275,
	E_ITEM_DIAMOND_SWORD = 276,
	E_ITEM_DIAMOND_SHOVEL = 277,
	E_ITEM_DIAMOND_PICKAXE = 278,
	E_ITEM_DIAMOND_AXE = 279,
	E_ITEM_STICK = 280,
	E_ITEM_BOWL = 281,
	E_ITEM_MUSHROOM_SOUP = 282,
	E_ITEM_GOLD_SWORD = 283,
	E_ITEM_GOLD_SHOVEL = 284,
	E_ITEM_GOLD_PICKAXE = 285,
	E_ITEM_GOLD_AXE = 286,
	E_ITEM_STRING = 287,
	E_ITEM_FEATHER = 288,
	E_ITEM_GUNPOWDER = 289,
	E_ITEM_WOODEN_HOE = 290,
	E_ITEM_STONE_HOE = 291,
	E_ITEM_IRON_HOE = 292,
	E_ITEM_DIAMOND_HOE = 293,
	E_ITEM_GOLD_HOE = 294,
	E_ITEM_SEEDS = 295,
	E_ITEM_WHEAT = 296,
	E_ITEM_BREAD = 297,
	E_ITEM_LEATHER_CAP = 298,
	E_ITEM_LEATHER_TUNIC = 299,
	E_ITEM_LEATHER_PANTS = 300,
	E_ITEM_LEATHER_BOOTS = 301,
	E_ITEM_CHAIN_HELMET = 302,
	E_ITEM_CHAIN_CHESTPLATE = 303,
	E_ITEM_CHAIN_LEGGINGS = 304,
	E_ITEM_CHAIN_BOOTS = 305,
	E_ITEM_IRON_HELMET = 306,
	E_ITEM_IRON_CHESTPLATE = 307,
	E_ITEM_IRON_LEGGINGS = 308,
	E_ITEM_IRON_BOOTS = 309,
	E_ITEM_DIAMOND_HELMET = 310,
	E_ITEM_DIAMOND_CHESTPLATE = 311,
	E_ITEM_DIAMOND_LEGGINGS = 312,
	E_ITEM_DIAMOND_BOOTS = 313,
	E_ITEM_GOLD_HELMET = 314,
	E_ITEM_GOLD_CHESTPLATE = 315,
	E_ITEM_GOLD_LEGGINGS = 316,
	E_ITEM_GOLD_BOOTS = 317,
	E_ITEM_FLINT = 318,
	E_ITEM_RAW_PORKCHOP = 319,
	E_ITEM_COOKED_PORKCHOP = 320,
	E_ITEM_PAINTING = 321,
	E_ITEM_GOLDEN_APPLE = 322,
	E_ITEM_SIGN = 323,
	E_ITEM_WOODEN_DOOR = 324,
	E_ITEM_BUCKET = 325,
	E_ITEM_WATER_BUCKET = 326,
	E_ITEM_LAVA_BUCKET = 327,
	E_ITEM_MINECART = 328,
	E_ITEM_SADDLE = 329,
	E_ITEM_IRON_DOOR = 330,
	E_ITEM_REDSTONE_DUST = 331,
	E_ITEM_SNOWBALL = 332,
	E_ITEM_BOAT = 333,
	E_ITEM_LEATHER = 334,
	E_ITEM_MILK = 335,
	E_ITEM_CLAY_BRICK = 336,
	E_ITEM_CLAY = 337,
	E_ITEM_SUGARCANE = 338,
	E_ITEM_SUGAR_CANE = 338,
	E_ITEM_PAPER = 339,
	E_ITEM_BOOK = 340,
	E_ITEM_SLIMEBALL = 341,
	E_ITEM_CHEST_MINECART = 342,
	E_ITEM_FURNACE_MINECART = 343,
	E_ITEM_EGG = 344,
	E_ITEM_COMPASS = 345,
	E_ITEM_FISHING_ROD = 346,
	E_ITEM_CLOCK = 347,
	E_ITEM_GLOWSTONE_DUST = 348,
	E_ITEM_RAW_FISH = 349,
	E_ITEM_COOKED_FISH = 350,
	E_ITEM_DYE = 351,
	E_ITEM_BONE = 352,
	E_ITEM_SUGAR = 353,
	E_ITEM_CAKE = 354,
	E_ITEM_BED = 355,
	E_ITEM_REDSTONE_REPEATER = 356,
	E_ITEM_COOKIE = 357,
	E_ITEM_MAP = 358,
	E_ITEM_SHEARS = 359,
	E_ITEM_MELON_SLICE = 360,
	E_ITEM_PUMPKIN_SEEDS = 361,
	E_ITEM_MELON_SEEDS = 362,
	E_ITEM_RAW_BEEF = 363,
	E_ITEM_STEAK = 364,
	E_ITEM_RAW_CHICKEN = 365,
	E_ITEM_COOKED_CHICKEN = 366,
	E_ITEM_ROTTEN_FLESH = 367,
	E_ITEM_ENDER_PEARL = 368,
	E_ITEM_BLAZE_ROD = 369,
	E_ITEM_GHAST_TEAR = 370,
	E_ITEM_GOLD_NUGGET = 371,
	E_ITEM_NETHER_WART = 372,
	E_ITEM_POTION = 373,
	E_ITEM_POTIONS = 373,  // OBSOLETE, use E_ITEM_POTION instead
	E_ITEM_GLASS_BOTTLE = 374,
	E_ITEM_SPIDER_EYE = 375,
	E_ITEM_FERMENTED_SPIDER_EYE = 376,
	E_ITEM_BLAZE_POWDER = 377,
	E_ITEM_MAGMA_CREAM = 378,
	E_ITEM_BREWING_STAND = 379,
	E_ITEM_CAULDRON = 380,
	E_ITEM_EYE_OF_ENDER = 381,
	E_ITEM_GLISTERING_MELON = 382,
	E_ITEM_SPAWN_EGG = 383,
	E_ITEM_BOTTLE_O_ENCHANTING = 384,
	E_ITEM_FIRE_CHARGE = 385,
	E_ITEM_BOOK_AND_QUILL = 386,
	E_ITEM_WRITTEN_BOOK = 387,
	E_ITEM_EMERALD = 388,
	E_ITEM_ITEM_FRAME = 389,
	E_ITEM_FLOWER_POT = 390,
	E_ITEM_CARROT = 391,
	E_ITEM_POTATO = 392,
	E_ITEM_BAKED_POTATO = 393,
	E_ITEM_POISONOUS_POTATO = 394,
	E_ITEM_EMPTY_MAP = 395,
	E_ITEM_GOLDEN_CARROT = 396,
	E_ITEM_HEAD = 397,
	E_ITEM_CARROT_ON_STICK = 398,
	E_ITEM_NETHER_STAR = 399,
	E_ITEM_PUMPKIN_PIE = 400,
	E_ITEM_FIREWORK_ROCKET = 401,
	E_ITEM_FIREWORK_STAR = 402,
	E_ITEM_ENCHANTED_BOOK = 403,
	E_ITEM_COMPARATOR = 404,
	E_ITEM_NETHER_BRICK = 405,
	E_ITEM_NETHER_QUARTZ = 406,
	E_ITEM_MINECART_WITH_TNT = 407,
	E_ITEM_MINECART_WITH_HOPPER = 408,
	E_ITEM_PRISMARINE_SHARD = 409,
	E_ITEM_PRISMARINE_CRYSTALS = 410,
	E_ITEM_RAW_RABBIT = 411,
	E_ITEM_COOKED_RABBIT = 412,
	E_ITEM_RABBIT_STEW = 413,
	E_ITEM_RABBITS_FOOT = 414,
	E_ITEM_RABBIT_HIDE = 415,
	E_ITEM_ARMOR_STAND = 416,
	E_ITEM_IRON_HORSE_ARMOR = 417,
	E_ITEM_GOLD_HORSE_ARMOR = 418,
	E_ITEM_DIAMOND_HORSE_ARMOR = 419,
	E_ITEM_LEAD = 420,
	E_ITEM_LEASH = E_ITEM_LEAD,
	E_ITEM_NAME_TAG = 421,
	E_ITEM_MINECART_WITH_COMMAND_BLOCK = 422,
	E_ITEM_RAW_MUTTON = 423,
	E_ITEM_COOKED_MUTTON = 424,
	E_ITEM_BANNER = 425,
	E_ITEM_END_CRYSTAL = 426,
	E_ITEM_SPRUCE_DOOR = 427,
	E_ITEM_BIRCH_DOOR = 428,
	E_ITEM_JUNGLE_DOOR = 429,
	E_ITEM_ACACIA_DOOR = 430,
	E_ITEM_DARK_OAK_DOOR = 431,
	E_ITEM_CHORUS_FRUIT = 432,
	E_ITEM_POPPED_CHORUS_FRUIT = 433,
	E_ITEM_BEETROOT = 434,
	E_ITEM_BEETROOT_SEEDS = 435,
	E_ITEM_BEETROOT_SOUP = 436,
	E_ITEM_DRAGON_BREATH = 437,
	E_ITEM_SPLASH_POTION = 438,
	E_ITEM_SPECTRAL_ARROW = 439,
	E_ITEM_TIPPED_ARROW = 440,
	E_ITEM_LINGERING_POTION = 441,
	E_ITEM_SHIELD = 442,
	E_ITEM_ELYTRA = 443,
	E_ITEM_SPRUCE_BOAT = 444,
	E_ITEM_BIRCH_BOAT = 445,
	E_ITEM_JUNGLE_BOAT = 446,
	E_ITEM_ACACIA_BOAT = 447,
	E_ITEM_DARK_OAK_BOAT = 448,
	E_ITEM_TOTEM_OF_UNDYING = 449,
	E_ITEM_SHULKER_SHELL = 450,
	E_ITEM_IRON_NUGGET = 452,

	// Keep these two as the last values of the consecutive list, without a number - they will get their correct number assigned automagically by C++
	// IsValidItem() depends on this!
	E_ITEM_NUMBER_OF_CONSECUTIVE_TYPES,  ///< Number of individual (different) consecutive itemtypes
	E_ITEM_MAX_CONSECUTIVE_TYPE_ID = E_ITEM_NUMBER_OF_CONSECUTIVE_TYPES - 1,  ///< Maximum consecutive ItemType number used

	E_ITEM_FIRST_DISC = 2256,
	E_ITEM_13_DISC = 2256,
	E_ITEM_CAT_DISC = 2257,
	E_ITEM_BLOCKS_DISC = 2258,
	E_ITEM_CHIRP_DISC = 2259,
	E_ITEM_FAR_DISC = 2260,
	E_ITEM_MALL_DISC = 2261,
	E_ITEM_MELLOHI_DISC = 2262,
	E_ITEM_STAL_DISC = 2263,
	E_ITEM_STRAD_DISC = 2264,
	E_ITEM_WARD_DISC = 2265,
	E_ITEM_11_DISC = 2266,
	E_ITEM_WAIT_DISC = 2267,

	// Keep these two as the last values of the disc list, without a number - they will get their correct number assigned automagically by C++
	// IsValidItem() depends on this!
	E_ITEM_LAST_DISC_PLUS_ONE,  ///< Useless, really, but needs to be present for the following value
	E_ITEM_LAST_DISC = E_ITEM_LAST_DISC_PLUS_ONE - 1,  ///< Maximum disc itemtype number used

	E_ITEM_LAST = E_ITEM_LAST_DISC,  ///< Maximum valid ItemType */
};





enum ENUM_BLOCK_META
{
	// Please keep this list alpha-sorted by the blocktype part
	// then number-sorted for the same block

	////////////////////////////////////////////////////////////////////////////////
	// Block metas:

	// E_BLOCK_ANVIL metas
	E_BLOCK_ANVIL_Z = 0,
	E_BLOCK_ANVIL_X = 1,
	E_BLOCK_ANVIL_NO_DAMAGE = 0,
	E_BLOCK_ANVIL_LOW_DAMAGE = 4,
	E_BLOCK_ANVIL_HIGH_DAMAGE = 8,

	// E_BLOCK_BED metas:
	E_BLOCK_BED_ZP = 0,
	E_BLOCK_BED_XM = 1,
	E_BLOCK_BED_ZM = 2,
	E_BLOCK_BED_XP = 3,
	E_BLOCK_BED_OCCUPIED = 4,
	E_BLOCK_BED_BED_HEAD = 8,

	// E_BLOCK_BIG_FLOWER metas:
	E_META_BIG_FLOWER_SUNFLOWER         = 0,
	E_META_BIG_FLOWER_LILAC             = 1,
	E_META_BIG_FLOWER_DOUBLE_TALL_GRASS = 2,
	E_META_BIG_FLOWER_LARGE_FERN        = 3,
	E_META_BIG_FLOWER_ROSE_BUSH         = 4,
	E_META_BIG_FLOWER_PEONY             = 5,
	// 0x8 is supposedly a bit flag but all vanilla plants have this value
	E_META_BIG_FLOWER_TOP               = 10,

	// E_BLOCK_BREWING_STAND metas
	E_META_BREWING_STAND_FILLED_SLOT_XP    = 1,
	E_META_BREWING_STAND_FILLED_SLOT_XM_ZP = 2,
	E_META_BREWING_STAND_FILLED_SLOT_XM_ZM = 4,

	// E_BLOCK_BUTTON metas
	E_BLOCK_BUTTON_YM      = 0,
	E_BLOCK_BUTTON_XP      = 1,
	E_BLOCK_BUTTON_XM      = 2,
	E_BLOCK_BUTTON_ZP      = 3,
	E_BLOCK_BUTTON_ZM      = 4,
	E_BLOCK_BUTTON_YP      = 5,
	E_BLOCK_BUTTON_PRESSED = 8,

	// E_BLOCK_CARPET metas:
	E_META_CARPET_WHITE      = 0,
	E_META_CARPET_ORANGE     = 1,
	E_META_CARPET_MAGENTA    = 2,
	E_META_CARPET_LIGHTBLUE  = 3,
	E_META_CARPET_YELLOW     = 4,
	E_META_CARPET_LIGHTGREEN = 5,
	E_META_CARPET_PINK       = 6,
	E_META_CARPET_GRAY       = 7,
	E_META_CARPET_LIGHTGRAY  = 8,
	E_META_CARPET_CYAN       = 9,
	E_META_CARPET_PURPLE     = 10,
	E_META_CARPET_BLUE       = 11,
	E_META_CARPET_BROWN      = 12,
	E_META_CARPET_GREEN      = 13,
	E_META_CARPET_RED        = 14,
	E_META_CARPET_BLACK      = 15,

	// E_BLOCK_CHEST metas:
	E_META_CHEST_FACING_ZM = 2,
	E_META_CHEST_FACING_ZP = 3,
	E_META_CHEST_FACING_XM = 4,
	E_META_CHEST_FACING_XP = 5,

	// E_BLOCK_CONCRETE metas:
	E_META_CONCRETE_WHITE      = 0,
	E_META_CONCRETE_ORANGE     = 1,
	E_META_CONCRETE_MAGENTA    = 2,
	E_META_CONCRETE_LIGHTBLUE  = 3,
	E_META_CONCRETE_YELLOW     = 4,
	E_META_CONCRETE_LIGHTGREEN = 5,
	E_META_CONCRETE_PINK       = 6,
	E_META_CONCRETE_GRAY       = 7,
	E_META_CONCRETE_LIGHTGRAY  = 8,
	E_META_CONCRETE_CYAN       = 9,
	E_META_CONCRETE_PURPLE     = 10,
	E_META_CONCRETE_BLUE       = 11,
	E_META_CONCRETE_BROWN      = 12,
	E_META_CONCRETE_GREEN      = 13,
	E_META_CONCRETE_RED        = 14,
	E_META_CONCRETE_BLACK      = 15,

	// E_BLOCK_CONCRETE_POWDER metas:
	E_META_CONCRETE_POWDER_WHITE      = 0,
	E_META_CONCRETE_POWDER_ORANGE     = 1,
	E_META_CONCRETE_POWDER_MAGENTA    = 2,
	E_META_CONCRETE_POWDER_LIGHTBLUE  = 3,
	E_META_CONCRETE_POWDER_YELLOW     = 4,
	E_META_CONCRETE_POWDER_LIGHTGREEN = 5,
	E_META_CONCRETE_POWDER_PINK       = 6,
	E_META_CONCRETE_POWDER_GRAY       = 7,
	E_META_CONCRETE_POWDER_LIGHTGRAY  = 8,
	E_META_CONCRETE_POWDER_CYAN       = 9,
	E_META_CONCRETE_POWDER_PURPLE     = 10,
	E_META_CONCRETE_POWDER_BLUE       = 11,
	E_META_CONCRETE_POWDER_BROWN      = 12,
	E_META_CONCRETE_POWDER_GREEN      = 13,
	E_META_CONCRETE_POWDER_RED        = 14,
	E_META_CONCRETE_POWDER_BLACK      = 15,

	// E_BLOCK_DIRT metas:
	E_META_DIRT_NORMAL    = 0,
	E_META_DIRT_GRASSLESS = 1,
	E_META_DIRT_COARSE    = 1,
	E_META_DIRT_PODZOL    = 2,

	// E_BLOCK_DISPENSER / E_BLOCK_DROPPER metas:
	E_META_DROPSPENSER_FACING_YM = 0,
	E_META_DROPSPENSER_FACING_YP = 1,
	E_META_DROPSPENSER_FACING_ZM = 2,
	E_META_DROPSPENSER_FACING_ZP = 3,
	E_META_DROPSPENSER_FACING_XM = 4,
	E_META_DROPSPENSER_FACING_XP = 5,
	E_META_DROPSPENSER_FACING_MASK = 7,
	E_META_DROPSPENSER_ACTIVATED = 8,

	// E_BLOCK_DOUBLE_STONE_SLAB metas:
	E_META_DOUBLE_STONE_SLAB_STONE            = 0,
	E_META_DOUBLE_STONE_SLAB_SANDSTON         = 1,
	E_META_DOUBLE_STONE_SLAB_WOODEN           = 2,
	E_META_DOUBLE_STONE_SLAB_COBBLESTONE      = 3,
	E_META_DOUBLE_STONE_SLAB_BRICK            = 4,
	E_META_DOUBLE_STONE_SLAB_STONE_BRICK      = 5,
	E_META_DOUBLE_STONE_SLAB_NETHER_BRICK     = 6,
	E_META_DOUBLE_STONE_SLAB_QUARTZ           = 7,
	E_META_DOUBLE_STONE_SLAB_SMOOTH_STONE     = 8,
	E_META_DOUBLE_STONE_SLAB_SMOOTH_SANDSTONE = 9,
	E_META_DOUBLE_STONE_SLAB_TILE_QUARTZ      = 10,

	// E_BLOCK_END_PORTAL_FRAME metas:
	E_META_END_PORTAL_FRAME_ZP     = 0,  // Faces towards centre of portal
	E_META_END_PORTAL_FRAME_XM     = 1,
	E_META_END_PORTAL_FRAME_ZM     = 2,
	E_META_END_PORTAL_FRAME_XP     = 3,
	E_META_END_PORTAL_FRAME_ZP_EYE = 4,  // Frames with ender eye
	E_META_END_PORTAL_FRAME_XM_EYE = 5,
	E_META_END_PORTAL_FRAME_ZM_EYE = 6,
	E_META_END_PORTAL_FRAME_XP_EYE = 7,
	E_META_END_PORTAL_FRAME_NO_EYE = 0,  // Just the eye bitflag
	E_META_END_PORTAL_FRAME_EYE    = 4,

	// E_BLOCK_FLOWER metas:
	E_META_FLOWER_POPPY           = 0,
	E_META_FLOWER_BLUE_ORCHID     = 1,
	E_META_FLOWER_ALLIUM          = 2,
	E_META_FLOWER_RED_TULIP       = 4,
	E_META_FLOWER_ORANGE_TULIP    = 5,
	E_META_FLOWER_WHITE_TULIP     = 6,
	E_META_FLOWER_PINK_TULIP      = 7,
	E_META_FLOWER_OXEYE_DAISY     = 8,

	// E_BLOCK_JUKEBOX metas:
	E_META_JUKEBOX_OFF = 0,
	E_META_JUKEBOX_ON  = 1,

	// E_BLOCK_HOPPER metas:
	E_META_HOPPER_FACING_YM  = 0,
	E_META_HOPPER_UNATTACHED = 1,  // Hopper doesn't move items up, there's no YP
	E_META_HOPPER_FACING_ZM  = 2,
	E_META_HOPPER_FACING_ZP  = 3,
	E_META_HOPPER_FACING_XM  = 4,
	E_META_HOPPER_FACING_XP  = 5,

	// E_BLOCK_LEAVES metas:
	E_META_LEAVES_APPLE               = 0,
	E_META_LEAVES_CONIFER             = 1,
	E_META_LEAVES_BIRCH               = 2,
	E_META_LEAVES_JUNGLE              = 3,
	E_META_LEAVES_APPLE_NO_DECAY      = 4,
	E_META_LEAVES_CONIFER_NO_DECAY    = 5,
	E_META_LEAVES_BIRCH_NO_DECAY      = 6,
	E_META_LEAVES_JUNGLE_NO_DECAY     = 7,
	E_META_LEAVES_APPLE_CHECK_DECAY   = 8,
	E_META_LEAVES_CONIFER_CHECK_DECAY = 9,
	E_META_LEAVES_BIRCH_CHECK_DECAY   = 10,
	E_META_LEAVES_JUNGLE_CHECK_DECAY  = 11,

	// E_BLOCK_MUSHROOM metas:
	E_META_MUSHROOM_ALL_SIDES  = 0,
	E_META_MUSHROOM_NORTH_WEST = 1,
	E_META_MUSHROOM_NORTH      = 2,
	E_META_MUSHROOM_NORTH_EAST = 3,
	E_META_MUSHROOM_WEST       = 4,
	E_META_MUSHROOM_CENTER     = 5,
	E_META_MUSHROOM_EAST       = 6,
	E_META_MUSHROOM_SOUTH_WEST = 7,
	E_META_MUSHROOM_SOUTH      = 8,
	E_META_MUSHROOM_SOUTH_EAST = 9,
	E_META_MUSHROOM_STEM       = 10,
	E_META_MUSHROOM_CAP        = 14,
	E_META_MUSHROOM_FULL_STEM  = 15,

	// E_BLOCK_LEAVES meta cont. (Block ID 161):
	E_META_NEWLEAVES_ACACIA               = 0,
	E_META_NEWLEAVES_DARK_OAK             = 1,
	E_META_NEWLEAVES_ACACIA_NO_DECAY      = 4,
	E_META_NEWLEAVES_DARK_OAK_NO_DECAY    = 5,
	E_META_NEWLEAVES_ACACIA_CHECK_DECAY   = 8,
	E_META_NEWLEAVES_DARK_OAK_CHECK_DECAY = 9,

	// E_BLOCK_LOG metas:
	E_META_LOG_APPLE   = 0,
	E_META_LOG_CONIFER = 1,
	E_META_LOG_BIRCH   = 2,
	E_META_LOG_JUNGLE  = 3,

	// E_BLOCK_NEW_LOG metas:
	E_META_NEW_LOG_ACACIA_WOOD   = 0,
	E_META_NEW_LOG_DARK_OAK_WOOD = 1,

	// E_BLOCK_PISTON metas:
	E_META_PISTON_DOWN        = 0,
	E_META_PISTON_U           = 1,
	E_META_PISTON_ZM          = 2,
	E_META_PISTON_ZP          = 3,
	E_META_PISTON_XM          = 4,
	E_META_PISTON_XP          = 5,
	E_META_PISTON_HEAD_STICKY = 8,
	E_META_PISTON_EXTENDED    = 8,

	// E_BLOCK_PLANKS metas:
	E_META_PLANKS_OAK      = 0,
	E_META_PLANKS_SPRUCE   = 1,
	E_META_PLANKS_BIRCH    = 2,
	E_META_PLANKS_JUNGLE   = 3,
	E_META_PLANKS_ACACIA   = 4,
	E_META_PLANKS_DARK_OAK = 5,

	// E_BLOCK_(XXX_WEIGHTED)_PRESSURE_PLATE metas:
	E_META_PRESSURE_PLATE_RAISED    = 0,
	E_META_PRESSURE_PLATE_DEPRESSED = 1,

	// E_BLOCK_PRISMARINE_BLOCK metas:
	E_META_PRISMARINE_BLOCK_ROUGH  = 0,
	E_META_PRISMARINE_BLOCK_BRICKS = 1,
	E_META_PRISMARINE_BLOCK_DARK   = 2,

	// E_BLOCK_QUARTZ_BLOCK metas:
	E_META_QUARTZ_NORMAL    = 0,
	E_META_QUARTZ_CHISELLED = 1,
	E_META_QUARTZ_PILLAR    = 2,

	// E_BLOCK_RAIL metas
	E_META_RAIL_ZM_ZP        = 0,
	E_META_RAIL_XM_XP        = 1,
	E_META_RAIL_ASCEND_XP    = 2,
	E_META_RAIL_ASCEND_XM    = 3,
	E_META_RAIL_ASCEND_ZM    = 4,
	E_META_RAIL_ASCEND_ZP    = 5,
	E_META_RAIL_CURVED_ZP_XP = 6,
	E_META_RAIL_CURVED_ZP_XM = 7,
	E_META_RAIL_CURVED_ZM_XM = 8,
	E_META_RAIL_CURVED_ZM_XP = 9,

	// E_BLOCK_RED_SANDSTONE metas:
	E_META_RED_SANDSTONE_NORMAL   = 0,
	E_META_RED_SANDSTONE_ORNAMENT = 1,
	E_META_RED_SANDSTONE_SMOOTH   = 2,

	// E_BLOCK_REDSTONE_REPEATER_ON / E_BLOCK_REDSTONE_REPEATER_OFF metas:
	E_META_REDSTONE_REPEATER_FACING_ZM = 0,
	E_META_REDSTONE_REPEATER_FACING_XP = 1,
	E_META_REDSTONE_REPEATER_FACING_ZP = 2,
	E_META_REDSTONE_REPEATER_FACING_XM = 3,
	E_META_REDSTONE_REPEATER_FACING_MASK = 3,

	// E_BLOCK_SAND metas:
	E_META_SAND_NORMAL = 0,
	E_META_SAND_RED    = 1,

	// E_BLOCK_SANDSTONE metas:
	E_META_SANDSTONE_NORMAL   = 0,
	E_META_SANDSTONE_ORNAMENT = 1,
	E_META_SANDSTONE_SMOOTH   = 2,

	// E_BLOCK_SAPLING metas (lowest 3 bits):
	E_META_SAPLING_APPLE    = 0,
	E_META_SAPLING_CONIFER  = 1,
	E_META_SAPLING_BIRCH    = 2,
	E_META_SAPLING_JUNGLE   = 3,
	E_META_SAPLING_ACACIA   = 4,
	E_META_SAPLING_DARK_OAK = 5,

	// E_BLOCK_SILVERFISH_EGG metas:
	E_META_SILVERFISH_EGG_STONE                = 0,
	E_META_SILVERFISH_EGG_COBBLESTONE          = 1,
	E_META_SILVERFISH_EGG_STONE_BRICK          = 2,
	E_META_SILVERFISH_EGG_MOSSY_STONE_BRICK    = 3,
	E_META_SILVERFISH_EGG_CRACKED_STONE_BRICK  = 4,
	E_META_SILVERFISH_EGG_CHISELED_STONE_BRICK = 5,

	// E_BLOCK_SNOW metas:
	E_META_SNOW_LAYER_ONE          = 0,
	E_META_SNOW_LAYER_TWO          = 1,
	E_META_SNOW_LAYER_THREE        = 2,
	E_META_SNOW_LAYER_FOUR         = 3,
	E_META_SNOW_LAYER_FIVE         = 4,
	E_META_SNOW_LAYER_SIX          = 5,
	E_META_SNOW_LAYER_SEVEN        = 6,
	E_META_SNOW_LAYER_EIGHT        = 7,

	// E_BLOCK_SPONGE metas:
	E_META_SPONGE_DRY              = 0,
	E_META_SPONGE_WET              = 1,

	// E_BLOCK_STAINED_CLAY metas:
	E_META_STAINED_CLAY_WHITE      = 0,
	E_META_STAINED_CLAY_ORANGE     = 1,
	E_META_STAINED_CLAY_MAGENTA    = 2,
	E_META_STAINED_CLAY_LIGHTBLUE  = 3,
	E_META_STAINED_CLAY_YELLOW     = 4,
	E_META_STAINED_CLAY_LIGHTGREEN = 5,
	E_META_STAINED_CLAY_PINK       = 6,
	E_META_STAINED_CLAY_GRAY       = 7,
	E_META_STAINED_CLAY_LIGHTGRAY  = 8,
	E_META_STAINED_CLAY_CYAN       = 9,
	E_META_STAINED_CLAY_PURPLE     = 10,
	E_META_STAINED_CLAY_BLUE       = 11,
	E_META_STAINED_CLAY_BROWN      = 12,
	E_META_STAINED_CLAY_GREEN      = 13,
	E_META_STAINED_CLAY_RED        = 14,
	E_META_STAINED_CLAY_BLACK      = 15,

	// E_BLOCK_STAINED_GLASS metas:
	E_META_STAINED_GLASS_WHITE      = 0,
	E_META_STAINED_GLASS_ORANGE     = 1,
	E_META_STAINED_GLASS_MAGENTA    = 2,
	E_META_STAINED_GLASS_LIGHTBLUE  = 3,
	E_META_STAINED_GLASS_YELLOW     = 4,
	E_META_STAINED_GLASS_LIGHTGREEN = 5,
	E_META_STAINED_GLASS_PINK       = 6,
	E_META_STAINED_GLASS_GRAY       = 7,
	E_META_STAINED_GLASS_LIGHTGRAY  = 8,
	E_META_STAINED_GLASS_CYAN       = 9,
	E_META_STAINED_GLASS_PURPLE     = 10,
	E_META_STAINED_GLASS_BLUE       = 11,
	E_META_STAINED_GLASS_BROWN      = 12,
	E_META_STAINED_GLASS_GREEN      = 13,
	E_META_STAINED_GLASS_RED        = 14,
	E_META_STAINED_GLASS_BLACK      = 15,

	// E_BLOCK_STAINED_GLASS_PANE metas:
	E_META_STAINED_GLASS_PANE_WHITE      = 0,
	E_META_STAINED_GLASS_PANE_ORANGE     = 1,
	E_META_STAINED_GLASS_PANE_MAGENTA    = 2,
	E_META_STAINED_GLASS_PANE_LIGHTBLUE  = 3,
	E_META_STAINED_GLASS_PANE_YELLOW     = 4,
	E_META_STAINED_GLASS_PANE_LIGHTGREEN = 5,
	E_META_STAINED_GLASS_PANE_PINK       = 6,
	E_META_STAINED_GLASS_PANE_GRAY       = 7,
	E_META_STAINED_GLASS_PANE_LIGHTGRAY  = 8,
	E_META_STAINED_GLASS_PANE_CYAN       = 9,
	E_META_STAINED_GLASS_PANE_PURPLE     = 10,
	E_META_STAINED_GLASS_PANE_BLUE       = 11,
	E_META_STAINED_GLASS_PANE_BROWN      = 12,
	E_META_STAINED_GLASS_PANE_GREEN      = 13,
	E_META_STAINED_GLASS_PANE_RED        = 14,
	E_META_STAINED_GLASS_PANE_BLACK      = 15,

	// E_BLOCK_STAIRS metas:
	E_BLOCK_STAIRS_XP          = 0,
	E_BLOCK_STAIRS_XM          = 1,
	E_BLOCK_STAIRS_ZP          = 2,
	E_BLOCK_STAIRS_ZM          = 3,
	E_BLOCK_STAIRS_UPSIDE_DOWN = 4,

	// E_BLOCK_STONE metas:
	E_META_STONE_STONE             = 0,
	E_META_STONE_GRANITE           = 1,
	E_META_STONE_POLISHED_GRANITE  = 2,
	E_META_STONE_DIORITE           = 3,
	E_META_STONE_POLISHED_DIORITE  = 4,
	E_META_STONE_ANDESITE          = 5,
	E_META_STONE_POLISHED_ANDESITE = 6,

	// E_BLOCK_STONE_SLAB metas:
	E_META_STONE_SLAB_STONE        = 0,
	E_META_STONE_SLAB_SANDSTONE    = 1,
	E_META_STONE_SLAB_PLANKS       = 2,
	E_META_STONE_SLAB_COBBLESTONE  = 3,
	E_META_STONE_SLAB_BRICK        = 4,
	E_META_STONE_SLAB_STONE_BRICK  = 5,
	E_META_STONE_SLAB_NETHER_BRICK = 6,
	E_META_STONE_SLAB_QUARTZ       = 7,

	// E_BLOCK_STONE_BRICKS metas:
	E_META_STONE_BRICK_NORMAL   = 0,
	E_META_STONE_BRICK_MOSSY    = 1,
	E_META_STONE_BRICK_CRACKED  = 2,
	E_META_STONE_BRICK_ORNAMENT = 3,

	// E_BLOCK_TALL_GRASS metas:
	E_META_TALL_GRASS_DEAD_SHRUB = 0,
	E_META_TALL_GRASS_GRASS      = 1,
	E_META_TALL_GRASS_FERN       = 2,
	E_META_TALL_GRASS_BIOME      = 3,

	// E_BLOCK_TORCH, E_BLOCK_REDSTONE_TORCH_OFF, E_BLOCK_REDSTONE_TORCH_ON metas:
	E_META_TORCH_EAST  = 1,  // east face of the block, pointing east
	E_META_TORCH_WEST  = 2,
	E_META_TORCH_SOUTH = 3,
	E_META_TORCH_NORTH = 4,
	E_META_TORCH_FLOOR = 5,
	E_META_TORCH_XM    = 1,  // Torch attached to the XM side of its block
	E_META_TORCH_XP    = 2,  // Torch attached to the XP side of its block
	E_META_TORCH_ZM    = 3,  // Torch attached to the ZM side of its block
	E_META_TORCH_ZP    = 4,  // Torch attached to the ZP side of its block

	// E_META_LOG metas:
	E_META_LOG_OAK_UP_DOWN      = 0,
	E_META_LOG_SPRUCE_UP_DOWN   = 1,
	E_META_LOG_BIRCH_UP_DOWN    = 2,
	E_META_LOG_JUNGLE_UP_DOWN   = 3,
	E_META_LOG_OAK_X            = 4,
	E_META_LOG_SPRUCE_X         = 5,
	E_META_LOG_BIRCH_X          = 6,
	E_META_LOG_JUNGLE_X         = 7,
	E_META_LOG_OAK_Z            = 8,
	E_META_LOG_SPRUCE_Z         = 9,
	E_META_LOG_BIRCH_Z          = 10,
	E_META_LOG_JUNGLE_Z         = 11,
	E_META_LOG_OAK_BARK_ONLY    = 12,
	E_META_LOG_SPRUCE_BARK_ONLY = 13,
	E_META_LOG_BIRCH_BARK_ONLY  = 14,
	E_META_LOG_JUNGLE_BARK_ONLY = 15,

	// E_META_LOG metas cont. (Block ID 162):
	E_META_NEWLOG_ACACIA_UP_DOWN     = 0,
	E_META_NEWLOG_DARK_OAK_UP_DOWN   = 1,
	E_META_NEWLOG_ACACIA_X           = 4,
	E_META_NEWLOG_DARK_OAK_X         = 5,
	E_META_NEWLOG_ACACIA_Z           = 8,
	E_META_NEWLOG_DARK_OAK_Z         = 9,
	E_META_NEWLOG_ACACIA_BARK_ONLY   = 12,
	E_META_NEWLOG_DARK_OAK_BARK_ONLY = 13,

	// E_BLOCK_WOODEN_DOUBLE_SLAB metas:
	E_META_WOODEN_DOUBLE_SLAB_OAK      = 0,
	E_META_WOODEN_DOUBLE_SLAB_SPRUCE   = 1,
	E_META_WOODEN_DOUBLE_SLAB_BIRCH    = 2,
	E_META_WOODEN_DOUBLE_SLAB_JUNGLE   = 3,
	E_META_WOODEN_DOUBLE_SLAB_ACACIA   = 4,
	E_META_WOODEN_DOUBLE_SLAB_DARK_OAK = 5,

	// E_BLOCK_WOODEN_SLAB metas:
	E_META_WOODEN_SLAB_OAK           = 0,
	E_META_WOODEN_SLAB_SPRUCE        = 1,
	E_META_WOODEN_SLAB_BIRCH         = 2,
	E_META_WOODEN_SLAB_JUNGLE        = 3,
	E_META_WOODEN_SLAB_ACACIA        = 4,
	E_META_WOODEN_SLAB_DARK_OAK      = 5,
	E_META_WOODEN_SLAB_UPSIDE_DOWN   = 8,

	// E_BLOCK_WOOL metas:
	E_META_WOOL_WHITE      = 0,
	E_META_WOOL_ORANGE     = 1,
	E_META_WOOL_MAGENTA    = 2,
	E_META_WOOL_LIGHTBLUE  = 3,
	E_META_WOOL_YELLOW     = 4,
	E_META_WOOL_LIGHTGREEN = 5,
	E_META_WOOL_PINK       = 6,
	E_META_WOOL_GRAY       = 7,
	E_META_WOOL_LIGHTGRAY  = 8,
	E_META_WOOL_CYAN       = 9,
	E_META_WOOL_PURPLE     = 10,
	E_META_WOOL_BLUE       = 11,
	E_META_WOOL_BROWN      = 12,
	E_META_WOOL_GREEN      = 13,
	E_META_WOOL_RED        = 14,
	E_META_WOOL_BLACK      = 15,
};





enum ENUM_ITEM_META : short
{
	// Please keep this list alpha-sorted by the itemtype part
	// then number-sorted for the same item

	////////////////////////////////////////////////////////////////////////////////
	// Item metas:

	// E_ITEM_BANNER metas:
	E_META_BANNER_BLACK      = 0,
	E_META_BANNER_RED        = 1,
	E_META_BANNER_GREEN      = 2,
	E_META_BANNER_BROWN      = 3,
	E_META_BANNER_BLUE       = 4,
	E_META_BANNER_PURPLE     = 5,
	E_META_BANNER_CYAN       = 6,
	E_META_BANNER_LIGHTGRAY  = 7,
	E_META_BANNER_GRAY       = 8,
	E_META_BANNER_PINK       = 9,
	E_META_BANNER_LIGHTGREEN = 10,
	E_META_BANNER_YELLOW     = 11,
	E_META_BANNER_LIGHTBLUE  = 12,
	E_META_BANNER_MAGENTA    = 13,
	E_META_BANNER_ORANGE     = 14,
	E_META_BANNER_WHITE      = 15,

	// E_ITEM_COAL metas:
	E_META_COAL_NORMAL    = 0,
	E_META_COAL_CHARCOAL  = 1,

	// E_ITEM_DYE metas:
	E_META_DYE_BLACK      = 0,
	E_META_DYE_RED        = 1,
	E_META_DYE_GREEN      = 2,
	E_META_DYE_BROWN      = 3,
	E_META_DYE_BLUE       = 4,
	E_META_DYE_PURPLE     = 5,
	E_META_DYE_CYAN       = 6,
	E_META_DYE_LIGHTGRAY  = 7,
	E_META_DYE_GRAY       = 8,
	E_META_DYE_PINK       = 9,
	E_META_DYE_LIGHTGREEN = 10,
	E_META_DYE_YELLOW     = 11,
	E_META_DYE_LIGHTBLUE  = 12,
	E_META_DYE_MAGENTA    = 13,
	E_META_DYE_ORANGE     = 14,
	E_META_DYE_WHITE      = 15,

	// E_ITEM_GOLDEN_APPLE metas:
	E_META_GOLDEN_APPLE_NORMAL = 0,
	E_META_GOLDEN_APPLE_ENCHANTED = 1,

	// E_ITEM_HEAD metas:
	E_META_HEAD_SKELETON = 0,
	E_META_HEAD_WITHER   = 1,
	E_META_HEAD_ZOMBIE   = 2,
	E_META_HEAD_PLAYER   = 3,
	E_META_HEAD_CREEPER  = 4,
	E_META_HEAD_DRAGON   = 5,

	// E_ITEM_RAW_FISH metas:
	E_META_RAW_FISH_FISH       = 0,
	E_META_RAW_FISH_SALMON     = 1,
	E_META_RAW_FISH_CLOWNFISH  = 2,
	E_META_RAW_FISH_PUFFERFISH = 3,

	// E_ITEM_COOKED_FISH metas:
	E_META_COOKED_FISH_FISH       = 0,
	E_META_COOKED_FISH_SALMON     = 1,

	// E_ITEM_MINECART_TRACKS metas:
	E_META_TRACKS_X = 1,
	E_META_TRACKS_Z = 0,

	// E_ITEM_SPAWN_EGG metas:
	// See also cMonster::eType, since monster type and spawn egg meta are the same
	E_META_SPAWN_EGG_PICKUP           = 1,
	E_META_SPAWN_EGG_EXPERIENCE_ORB   = 2,
	E_META_SPAWN_EGG_WITHER_SKELETON  = 5,
	E_META_SPAWN_EGG_LEASH_KNOT       = 8,
	E_META_SPAWN_EGG_PAINTING         = 9,
	E_META_SPAWN_EGG_ARROW            = 10,
	E_META_SPAWN_EGG_SNOWBALL         = 11,
	E_META_SPAWN_EGG_FIREBALL         = 12,
	E_META_SPAWN_EGG_SMALL_FIREBALL   = 13,
	E_META_SPAWN_EGG_ENDER_PEARL      = 14,
	E_META_SPAWN_EGG_EYE_OF_ENDER     = 15,
	E_META_SPAWN_EGG_SPLASH_POTION    = 16,
	E_META_SPAWN_EGG_EXP_BOTTLE       = 17,
	E_META_SPAWN_EGG_ITEM_FRAME       = 18,
	E_META_SPAWN_EGG_WITHER_SKULL     = 19,
	E_META_SPAWN_EGG_PRIMED_TNT       = 20,
	E_META_SPAWN_EGG_FALLING_BLOCK    = 21,
	E_META_SPAWN_EGG_FIREWORK         = 22,
	E_META_SPAWN_EGG_ZOMBIE_VILLAGER  = 27,
	E_META_SPAWN_EGG_BOAT             = 41,
	E_META_SPAWN_EGG_MINECART         = 42,
	E_META_SPAWN_EGG_MINECART_CHEST   = 43,
	E_META_SPAWN_EGG_MINECART_FURNACE = 44,
	E_META_SPAWN_EGG_MINECART_TNT     = 45,
	E_META_SPAWN_EGG_MINECART_HOPPER  = 46,
	E_META_SPAWN_EGG_MINECART_SPAWNER = 47,
	E_META_SPAWN_EGG_CREEPER          = 50,
	E_META_SPAWN_EGG_SKELETON         = 51,
	E_META_SPAWN_EGG_SPIDER           = 52,
	E_META_SPAWN_EGG_GIANT            = 53,
	E_META_SPAWN_EGG_ZOMBIE           = 54,
	E_META_SPAWN_EGG_SLIME            = 55,
	E_META_SPAWN_EGG_GHAST            = 56,
	E_META_SPAWN_EGG_ZOMBIE_PIGMAN    = 57,
	E_META_SPAWN_EGG_ENDERMAN         = 58,
	E_META_SPAWN_EGG_CAVE_SPIDER      = 59,
	E_META_SPAWN_EGG_SILVERFISH       = 60,
	E_META_SPAWN_EGG_BLAZE            = 61,
	E_META_SPAWN_EGG_MAGMA_CUBE       = 62,
	E_META_SPAWN_EGG_ENDER_DRAGON     = 63,
	E_META_SPAWN_EGG_WITHER           = 64,
	E_META_SPAWN_EGG_BAT              = 65,
	E_META_SPAWN_EGG_WITCH            = 66,
	E_META_SPAWN_EGG_ENDERMITE        = 67,
	E_META_SPAWN_EGG_GUARDIAN         = 68,
	E_META_SPAWN_EGG_PIG              = 90,
	E_META_SPAWN_EGG_SHEEP            = 91,
	E_META_SPAWN_EGG_COW              = 92,
	E_META_SPAWN_EGG_CHICKEN          = 93,
	E_META_SPAWN_EGG_SQUID            = 94,
	E_META_SPAWN_EGG_WOLF             = 95,
	E_META_SPAWN_EGG_MOOSHROOM        = 96,
	E_META_SPAWN_EGG_SNOW_GOLEM       = 97,
	E_META_SPAWN_EGG_OCELOT           = 98,
	E_META_SPAWN_EGG_IRON_GOLEM       = 99,
	E_META_SPAWN_EGG_HORSE            = 100,
	E_META_SPAWN_EGG_RABBIT           = 101,
	E_META_SPAWN_EGG_VILLAGER         = 120,
	E_META_SPAWN_EGG_ENDER_CRYSTAL    = 200,
} ;

// tolua_end




// fwd:
class cItem;
class cIniFile;





// tolua_begin

/** Translates a blocktype string into blocktype. Takes either a number or an items.ini alias as input. Returns -1 on failure. */
extern int BlockStringToType(const AString & a_BlockTypeString);

/** Translates an itemtype string into an item. Takes either a number, number^number, number:number or an items.ini alias as input. Returns true if successful. */
extern bool StringToItem(const AString & a_ItemTypeString, cItem & a_Item);

/** Translates a full item into a string. If the ItemType is not recognized, the ItemType number is output into the string. */
extern AString ItemToString(const cItem & a_Item);

/** Translates itemtype into a string. If the type is not recognized, the itemtype number is output into the string. */
extern AString ItemTypeToString(short a_ItemType);

/** Translates a full item into a fully-specified string (including meta and count). If the ItemType is not recognized, the ItemType number is output into the string. */
extern AString ItemToFullString(const cItem & a_Item);

/** Returns a cItem representing the item described in an IniFile's value; if the value doesn't exist, creates it with the provided default. */
extern cItem GetIniItemSet(cIniFile & a_IniFile, const char * a_Section, const char * a_Key, const char * a_Default);

// tolua_end
