
#pragma once

#include "FunctionRef.h"
#include "../Mobs/MonsterTypes.h"

class cBedEntity;
class cBlockEntity;
class cBroadcastInterface;
class cItems;
class cPlayer;

using cBedCallback         = cFunctionRef<bool(cBedEntity   &)>;
using cBlockEntityCallback = cFunctionRef<bool(cBlockEntity &)>;
using cPlayerListCallback  = cFunctionRef<bool(cPlayer      &)>;




class cWorldInterface
{
public:
	virtual ~cWorldInterface() {}

	virtual int GetTimeOfDay(void) const = 0;
	virtual Int64 GetWorldAge(void)  const = 0;

	virtual eDimension GetDimension(void) const = 0;

	virtual cBroadcastInterface & GetBroadcastManager() = 0;

	virtual void DoExplosionAt(double a_ExplosionSize, double a_BlockX, double a_BlockY, double a_BlockZ, bool a_CanCauseFire, eExplosionSource a_Source, void * a_SourceData) = 0;

	virtual bool DoWithBedAt(int a_BlockX, int a_BlockY, int a_BlockZ, cBedCallback a_Callback) = 0;

	/** Calls the callback for the block entity at the specified coords; returns false if there's no block entity at those coords, true if found */
	virtual bool DoWithBlockEntityAt(int a_BlockX, int a_BlockY, int a_BlockZ, cBlockEntityCallback a_Callback) = 0;

	/** Spawns item pickups for each item in the list. May compress pickups if too many entities: */
	virtual void SpawnItemPickups(const cItems & a_Pickups, double a_BlockX, double a_BlockY, double a_BlockZ, double a_FlyAwaySpeed = 1.0, bool IsPlayerCreated = false) = 0;

	/** Spawns item pickups for each item in the list. May compress pickups if too many entities. All pickups get the speed specified. */
	virtual void SpawnItemPickups(const cItems & a_Pickups, double a_BlockX, double a_BlockY, double a_BlockZ, double a_SpeedX, double a_SpeedY, double a_SpeedZ, bool IsPlayerCreated = false) = 0;

	virtual UInt32 SpawnItemPickup(double a_PosX, double a_PosY, double a_PosZ, const cItem & a_Item, float a_SpeedX = 0.f, float a_SpeedY = 0.f, float a_SpeedZ = 0.f, int a_LifetimeTicks = 6000, bool a_CanCombine = true) = 0;

	/** Spawns a mob of the specified type.
	Returns the mob's UniqueID if recognized and spawned, or cEntity::INVALID_ID on failure. */
	virtual UInt32 SpawnMob(double a_PosX, double a_PosY, double a_PosZ, eMonsterType a_MonsterType, bool a_Baby) = 0;

	/** Spawns an experience orb at the given location with the given reward, by default split into multiple experience orbs if possible */
	virtual void SpawnExperienceOrb(double a_X, double a_Y, double a_Z, int a_Reward, bool a_Split = true) = 0;

	/** Sends the block on those coords to the player */
	virtual void SendBlockTo(int a_BlockX, int a_BlockY, int a_BlockZ, cPlayer & a_Player) = 0;

	/** Calls the callback for each player in the list; returns true if all players processed, false if the callback aborted by returning true */
	virtual bool ForEachPlayer(cPlayerListCallback a_Callback) = 0;

	/** Calls the callback for each entity that has a nonempty intersection with the specified boundingbox.
	Returns true if all entities processed, false if the callback aborted by returning true.
	If any chunk in the box is missing, ignores the entities in that chunk silently. */
	virtual bool ForEachEntityInBox(const cBoundingBox & a_Box, cEntityCallback a_Callback) = 0;

	virtual void SetTimeOfDay(int a_TimeOfDay) = 0;

	/** Returns true if it is raining or storming at the specified location. This takes into account biomes. */
	virtual bool IsWeatherWetAt(int a_BlockX, int a_BlockZ) = 0;

	/** Returns or sets the minumim or maximum netherportal width */
	virtual int GetMinNetherPortalWidth(void) const = 0;
	virtual int GetMaxNetherPortalWidth(void) const = 0;
	virtual void SetMinNetherPortalWidth(int a_NewMinWidth) = 0;
	virtual void SetMaxNetherPortalWidth(int a_NewMaxWidth) = 0;

	/** Returns or sets the minumim or maximum netherportal height */
	virtual int GetMinNetherPortalHeight(void) const = 0;
	virtual int GetMaxNetherPortalHeight(void) const = 0;
	virtual void SetMinNetherPortalHeight(int a_NewMinHeight) = 0;
	virtual void SetMaxNetherPortalHeight(int a_NewMaxHeight) = 0;

	/** Returns the world height at the specified coords; waits for the chunk to get loaded / generated */
	virtual int GetHeight(int a_BlockX, int a_BlockZ) = 0;

	/** Wakes up the simulators for the specified block */
	virtual void WakeUpSimulators(Vector3i a_Block) = 0;

};
