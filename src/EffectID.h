#pragma once

// tolua_begin

enum class EffectID : Int32
{
	SFX_RANDOM_DISPENSER_DISPENSE = 1000,
	SFX_RANDOM_DISPENSER_DISPENSE_FAIL = 1001,
	SFX_RANDOM_DISPENSER_SHOOT = 1002,
	SFX_RANDOM_ENDER_EYE_LAUNCH = 1003,
	SFX_RANDOM_FIREWORK_SHOT = 1004,
	SFX_RANDOM_IRON_DOOR_OPEN = 1005,
	SFX_RANDOM_WOODEN_DOOR_OPEN = 1006,
	SFX_RANDOM_WOODEN_TRAPDOOR_OPEN = 1007,
	SFX_RANDOM_FENCE_GATE_OPEN = 1008,
	SFX_RANDOM_FIRE_EXTINGUISH = 1009,
	SFX_RANDOM_PLAY_MUSIC_DISC = 1010,
	SFX_RANDOM_IRON_DOOR_CLOSE = 1011,
	SFX_RANDOM_WOODEN_DOOR_CLOSE = 1012,
	SFX_RANDOM_WOODEN_TRAPDOOR_CLOSE = 1013,
	SFX_RANDOM_FENCE_GATE_CLOSE = 1014,
	SFX_MOB_GHAST_WARN = 1015,
	SFX_MOB_GHAST_SHOOT = 1016,
	SFX_MOB_ENDERDRAGON_SHOOT = 1017,
	SFX_MOB_BLAZE_SHOOT = 1018,
	SFX_MOB_ZOMBIE_WOOD = 1019,
	SFX_MOB_ZOMBIE_METAL = 1020,
	SFX_MOB_ZOMBIE_WOOD_BREAK = 1021,
	SFX_MOB_WITHER_BREAK_BLOCK = 1022,
	SFX_MOB_WITHER_SPAWN = 1023,
	SFX_MOB_WITHER_SHOOT = 1024,
	SFX_MOB_BAT_TAKEOFF = 1025,
	SFX_MOB_ZOMBIE_INFECT = 1026,
	SFX_MOB_ZOMBIE_UNFECT = 1027,
	SFX_MOB_ENDERDRAGON_DEATH = 1028,
	SFX_RANDOM_ANVIL_BREAK = 1029,
	SFX_RANDOM_ANVIL_USE = 1030,
	SFX_RANDOM_ANVIL_LAND = 1031,
	SFX_RANDOM_PORTAL_TRAVEL = 1032,
	SFX_RANDOM_CHORUS_FLOWER_GROW = 1033,
	SFX_RANDOM_CHORUS_FLOWER_DEATH = 1034,
	SFX_RANDOM_BREWING_STAND_BREW = 1035,
	SFX_RANDOM_IRON_TRAPDOOR_OPEN = 1036,
	SFX_RANDOM_IRON_TRAPDOOR_CLOSE = 1037,

	PARTICLE_SMOKE = 2000,
	PARTICLE_BLOCK_BREAK = 2001,
	PARTICLE_SPLASH_POTION = 2002,
	PARTICLE_EYE_OF_ENDER = 2003,
	PARTICLE_MOBSPAWN = 2004,
	PARTICLE_HAPPY_VILLAGER = 2005,
	PARTICLE_DRAGON_BREATH = 2006,
	PARTICLE_END_GATEWAY_SPAWN = 3000,
	PARTICLE_ENDERDRAGON_GROWL = 3001,
};

enum class SmokeDirection : Int32
{
	SOUTH_EAST = 0,
	SOUTH = 1,
	SOUTH_WEST = 2,
	EAST = 3,
	CENTRE = 4,
	WEST = 5,
	NORTH_EAST = 6,
	NORTH = 7,
	NORTH_WEST = 8,
};

// tolua_end
