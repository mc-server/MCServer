
#pragma once

#include "WorldStorage/WSSAnvilVersions/WSSAnvilHandler.h"

class cWSSAnvilHandler_1_8 :
	public cWSSAnvilHandler
{
	using Super = cWSSAnvilHandler;

public:

	using Super::Super;
	~cWSSAnvilHandler_1_8() override = default;

protected:

	bool LoadItem(cItem & a_Item, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadItemGrid(cItemGrid & a_ItemGrid, const cParsedNBT & a_NBT, int a_ItemsTagIdx, int s_SlotOffset = 0) const override;

	void LoadEntities(cEntityList & a_Entities, const cParsedNBT & a_NBT, const int a_TagIdx) const override;
	void LoadEntity(cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_EntityTagIdx, const std::string_view a_EntityName) const override;
	bool LoadEntityBase(cEntity & a_Entity, const cParsedNBT & a_NBT, int a_TagIdx) const override;

	void LoadBoat            (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadEndCrystal      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadFallingBlock    (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadExpOrb          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadHanging         (cHangingEntity & a_Hanging, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadItemFrame       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadLeashKnot       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadPainting        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadPickup          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadTNT             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;

	void LoadOldMinecart     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadRideableMinecart(cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadChestMinecart   (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadFurnaceMinecart (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadTNTMinecart     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadHopperMinecart  (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;

	bool LoadProjectileBase  (cProjectileEntity & a_Projectile, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadArrow           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadEgg             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadFireball        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadFireCharge      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSnowball        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSplashPotion    (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadThrownEnderPearl(cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;

	bool LoadMonsterBase     (cMonster & a_Monster, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadLeashToPosition (cMonster & a_Monster, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	std::pair<AString, cUUID> LoadEntityOwner(const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadBat             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadBlaze           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadCat             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadCat"); }
	void LoadCaveSpider      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadChicken         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadCod             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadCod"); }
	void LoadCow             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadCreeper         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadDolphin         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadDolphin"); }
	void LoadDonkey          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadDonkey"); }
	void LoadDrowned         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadDrowned"); }
	void LoadElderGuardian   (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadElderGuardian"); }
	void LoadEnderDragon     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadEnderman        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadEndermite       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadEndermite"); }
	void LoadEvoker          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadEvoker"); }
	void LoadFox             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadFox"); }
	void LoadGhast           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadGiant           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadGuardian        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadHorse           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadHoglin          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadHoglin"); }
	void LoadHusk            (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadHusk"); }
	void LoadIllusioner      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadIllusioner"); }
	void LoadIronGolem       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadLlama           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadLlama"); }
	void LoadMagmaCube       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadMooshroom       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadMule            (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadMule"); }
	void LoadOcelot          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadPanda           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPanda"); }
	void LoadParrot          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadParrot"); }
	void LoadPhantom         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPhantom"); }
	void LoadPig             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadPiglin          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPiglin"); }
	void LoadPiglinBrute     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPiglinBrute"); }
	void LoadPillager        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPillager"); }
	void LoadPolarBear       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPolarBear"); }
	void LoadPufferfish      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadPufferfish"); }
	void LoadRabbit          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadRavager         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadRavager"); }
	void LoadSalmon          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadSalmon"); }
	void LoadSheep           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadShulker         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadShulker"); }
	void LoadSilverfish      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSkeleton        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSkeletonHorse   (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadSkeletonHorse"); }
	void LoadSlime           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSnowGolem       (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSpider          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadSquid           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadStray           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadStray"); }
	void LoadStrider         (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadStrider"); }
	void LoadTraderLlama     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadTraderLlama"); }
	void LoadTropicalFish    (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadTropicalFish"); }
	void LoadTurtle          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadTurtle"); }
	void LoadVex             (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadVex"); }
	void LoadVillager        (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadVindicator      (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadVindicator"); }
	void LoadWanderingTrader (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadWanderingTrader"); }
	void LoadWitch           (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadWither          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadWitherSkeleton  (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadWolf            (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadZoglin          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadZoglin"); }
	void LoadZombie          (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadZombieHorse     (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override { Unimplemented("LoadZombieHorse"); }
	void LoadZombifiedPiglin (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;
	void LoadZombieVillager  (cEntityList & a_Entities, const cParsedNBT & a_NBT, int a_TagIdx) const override;

	bool GetBlockEntityNBTPos(const cParsedNBT & a_NBT, int a_TagIdx, Vector3i & a_AbsPos) const override;
	bool CheckBlockEntityType(const cParsedNBT & a_NBT, int a_TagIdx, const AStringVector & a_ExpectedTypes, Vector3i a_Pos) const override;
	void LoadBlockEntities(cBlockEntities & a_BlockEntities, const cParsedNBT & a_NBT, int a_Tag, const ChunkBlockData & a_BlockData, cWorld * a_World) const override;
	OwnedBlockEntity LoadBlockEntity(const cParsedNBT & a_NBT, int a_Tag, Vector3i a_Pos, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, cWorld * a_World) const override;
	virtual AString DecodeSignLine(const AString & a_Line) const override;

	OwnedBlockEntity LoadBanner           (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadBeacon           (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadBed              (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadBrewingstand     (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadChest            (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadCommandBlock     (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadDispenser        (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadDropper          (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadEnchantingTable  (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadEnderChest       (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadEndPortal        (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadFlowerPot        (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadFurnace          (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadHopper           (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadJukebox          (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadMobHead          (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadMobSpawner       (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadNoteBlock        (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;
	OwnedBlockEntity LoadSign             (const cParsedNBT & a_NBT, int a_TagIdx, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta, Vector3i a_Pos, cWorld * a_World) const override;

	bool LoadHeightMap(cChunkDef::HeightMap & a_HeightMap, const cParsedNBT & a_NBT, const int a_TagIdx) const override;
	bool LoadBiomeMap(cChunkDef::BiomeMap & a_BiomeMap, const cParsedNBT & a_NBT, const int a_TagIdx) const override;

};
