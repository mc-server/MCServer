#include "Globals.h"

#include "Upgrade.h"
#include "Registries/BlockStates.h"

namespace PaletteUpgrade
{
BlockState FromBlock(const BLOCKTYPE Block, const NIBBLETYPE Meta)
{
	using namespace Block;

	switch ((Block << 4) | Meta)
	{
		case (0 << 4) | 0:   return Air::Air();
		case (1 << 4) | 0:   return Stone::Stone();
		case (1 << 4) | 1:   return Granite::Granite();
		case (1 << 4) | 2:   return PolishedGranite::PolishedGranite();
		case (1 << 4) | 3:   return Diorite::Diorite();
		case (1 << 4) | 4:   return PolishedDiorite::PolishedDiorite();
		case (1 << 4) | 5:   return Andesite::Andesite();
		case (1 << 4) | 6:   return PolishedAndesite::PolishedAndesite();
		case (2 << 4) | 0:   return GrassBlock::GrassBlock(false);
		case (3 << 4) | 0:   return Dirt::Dirt();
		case (3 << 4) | 1:   return CoarseDirt::CoarseDirt();
		case (3 << 4) | 2:   return Podzol::Podzol(false);
		case (4 << 4) | 0:   return Cobblestone::Cobblestone();
		case (5 << 4) | 0:   return OakPlanks::OakPlanks();
		case (5 << 4) | 1:   return SprucePlanks::SprucePlanks();
		case (5 << 4) | 2:   return BirchPlanks::BirchPlanks();
		case (5 << 4) | 3:   return JunglePlanks::JunglePlanks();
		case (5 << 4) | 4:   return AcaciaPlanks::AcaciaPlanks();
		case (5 << 4) | 5:   return DarkOakPlanks::DarkOakPlanks();
		case (6 << 4) | 0:   return OakSapling::OakSapling(0);
		case (6 << 4) | 1:   return SpruceSapling::SpruceSapling(0);
		case (6 << 4) | 2:   return BirchSapling::BirchSapling(0);
		case (6 << 4) | 3:   return JungleSapling::JungleSapling(0);
		case (6 << 4) | 4:   return AcaciaSapling::AcaciaSapling(0);
		case (6 << 4) | 5:   return DarkOakSapling::DarkOakSapling(0);
		case (6 << 4) | 8:   return OakSapling::OakSapling(1);
		case (6 << 4) | 9:   return SpruceSapling::SpruceSapling(1);
		case (6 << 4) | 10:  return BirchSapling::BirchSapling(1);
		case (6 << 4) | 11:  return JungleSapling::JungleSapling(1);
		case (6 << 4) | 12:  return AcaciaSapling::AcaciaSapling(1);
		case (6 << 4) | 13:  return DarkOakSapling::DarkOakSapling(1);
		case (7 << 4) | 0:   return Bedrock::Bedrock();
		case (8 << 4) | 0:   return Water::Water(0);
		case (8 << 4) | 1:   return Water::Water(1);
		case (8 << 4) | 2:   return Water::Water(2);
		case (8 << 4) | 3:   return Water::Water(3);
		case (8 << 4) | 4:   return Water::Water(4);
		case (8 << 4) | 5:   return Water::Water(5);
		case (8 << 4) | 6:   return Water::Water(6);
		case (8 << 4) | 7:   return Water::Water(7);
		case (8 << 4) | 8:   return Water::Water(8);
		case (8 << 4) | 9:   return Water::Water(9);
		case (8 << 4) | 10:  return Water::Water(10);
		case (8 << 4) | 11:  return Water::Water(11);
		case (8 << 4) | 12:  return Water::Water(12);
		case (8 << 4) | 13:  return Water::Water(13);
		case (8 << 4) | 14:  return Water::Water(14);
		case (8 << 4) | 15:  return Water::Water(15);
		case (9 << 4) | 0:   return Water::Water(0);
		case (9 << 4) | 1:   return Water::Water(1);
		case (9 << 4) | 2:   return Water::Water(2);
		case (9 << 4) | 3:   return Water::Water(3);
		case (9 << 4) | 4:   return Water::Water(4);
		case (9 << 4) | 5:   return Water::Water(5);
		case (9 << 4) | 6:   return Water::Water(6);
		case (9 << 4) | 7:   return Water::Water(7);
		case (9 << 4) | 8:   return Water::Water(8);
		case (9 << 4) | 9:   return Water::Water(9);
		case (9 << 4) | 10:  return Water::Water(10);
		case (9 << 4) | 11:  return Water::Water(11);
		case (9 << 4) | 12:  return Water::Water(12);
		case (9 << 4) | 13:  return Water::Water(13);
		case (9 << 4) | 14:  return Water::Water(14);
		case (9 << 4) | 15:  return Water::Water(15);
		case (10 << 4) | 0:  return Lava::Lava(0);
		case (10 << 4) | 1:  return Lava::Lava(1);
		case (10 << 4) | 2:  return Lava::Lava(2);
		case (10 << 4) | 3:  return Lava::Lava(3);
		case (10 << 4) | 4:  return Lava::Lava(4);
		case (10 << 4) | 5:  return Lava::Lava(5);
		case (10 << 4) | 6:  return Lava::Lava(6);
		case (10 << 4) | 7:  return Lava::Lava(7);
		case (10 << 4) | 8:  return Lava::Lava(8);
		case (10 << 4) | 9:  return Lava::Lava(9);
		case (10 << 4) | 10: return Lava::Lava(10);
		case (10 << 4) | 11: return Lava::Lava(11);
		case (10 << 4) | 12: return Lava::Lava(12);
		case (10 << 4) | 13: return Lava::Lava(13);
		case (10 << 4) | 14: return Lava::Lava(14);
		case (10 << 4) | 15: return Lava::Lava(15);
		case (11 << 4) | 0:  return Lava::Lava(0);
		case (11 << 4) | 1:  return Lava::Lava(1);
		case (11 << 4) | 2:  return Lava::Lava(2);
		case (11 << 4) | 3:  return Lava::Lava(3);
		case (11 << 4) | 4:  return Lava::Lava(4);
		case (11 << 4) | 5:  return Lava::Lava(5);
		case (11 << 4) | 6:  return Lava::Lava(6);
		case (11 << 4) | 7:  return Lava::Lava(7);
		case (11 << 4) | 8:  return Lava::Lava(8);
		case (11 << 4) | 9:  return Lava::Lava(9);
		case (11 << 4) | 10: return Lava::Lava(10);
		case (11 << 4) | 11: return Lava::Lava(11);
		case (11 << 4) | 12: return Lava::Lava(12);
		case (11 << 4) | 13: return Lava::Lava(13);
		case (11 << 4) | 14: return Lava::Lava(14);
		case (11 << 4) | 15: return Lava::Lava(15);
		case (12 << 4) | 0:  return Sand::Sand();
		case (12 << 4) | 1:  return RedSand::RedSand();
		case (13 << 4) | 0:  return Gravel::Gravel();
		case (14 << 4) | 0:  return GoldOre::GoldOre();
		case (15 << 4) | 0:  return IronOre::IronOre();
		case (16 << 4) | 0:  return CoalOre::CoalOre();
		case (17 << 4) | 0:  return OakLog::OakLog(OakLog::Axis::Y);
		case (17 << 4) | 1:  return SpruceLog::SpruceLog(SpruceLog::Axis::Y);
		case (17 << 4) | 2:  return BirchLog::BirchLog(BirchLog::Axis::Y);
		case (17 << 4) | 3:  return JungleLog::JungleLog(JungleLog::Axis::Y);
		case (17 << 4) | 4:  return OakLog::OakLog(OakLog::Axis::X);
		case (17 << 4) | 5:  return SpruceLog::SpruceLog(SpruceLog::Axis::X);
		case (17 << 4) | 6:  return BirchLog::BirchLog(BirchLog::Axis::X);
		case (17 << 4) | 7:  return JungleLog::JungleLog(JungleLog::Axis::X);
		case (17 << 4) | 8:  return OakLog::OakLog(OakLog::Axis::Z);
		case (17 << 4) | 9:  return SpruceLog::SpruceLog(SpruceLog::Axis::Z);
		case (17 << 4) | 10: return BirchLog::BirchLog(BirchLog::Axis::Z);
		case (17 << 4) | 11: return JungleLog::JungleLog(JungleLog::Axis::Z);
		case (17 << 4) | 12: return OakWood::OakWood();
		case (17 << 4) | 13: return SpruceWood::SpruceWood();
		case (17 << 4) | 14: return BirchWood::BirchWood();
		case (17 << 4) | 15: return JungleWood::JungleWood();
		case (18 << 4) | 0:  return OakLeaves::OakLeaves(false, true);
		case (18 << 4) | 1:  return SpruceLeaves::SpruceLeaves(false, true);
		case (18 << 4) | 2:  return BirchLeaves::BirchLeaves(false, true);
		case (18 << 4) | 3:  return JungleLeaves::JungleLeaves(false, true);
		case (18 << 4) | 4:  return OakLeaves::OakLeaves(false, false);
		case (18 << 4) | 5:  return SpruceLeaves::SpruceLeaves(false, false);
		case (18 << 4) | 6:  return BirchLeaves::BirchLeaves(false, false);
		case (18 << 4) | 7:  return JungleLeaves::JungleLeaves(false, false);
		case (18 << 4) | 8:  return OakLeaves::OakLeaves(true, true);
		case (18 << 4) | 9:  return SpruceLeaves::SpruceLeaves(true, true);
		case (18 << 4) | 10: return BirchLeaves::BirchLeaves(true, true);
		case (18 << 4) | 11: return JungleLeaves::JungleLeaves(true, true);
		case (18 << 4) | 12: return OakLeaves::OakLeaves(true, false);
		case (18 << 4) | 13: return SpruceLeaves::SpruceLeaves(true, false);
		case (18 << 4) | 14: return BirchLeaves::BirchLeaves(true, false);
		case (18 << 4) | 15: return JungleLeaves::JungleLeaves(true, false);
		case (19 << 4) | 0:  return Sponge::Sponge();
		case (19 << 4) | 1:  return WetSponge::WetSponge();
		case (20 << 4) | 0:  return Glass::Glass();
		case (21 << 4) | 0:  return LapisOre::LapisOre();
		case (22 << 4) | 0:  return LapisBlock::LapisBlock();
		case (23 << 4) | 0:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YM, false);
		case (23 << 4) | 1:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YP, false);
		case (23 << 4) | 2:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZM, false);
		case (23 << 4) | 3:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZP, false);
		case (23 << 4) | 4:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XM, false);
		case (23 << 4) | 5:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XP, false);
		case (23 << 4) | 8:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YM, true);
		case (23 << 4) | 9:  return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YP, true);
		case (23 << 4) | 10: return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZM, true);
		case (23 << 4) | 11: return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZP, true);
		case (23 << 4) | 12: return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XM, true);
		case (23 << 4) | 13: return Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XP, true);
		case (24 << 4) | 0:  return Sandstone::Sandstone();
		case (24 << 4) | 1:  return ChiseledSandstone::ChiseledSandstone();
		case (24 << 4) | 2:  return CutSandstone::CutSandstone();
		case (25 << 4) | 0:  return NoteBlock::NoteBlock();
		case (26 << 4) | 0:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, false, RedBed::Part::Foot);
		case (26 << 4) | 1:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, false, RedBed::Part::Foot);
		case (26 << 4) | 2:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, false, RedBed::Part::Foot);
		case (26 << 4) | 3:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, false, RedBed::Part::Foot);
		case (26 << 4) | 8:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, false, RedBed::Part::Head);
		case (26 << 4) | 9:  return RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, false, RedBed::Part::Head);
		case (26 << 4) | 10: return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, false, RedBed::Part::Head);
		case (26 << 4) | 11: return RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, false, RedBed::Part::Head);
		case (26 << 4) | 12: return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, true, RedBed::Part::Head);
		case (26 << 4) | 13: return RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, true, RedBed::Part::Head);
		case (26 << 4) | 14: return RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, true, RedBed::Part::Head);
		case (26 << 4) | 15: return RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, true, RedBed::Part::Head);
		case (27 << 4) | 0:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::NorthSouth);
		case (27 << 4) | 1:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::EastWest);
		case (27 << 4) | 2:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingEast);
		case (27 << 4) | 3:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingWest);
		case (27 << 4) | 4:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingNorth);
		case (27 << 4) | 5:  return PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingSouth);
		case (27 << 4) | 8:  return PoweredRail::PoweredRail(true, PoweredRail::Shape::NorthSouth);
		case (27 << 4) | 9:  return PoweredRail::PoweredRail(true, PoweredRail::Shape::EastWest);
		case (27 << 4) | 10: return PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingEast);
		case (27 << 4) | 11: return PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingWest);
		case (27 << 4) | 12: return PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingNorth);
		case (27 << 4) | 13: return PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingSouth);
		case (28 << 4) | 0:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::NorthSouth);
		case (28 << 4) | 1:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::EastWest);
		case (28 << 4) | 2:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingEast);
		case (28 << 4) | 3:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingWest);
		case (28 << 4) | 4:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingNorth);
		case (28 << 4) | 5:  return DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingSouth);
		case (28 << 4) | 8:  return DetectorRail::DetectorRail(true, DetectorRail::Shape::NorthSouth);
		case (28 << 4) | 9:  return DetectorRail::DetectorRail(true, DetectorRail::Shape::EastWest);
		case (28 << 4) | 10: return DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingEast);
		case (28 << 4) | 11: return DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingWest);
		case (28 << 4) | 12: return DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingNorth);
		case (28 << 4) | 13: return DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingSouth);
		case (29 << 4) | 0:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_YM);
		case (29 << 4) | 1:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_YP);
		case (29 << 4) | 2:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_ZM);
		case (29 << 4) | 3:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_ZP);
		case (29 << 4) | 4:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_XM);
		case (29 << 4) | 5:  return StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_XP);
		case (29 << 4) | 8:  return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_YM);
		case (29 << 4) | 9:  return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_YP);
		case (29 << 4) | 10: return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_ZM);
		case (29 << 4) | 11: return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_ZP);
		case (29 << 4) | 12: return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_XM);
		case (29 << 4) | 13: return StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_XP);
		case (30 << 4) | 0:  return Cobweb::Cobweb();
		case (31 << 4) | 0:  return DeadBush::DeadBush();
		case (31 << 4) | 1:  return Grass::Grass();
		case (31 << 4) | 2:  return Fern::Fern();
		case (32 << 4) | 0:  return DeadBush::DeadBush();
		case (33 << 4) | 0:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_YM);
		case (33 << 4) | 1:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_YP);
		case (33 << 4) | 2:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_ZM);
		case (33 << 4) | 3:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_ZP);
		case (33 << 4) | 4:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_XM);
		case (33 << 4) | 5:  return Piston::Piston(false, eBlockFace::BLOCK_FACE_XP);
		case (33 << 4) | 8:  return Piston::Piston(true, eBlockFace::BLOCK_FACE_YM);
		case (33 << 4) | 9:  return Piston::Piston(true, eBlockFace::BLOCK_FACE_YP);
		case (33 << 4) | 10: return Piston::Piston(true, eBlockFace::BLOCK_FACE_ZM);
		case (33 << 4) | 11: return Piston::Piston(true, eBlockFace::BLOCK_FACE_ZP);
		case (33 << 4) | 12: return Piston::Piston(true, eBlockFace::BLOCK_FACE_XM);
		case (33 << 4) | 13: return Piston::Piston(true, eBlockFace::BLOCK_FACE_XP);
		case (34 << 4) | 0:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, false, PistonHead::Type::Normal);
		case (34 << 4) | 1:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, false, PistonHead::Type::Normal);
		case (34 << 4) | 2:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, false, PistonHead::Type::Normal);
		case (34 << 4) | 3:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, false, PistonHead::Type::Normal);
		case (34 << 4) | 4:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, false, PistonHead::Type::Normal);
		case (34 << 4) | 5:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, false, PistonHead::Type::Normal);
		case (34 << 4) | 8:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, false, PistonHead::Type::Sticky);
		case (34 << 4) | 9:  return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, false, PistonHead::Type::Sticky);
		case (34 << 4) | 10: return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, false, PistonHead::Type::Sticky);
		case (34 << 4) | 11: return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, false, PistonHead::Type::Sticky);
		case (34 << 4) | 12: return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, false, PistonHead::Type::Sticky);
		case (34 << 4) | 13: return PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, false, PistonHead::Type::Sticky);
		case (35 << 4) | 0:  return WhiteWool::WhiteWool();
		case (35 << 4) | 1:  return OrangeWool::OrangeWool();
		case (35 << 4) | 2:  return MagentaWool::MagentaWool();
		case (35 << 4) | 3:  return LightBlueWool::LightBlueWool();
		case (35 << 4) | 4:  return YellowWool::YellowWool();
		case (35 << 4) | 5:  return LimeWool::LimeWool();
		case (35 << 4) | 6:  return PinkWool::PinkWool();
		case (35 << 4) | 7:  return GrayWool::GrayWool();
		case (35 << 4) | 8:  return LightGrayWool::LightGrayWool();
		case (35 << 4) | 9:  return CyanWool::CyanWool();
		case (35 << 4) | 10: return PurpleWool::PurpleWool();
		case (35 << 4) | 11: return BlueWool::BlueWool();
		case (35 << 4) | 12: return BrownWool::BrownWool();
		case (35 << 4) | 13: return GreenWool::GreenWool();
		case (35 << 4) | 14: return RedWool::RedWool();
		case (35 << 4) | 15: return BlackWool::BlackWool();
		case (36 << 4) | 0:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YM, MovingPiston::Type::Normal);
		case (36 << 4) | 1:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YP, MovingPiston::Type::Normal);
		case (36 << 4) | 2:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZM, MovingPiston::Type::Normal);
		case (36 << 4) | 3:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZP, MovingPiston::Type::Normal);
		case (36 << 4) | 4:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XM, MovingPiston::Type::Normal);
		case (36 << 4) | 5:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XP, MovingPiston::Type::Normal);
		case (36 << 4) | 8:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YM, MovingPiston::Type::Sticky);
		case (36 << 4) | 9:  return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YP, MovingPiston::Type::Sticky);
		case (36 << 4) | 10: return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZM, MovingPiston::Type::Sticky);
		case (36 << 4) | 11: return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZP, MovingPiston::Type::Sticky);
		case (36 << 4) | 12: return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XM, MovingPiston::Type::Sticky);
		case (36 << 4) | 13: return MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XP, MovingPiston::Type::Sticky);
		case (37 << 4) | 0:  return Dandelion::Dandelion();
		case (38 << 4) | 0:  return Poppy::Poppy();
		case (38 << 4) | 1:  return BlueOrchid::BlueOrchid();
		case (38 << 4) | 2:  return Allium::Allium();
		case (38 << 4) | 3:  return AzureBluet::AzureBluet();
		case (38 << 4) | 4:  return RedTulip::RedTulip();
		case (38 << 4) | 5:  return OrangeTulip::OrangeTulip();
		case (38 << 4) | 6:  return WhiteTulip::WhiteTulip();
		case (38 << 4) | 7:  return PinkTulip::PinkTulip();
		case (38 << 4) | 8:  return OxeyeDaisy::OxeyeDaisy();
		case (39 << 4) | 0:  return BrownMushroom::BrownMushroom();
		case (40 << 4) | 0:  return RedMushroom::RedMushroom();
		case (41 << 4) | 0:  return GoldBlock::GoldBlock();
		case (42 << 4) | 0:  return IronBlock::IronBlock();
		case (43 << 4) | 0:  return StoneSlab::StoneSlab(StoneSlab::Type::Double);
		case (43 << 4) | 1:  return SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Double);
		case (43 << 4) | 2:  return PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Double);
		case (43 << 4) | 3:  return CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Double);
		case (43 << 4) | 4:  return BrickSlab::BrickSlab(BrickSlab::Type::Double);
		case (43 << 4) | 5:  return StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Double);
		case (43 << 4) | 6:  return NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Double);
		case (43 << 4) | 7:  return QuartzSlab::QuartzSlab(QuartzSlab::Type::Double);
		case (43 << 4) | 8:  return SmoothStone::SmoothStone();
		case (43 << 4) | 9:  return SmoothSandstone::SmoothSandstone();
		case (43 << 4) | 10: return PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Double);
		case (43 << 4) | 11: return CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Double);
		case (43 << 4) | 12: return BrickSlab::BrickSlab(BrickSlab::Type::Double);
		case (43 << 4) | 13: return StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Double);
		case (43 << 4) | 14: return NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Double);
		case (43 << 4) | 15: return SmoothQuartz::SmoothQuartz();
		case (44 << 4) | 0:  return StoneSlab::StoneSlab(StoneSlab::Type::Bottom);
		case (44 << 4) | 1:  return SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Bottom);
		case (44 << 4) | 2:  return PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Bottom);
		case (44 << 4) | 3:  return CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Bottom);
		case (44 << 4) | 4:  return BrickSlab::BrickSlab(BrickSlab::Type::Bottom);
		case (44 << 4) | 5:  return StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Bottom);
		case (44 << 4) | 6:  return NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Bottom);
		case (44 << 4) | 7:  return QuartzSlab::QuartzSlab(QuartzSlab::Type::Bottom);
		case (44 << 4) | 8:  return StoneSlab::StoneSlab(StoneSlab::Type::Top);
		case (44 << 4) | 9:  return SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Top);
		case (44 << 4) | 10: return PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Top);
		case (44 << 4) | 11: return CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Top);
		case (44 << 4) | 12: return BrickSlab::BrickSlab(BrickSlab::Type::Top);
		case (44 << 4) | 13: return StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Top);
		case (44 << 4) | 14: return NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Top);
		case (44 << 4) | 15: return QuartzSlab::QuartzSlab(QuartzSlab::Type::Top);
		case (45 << 4) | 0:  return Bricks::Bricks();
		case (46 << 4) | 0:  return TNT::TNT(false);
		case (46 << 4) | 1:  return TNT::TNT(true);
		case (47 << 4) | 0:  return Bookshelf::Bookshelf();
		case (48 << 4) | 0:  return MossyCobblestone::MossyCobblestone();
		case (49 << 4) | 0:  return Obsidian::Obsidian();
		case (50 << 4) | 1:  return WallTorch::WallTorch(eBlockFace::BLOCK_FACE_XP);
		case (50 << 4) | 2:  return WallTorch::WallTorch(eBlockFace::BLOCK_FACE_XM);
		case (50 << 4) | 3:  return WallTorch::WallTorch(eBlockFace::BLOCK_FACE_ZP);
		case (50 << 4) | 4:  return WallTorch::WallTorch(eBlockFace::BLOCK_FACE_ZM);
		case (50 << 4) | 5:  return Torch::Torch();
		case (51 << 4) | 0:  return Fire::Fire(0, false, false, false, false, false);
		case (51 << 4) | 1:  return Fire::Fire(1, false, false, false, false, false);
		case (51 << 4) | 2:  return Fire::Fire(2, false, false, false, false, false);
		case (51 << 4) | 3:  return Fire::Fire(3, false, false, false, false, false);
		case (51 << 4) | 4:  return Fire::Fire(4, false, false, false, false, false);
		case (51 << 4) | 5:  return Fire::Fire(5, false, false, false, false, false);
		case (51 << 4) | 6:  return Fire::Fire(6, false, false, false, false, false);
		case (51 << 4) | 7:  return Fire::Fire(7, false, false, false, false, false);
		case (51 << 4) | 8:  return Fire::Fire(8, false, false, false, false, false);
		case (51 << 4) | 9:  return Fire::Fire(9, false, false, false, false, false);
		case (51 << 4) | 10: return Fire::Fire(10, false, false, false, false, false);
		case (51 << 4) | 11: return Fire::Fire(11, false, false, false, false, false);
		case (51 << 4) | 12: return Fire::Fire(12, false, false, false, false, false);
		case (51 << 4) | 13: return Fire::Fire(13, false, false, false, false, false);
		case (51 << 4) | 14: return Fire::Fire(14, false, false, false, false, false);
		case (51 << 4) | 15: return Fire::Fire(15, false, false, false, false, false);
		case (52 << 4) | 0:  return Spawner::Spawner();
		case (53 << 4) | 0:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::Straight);
		case (53 << 4) | 1:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::Straight);
		case (53 << 4) | 2:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::Straight);
		case (53 << 4) | 3:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::Straight);
		case (53 << 4) | 4:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::Straight);
		case (53 << 4) | 5:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::Straight);
		case (53 << 4) | 6:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::Straight);
		case (53 << 4) | 7:
			return OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::Straight);
		case (54 << 4) | 2: return Chest::Chest(eBlockFace::BLOCK_FACE_ZM, Chest::Type::Single);
		case (54 << 4) | 3: return Chest::Chest(eBlockFace::BLOCK_FACE_ZP, Chest::Type::Single);
		case (54 << 4) | 4: return Chest::Chest(eBlockFace::BLOCK_FACE_XM, Chest::Type::Single);
		case (54 << 4) | 5: return Chest::Chest(eBlockFace::BLOCK_FACE_XP, Chest::Type::Single);
		case (55 << 4) | 0:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				0,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 1:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				1,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 2:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				2,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 3:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				3,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 4:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				4,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 5:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				5,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 6:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				6,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 7:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				7,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 8:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				8,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 9:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				9,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 10:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				10,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 11:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				11,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 12:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				12,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 13:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				13,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 14:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				14,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (55 << 4) | 15:
			return RedstoneWire::RedstoneWire(
				RedstoneWire::East::None,
				RedstoneWire::North::None,
				15,
				RedstoneWire::South::None,
				RedstoneWire::West::None
			);
		case (56 << 4) | 0:  return DiamondOre::DiamondOre();
		case (57 << 4) | 0:  return DiamondBlock::DiamondBlock();
		case (58 << 4) | 0:  return CraftingTable::CraftingTable();
		case (59 << 4) | 0:  return Wheat::Wheat(0);
		case (59 << 4) | 1:  return Wheat::Wheat(1);
		case (59 << 4) | 2:  return Wheat::Wheat(2);
		case (59 << 4) | 3:  return Wheat::Wheat(3);
		case (59 << 4) | 4:  return Wheat::Wheat(4);
		case (59 << 4) | 5:  return Wheat::Wheat(5);
		case (59 << 4) | 6:  return Wheat::Wheat(6);
		case (59 << 4) | 7:  return Wheat::Wheat(7);
		case (60 << 4) | 0:  return Farmland::Farmland(0);
		case (60 << 4) | 1:  return Farmland::Farmland(1);
		case (60 << 4) | 2:  return Farmland::Farmland(2);
		case (60 << 4) | 3:  return Farmland::Farmland(3);
		case (60 << 4) | 4:  return Farmland::Farmland(4);
		case (60 << 4) | 5:  return Farmland::Farmland(5);
		case (60 << 4) | 6:  return Farmland::Farmland(6);
		case (60 << 4) | 7:  return Farmland::Farmland(7);
		case (61 << 4) | 2:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_ZM, false);
		case (61 << 4) | 3:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_ZP, false);
		case (61 << 4) | 4:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_XM, false);
		case (61 << 4) | 5:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_XP, false);
		case (62 << 4) | 2:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_ZM, true);
		case (62 << 4) | 3:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_ZP, true);
		case (62 << 4) | 4:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_XM, true);
		case (62 << 4) | 5:  return Furnace::Furnace(eBlockFace::BLOCK_FACE_XP, true);
		case (63 << 4) | 0:  return OakSign::OakSign(0);
		case (63 << 4) | 1:  return OakSign::OakSign(1);
		case (63 << 4) | 2:  return OakSign::OakSign(2);
		case (63 << 4) | 3:  return OakSign::OakSign(3);
		case (63 << 4) | 4:  return OakSign::OakSign(4);
		case (63 << 4) | 5:  return OakSign::OakSign(5);
		case (63 << 4) | 6:  return OakSign::OakSign(6);
		case (63 << 4) | 7:  return OakSign::OakSign(7);
		case (63 << 4) | 8:  return OakSign::OakSign(8);
		case (63 << 4) | 9:  return OakSign::OakSign(9);
		case (63 << 4) | 10: return OakSign::OakSign(10);
		case (63 << 4) | 11: return OakSign::OakSign(11);
		case (63 << 4) | 12: return OakSign::OakSign(12);
		case (63 << 4) | 13: return OakSign::OakSign(13);
		case (63 << 4) | 14: return OakSign::OakSign(14);
		case (63 << 4) | 15: return OakSign::OakSign(15);
		case (64 << 4) | 0:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XP,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				false,
				false
			);
		case (64 << 4) | 1:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_ZP,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				false,
				false
			);
		case (64 << 4) | 2:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XM,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				false,
				false
			);
		case (64 << 4) | 3:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_ZM,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				false,
				false
			);
		case (64 << 4) | 4:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XP,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				true,
				false
			);
		case (64 << 4) | 5:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_ZP,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				true,
				false
			);
		case (64 << 4) | 6:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XM,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				true,
				false
			);
		case (64 << 4) | 7:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_ZM,
				OakDoor::Half::Lower,
				OakDoor::Hinge::Right,
				true,
				false
			);
		case (64 << 4) | 8:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XP,
				OakDoor::Half::Upper,
				OakDoor::Hinge::Left,
				false,
				false
			);
		case (64 << 4) | 9:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XP,
				OakDoor::Half::Upper,
				OakDoor::Hinge::Right,
				false,
				false
			);
		case (64 << 4) | 10:
			return OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, true);
		case (64 << 4) | 11:
			return OakDoor::OakDoor(
				eBlockFace::BLOCK_FACE_XP,
				OakDoor::Half::Upper,
				OakDoor::Hinge::Right,
				false,
				true
			);
		case (64 << 4) | 12:
			return OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false);
		case (64 << 4) | 13:
			return OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false);
		case (64 << 4) | 14:
			return OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false);
		case (64 << 4) | 15:
			return OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false);
		case (65 << 4) | 2: return Ladder::Ladder(eBlockFace::BLOCK_FACE_ZM);
		case (65 << 4) | 3: return Ladder::Ladder(eBlockFace::BLOCK_FACE_ZP);
		case (65 << 4) | 4: return Ladder::Ladder(eBlockFace::BLOCK_FACE_XM);
		case (65 << 4) | 5: return Ladder::Ladder(eBlockFace::BLOCK_FACE_XP);
		case (66 << 4) | 0: return Rail::Rail(Rail::Shape::NorthSouth);
		case (66 << 4) | 1: return Rail::Rail(Rail::Shape::EastWest);
		case (66 << 4) | 2: return Rail::Rail(Rail::Shape::AscendingEast);
		case (66 << 4) | 3: return Rail::Rail(Rail::Shape::AscendingWest);
		case (66 << 4) | 4: return Rail::Rail(Rail::Shape::AscendingNorth);
		case (66 << 4) | 5: return Rail::Rail(Rail::Shape::AscendingSouth);
		case (66 << 4) | 6: return Rail::Rail(Rail::Shape::SouthEast);
		case (66 << 4) | 7: return Rail::Rail(Rail::Shape::SouthWest);
		case (66 << 4) | 8: return Rail::Rail(Rail::Shape::NorthWest);
		case (66 << 4) | 9: return Rail::Rail(Rail::Shape::NorthEast);
		case (67 << 4) | 0:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				CobblestoneStairs::Half::Bottom,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 1:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				CobblestoneStairs::Half::Bottom,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 2:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				CobblestoneStairs::Half::Bottom,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 3:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				CobblestoneStairs::Half::Bottom,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 4:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				CobblestoneStairs::Half::Top,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 5:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				CobblestoneStairs::Half::Top,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 6:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				CobblestoneStairs::Half::Top,
				CobblestoneStairs::Shape::Straight
			);
		case (67 << 4) | 7:
			return CobblestoneStairs::CobblestoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				CobblestoneStairs::Half::Top,
				CobblestoneStairs::Shape::Straight
			);
		case (68 << 4) | 2:  return OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_ZM);
		case (68 << 4) | 3:  return OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_ZP);
		case (68 << 4) | 4:  return OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_XM);
		case (68 << 4) | 5:  return OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_XP);
		case (69 << 4) | 0:  return Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false);
		case (69 << 4) | 1:  return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XP, false);
		case (69 << 4) | 2:  return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XM, false);
		case (69 << 4) | 3:  return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false);
		case (69 << 4) | 4:  return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false);
		case (69 << 4) | 5:  return Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false);
		case (69 << 4) | 6:  return Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XM, false);
		case (69 << 4) | 7:  return Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false);
		case (69 << 4) | 8:  return Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true);
		case (69 << 4) | 9:  return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XP, true);
		case (69 << 4) | 10: return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XM, true);
		case (69 << 4) | 11: return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true);
		case (69 << 4) | 12: return Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true);
		case (69 << 4) | 13: return Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true);
		case (69 << 4) | 14: return Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XM, true);
		case (69 << 4) | 15: return Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true);
		case (70 << 4) | 0:  return StonePressurePlate::StonePressurePlate(false);
		case (70 << 4) | 1:  return StonePressurePlate::StonePressurePlate(true);
		case (71 << 4) | 0:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				false,
				false
			);
		case (71 << 4) | 1:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZP,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				false,
				false
			);
		case (71 << 4) | 2:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XM,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				false,
				false
			);
		case (71 << 4) | 3:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZM,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				false,
				false
			);
		case (71 << 4) | 4:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				true,
				false
			);
		case (71 << 4) | 5:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZP,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				true,
				false
			);
		case (71 << 4) | 6:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XM,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				true,
				false
			);
		case (71 << 4) | 7:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZM,
				IronDoor::Half::Lower,
				IronDoor::Hinge::Right,
				true,
				false
			);
		case (71 << 4) | 8:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				false,
				false
			);
		case (71 << 4) | 9:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Right,
				false,
				false
			);
		case (71 << 4) | 10:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				false,
				true
			);
		case (71 << 4) | 11:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Right,
				false,
				true
			);
		case (71 << 4) | 12:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				true,
				false
			);
		case (71 << 4) | 13:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZP,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				true,
				false
			);
		case (71 << 4) | 14:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_XM,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				true,
				false
			);
		case (71 << 4) | 15:
			return IronDoor::IronDoor(
				eBlockFace::BLOCK_FACE_ZM,
				IronDoor::Half::Upper,
				IronDoor::Hinge::Left,
				true,
				false
			);
		case (72 << 4) | 0: return OakPressurePlate::OakPressurePlate(false);
		case (72 << 4) | 1: return OakPressurePlate::OakPressurePlate(true);
		case (73 << 4) | 0: return RedstoneOre::RedstoneOre(false);
		case (74 << 4) | 0: return RedstoneOre::RedstoneOre(true);
		case (75 << 4) | 1: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XP, false);
		case (75 << 4) | 2: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XM, false);
		case (75 << 4) | 3: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZP, false);
		case (75 << 4) | 4: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZM, false);
		case (75 << 4) | 5: return RedstoneTorch::RedstoneTorch(false);
		case (76 << 4) | 1: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XP, true);
		case (76 << 4) | 2: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XM, true);
		case (76 << 4) | 3: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZP, true);
		case (76 << 4) | 4: return RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZM, true);
		case (76 << 4) | 5: return RedstoneTorch::RedstoneTorch(true);
		case (77 << 4) | 0:
			return StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false);
		case (77 << 4) | 1: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false);
		case (77 << 4) | 2: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false);
		case (77 << 4) | 3: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false);
		case (77 << 4) | 4: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false);
		case (77 << 4) | 5: return StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false);
		case (77 << 4) | 8:
			return StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true);
		case (77 << 4) | 9:  return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true);
		case (77 << 4) | 10: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true);
		case (77 << 4) | 11: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true);
		case (77 << 4) | 12: return StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true);
		case (77 << 4) | 13: return StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true);
		case (78 << 4) | 0:  return Snow::Snow(1);
		case (78 << 4) | 1:  return Snow::Snow(2);
		case (78 << 4) | 2:  return Snow::Snow(3);
		case (78 << 4) | 3:  return Snow::Snow(4);
		case (78 << 4) | 4:  return Snow::Snow(5);
		case (78 << 4) | 5:  return Snow::Snow(6);
		case (78 << 4) | 6:  return Snow::Snow(7);
		case (78 << 4) | 7:  return Snow::Snow(8);
		case (79 << 4) | 0:  return Ice::Ice();
		case (80 << 4) | 0:  return SnowBlock::SnowBlock();
		case (81 << 4) | 0:  return Cactus::Cactus(0);
		case (81 << 4) | 1:  return Cactus::Cactus(1);
		case (81 << 4) | 2:  return Cactus::Cactus(2);
		case (81 << 4) | 3:  return Cactus::Cactus(3);
		case (81 << 4) | 4:  return Cactus::Cactus(4);
		case (81 << 4) | 5:  return Cactus::Cactus(5);
		case (81 << 4) | 6:  return Cactus::Cactus(6);
		case (81 << 4) | 7:  return Cactus::Cactus(7);
		case (81 << 4) | 8:  return Cactus::Cactus(8);
		case (81 << 4) | 9:  return Cactus::Cactus(9);
		case (81 << 4) | 10: return Cactus::Cactus(10);
		case (81 << 4) | 11: return Cactus::Cactus(11);
		case (81 << 4) | 12: return Cactus::Cactus(12);
		case (81 << 4) | 13: return Cactus::Cactus(13);
		case (81 << 4) | 14: return Cactus::Cactus(14);
		case (81 << 4) | 15: return Cactus::Cactus(15);
		case (82 << 4) | 0:  return Clay::Clay();
		case (83 << 4) | 0:  return SugarCane::SugarCane(0);
		case (83 << 4) | 1:  return SugarCane::SugarCane(1);
		case (83 << 4) | 2:  return SugarCane::SugarCane(2);
		case (83 << 4) | 3:  return SugarCane::SugarCane(3);
		case (83 << 4) | 4:  return SugarCane::SugarCane(4);
		case (83 << 4) | 5:  return SugarCane::SugarCane(5);
		case (83 << 4) | 6:  return SugarCane::SugarCane(6);
		case (83 << 4) | 7:  return SugarCane::SugarCane(7);
		case (83 << 4) | 8:  return SugarCane::SugarCane(8);
		case (83 << 4) | 9:  return SugarCane::SugarCane(9);
		case (83 << 4) | 10: return SugarCane::SugarCane(10);
		case (83 << 4) | 11: return SugarCane::SugarCane(11);
		case (83 << 4) | 12: return SugarCane::SugarCane(12);
		case (83 << 4) | 13: return SugarCane::SugarCane(13);
		case (83 << 4) | 14: return SugarCane::SugarCane(14);
		case (83 << 4) | 15: return SugarCane::SugarCane(15);
		case (84 << 4) | 0:  return Jukebox::Jukebox(false);
		case (84 << 4) | 1:  return Jukebox::Jukebox(true);
		case (85 << 4) | 0:  return OakFence::OakFence(false, false, false, false);
		case (86 << 4) | 0:  return CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_ZP);
		case (86 << 4) | 1:  return CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_XM);
		case (86 << 4) | 2:  return CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_ZM);
		case (86 << 4) | 3:  return CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_XP);
		case (87 << 4) | 0:  return Netherrack::Netherrack();
		case (88 << 4) | 0:  return SoulSand::SoulSand();
		case (89 << 4) | 0:  return Glowstone::Glowstone();
		case (90 << 4) | 1:  return NetherPortal::NetherPortal(NetherPortal::Axis::X);
		case (90 << 4) | 2:  return NetherPortal::NetherPortal(NetherPortal::Axis::Z);
		case (91 << 4) | 0:  return JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_ZP);
		case (91 << 4) | 1:  return JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_XM);
		case (91 << 4) | 2:  return JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_ZM);
		case (91 << 4) | 3:  return JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_XP);
		case (92 << 4) | 0:  return Cake::Cake(0);
		case (92 << 4) | 1:  return Cake::Cake(1);
		case (92 << 4) | 2:  return Cake::Cake(2);
		case (92 << 4) | 3:  return Cake::Cake(3);
		case (92 << 4) | 4:  return Cake::Cake(4);
		case (92 << 4) | 5:  return Cake::Cake(5);
		case (92 << 4) | 6:  return Cake::Cake(6);
		case (93 << 4) | 0:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, false, false);
		case (93 << 4) | 1:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, false, false);
		case (93 << 4) | 2:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, false, false);
		case (93 << 4) | 3:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, false, false);
		case (93 << 4) | 4:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, false, false);
		case (93 << 4) | 5:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, false, false);
		case (93 << 4) | 6:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, false, false);
		case (93 << 4) | 7:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, false, false);
		case (93 << 4) | 8:  return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, false, false);
		case (93 << 4) | 9:  return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, false, false);
		case (93 << 4) | 10: return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, false, false);
		case (93 << 4) | 11: return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, false, false);
		case (93 << 4) | 12: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, false, false);
		case (93 << 4) | 13: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, false, false);
		case (93 << 4) | 14: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, false, false);
		case (93 << 4) | 15: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, false, false);
		case (94 << 4) | 0:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, false, true);
		case (94 << 4) | 1:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, false, true);
		case (94 << 4) | 2:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, false, true);
		case (94 << 4) | 3:  return Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, false, true);
		case (94 << 4) | 4:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, false, true);
		case (94 << 4) | 5:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, false, true);
		case (94 << 4) | 6:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, false, true);
		case (94 << 4) | 7:  return Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, false, true);
		case (94 << 4) | 8:  return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, false, true);
		case (94 << 4) | 9:  return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, false, true);
		case (94 << 4) | 10: return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, false, true);
		case (94 << 4) | 11: return Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, false, true);
		case (94 << 4) | 12: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, false, true);
		case (94 << 4) | 13: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, false, true);
		case (94 << 4) | 14: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, false, true);
		case (94 << 4) | 15: return Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, false, true);
		case (95 << 4) | 0:  return WhiteStainedGlass::WhiteStainedGlass();
		case (95 << 4) | 1:  return OrangeStainedGlass::OrangeStainedGlass();
		case (95 << 4) | 2:  return MagentaStainedGlass::MagentaStainedGlass();
		case (95 << 4) | 3:  return LightBlueStainedGlass::LightBlueStainedGlass();
		case (95 << 4) | 4:  return YellowStainedGlass::YellowStainedGlass();
		case (95 << 4) | 5:  return LimeStainedGlass::LimeStainedGlass();
		case (95 << 4) | 6:  return PinkStainedGlass::PinkStainedGlass();
		case (95 << 4) | 7:  return GrayStainedGlass::GrayStainedGlass();
		case (95 << 4) | 8:  return LightGrayStainedGlass::LightGrayStainedGlass();
		case (95 << 4) | 9:  return CyanStainedGlass::CyanStainedGlass();
		case (95 << 4) | 10: return PurpleStainedGlass::PurpleStainedGlass();
		case (95 << 4) | 11: return BlueStainedGlass::BlueStainedGlass();
		case (95 << 4) | 12: return BrownStainedGlass::BrownStainedGlass();
		case (95 << 4) | 13: return GreenStainedGlass::GreenStainedGlass();
		case (95 << 4) | 14: return RedStainedGlass::RedStainedGlass();
		case (95 << 4) | 15: return BlackStainedGlass::BlackStainedGlass();
		case (96 << 4) | 0:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, false, false);
		case (96 << 4) | 1:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, false, false);
		case (96 << 4) | 2:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, false, false);
		case (96 << 4) | 3:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, false, false);
		case (96 << 4) | 4:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, true, false);
		case (96 << 4) | 5:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, true, false);
		case (96 << 4) | 6:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, true, false);
		case (96 << 4) | 7:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, true, false);
		case (96 << 4) | 8:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, false, false);
		case (96 << 4) | 9:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, false, false);
		case (96 << 4) | 10:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, false, false);
		case (96 << 4) | 11:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, false, false);
		case (96 << 4) | 12:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, true, false);
		case (96 << 4) | 13:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, true, false);
		case (96 << 4) | 14:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, true, false);
		case (96 << 4) | 15:
			return OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, true, false);
		case (97 << 4) | 0:   return InfestedStone::InfestedStone();
		case (97 << 4) | 1:   return InfestedCobblestone::InfestedCobblestone();
		case (97 << 4) | 2:   return InfestedStoneBricks::InfestedStoneBricks();
		case (97 << 4) | 3:   return InfestedMossyStoneBricks::InfestedMossyStoneBricks();
		case (97 << 4) | 4:   return InfestedCrackedStoneBricks::InfestedCrackedStoneBricks();
		case (97 << 4) | 5:   return InfestedChiseledStoneBricks::InfestedChiseledStoneBricks();
		case (98 << 4) | 0:   return StoneBricks::StoneBricks();
		case (98 << 4) | 1:   return MossyStoneBricks::MossyStoneBricks();
		case (98 << 4) | 2:   return CrackedStoneBricks::CrackedStoneBricks();
		case (98 << 4) | 3:   return ChiseledStoneBricks::ChiseledStoneBricks();
		case (99 << 4) | 0:   return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, false);
		case (99 << 4) | 1:   return BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, true, true);
		case (99 << 4) | 2:   return BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, true, false);
		case (99 << 4) | 3:   return BrownMushroomBlock::BrownMushroomBlock(false, true, true, false, true, false);
		case (99 << 4) | 4:   return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, true, true);
		case (99 << 4) | 5:   return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, true, false);
		case (99 << 4) | 6:   return BrownMushroomBlock::BrownMushroomBlock(false, true, false, false, true, false);
		case (99 << 4) | 7:   return BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, true, true);
		case (99 << 4) | 8:   return BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, true, false);
		case (99 << 4) | 9:   return BrownMushroomBlock::BrownMushroomBlock(false, true, false, true, true, false);
		case (99 << 4) | 10:  return MushroomStem::MushroomStem(false, true, true, true, false, true);
		case (99 << 4) | 11:  return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, false);
		case (99 << 4) | 12:  return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, false);
		case (99 << 4) | 13:  return BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, false);
		case (99 << 4) | 14:  return BrownMushroomBlock::BrownMushroomBlock(true, true, true, true, true, true);
		case (99 << 4) | 15:  return MushroomStem::MushroomStem(true, true, true, true, true, true);
		case (100 << 4) | 0:  return RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, false);
		case (100 << 4) | 1:  return RedMushroomBlock::RedMushroomBlock(false, false, true, false, true, true);
		case (100 << 4) | 2:  return RedMushroomBlock::RedMushroomBlock(false, false, true, false, true, false);
		case (100 << 4) | 3:  return RedMushroomBlock::RedMushroomBlock(false, true, true, false, true, false);
		case (100 << 4) | 4:  return RedMushroomBlock::RedMushroomBlock(false, false, false, false, true, true);
		case (100 << 4) | 5:  return RedMushroomBlock::RedMushroomBlock(false, false, false, false, true, false);
		case (100 << 4) | 6:  return RedMushroomBlock::RedMushroomBlock(false, true, false, false, true, false);
		case (100 << 4) | 7:  return RedMushroomBlock::RedMushroomBlock(false, false, false, true, true, true);
		case (100 << 4) | 8:  return RedMushroomBlock::RedMushroomBlock(false, false, false, true, true, false);
		case (100 << 4) | 9:  return RedMushroomBlock::RedMushroomBlock(false, true, false, true, true, false);
		case (100 << 4) | 10: return MushroomStem::MushroomStem(false, true, true, true, false, true);
		case (100 << 4) | 11: return RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, false);
		case (100 << 4) | 12: return RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, false);
		case (100 << 4) | 13: return RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, false);
		case (100 << 4) | 14: return RedMushroomBlock::RedMushroomBlock(true, true, true, true, true, true);
		case (100 << 4) | 15: return MushroomStem::MushroomStem(true, true, true, true, true, true);
		case (101 << 4) | 0:  return IronBars::IronBars(false, false, false, false);
		case (102 << 4) | 0:  return GlassPane::GlassPane(false, false, false, false);
		case (103 << 4) | 0:  return Melon::Melon();
		case (104 << 4) | 0:  return PumpkinStem::PumpkinStem(0);
		case (104 << 4) | 1:  return PumpkinStem::PumpkinStem(1);
		case (104 << 4) | 2:  return PumpkinStem::PumpkinStem(2);
		case (104 << 4) | 3:  return PumpkinStem::PumpkinStem(3);
		case (104 << 4) | 4:  return PumpkinStem::PumpkinStem(4);
		case (104 << 4) | 5:  return PumpkinStem::PumpkinStem(5);
		case (104 << 4) | 6:  return PumpkinStem::PumpkinStem(6);
		case (104 << 4) | 7:  return PumpkinStem::PumpkinStem(7);
		case (105 << 4) | 0:  return MelonStem::MelonStem(0);
		case (105 << 4) | 1:  return MelonStem::MelonStem(1);
		case (105 << 4) | 2:  return MelonStem::MelonStem(2);
		case (105 << 4) | 3:  return MelonStem::MelonStem(3);
		case (105 << 4) | 4:  return MelonStem::MelonStem(4);
		case (105 << 4) | 5:  return MelonStem::MelonStem(5);
		case (105 << 4) | 6:  return MelonStem::MelonStem(6);
		case (105 << 4) | 7:  return MelonStem::MelonStem(7);
		case (106 << 4) | 0:  return Vine::Vine(false, false, false, true, false);
		case (106 << 4) | 1:  return Vine::Vine(false, false, true, true, false);
		case (106 << 4) | 2:  return Vine::Vine(false, false, false, true, true);
		case (106 << 4) | 3:  return Vine::Vine(false, false, true, true, true);
		case (106 << 4) | 4:  return Vine::Vine(false, true, false, true, false);
		case (106 << 4) | 5:  return Vine::Vine(false, true, true, true, false);
		case (106 << 4) | 6:  return Vine::Vine(false, true, false, true, true);
		case (106 << 4) | 7:  return Vine::Vine(false, true, true, true, true);
		case (106 << 4) | 8:  return Vine::Vine(true, false, false, true, false);
		case (106 << 4) | 9:  return Vine::Vine(true, false, true, true, false);
		case (106 << 4) | 10: return Vine::Vine(true, false, false, true, true);
		case (106 << 4) | 11: return Vine::Vine(true, false, true, true, true);
		case (106 << 4) | 12: return Vine::Vine(true, true, false, true, false);
		case (106 << 4) | 13: return Vine::Vine(true, true, true, true, false);
		case (106 << 4) | 14: return Vine::Vine(true, true, false, true, true);
		case (106 << 4) | 15: return Vine::Vine(true, true, true, true, true);
		case (107 << 4) | 0:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (107 << 4) | 1:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (107 << 4) | 2:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (107 << 4) | 3:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (107 << 4) | 4:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (107 << 4) | 5:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (107 << 4) | 6:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (107 << 4) | 7:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (107 << 4) | 8:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (107 << 4) | 9:  return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (107 << 4) | 10: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (107 << 4) | 11: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (107 << 4) | 12: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (107 << 4) | 13: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (107 << 4) | 14: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (107 << 4) | 15: return OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (108 << 4) | 0:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				BrickStairs::Half::Bottom,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 1:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				BrickStairs::Half::Bottom,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 2:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				BrickStairs::Half::Bottom,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 3:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				BrickStairs::Half::Bottom,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 4:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				BrickStairs::Half::Top,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 5:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				BrickStairs::Half::Top,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 6:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				BrickStairs::Half::Top,
				BrickStairs::Shape::Straight
			);
		case (108 << 4) | 7:
			return BrickStairs::BrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				BrickStairs::Half::Top,
				BrickStairs::Shape::Straight
			);
		case (109 << 4) | 0:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				StoneBrickStairs::Half::Bottom,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 1:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				StoneBrickStairs::Half::Bottom,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 2:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				StoneBrickStairs::Half::Bottom,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 3:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				StoneBrickStairs::Half::Bottom,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 4:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				StoneBrickStairs::Half::Top,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 5:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				StoneBrickStairs::Half::Top,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 6:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				StoneBrickStairs::Half::Top,
				StoneBrickStairs::Shape::Straight
			);
		case (109 << 4) | 7:
			return StoneBrickStairs::StoneBrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				StoneBrickStairs::Half::Top,
				StoneBrickStairs::Shape::Straight
			);
		case (110 << 4) | 0: return Mycelium::Mycelium(false);
		case (111 << 4) | 0: return LilyPad::LilyPad();
		case (112 << 4) | 0: return NetherBricks::NetherBricks();
		case (113 << 4) | 0: return NetherBrickFence::NetherBrickFence(false, false, false, false);
		case (114 << 4) | 0:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				NetherBrickStairs::Half::Bottom,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 1:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				NetherBrickStairs::Half::Bottom,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 2:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				NetherBrickStairs::Half::Bottom,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 3:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				NetherBrickStairs::Half::Bottom,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 4:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_XP,
				NetherBrickStairs::Half::Top,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 5:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_XM,
				NetherBrickStairs::Half::Top,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 6:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_ZP,
				NetherBrickStairs::Half::Top,
				NetherBrickStairs::Shape::Straight
			);
		case (114 << 4) | 7:
			return NetherBrickStairs::NetherBrickStairs(
				eBlockFace::BLOCK_FACE_ZM,
				NetherBrickStairs::Half::Top,
				NetherBrickStairs::Shape::Straight
			);
		case (115 << 4) | 0:  return NetherWart::NetherWart(0);
		case (115 << 4) | 1:  return NetherWart::NetherWart(1);
		case (115 << 4) | 2:  return NetherWart::NetherWart(2);
		case (115 << 4) | 3:  return NetherWart::NetherWart(3);
		case (116 << 4) | 0:  return EnchantingTable::EnchantingTable();
		case (117 << 4) | 0:  return BrewingStand::BrewingStand(false, false, false);
		case (117 << 4) | 1:  return BrewingStand::BrewingStand(true, false, false);
		case (117 << 4) | 2:  return BrewingStand::BrewingStand(false, true, false);
		case (117 << 4) | 3:  return BrewingStand::BrewingStand(true, true, false);
		case (117 << 4) | 4:  return BrewingStand::BrewingStand(false, false, true);
		case (117 << 4) | 5:  return BrewingStand::BrewingStand(true, false, true);
		case (117 << 4) | 6:  return BrewingStand::BrewingStand(false, true, true);
		case (117 << 4) | 7:  return BrewingStand::BrewingStand(true, true, true);
		case (118 << 4) | 0:  return Cauldron::Cauldron(0);
		case (118 << 4) | 1:  return Cauldron::Cauldron(1);
		case (118 << 4) | 2:  return Cauldron::Cauldron(2);
		case (118 << 4) | 3:  return Cauldron::Cauldron(3);
		case (119 << 4) | 0:  return EndPortal::EndPortal();
		case (120 << 4) | 0:  return EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_ZP);
		case (120 << 4) | 1:  return EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_XM);
		case (120 << 4) | 2:  return EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_ZM);
		case (120 << 4) | 3:  return EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_XP);
		case (120 << 4) | 4:  return EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_ZP);
		case (120 << 4) | 5:  return EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_XM);
		case (120 << 4) | 6:  return EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_ZM);
		case (120 << 4) | 7:  return EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_XP);
		case (121 << 4) | 0:  return EndStone::EndStone();
		case (122 << 4) | 0:  return DragonEgg::DragonEgg();
		case (123 << 4) | 0:  return RedstoneLamp::RedstoneLamp(false);
		case (124 << 4) | 0:  return RedstoneLamp::RedstoneLamp(true);
		case (125 << 4) | 0:  return OakSlab::OakSlab(OakSlab::Type::Double);
		case (125 << 4) | 1:  return SpruceSlab::SpruceSlab(SpruceSlab::Type::Double);
		case (125 << 4) | 2:  return BirchSlab::BirchSlab(BirchSlab::Type::Double);
		case (125 << 4) | 3:  return JungleSlab::JungleSlab(JungleSlab::Type::Double);
		case (125 << 4) | 4:  return AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Double);
		case (125 << 4) | 5:  return DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Double);
		case (126 << 4) | 0:  return OakSlab::OakSlab(OakSlab::Type::Bottom);
		case (126 << 4) | 1:  return SpruceSlab::SpruceSlab(SpruceSlab::Type::Bottom);
		case (126 << 4) | 2:  return BirchSlab::BirchSlab(BirchSlab::Type::Bottom);
		case (126 << 4) | 3:  return JungleSlab::JungleSlab(JungleSlab::Type::Bottom);
		case (126 << 4) | 4:  return AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Bottom);
		case (126 << 4) | 5:  return DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Bottom);
		case (126 << 4) | 8:  return OakSlab::OakSlab(OakSlab::Type::Top);
		case (126 << 4) | 9:  return SpruceSlab::SpruceSlab(SpruceSlab::Type::Top);
		case (126 << 4) | 10: return BirchSlab::BirchSlab(BirchSlab::Type::Top);
		case (126 << 4) | 11: return JungleSlab::JungleSlab(JungleSlab::Type::Top);
		case (126 << 4) | 12: return AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Top);
		case (126 << 4) | 13: return DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Top);
		case (127 << 4) | 0:  return Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_ZP);
		case (127 << 4) | 1:  return Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_XM);
		case (127 << 4) | 2:  return Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_ZM);
		case (127 << 4) | 3:  return Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_XP);
		case (127 << 4) | 4:  return Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_ZP);
		case (127 << 4) | 5:  return Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_XM);
		case (127 << 4) | 6:  return Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_ZM);
		case (127 << 4) | 7:  return Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_XP);
		case (127 << 4) | 8:  return Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_ZP);
		case (127 << 4) | 9:  return Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_XM);
		case (127 << 4) | 10: return Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_ZM);
		case (127 << 4) | 11: return Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_XP);
		case (128 << 4) | 0:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				SandstoneStairs::Half::Bottom,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 1:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				SandstoneStairs::Half::Bottom,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 2:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				SandstoneStairs::Half::Bottom,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 3:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				SandstoneStairs::Half::Bottom,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 4:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				SandstoneStairs::Half::Top,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 5:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				SandstoneStairs::Half::Top,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 6:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				SandstoneStairs::Half::Top,
				SandstoneStairs::Shape::Straight
			);
		case (128 << 4) | 7:
			return SandstoneStairs::SandstoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				SandstoneStairs::Half::Top,
				SandstoneStairs::Shape::Straight
			);
		case (129 << 4) | 0:  return EmeraldOre::EmeraldOre();
		case (130 << 4) | 2:  return EnderChest::EnderChest(eBlockFace::BLOCK_FACE_ZM);
		case (130 << 4) | 3:  return EnderChest::EnderChest(eBlockFace::BLOCK_FACE_ZP);
		case (130 << 4) | 4:  return EnderChest::EnderChest(eBlockFace::BLOCK_FACE_XM);
		case (130 << 4) | 5:  return EnderChest::EnderChest(eBlockFace::BLOCK_FACE_XP);
		case (131 << 4) | 0:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZP, false);
		case (131 << 4) | 1:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XM, false);
		case (131 << 4) | 2:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZM, false);
		case (131 << 4) | 3:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XP, false);
		case (131 << 4) | 4:  return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZP, false);
		case (131 << 4) | 5:  return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XM, false);
		case (131 << 4) | 6:  return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZM, false);
		case (131 << 4) | 7:  return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XP, false);
		case (131 << 4) | 8:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZP, true);
		case (131 << 4) | 9:  return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XM, true);
		case (131 << 4) | 10: return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZM, true);
		case (131 << 4) | 11: return TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XP, true);
		case (131 << 4) | 12: return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZP, true);
		case (131 << 4) | 13: return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XM, true);
		case (131 << 4) | 14: return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZM, true);
		case (131 << 4) | 15: return TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XP, true);
		case (132 << 4) | 0:  return Tripwire::Tripwire(false, false, false, false, false, false, false);
		case (132 << 4) | 1:  return Tripwire::Tripwire(false, false, false, false, true, false, false);
		case (132 << 4) | 2:  return Tripwire::Tripwire(false, false, false, false, false, false, false);
		case (132 << 4) | 3:  return Tripwire::Tripwire(false, false, false, false, true, false, false);
		case (132 << 4) | 4:  return Tripwire::Tripwire(true, false, false, false, false, false, false);
		case (132 << 4) | 5:  return Tripwire::Tripwire(true, false, false, false, true, false, false);
		case (132 << 4) | 6:  return Tripwire::Tripwire(true, false, false, false, false, false, false);
		case (132 << 4) | 7:  return Tripwire::Tripwire(true, false, false, false, true, false, false);
		case (132 << 4) | 8:  return Tripwire::Tripwire(false, true, false, false, false, false, false);
		case (132 << 4) | 9:  return Tripwire::Tripwire(false, true, false, false, true, false, false);
		case (132 << 4) | 10: return Tripwire::Tripwire(false, true, false, false, false, false, false);
		case (132 << 4) | 11: return Tripwire::Tripwire(false, true, false, false, true, false, false);
		case (132 << 4) | 12: return Tripwire::Tripwire(true, true, false, false, false, false, false);
		case (132 << 4) | 13: return Tripwire::Tripwire(true, true, false, false, true, false, false);
		case (132 << 4) | 14: return Tripwire::Tripwire(true, true, false, false, false, false, false);
		case (133 << 4) | 0:  return EmeraldBlock::EmeraldBlock();
		case (134 << 4) | 0:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_XP,
				SpruceStairs::Half::Bottom,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 1:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_XM,
				SpruceStairs::Half::Bottom,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 2:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_ZP,
				SpruceStairs::Half::Bottom,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 3:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_ZM,
				SpruceStairs::Half::Bottom,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 4:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_XP,
				SpruceStairs::Half::Top,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 5:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_XM,
				SpruceStairs::Half::Top,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 6:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_ZP,
				SpruceStairs::Half::Top,
				SpruceStairs::Shape::Straight
			);
		case (134 << 4) | 7:
			return SpruceStairs::SpruceStairs(
				eBlockFace::BLOCK_FACE_ZM,
				SpruceStairs::Half::Top,
				SpruceStairs::Shape::Straight
			);
		case (135 << 4) | 0:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_XP,
				BirchStairs::Half::Bottom,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 1:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_XM,
				BirchStairs::Half::Bottom,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 2:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_ZP,
				BirchStairs::Half::Bottom,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 3:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_ZM,
				BirchStairs::Half::Bottom,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 4:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_XP,
				BirchStairs::Half::Top,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 5:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_XM,
				BirchStairs::Half::Top,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 6:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_ZP,
				BirchStairs::Half::Top,
				BirchStairs::Shape::Straight
			);
		case (135 << 4) | 7:
			return BirchStairs::BirchStairs(
				eBlockFace::BLOCK_FACE_ZM,
				BirchStairs::Half::Top,
				BirchStairs::Shape::Straight
			);
		case (136 << 4) | 0:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_XP,
				JungleStairs::Half::Bottom,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 1:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_XM,
				JungleStairs::Half::Bottom,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 2:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_ZP,
				JungleStairs::Half::Bottom,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 3:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_ZM,
				JungleStairs::Half::Bottom,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 4:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_XP,
				JungleStairs::Half::Top,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 5:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_XM,
				JungleStairs::Half::Top,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 6:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_ZP,
				JungleStairs::Half::Top,
				JungleStairs::Shape::Straight
			);
		case (136 << 4) | 7:
			return JungleStairs::JungleStairs(
				eBlockFace::BLOCK_FACE_ZM,
				JungleStairs::Half::Top,
				JungleStairs::Shape::Straight
			);
		case (137 << 4) | 0:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_YM);
		case (137 << 4) | 1:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_YP);
		case (137 << 4) | 2:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_ZM);
		case (137 << 4) | 3:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_ZP);
		case (137 << 4) | 4:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_XM);
		case (137 << 4) | 5:  return CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_XP);
		case (137 << 4) | 8:  return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_YM);
		case (137 << 4) | 9:  return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_YP);
		case (137 << 4) | 10: return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_ZM);
		case (137 << 4) | 11: return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_ZP);
		case (137 << 4) | 12: return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_XM);
		case (137 << 4) | 13: return CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_XP);
		case (138 << 4) | 0:  return Beacon::Beacon();
		case (139 << 4) | 0:
			return CobblestoneWall::CobblestoneWall(
				CobblestoneWall::East::None,
				CobblestoneWall::North::None,
				CobblestoneWall::South::None,
				true,
				CobblestoneWall::West::None
			);
		case (139 << 4) | 1:
			return MossyCobblestoneWall::MossyCobblestoneWall(
				MossyCobblestoneWall::East::None,
				MossyCobblestoneWall::North::None,
				MossyCobblestoneWall::South::None,
				true,
				MossyCobblestoneWall::West::None
			);
		case (140 << 4) | 0:  return PottedCactus::PottedCactus();
		case (140 << 4) | 1:  return PottedCactus::PottedCactus();
		case (140 << 4) | 2:  return PottedCactus::PottedCactus();
		case (140 << 4) | 3:  return PottedCactus::PottedCactus();
		case (140 << 4) | 4:  return PottedCactus::PottedCactus();
		case (140 << 4) | 5:  return PottedCactus::PottedCactus();
		case (140 << 4) | 6:  return PottedCactus::PottedCactus();
		case (140 << 4) | 7:  return PottedCactus::PottedCactus();
		case (140 << 4) | 8:  return PottedCactus::PottedCactus();
		case (140 << 4) | 9:  return PottedCactus::PottedCactus();
		case (140 << 4) | 10: return PottedCactus::PottedCactus();
		case (140 << 4) | 11: return PottedCactus::PottedCactus();
		case (140 << 4) | 12: return PottedCactus::PottedCactus();
		case (140 << 4) | 13: return PottedCactus::PottedCactus();
		case (140 << 4) | 14: return PottedCactus::PottedCactus();
		case (140 << 4) | 15: return PottedCactus::PottedCactus();
		case (141 << 4) | 0:  return Carrots::Carrots(0);
		case (141 << 4) | 1:  return Carrots::Carrots(1);
		case (141 << 4) | 2:  return Carrots::Carrots(2);
		case (141 << 4) | 3:  return Carrots::Carrots(3);
		case (141 << 4) | 4:  return Carrots::Carrots(4);
		case (141 << 4) | 5:  return Carrots::Carrots(5);
		case (141 << 4) | 6:  return Carrots::Carrots(6);
		case (141 << 4) | 7:  return Carrots::Carrots(7);
		case (142 << 4) | 0:  return Potatoes::Potatoes(0);
		case (142 << 4) | 1:  return Potatoes::Potatoes(1);
		case (142 << 4) | 2:  return Potatoes::Potatoes(2);
		case (142 << 4) | 3:  return Potatoes::Potatoes(3);
		case (142 << 4) | 4:  return Potatoes::Potatoes(4);
		case (142 << 4) | 5:  return Potatoes::Potatoes(5);
		case (142 << 4) | 6:  return Potatoes::Potatoes(6);
		case (142 << 4) | 7:  return Potatoes::Potatoes(7);
		case (143 << 4) | 0:  return OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false);
		case (143 << 4) | 1:  return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false);
		case (143 << 4) | 2:  return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false);
		case (143 << 4) | 3:  return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false);
		case (143 << 4) | 4:  return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false);
		case (143 << 4) | 5:  return OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false);
		case (143 << 4) | 8:  return OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true);
		case (143 << 4) | 9:  return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true);
		case (143 << 4) | 10: return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true);
		case (143 << 4) | 11: return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true);
		case (143 << 4) | 12: return OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true);
		case (143 << 4) | 13: return OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true);
		case (144 << 4) | 1:  return SkeletonSkull::SkeletonSkull(eBlockFace::BLOCK_FACE_YP);
		case (144 << 4) | 2:  return SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_ZM);
		case (144 << 4) | 3:  return SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_ZP);
		case (144 << 4) | 4:  return SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_XM);
		case (144 << 4) | 5:  return SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_XP);
		case (145 << 4) | 0:  return Anvil::Anvil(eBlockFace::BLOCK_FACE_ZP);
		case (145 << 4) | 1:  return Anvil::Anvil(eBlockFace::BLOCK_FACE_XM);
		case (145 << 4) | 2:  return Anvil::Anvil(eBlockFace::BLOCK_FACE_ZM);
		case (145 << 4) | 3:  return Anvil::Anvil(eBlockFace::BLOCK_FACE_XP);
		case (145 << 4) | 4:  return ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_ZP);
		case (145 << 4) | 5:  return ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_XM);
		case (145 << 4) | 6:  return ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_ZM);
		case (145 << 4) | 7:  return ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_XP);
		case (145 << 4) | 8:  return DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_ZP);
		case (145 << 4) | 9:  return DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_XM);
		case (145 << 4) | 10: return DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_ZM);
		case (145 << 4) | 11: return DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_XP);
		case (146 << 4) | 2:  return TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZM, TrappedChest::Type::Single);
		case (146 << 4) | 3:  return TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZP, TrappedChest::Type::Single);
		case (146 << 4) | 4:  return TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XM, TrappedChest::Type::Single);
		case (146 << 4) | 5:  return TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XP, TrappedChest::Type::Single);
		case (147 << 4) | 0:  return LightWeightedPressurePlate::LightWeightedPressurePlate(0);
		case (147 << 4) | 1:  return LightWeightedPressurePlate::LightWeightedPressurePlate(1);
		case (147 << 4) | 2:  return LightWeightedPressurePlate::LightWeightedPressurePlate(2);
		case (147 << 4) | 3:  return LightWeightedPressurePlate::LightWeightedPressurePlate(3);
		case (147 << 4) | 4:  return LightWeightedPressurePlate::LightWeightedPressurePlate(4);
		case (147 << 4) | 5:  return LightWeightedPressurePlate::LightWeightedPressurePlate(5);
		case (147 << 4) | 6:  return LightWeightedPressurePlate::LightWeightedPressurePlate(6);
		case (147 << 4) | 7:  return LightWeightedPressurePlate::LightWeightedPressurePlate(7);
		case (147 << 4) | 8:  return LightWeightedPressurePlate::LightWeightedPressurePlate(8);
		case (147 << 4) | 9:  return LightWeightedPressurePlate::LightWeightedPressurePlate(9);
		case (147 << 4) | 10: return LightWeightedPressurePlate::LightWeightedPressurePlate(10);
		case (147 << 4) | 11: return LightWeightedPressurePlate::LightWeightedPressurePlate(11);
		case (147 << 4) | 12: return LightWeightedPressurePlate::LightWeightedPressurePlate(12);
		case (147 << 4) | 13: return LightWeightedPressurePlate::LightWeightedPressurePlate(13);
		case (147 << 4) | 14: return LightWeightedPressurePlate::LightWeightedPressurePlate(14);
		case (147 << 4) | 15: return LightWeightedPressurePlate::LightWeightedPressurePlate(15);
		case (148 << 4) | 0:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(0);
		case (148 << 4) | 1:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(1);
		case (148 << 4) | 2:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(2);
		case (148 << 4) | 3:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(3);
		case (148 << 4) | 4:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(4);
		case (148 << 4) | 5:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(5);
		case (148 << 4) | 6:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(6);
		case (148 << 4) | 7:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(7);
		case (148 << 4) | 8:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(8);
		case (148 << 4) | 9:  return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(9);
		case (148 << 4) | 10: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(10);
		case (148 << 4) | 11: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(11);
		case (148 << 4) | 12: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(12);
		case (148 << 4) | 13: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(13);
		case (148 << 4) | 14: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(14);
		case (148 << 4) | 15: return HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(15);
		case (149 << 4) | 0:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, false);
		case (149 << 4) | 1:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, false);
		case (149 << 4) | 2:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, false);
		case (149 << 4) | 3:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, false);
		case (149 << 4) | 4:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, false);
		case (149 << 4) | 5:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, false);
		case (149 << 4) | 6:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, false);
		case (149 << 4) | 7:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, false);
		case (149 << 4) | 8:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, true);
		case (149 << 4) | 9:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, true);
		case (149 << 4) | 10: return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, true);
		case (149 << 4) | 11: return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, true);
		case (149 << 4) | 12:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, true);
		case (149 << 4) | 13:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, true);
		case (149 << 4) | 14:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, true);
		case (149 << 4) | 15:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, true);
		case (150 << 4) | 0: return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, false);
		case (150 << 4) | 1: return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, false);
		case (150 << 4) | 2: return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, false);
		case (150 << 4) | 3: return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, false);
		case (150 << 4) | 4:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, false);
		case (150 << 4) | 5:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, false);
		case (150 << 4) | 6:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, false);
		case (150 << 4) | 7:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, false);
		case (150 << 4) | 8:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, true);
		case (150 << 4) | 9:  return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, true);
		case (150 << 4) | 10: return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, true);
		case (150 << 4) | 11: return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, true);
		case (150 << 4) | 12:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, true);
		case (150 << 4) | 13:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, true);
		case (150 << 4) | 14:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, true);
		case (150 << 4) | 15:
			return Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, true);
		case (151 << 4) | 0:  return DaylightDetector::DaylightDetector(false, 0);
		case (151 << 4) | 1:  return DaylightDetector::DaylightDetector(false, 1);
		case (151 << 4) | 2:  return DaylightDetector::DaylightDetector(false, 2);
		case (151 << 4) | 3:  return DaylightDetector::DaylightDetector(false, 3);
		case (151 << 4) | 4:  return DaylightDetector::DaylightDetector(false, 4);
		case (151 << 4) | 5:  return DaylightDetector::DaylightDetector(false, 5);
		case (151 << 4) | 6:  return DaylightDetector::DaylightDetector(false, 6);
		case (151 << 4) | 7:  return DaylightDetector::DaylightDetector(false, 7);
		case (151 << 4) | 8:  return DaylightDetector::DaylightDetector(false, 8);
		case (151 << 4) | 9:  return DaylightDetector::DaylightDetector(false, 9);
		case (151 << 4) | 10: return DaylightDetector::DaylightDetector(false, 10);
		case (151 << 4) | 11: return DaylightDetector::DaylightDetector(false, 11);
		case (151 << 4) | 12: return DaylightDetector::DaylightDetector(false, 12);
		case (151 << 4) | 13: return DaylightDetector::DaylightDetector(false, 13);
		case (151 << 4) | 14: return DaylightDetector::DaylightDetector(false, 14);
		case (151 << 4) | 15: return DaylightDetector::DaylightDetector(false, 15);
		case (152 << 4) | 0:  return RedstoneBlock::RedstoneBlock();
		case (153 << 4) | 0:  return NetherQuartzOre::NetherQuartzOre();
		case (154 << 4) | 0:  return Hopper::Hopper(true, eBlockFace::BLOCK_FACE_YM);
		case (154 << 4) | 2:  return Hopper::Hopper(true, eBlockFace::BLOCK_FACE_ZM);
		case (154 << 4) | 3:  return Hopper::Hopper(true, eBlockFace::BLOCK_FACE_ZP);
		case (154 << 4) | 4:  return Hopper::Hopper(true, eBlockFace::BLOCK_FACE_XM);
		case (154 << 4) | 5:  return Hopper::Hopper(true, eBlockFace::BLOCK_FACE_XP);
		case (154 << 4) | 8:  return Hopper::Hopper(false, eBlockFace::BLOCK_FACE_YM);
		case (154 << 4) | 10: return Hopper::Hopper(false, eBlockFace::BLOCK_FACE_ZM);
		case (154 << 4) | 11: return Hopper::Hopper(false, eBlockFace::BLOCK_FACE_ZP);
		case (154 << 4) | 12: return Hopper::Hopper(false, eBlockFace::BLOCK_FACE_XM);
		case (154 << 4) | 13: return Hopper::Hopper(false, eBlockFace::BLOCK_FACE_XP);
		case (155 << 4) | 0:  return QuartzBlock::QuartzBlock();
		case (155 << 4) | 1:  return ChiseledQuartzBlock::ChiseledQuartzBlock();
		case (155 << 4) | 2:  return QuartzPillar::QuartzPillar(QuartzPillar::Axis::Y);
		case (155 << 4) | 3:  return QuartzPillar::QuartzPillar(QuartzPillar::Axis::X);
		case (155 << 4) | 4:  return QuartzPillar::QuartzPillar(QuartzPillar::Axis::Z);
		case (156 << 4) | 0:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_XP,
				QuartzStairs::Half::Bottom,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 1:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_XM,
				QuartzStairs::Half::Bottom,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 2:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_ZP,
				QuartzStairs::Half::Bottom,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 3:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_ZM,
				QuartzStairs::Half::Bottom,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 4:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_XP,
				QuartzStairs::Half::Top,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 5:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_XM,
				QuartzStairs::Half::Top,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 6:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_ZP,
				QuartzStairs::Half::Top,
				QuartzStairs::Shape::Straight
			);
		case (156 << 4) | 7:
			return QuartzStairs::QuartzStairs(
				eBlockFace::BLOCK_FACE_ZM,
				QuartzStairs::Half::Top,
				QuartzStairs::Shape::Straight
			);
		case (157 << 4) | 0:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::NorthSouth);
		case (157 << 4) | 1:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::EastWest);
		case (157 << 4) | 2:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingEast);
		case (157 << 4) | 3:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingWest);
		case (157 << 4) | 4:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingNorth);
		case (157 << 4) | 5:  return ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingSouth);
		case (157 << 4) | 8:  return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::NorthSouth);
		case (157 << 4) | 9:  return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::EastWest);
		case (157 << 4) | 10: return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingEast);
		case (157 << 4) | 11: return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingWest);
		case (157 << 4) | 12: return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingNorth);
		case (157 << 4) | 13: return ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingSouth);
		case (158 << 4) | 0:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_YM, false);
		case (158 << 4) | 1:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_YP, false);
		case (158 << 4) | 2:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_ZM, false);
		case (158 << 4) | 3:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_ZP, false);
		case (158 << 4) | 4:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_XM, false);
		case (158 << 4) | 5:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_XP, false);
		case (158 << 4) | 8:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_YM, true);
		case (158 << 4) | 9:  return Dropper::Dropper(eBlockFace::BLOCK_FACE_YP, true);
		case (158 << 4) | 10: return Dropper::Dropper(eBlockFace::BLOCK_FACE_ZM, true);
		case (158 << 4) | 11: return Dropper::Dropper(eBlockFace::BLOCK_FACE_ZP, true);
		case (158 << 4) | 12: return Dropper::Dropper(eBlockFace::BLOCK_FACE_XM, true);
		case (158 << 4) | 13: return Dropper::Dropper(eBlockFace::BLOCK_FACE_XP, true);
		case (159 << 4) | 0:  return WhiteTerracotta::WhiteTerracotta();
		case (159 << 4) | 1:  return OrangeTerracotta::OrangeTerracotta();
		case (159 << 4) | 2:  return MagentaTerracotta::MagentaTerracotta();
		case (159 << 4) | 3:  return LightBlueTerracotta::LightBlueTerracotta();
		case (159 << 4) | 4:  return YellowTerracotta::YellowTerracotta();
		case (159 << 4) | 5:  return LimeTerracotta::LimeTerracotta();
		case (159 << 4) | 6:  return PinkTerracotta::PinkTerracotta();
		case (159 << 4) | 7:  return GrayTerracotta::GrayTerracotta();
		case (159 << 4) | 8:  return LightGrayTerracotta::LightGrayTerracotta();
		case (159 << 4) | 9:  return CyanTerracotta::CyanTerracotta();
		case (159 << 4) | 10: return PurpleTerracotta::PurpleTerracotta();
		case (159 << 4) | 11: return BlueTerracotta::BlueTerracotta();
		case (159 << 4) | 12: return BrownTerracotta::BrownTerracotta();
		case (159 << 4) | 13: return GreenTerracotta::GreenTerracotta();
		case (159 << 4) | 14: return RedTerracotta::RedTerracotta();
		case (159 << 4) | 15: return BlackTerracotta::BlackTerracotta();
		case (160 << 4) | 0:  return WhiteStainedGlassPane::WhiteStainedGlassPane(false, false, false, false);
		case (160 << 4) | 1:  return OrangeStainedGlassPane::OrangeStainedGlassPane(false, false, false, false);
		case (160 << 4) | 2:  return MagentaStainedGlassPane::MagentaStainedGlassPane(false, false, false, false);
		case (160 << 4) | 3:  return LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, false, false, false);
		case (160 << 4) | 4:  return YellowStainedGlassPane::YellowStainedGlassPane(false, false, false, false);
		case (160 << 4) | 5:  return LimeStainedGlassPane::LimeStainedGlassPane(false, false, false, false);
		case (160 << 4) | 6:  return PinkStainedGlassPane::PinkStainedGlassPane(false, false, false, false);
		case (160 << 4) | 7:  return GrayStainedGlassPane::GrayStainedGlassPane(false, false, false, false);
		case (160 << 4) | 8:  return LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, false, false, false);
		case (160 << 4) | 9:  return CyanStainedGlassPane::CyanStainedGlassPane(false, false, false, false);
		case (160 << 4) | 10: return PurpleStainedGlassPane::PurpleStainedGlassPane(false, false, false, false);
		case (160 << 4) | 11: return BlueStainedGlassPane::BlueStainedGlassPane(false, false, false, false);
		case (160 << 4) | 12: return BrownStainedGlassPane::BrownStainedGlassPane(false, false, false, false);
		case (160 << 4) | 13: return GreenStainedGlassPane::GreenStainedGlassPane(false, false, false, false);
		case (160 << 4) | 14: return RedStainedGlassPane::RedStainedGlassPane(false, false, false, false);
		case (160 << 4) | 15: return BlackStainedGlassPane::BlackStainedGlassPane(false, false, false, false);
		case (161 << 4) | 0:  return AcaciaLeaves::AcaciaLeaves(false, true);
		case (161 << 4) | 1:  return DarkOakLeaves::DarkOakLeaves(false, true);
		case (161 << 4) | 4:  return AcaciaLeaves::AcaciaLeaves(false, false);
		case (161 << 4) | 5:  return DarkOakLeaves::DarkOakLeaves(false, false);
		case (161 << 4) | 8:  return AcaciaLeaves::AcaciaLeaves(true, true);
		case (161 << 4) | 9:  return DarkOakLeaves::DarkOakLeaves(true, true);
		case (161 << 4) | 12: return AcaciaLeaves::AcaciaLeaves(true, false);
		case (161 << 4) | 13: return DarkOakLeaves::DarkOakLeaves(true, false);
		case (162 << 4) | 0:  return AcaciaLog::AcaciaLog(AcaciaLog::Axis::Y);
		case (162 << 4) | 1:  return DarkOakLog::DarkOakLog(DarkOakLog::Axis::Y);
		case (162 << 4) | 4:  return AcaciaLog::AcaciaLog(AcaciaLog::Axis::X);
		case (162 << 4) | 5:  return DarkOakLog::DarkOakLog(DarkOakLog::Axis::X);
		case (162 << 4) | 8:  return AcaciaLog::AcaciaLog(AcaciaLog::Axis::Z);
		case (162 << 4) | 9:  return DarkOakLog::DarkOakLog(DarkOakLog::Axis::Z);
		case (162 << 4) | 12: return AcaciaWood::AcaciaWood();
		case (162 << 4) | 13: return DarkOakWood::DarkOakWood();
		case (163 << 4) | 0:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaStairs::Half::Bottom,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 1:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_XM,
				AcaciaStairs::Half::Bottom,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 2:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_ZP,
				AcaciaStairs::Half::Bottom,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 3:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_ZM,
				AcaciaStairs::Half::Bottom,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 4:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaStairs::Half::Top,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 5:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_XM,
				AcaciaStairs::Half::Top,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 6:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_ZP,
				AcaciaStairs::Half::Top,
				AcaciaStairs::Shape::Straight
			);
		case (163 << 4) | 7:
			return AcaciaStairs::AcaciaStairs(
				eBlockFace::BLOCK_FACE_ZM,
				AcaciaStairs::Half::Top,
				AcaciaStairs::Shape::Straight
			);
		case (164 << 4) | 0:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakStairs::Half::Bottom,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 1:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_XM,
				DarkOakStairs::Half::Bottom,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 2:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_ZP,
				DarkOakStairs::Half::Bottom,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 3:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_ZM,
				DarkOakStairs::Half::Bottom,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 4:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakStairs::Half::Top,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 5:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_XM,
				DarkOakStairs::Half::Top,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 6:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_ZP,
				DarkOakStairs::Half::Top,
				DarkOakStairs::Shape::Straight
			);
		case (164 << 4) | 7:
			return DarkOakStairs::DarkOakStairs(
				eBlockFace::BLOCK_FACE_ZM,
				DarkOakStairs::Half::Top,
				DarkOakStairs::Shape::Straight
			);
		case (165 << 4) | 0: return SlimeBlock::SlimeBlock();
		case (166 << 4) | 0: return Barrier::Barrier();
		case (167 << 4) | 0:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, false, false);
		case (167 << 4) | 1:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, false, false);
		case (167 << 4) | 2:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, false, false);
		case (167 << 4) | 3:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, false, false);
		case (167 << 4) | 4:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, true, false);
		case (167 << 4) | 5:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, true, false);
		case (167 << 4) | 6:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, true, false);
		case (167 << 4) | 7:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, true, false);
		case (167 << 4) | 8:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, false, false);
		case (167 << 4) | 9:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, false, false);
		case (167 << 4) | 10:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, false, false);
		case (167 << 4) | 11:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, false, false);
		case (167 << 4) | 12:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, true, false);
		case (167 << 4) | 13:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, true, false);
		case (167 << 4) | 14:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, true, false);
		case (167 << 4) | 15:
			return IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, true, false);
		case (168 << 4) | 0:  return Prismarine::Prismarine();
		case (168 << 4) | 1:  return PrismarineBricks::PrismarineBricks();
		case (168 << 4) | 2:  return DarkPrismarine::DarkPrismarine();
		case (169 << 4) | 0:  return SeaLantern::SeaLantern();
		case (170 << 4) | 0:  return HayBale::HayBale(HayBale::Axis::Y);
		case (170 << 4) | 4:  return HayBale::HayBale(HayBale::Axis::X);
		case (170 << 4) | 8:  return HayBale::HayBale(HayBale::Axis::Z);
		case (171 << 4) | 0:  return WhiteCarpet::WhiteCarpet();
		case (171 << 4) | 1:  return OrangeCarpet::OrangeCarpet();
		case (171 << 4) | 2:  return MagentaCarpet::MagentaCarpet();
		case (171 << 4) | 3:  return LightBlueCarpet::LightBlueCarpet();
		case (171 << 4) | 4:  return YellowCarpet::YellowCarpet();
		case (171 << 4) | 5:  return LimeCarpet::LimeCarpet();
		case (171 << 4) | 6:  return PinkCarpet::PinkCarpet();
		case (171 << 4) | 7:  return GrayCarpet::GrayCarpet();
		case (171 << 4) | 8:  return LightGrayCarpet::LightGrayCarpet();
		case (171 << 4) | 9:  return CyanCarpet::CyanCarpet();
		case (171 << 4) | 10: return PurpleCarpet::PurpleCarpet();
		case (171 << 4) | 11: return BlueCarpet::BlueCarpet();
		case (171 << 4) | 12: return BrownCarpet::BrownCarpet();
		case (171 << 4) | 13: return GreenCarpet::GreenCarpet();
		case (171 << 4) | 14: return RedCarpet::RedCarpet();
		case (171 << 4) | 15: return BlackCarpet::BlackCarpet();
		case (172 << 4) | 0:  return Terracotta::Terracotta();
		case (173 << 4) | 0:  return CoalBlock::CoalBlock();
		case (174 << 4) | 0:  return PackedIce::PackedIce();
		case (175 << 4) | 0:  return Sunflower::Sunflower(Sunflower::Half::Lower);
		case (175 << 4) | 1:  return Lilac::Lilac(Lilac::Half::Lower);
		case (175 << 4) | 2:  return TallGrass::TallGrass(TallGrass::Half::Lower);
		case (175 << 4) | 3:  return LargeFern::LargeFern(LargeFern::Half::Lower);
		case (175 << 4) | 4:  return RoseBush::RoseBush(RoseBush::Half::Lower);
		case (175 << 4) | 5:  return Peony::Peony(Peony::Half::Lower);
		case (175 << 4) | 8:  return Sunflower::Sunflower(Sunflower::Half::Upper);
		case (175 << 4) | 9:  return Lilac::Lilac(Lilac::Half::Upper);
		case (175 << 4) | 10: return TallGrass::TallGrass(TallGrass::Half::Upper);
		case (175 << 4) | 11: return LargeFern::LargeFern(LargeFern::Half::Upper);
		case (175 << 4) | 12: return RoseBush::RoseBush(RoseBush::Half::Upper);
		case (175 << 4) | 13: return Peony::Peony(Peony::Half::Upper);
		case (176 << 4) | 0:  return WhiteBanner::WhiteBanner(0);
		case (176 << 4) | 1:  return WhiteBanner::WhiteBanner(1);
		case (176 << 4) | 2:  return WhiteBanner::WhiteBanner(2);
		case (176 << 4) | 3:  return WhiteBanner::WhiteBanner(3);
		case (176 << 4) | 4:  return WhiteBanner::WhiteBanner(4);
		case (176 << 4) | 5:  return WhiteBanner::WhiteBanner(5);
		case (176 << 4) | 6:  return WhiteBanner::WhiteBanner(6);
		case (176 << 4) | 7:  return WhiteBanner::WhiteBanner(7);
		case (176 << 4) | 8:  return WhiteBanner::WhiteBanner(8);
		case (176 << 4) | 9:  return WhiteBanner::WhiteBanner(9);
		case (176 << 4) | 10: return WhiteBanner::WhiteBanner(10);
		case (176 << 4) | 11: return WhiteBanner::WhiteBanner(11);
		case (176 << 4) | 12: return WhiteBanner::WhiteBanner(12);
		case (176 << 4) | 13: return WhiteBanner::WhiteBanner(13);
		case (176 << 4) | 14: return WhiteBanner::WhiteBanner(14);
		case (176 << 4) | 15: return WhiteBanner::WhiteBanner(15);
		case (177 << 4) | 2:  return WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_ZM);
		case (177 << 4) | 3:  return WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_ZP);
		case (177 << 4) | 4:  return WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_XM);
		case (177 << 4) | 5:  return WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_XP);
		case (178 << 4) | 0:  return DaylightDetector::DaylightDetector(true, 0);
		case (178 << 4) | 1:  return DaylightDetector::DaylightDetector(true, 1);
		case (178 << 4) | 2:  return DaylightDetector::DaylightDetector(true, 2);
		case (178 << 4) | 3:  return DaylightDetector::DaylightDetector(true, 3);
		case (178 << 4) | 4:  return DaylightDetector::DaylightDetector(true, 4);
		case (178 << 4) | 5:  return DaylightDetector::DaylightDetector(true, 5);
		case (178 << 4) | 6:  return DaylightDetector::DaylightDetector(true, 6);
		case (178 << 4) | 7:  return DaylightDetector::DaylightDetector(true, 7);
		case (178 << 4) | 8:  return DaylightDetector::DaylightDetector(true, 8);
		case (178 << 4) | 9:  return DaylightDetector::DaylightDetector(true, 9);
		case (178 << 4) | 10: return DaylightDetector::DaylightDetector(true, 10);
		case (178 << 4) | 11: return DaylightDetector::DaylightDetector(true, 11);
		case (178 << 4) | 12: return DaylightDetector::DaylightDetector(true, 12);
		case (178 << 4) | 13: return DaylightDetector::DaylightDetector(true, 13);
		case (178 << 4) | 14: return DaylightDetector::DaylightDetector(true, 14);
		case (178 << 4) | 15: return DaylightDetector::DaylightDetector(true, 15);
		case (179 << 4) | 0:  return RedSandstone::RedSandstone();
		case (179 << 4) | 1:  return ChiseledRedSandstone::ChiseledRedSandstone();
		case (179 << 4) | 2:  return CutRedSandstone::CutRedSandstone();
		case (180 << 4) | 0:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				RedSandstoneStairs::Half::Bottom,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 1:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				RedSandstoneStairs::Half::Bottom,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 2:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				RedSandstoneStairs::Half::Bottom,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 3:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				RedSandstoneStairs::Half::Bottom,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 4:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_XP,
				RedSandstoneStairs::Half::Top,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 5:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_XM,
				RedSandstoneStairs::Half::Top,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 6:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_ZP,
				RedSandstoneStairs::Half::Top,
				RedSandstoneStairs::Shape::Straight
			);
		case (180 << 4) | 7:
			return RedSandstoneStairs::RedSandstoneStairs(
				eBlockFace::BLOCK_FACE_ZM,
				RedSandstoneStairs::Half::Top,
				RedSandstoneStairs::Shape::Straight
			);
		case (181 << 4) | 0:  return RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Double);
		case (181 << 4) | 8:  return SmoothRedSandstone::SmoothRedSandstone();
		case (182 << 4) | 0:  return RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Bottom);
		case (182 << 4) | 8:  return RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Top);
		case (183 << 4) | 0:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (183 << 4) | 1:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (183 << 4) | 2:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (183 << 4) | 3:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (183 << 4) | 4:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (183 << 4) | 5:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (183 << 4) | 6:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (183 << 4) | 7:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (183 << 4) | 8:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (183 << 4) | 9:  return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (183 << 4) | 10: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (183 << 4) | 11: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (183 << 4) | 12: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (183 << 4) | 13: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (183 << 4) | 14: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (183 << 4) | 15: return SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (184 << 4) | 0:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (184 << 4) | 1:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (184 << 4) | 2:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (184 << 4) | 3:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (184 << 4) | 4:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (184 << 4) | 5:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (184 << 4) | 6:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (184 << 4) | 7:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (184 << 4) | 8:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (184 << 4) | 9:  return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (184 << 4) | 10: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (184 << 4) | 11: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (184 << 4) | 12: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (184 << 4) | 13: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (184 << 4) | 14: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (184 << 4) | 15: return BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (185 << 4) | 0:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (185 << 4) | 1:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (185 << 4) | 2:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (185 << 4) | 3:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (185 << 4) | 4:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (185 << 4) | 5:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (185 << 4) | 6:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (185 << 4) | 7:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (185 << 4) | 8:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (185 << 4) | 9:  return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (185 << 4) | 10: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (185 << 4) | 11: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (185 << 4) | 12: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (185 << 4) | 13: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (185 << 4) | 14: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (185 << 4) | 15: return JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (186 << 4) | 0:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (186 << 4) | 1:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (186 << 4) | 2:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (186 << 4) | 3:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (186 << 4) | 4:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (186 << 4) | 5:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (186 << 4) | 6:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (186 << 4) | 7:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (186 << 4) | 8:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (186 << 4) | 9:  return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (186 << 4) | 10: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (186 << 4) | 11: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (186 << 4) | 12: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (186 << 4) | 13: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (186 << 4) | 14: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (186 << 4) | 15: return DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (187 << 4) | 0:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false);
		case (187 << 4) | 1:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false);
		case (187 << 4) | 2:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false);
		case (187 << 4) | 3:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false);
		case (187 << 4) | 4:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false);
		case (187 << 4) | 5:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false);
		case (187 << 4) | 6:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false);
		case (187 << 4) | 7:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false);
		case (187 << 4) | 8:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true);
		case (187 << 4) | 9:  return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true);
		case (187 << 4) | 10: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true);
		case (187 << 4) | 11: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true);
		case (187 << 4) | 12: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true);
		case (187 << 4) | 13: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true);
		case (187 << 4) | 14: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true);
		case (187 << 4) | 15: return AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true);
		case (188 << 4) | 0:  return SpruceFence::SpruceFence(false, false, false, false);
		case (189 << 4) | 0:  return BirchFence::BirchFence(false, false, false, false);
		case (190 << 4) | 0:  return JungleFence::JungleFence(false, false, false, false);
		case (191 << 4) | 0:  return DarkOakFence::DarkOakFence(false, false, false, false);
		case (192 << 4) | 0:  return AcaciaFence::AcaciaFence(false, false, false, false);
		case (193 << 4) | 0:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				false,
				false
			);
		case (193 << 4) | 1:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_ZP,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				false,
				false
			);
		case (193 << 4) | 2:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XM,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				false,
				false
			);
		case (193 << 4) | 3:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_ZM,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				false,
				false
			);
		case (193 << 4) | 4:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				true,
				false
			);
		case (193 << 4) | 5:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_ZP,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				true,
				false
			);
		case (193 << 4) | 6:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XM,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				true,
				false
			);
		case (193 << 4) | 7:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_ZM,
				SpruceDoor::Half::Lower,
				SpruceDoor::Hinge::Right,
				true,
				false
			);
		case (193 << 4) | 8:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Upper,
				SpruceDoor::Hinge::Left,
				false,
				false
			);
		case (193 << 4) | 9:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Upper,
				SpruceDoor::Hinge::Right,
				false,
				false
			);
		case (193 << 4) | 10:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Upper,
				SpruceDoor::Hinge::Left,
				false,
				true
			);
		case (193 << 4) | 11:
			return SpruceDoor::SpruceDoor(
				eBlockFace::BLOCK_FACE_XP,
				SpruceDoor::Half::Upper,
				SpruceDoor::Hinge::Right,
				false,
				true
			);
		case (194 << 4) | 0:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				false,
				false
			);
		case (194 << 4) | 1:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_ZP,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				false,
				false
			);
		case (194 << 4) | 2:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XM,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				false,
				false
			);
		case (194 << 4) | 3:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_ZM,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				false,
				false
			);
		case (194 << 4) | 4:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				true,
				false
			);
		case (194 << 4) | 5:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_ZP,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				true,
				false
			);
		case (194 << 4) | 6:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XM,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				true,
				false
			);
		case (194 << 4) | 7:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_ZM,
				BirchDoor::Half::Lower,
				BirchDoor::Hinge::Right,
				true,
				false
			);
		case (194 << 4) | 8:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Upper,
				BirchDoor::Hinge::Left,
				false,
				false
			);
		case (194 << 4) | 9:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Upper,
				BirchDoor::Hinge::Right,
				false,
				false
			);
		case (194 << 4) | 10:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Upper,
				BirchDoor::Hinge::Left,
				false,
				true
			);
		case (194 << 4) | 11:
			return BirchDoor::BirchDoor(
				eBlockFace::BLOCK_FACE_XP,
				BirchDoor::Half::Upper,
				BirchDoor::Hinge::Right,
				false,
				true
			);
		case (195 << 4) | 0:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				false,
				false
			);
		case (195 << 4) | 1:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_ZP,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				false,
				false
			);
		case (195 << 4) | 2:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XM,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				false,
				false
			);
		case (195 << 4) | 3:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_ZM,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				false,
				false
			);
		case (195 << 4) | 4:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				true,
				false
			);
		case (195 << 4) | 5:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_ZP,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				true,
				false
			);
		case (195 << 4) | 6:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XM,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				true,
				false
			);
		case (195 << 4) | 7:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_ZM,
				JungleDoor::Half::Lower,
				JungleDoor::Hinge::Right,
				true,
				false
			);
		case (195 << 4) | 8:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Upper,
				JungleDoor::Hinge::Left,
				false,
				false
			);
		case (195 << 4) | 9:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Upper,
				JungleDoor::Hinge::Right,
				false,
				false
			);
		case (195 << 4) | 10:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Upper,
				JungleDoor::Hinge::Left,
				false,
				true
			);
		case (195 << 4) | 11:
			return JungleDoor::JungleDoor(
				eBlockFace::BLOCK_FACE_XP,
				JungleDoor::Half::Upper,
				JungleDoor::Hinge::Right,
				false,
				true
			);
		case (196 << 4) | 0:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				false,
				false
			);
		case (196 << 4) | 1:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_ZP,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				false,
				false
			);
		case (196 << 4) | 2:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XM,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				false,
				false
			);
		case (196 << 4) | 3:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_ZM,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				false,
				false
			);
		case (196 << 4) | 4:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				true,
				false
			);
		case (196 << 4) | 5:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_ZP,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				true,
				false
			);
		case (196 << 4) | 6:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XM,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				true,
				false
			);
		case (196 << 4) | 7:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_ZM,
				AcaciaDoor::Half::Lower,
				AcaciaDoor::Hinge::Right,
				true,
				false
			);
		case (196 << 4) | 8:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Upper,
				AcaciaDoor::Hinge::Left,
				false,
				false
			);
		case (196 << 4) | 9:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Upper,
				AcaciaDoor::Hinge::Right,
				false,
				false
			);
		case (196 << 4) | 10:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Upper,
				AcaciaDoor::Hinge::Left,
				false,
				true
			);
		case (196 << 4) | 11:
			return AcaciaDoor::AcaciaDoor(
				eBlockFace::BLOCK_FACE_XP,
				AcaciaDoor::Half::Upper,
				AcaciaDoor::Hinge::Right,
				false,
				true
			);
		case (197 << 4) | 0:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				false,
				false
			);
		case (197 << 4) | 1:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_ZP,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				false,
				false
			);
		case (197 << 4) | 2:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XM,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				false,
				false
			);
		case (197 << 4) | 3:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_ZM,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				false,
				false
			);
		case (197 << 4) | 4:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				true,
				false
			);
		case (197 << 4) | 5:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_ZP,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				true,
				false
			);
		case (197 << 4) | 6:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XM,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				true,
				false
			);
		case (197 << 4) | 7:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_ZM,
				DarkOakDoor::Half::Lower,
				DarkOakDoor::Hinge::Right,
				true,
				false
			);
		case (197 << 4) | 8:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Upper,
				DarkOakDoor::Hinge::Left,
				false,
				false
			);
		case (197 << 4) | 9:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Upper,
				DarkOakDoor::Hinge::Right,
				false,
				false
			);
		case (197 << 4) | 10:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Upper,
				DarkOakDoor::Hinge::Left,
				false,
				true
			);
		case (197 << 4) | 11:
			return DarkOakDoor::DarkOakDoor(
				eBlockFace::BLOCK_FACE_XP,
				DarkOakDoor::Half::Upper,
				DarkOakDoor::Hinge::Right,
				false,
				true
			);
		case (198 << 4) | 0: return EndRod::EndRod(eBlockFace::BLOCK_FACE_YM);
		case (198 << 4) | 1: return EndRod::EndRod(eBlockFace::BLOCK_FACE_YP);
		case (198 << 4) | 2: return EndRod::EndRod(eBlockFace::BLOCK_FACE_ZM);
		case (198 << 4) | 3: return EndRod::EndRod(eBlockFace::BLOCK_FACE_ZP);
		case (198 << 4) | 4: return EndRod::EndRod(eBlockFace::BLOCK_FACE_XM);
		case (198 << 4) | 5: return EndRod::EndRod(eBlockFace::BLOCK_FACE_XP);
		case (199 << 4) | 0: return ChorusPlant::ChorusPlant(false, false, false, false, false, false);
		case (200 << 4) | 0: return ChorusFlower::ChorusFlower(0);
		case (200 << 4) | 1: return ChorusFlower::ChorusFlower(1);
		case (200 << 4) | 2: return ChorusFlower::ChorusFlower(2);
		case (200 << 4) | 3: return ChorusFlower::ChorusFlower(3);
		case (200 << 4) | 4: return ChorusFlower::ChorusFlower(4);
		case (200 << 4) | 5: return ChorusFlower::ChorusFlower(5);
		case (201 << 4) | 0: return PurpurBlock::PurpurBlock();
		case (202 << 4) | 0: return PurpurPillar::PurpurPillar(PurpurPillar::Axis::Y);
		case (202 << 4) | 4: return PurpurPillar::PurpurPillar(PurpurPillar::Axis::X);
		case (202 << 4) | 8: return PurpurPillar::PurpurPillar(PurpurPillar::Axis::Z);
		case (203 << 4) | 0:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_XP,
				PurpurStairs::Half::Bottom,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 1:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_XM,
				PurpurStairs::Half::Bottom,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 2:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_ZP,
				PurpurStairs::Half::Bottom,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 3:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_ZM,
				PurpurStairs::Half::Bottom,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 4:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_XP,
				PurpurStairs::Half::Top,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 5:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_XM,
				PurpurStairs::Half::Top,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 6:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_ZP,
				PurpurStairs::Half::Top,
				PurpurStairs::Shape::Straight
			);
		case (203 << 4) | 7:
			return PurpurStairs::PurpurStairs(
				eBlockFace::BLOCK_FACE_ZM,
				PurpurStairs::Half::Top,
				PurpurStairs::Shape::Straight
			);
		case (204 << 4) | 0:  return PurpurSlab::PurpurSlab(PurpurSlab::Type::Double);
		case (205 << 4) | 0:  return PurpurSlab::PurpurSlab(PurpurSlab::Type::Bottom);
		case (205 << 4) | 8:  return PurpurSlab::PurpurSlab(PurpurSlab::Type::Top);
		case (206 << 4) | 0:  return EndStoneBricks::EndStoneBricks();
		case (207 << 4) | 0:  return Beetroots::Beetroots(0);
		case (207 << 4) | 1:  return Beetroots::Beetroots(1);
		case (207 << 4) | 2:  return Beetroots::Beetroots(2);
		case (207 << 4) | 3:  return Beetroots::Beetroots(3);
		case (208 << 4) | 0:  return GrassPath::GrassPath();
		case (209 << 4) | 0:  return EndGateway::EndGateway();
		case (210 << 4) | 0:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_YM);
		case (210 << 4) | 1:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_YP);
		case (210 << 4) | 2:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_ZM);
		case (210 << 4) | 3:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_ZP);
		case (210 << 4) | 4:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_XM);
		case (210 << 4) | 5:  return RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_XP);
		case (210 << 4) | 8:  return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_YM);
		case (210 << 4) | 9:  return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_YP);
		case (210 << 4) | 10: return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_ZM);
		case (210 << 4) | 11: return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_ZP);
		case (210 << 4) | 12: return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_XM);
		case (210 << 4) | 13: return RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_XP);
		case (211 << 4) | 0:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_YM);
		case (211 << 4) | 1:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_YP);
		case (211 << 4) | 2:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_ZM);
		case (211 << 4) | 3:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_ZP);
		case (211 << 4) | 4:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_XM);
		case (211 << 4) | 5:  return ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_XP);
		case (211 << 4) | 8:  return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_YM);
		case (211 << 4) | 9:  return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_YP);
		case (211 << 4) | 10: return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_ZM);
		case (211 << 4) | 11: return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_ZP);
		case (211 << 4) | 12: return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_XM);
		case (211 << 4) | 13: return ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_XP);
		case (212 << 4) | 0:  return FrostedIce::FrostedIce(0);
		case (212 << 4) | 1:  return FrostedIce::FrostedIce(1);
		case (212 << 4) | 2:  return FrostedIce::FrostedIce(2);
		case (212 << 4) | 3:  return FrostedIce::FrostedIce(3);
		case (213 << 4) | 0:  return MagmaBlock::MagmaBlock();
		case (214 << 4) | 0:  return NetherWartBlock::NetherWartBlock();
		case (215 << 4) | 0:  return RedNetherBricks::RedNetherBricks();
		case (216 << 4) | 0:  return BoneBlock::BoneBlock(BoneBlock::Axis::Y);
		case (216 << 4) | 4:  return BoneBlock::BoneBlock(BoneBlock::Axis::X);
		case (216 << 4) | 8:  return BoneBlock::BoneBlock(BoneBlock::Axis::Z);
		case (217 << 4) | 0:  return StructureVoid::StructureVoid();
		case (218 << 4) | 0:  return Observer::Observer(eBlockFace::BLOCK_FACE_YM, false);
		case (218 << 4) | 1:  return Observer::Observer(eBlockFace::BLOCK_FACE_YP, false);
		case (218 << 4) | 2:  return Observer::Observer(eBlockFace::BLOCK_FACE_ZM, false);
		case (218 << 4) | 3:  return Observer::Observer(eBlockFace::BLOCK_FACE_ZP, false);
		case (218 << 4) | 4:  return Observer::Observer(eBlockFace::BLOCK_FACE_XM, false);
		case (218 << 4) | 5:  return Observer::Observer(eBlockFace::BLOCK_FACE_XP, false);
		case (218 << 4) | 8:  return Observer::Observer(eBlockFace::BLOCK_FACE_YM, true);
		case (218 << 4) | 9:  return Observer::Observer(eBlockFace::BLOCK_FACE_YP, true);
		case (218 << 4) | 10: return Observer::Observer(eBlockFace::BLOCK_FACE_ZM, true);
		case (218 << 4) | 11: return Observer::Observer(eBlockFace::BLOCK_FACE_ZP, true);
		case (218 << 4) | 12: return Observer::Observer(eBlockFace::BLOCK_FACE_XM, true);
		case (218 << 4) | 13: return Observer::Observer(eBlockFace::BLOCK_FACE_XP, true);
		case (219 << 4) | 0:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (219 << 4) | 1:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (219 << 4) | 2:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (219 << 4) | 3:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (219 << 4) | 4:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (219 << 4) | 5:  return WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (220 << 4) | 0:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (220 << 4) | 1:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (220 << 4) | 2:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (220 << 4) | 3:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (220 << 4) | 4:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (220 << 4) | 5:  return OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (221 << 4) | 0:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (221 << 4) | 1:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (221 << 4) | 2:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (221 << 4) | 3:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (221 << 4) | 4:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (221 << 4) | 5:  return MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (222 << 4) | 0:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (222 << 4) | 1:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (222 << 4) | 2:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (222 << 4) | 3:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (222 << 4) | 4:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (222 << 4) | 5:  return LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (223 << 4) | 0:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (223 << 4) | 1:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (223 << 4) | 2:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (223 << 4) | 3:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (223 << 4) | 4:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (223 << 4) | 5:  return YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (224 << 4) | 0:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (224 << 4) | 1:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (224 << 4) | 2:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (224 << 4) | 3:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (224 << 4) | 4:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (224 << 4) | 5:  return LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (225 << 4) | 0:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (225 << 4) | 1:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (225 << 4) | 2:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (225 << 4) | 3:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (225 << 4) | 4:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (225 << 4) | 5:  return PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (226 << 4) | 0:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (226 << 4) | 1:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (226 << 4) | 2:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (226 << 4) | 3:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (226 << 4) | 4:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (226 << 4) | 5:  return GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (227 << 4) | 0:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (227 << 4) | 1:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (227 << 4) | 2:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (227 << 4) | 3:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (227 << 4) | 4:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (227 << 4) | 5:  return LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (228 << 4) | 0:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (228 << 4) | 1:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (228 << 4) | 2:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (228 << 4) | 3:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (228 << 4) | 4:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (228 << 4) | 5:  return CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (229 << 4) | 0:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (229 << 4) | 1:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (229 << 4) | 2:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (229 << 4) | 3:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (229 << 4) | 4:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (229 << 4) | 5:  return PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (230 << 4) | 0:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (230 << 4) | 1:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (230 << 4) | 2:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (230 << 4) | 3:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (230 << 4) | 4:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (230 << 4) | 5:  return BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (231 << 4) | 0:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (231 << 4) | 1:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (231 << 4) | 2:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (231 << 4) | 3:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (231 << 4) | 4:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (231 << 4) | 5:  return BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (232 << 4) | 0:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (232 << 4) | 1:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (232 << 4) | 2:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (232 << 4) | 3:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (232 << 4) | 4:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (232 << 4) | 5:  return GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (233 << 4) | 0:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (233 << 4) | 1:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (233 << 4) | 2:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (233 << 4) | 3:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (233 << 4) | 4:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (233 << 4) | 5:  return RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (234 << 4) | 0:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_YM);
		case (234 << 4) | 1:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_YP);
		case (234 << 4) | 2:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_ZM);
		case (234 << 4) | 3:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_ZP);
		case (234 << 4) | 4:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_XM);
		case (234 << 4) | 5:  return BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_XP);
		case (235 << 4) | 0:  return WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (235 << 4) | 1:  return WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (235 << 4) | 2:  return WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (235 << 4) | 3:  return WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (236 << 4) | 0:  return OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (236 << 4) | 1:  return OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (236 << 4) | 2:  return OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (236 << 4) | 3:  return OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (237 << 4) | 0:  return MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (237 << 4) | 1:  return MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (237 << 4) | 2:  return MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (237 << 4) | 3:  return MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (238 << 4) | 0:  return LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (238 << 4) | 1:  return LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (238 << 4) | 2:  return LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (238 << 4) | 3:  return LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (239 << 4) | 0:  return YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (239 << 4) | 1:  return YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (239 << 4) | 2:  return YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (239 << 4) | 3:  return YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (240 << 4) | 0:  return LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (240 << 4) | 1:  return LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (240 << 4) | 2:  return LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (240 << 4) | 3:  return LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (241 << 4) | 0:  return PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (241 << 4) | 1:  return PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (241 << 4) | 2:  return PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (241 << 4) | 3:  return PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (242 << 4) | 0:  return GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (242 << 4) | 1:  return GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (242 << 4) | 2:  return GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (242 << 4) | 3:  return GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (243 << 4) | 0:  return LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (243 << 4) | 1:  return LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (243 << 4) | 2:  return LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (243 << 4) | 3:  return LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (244 << 4) | 0:  return CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (244 << 4) | 1:  return CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (244 << 4) | 2:  return CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (244 << 4) | 3:  return CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (245 << 4) | 0:  return PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (245 << 4) | 1:  return PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (245 << 4) | 2:  return PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (245 << 4) | 3:  return PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (246 << 4) | 0:  return BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (246 << 4) | 1:  return BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (246 << 4) | 2:  return BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (246 << 4) | 3:  return BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (247 << 4) | 0:  return BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (247 << 4) | 1:  return BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (247 << 4) | 2:  return BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (247 << 4) | 3:  return BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (248 << 4) | 0:  return GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (248 << 4) | 1:  return GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (248 << 4) | 2:  return GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (248 << 4) | 3:  return GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (249 << 4) | 0:  return RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (249 << 4) | 1:  return RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (249 << 4) | 2:  return RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (249 << 4) | 3:  return RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (250 << 4) | 0:  return BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP);
		case (250 << 4) | 1:  return BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_XM);
		case (250 << 4) | 2:  return BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM);
		case (250 << 4) | 3:  return BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_XP);
		case (251 << 4) | 0:  return WhiteConcrete::WhiteConcrete();
		case (251 << 4) | 1:  return OrangeConcrete::OrangeConcrete();
		case (251 << 4) | 2:  return MagentaConcrete::MagentaConcrete();
		case (251 << 4) | 3:  return LightBlueConcrete::LightBlueConcrete();
		case (251 << 4) | 4:  return YellowConcrete::YellowConcrete();
		case (251 << 4) | 5:  return LimeConcrete::LimeConcrete();
		case (251 << 4) | 6:  return PinkConcrete::PinkConcrete();
		case (251 << 4) | 7:  return GrayConcrete::GrayConcrete();
		case (251 << 4) | 8:  return LightGrayConcrete::LightGrayConcrete();
		case (251 << 4) | 9:  return CyanConcrete::CyanConcrete();
		case (251 << 4) | 10: return PurpleConcrete::PurpleConcrete();
		case (251 << 4) | 11: return BlueConcrete::BlueConcrete();
		case (251 << 4) | 12: return BrownConcrete::BrownConcrete();
		case (251 << 4) | 13: return GreenConcrete::GreenConcrete();
		case (251 << 4) | 14: return RedConcrete::RedConcrete();
		case (251 << 4) | 15: return BlackConcrete::BlackConcrete();
		case (252 << 4) | 0:  return WhiteConcretePowder::WhiteConcretePowder();
		case (252 << 4) | 1:  return OrangeConcretePowder::OrangeConcretePowder();
		case (252 << 4) | 2:  return MagentaConcretePowder::MagentaConcretePowder();
		case (252 << 4) | 3:  return LightBlueConcretePowder::LightBlueConcretePowder();
		case (252 << 4) | 4:  return YellowConcretePowder::YellowConcretePowder();
		case (252 << 4) | 5:  return LimeConcretePowder::LimeConcretePowder();
		case (252 << 4) | 6:  return PinkConcretePowder::PinkConcretePowder();
		case (252 << 4) | 7:  return GrayConcretePowder::GrayConcretePowder();
		case (252 << 4) | 8:  return LightGrayConcretePowder::LightGrayConcretePowder();
		case (252 << 4) | 9:  return CyanConcretePowder::CyanConcretePowder();
		case (252 << 4) | 10: return PurpleConcretePowder::PurpleConcretePowder();
		case (252 << 4) | 11: return BlueConcretePowder::BlueConcretePowder();
		case (252 << 4) | 12: return BrownConcretePowder::BrownConcretePowder();
		case (252 << 4) | 13: return GreenConcretePowder::GreenConcretePowder();
		case (252 << 4) | 14: return RedConcretePowder::RedConcretePowder();
		case (252 << 4) | 15: return BlackConcretePowder::BlackConcretePowder();
		case (255 << 4) | 0:  return StructureBlock::StructureBlock(StructureBlock::Mode::Save);
		case (255 << 4) | 1:  return StructureBlock::StructureBlock(StructureBlock::Mode::Load);
		case (255 << 4) | 2:  return StructureBlock::StructureBlock(StructureBlock::Mode::Corner);
		case (255 << 4) | 3:  return StructureBlock::StructureBlock(StructureBlock::Mode::Data);
		default:              return Air::Air();
	}
}

Item FromItem(const short Item, const short Damage)
{
	switch ((Item << 16) | Damage)
	{
		case (1 << 16) | 0:       return Item::Stone;
		case (1 << 16) | 1:       return Item::Granite;
		case (1 << 16) | 2:       return Item::PolishedGranite;
		case (1 << 16) | 3:       return Item::Diorite;
		case (1 << 16) | 4:       return Item::PolishedDiorite;
		case (1 << 16) | 5:       return Item::Andesite;
		case (1 << 16) | 6:       return Item::PolishedAndesite;
		case (2 << 16) | 0:       return Item::GrassBlock;
		case (3 << 16) | 0:       return Item::Dirt;
		case (3 << 16) | 1:       return Item::CoarseDirt;
		case (3 << 16) | 2:       return Item::Podzol;
		case (4 << 16) | 0:       return Item::Cobblestone;
		case (5 << 16) | 0:       return Item::OakPlanks;
		case (5 << 16) | 1:       return Item::SprucePlanks;
		case (5 << 16) | 2:       return Item::BirchPlanks;
		case (5 << 16) | 3:       return Item::JunglePlanks;
		case (5 << 16) | 4:       return Item::AcaciaPlanks;
		case (5 << 16) | 5:       return Item::DarkOakPlanks;
		case (6 << 16) | 0:       return Item::OakSapling;
		case (6 << 16) | 1:       return Item::SpruceSapling;
		case (6 << 16) | 2:       return Item::BirchSapling;
		case (6 << 16) | 3:       return Item::JungleSapling;
		case (6 << 16) | 4:       return Item::AcaciaSapling;
		case (6 << 16) | 5:       return Item::DarkOakSapling;
		case (7 << 16) | 0:       return Item::Bedrock;
		case (12 << 16) | 0:      return Item::Sand;
		case (12 << 16) | 1:      return Item::RedSand;
		case (13 << 16) | 0:      return Item::Gravel;
		case (14 << 16) | 0:      return Item::GoldOre;
		case (15 << 16) | 0:      return Item::IronOre;
		case (16 << 16) | 0:      return Item::CoalOre;
		case (17 << 16) | 0:      return Item::OakLog;
		case (17 << 16) | 1:      return Item::SpruceLog;
		case (17 << 16) | 2:      return Item::BirchLog;
		case (17 << 16) | 3:      return Item::JungleLog;
		case (162 << 16) | 0:     return Item::AcaciaLog;
		case (162 << 16) | 1:     return Item::DarkOakLog;
		case (18 << 16) | 0:      return Item::OakLeaves;
		case (18 << 16) | 1:      return Item::SpruceLeaves;
		case (18 << 16) | 2:      return Item::BirchLeaves;
		case (18 << 16) | 3:      return Item::JungleLeaves;
		case (161 << 16) | 0:     return Item::AcaciaLeaves;
		case (161 << 16) | 1:     return Item::DarkOakLeaves;
		case (19 << 16) | 0:      return Item::Sponge;
		case (19 << 16) | 1:      return Item::WetSponge;
		case (20 << 16) | 0:      return Item::Glass;
		case (21 << 16) | 0:      return Item::LapisOre;
		case (22 << 16) | 0:      return Item::LapisBlock;
		case (23 << 16) | 0:      return Item::Dispenser;
		case (24 << 16) | 0:      return Item::Sandstone;
		case (24 << 16) | 1:      return Item::ChiseledSandstone;
		case (24 << 16) | 2:      return Item::CutSandstone;
		case (25 << 16) | 0:      return Item::NoteBlock;
		case (27 << 16) | 0:      return Item::PoweredRail;
		case (28 << 16) | 0:      return Item::DetectorRail;
		case (29 << 16) | 0:      return Item::StickyPiston;
		case (30 << 16) | 0:      return Item::Cobweb;
		case (31 << 16) | 2:      return Item::Fern;
		case (32 << 16) | 0:      return Item::DeadBush;
		case (33 << 16) | 0:      return Item::Piston;
		case (35 << 16) | 0:      return Item::WhiteWool;
		case (35 << 16) | 1:      return Item::OrangeWool;
		case (35 << 16) | 2:      return Item::MagentaWool;
		case (35 << 16) | 3:      return Item::LightBlueWool;
		case (35 << 16) | 4:      return Item::YellowWool;
		case (35 << 16) | 5:      return Item::LimeWool;
		case (35 << 16) | 6:      return Item::PinkWool;
		case (35 << 16) | 7:      return Item::GrayWool;
		case (35 << 16) | 8:      return Item::LightGrayWool;
		case (35 << 16) | 9:      return Item::CyanWool;
		case (35 << 16) | 10:     return Item::PurpleWool;
		case (35 << 16) | 11:     return Item::BlueWool;
		case (35 << 16) | 12:     return Item::BrownWool;
		case (35 << 16) | 13:     return Item::GreenWool;
		case (35 << 16) | 14:     return Item::RedWool;
		case (35 << 16) | 15:     return Item::BlackWool;
		case (37 << 16) | 0:      return Item::Dandelion;
		case (38 << 16) | 0:      return Item::Poppy;
		case (38 << 16) | 1:      return Item::BlueOrchid;
		case (38 << 16) | 2:      return Item::Allium;
		case (38 << 16) | 3:      return Item::AzureBluet;
		case (38 << 16) | 4:      return Item::RedTulip;
		case (38 << 16) | 5:      return Item::OrangeTulip;
		case (38 << 16) | 6:      return Item::WhiteTulip;
		case (38 << 16) | 7:      return Item::PinkTulip;
		case (38 << 16) | 8:      return Item::OxeyeDaisy;
		case (39 << 16) | 0:      return Item::BrownMushroom;
		case (40 << 16) | 0:      return Item::RedMushroom;
		case (41 << 16) | 0:      return Item::GoldBlock;
		case (42 << 16) | 0:      return Item::IronBlock;
		case (126 << 16) | 0:     return Item::OakSlab;
		case (126 << 16) | 1:     return Item::SpruceSlab;
		case (126 << 16) | 2:     return Item::BirchSlab;
		case (126 << 16) | 3:     return Item::JungleSlab;
		case (126 << 16) | 4:     return Item::AcaciaSlab;
		case (126 << 16) | 5:     return Item::DarkOakSlab;
		case (44 << 16) | 2:      return Item::StoneSlab;
		case (44 << 16) | 1:      return Item::SandstoneSlab;
		case (44 << 16) | 3:      return Item::CobblestoneSlab;
		case (44 << 16) | 4:      return Item::BrickSlab;
		case (44 << 16) | 5:      return Item::StoneBrickSlab;
		case (44 << 16) | 6:      return Item::NetherBrickSlab;
		case (44 << 16) | 7:      return Item::QuartzSlab;
		case (182 << 16) | 0:     return Item::RedSandstoneSlab;
		case (205 << 16) | 0:     return Item::PurpurSlab;
		case (43 << 16) | 7:      return Item::SmoothQuartz;
		case (43 << 16) | 8:      return Item::SmoothStone;
		case (45 << 16) | 0:      return Item::Bricks;
		case (46 << 16) | 0:      return Item::TNT;
		case (47 << 16) | 0:      return Item::Bookshelf;
		case (48 << 16) | 0:      return Item::MossyCobblestone;
		case (49 << 16) | 0:      return Item::Obsidian;
		case (50 << 16) | 0:      return Item::Torch;
		case (198 << 16) | 0:     return Item::EndRod;
		case (199 << 16) | 0:     return Item::ChorusPlant;
		case (200 << 16) | 0:     return Item::ChorusFlower;
		case (201 << 16) | 0:     return Item::PurpurBlock;
		case (202 << 16) | 0:     return Item::PurpurPillar;
		case (203 << 16) | 0:     return Item::PurpurStairs;
		case (52 << 16) | 0:      return Item::Spawner;
		case (53 << 16) | 0:      return Item::OakStairs;
		case (54 << 16) | 0:      return Item::Chest;
		case (56 << 16) | 0:      return Item::DiamondOre;
		case (57 << 16) | 0:      return Item::DiamondBlock;
		case (58 << 16) | 0:      return Item::CraftingTable;
		case (60 << 16) | 0:      return Item::Farmland;
		case (61 << 16) | 0:      return Item::Furnace;
		case (65 << 16) | 0:      return Item::Ladder;
		case (66 << 16) | 0:      return Item::Rail;
		case (67 << 16) | 0:      return Item::CobblestoneStairs;
		case (69 << 16) | 0:      return Item::Lever;
		case (70 << 16) | 0:      return Item::StonePressurePlate;
		case (72 << 16) | 0:      return Item::OakPressurePlate;
		case (73 << 16) | 0:      return Item::RedstoneOre;
		case (76 << 16) | 0:      return Item::RedstoneTorch;
		case (77 << 16) | 0:      return Item::StoneButton;
		case (78 << 16) | 0:      return Item::Snow;
		case (79 << 16) | 0:      return Item::Ice;
		case (80 << 16) | 0:      return Item::SnowBlock;
		case (81 << 16) | 0:      return Item::Cactus;
		case (82 << 16) | 0:      return Item::Clay;
		case (84 << 16) | 0:      return Item::Jukebox;
		case (85 << 16) | 0:      return Item::OakFence;
		case (188 << 16) | 0:     return Item::SpruceFence;
		case (189 << 16) | 0:     return Item::BirchFence;
		case (190 << 16) | 0:     return Item::JungleFence;
		case (192 << 16) | 0:     return Item::AcaciaFence;
		case (191 << 16) | 0:     return Item::DarkOakFence;
		case (86 << 16) | 0:      return Item::Pumpkin;
		case (87 << 16) | 0:      return Item::Netherrack;
		case (88 << 16) | 0:      return Item::SoulSand;
		case (89 << 16) | 0:      return Item::Glowstone;
		case (91 << 16) | 0:      return Item::JackOLantern;
		case (96 << 16) | 0:      return Item::OakTrapdoor;
		case (97 << 16) | 0:      return Item::InfestedStone;
		case (97 << 16) | 1:      return Item::InfestedCobblestone;
		case (97 << 16) | 2:      return Item::InfestedStoneBricks;
		case (97 << 16) | 3:      return Item::InfestedMossyStoneBricks;
		case (97 << 16) | 4:      return Item::InfestedCrackedStoneBricks;
		case (97 << 16) | 5:      return Item::InfestedChiseledStoneBricks;
		case (98 << 16) | 0:      return Item::StoneBricks;
		case (98 << 16) | 1:      return Item::MossyStoneBricks;
		case (98 << 16) | 2:      return Item::CrackedStoneBricks;
		case (98 << 16) | 3:      return Item::ChiseledStoneBricks;
		case (99 << 16) | 0:      return Item::BrownMushroomBlock;
		case (100 << 16) | 0:     return Item::RedMushroomBlock;
		case (101 << 16) | 0:     return Item::IronBars;
		case (102 << 16) | 0:     return Item::GlassPane;
		case (103 << 16) | 0:     return Item::Melon;
		case (106 << 16) | 0:     return Item::Vine;
		case (107 << 16) | 0:     return Item::OakFenceGate;
		case (183 << 16) | 0:     return Item::SpruceFenceGate;
		case (184 << 16) | 0:     return Item::BirchFenceGate;
		case (185 << 16) | 0:     return Item::JungleFenceGate;
		case (187 << 16) | 0:     return Item::AcaciaFenceGate;
		case (186 << 16) | 0:     return Item::DarkOakFenceGate;
		case (108 << 16) | 0:     return Item::BrickStairs;
		case (109 << 16) | 0:     return Item::StoneBrickStairs;
		case (110 << 16) | 0:     return Item::Mycelium;
		case (111 << 16) | 0:     return Item::LilyPad;
		case (112 << 16) | 0:     return Item::NetherBricks;
		case (113 << 16) | 0:     return Item::NetherBrickFence;
		case (114 << 16) | 0:     return Item::NetherBrickStairs;
		case (116 << 16) | 0:     return Item::EnchantingTable;
		case (120 << 16) | 0:     return Item::EndPortalFrame;
		case (121 << 16) | 0:     return Item::EndStone;
		case (206 << 16) | 0:     return Item::EndStoneBricks;
		case (122 << 16) | 0:     return Item::DragonEgg;
		case (123 << 16) | 0:     return Item::RedstoneLamp;
		case (128 << 16) | 0:     return Item::SandstoneStairs;
		case (129 << 16) | 0:     return Item::EmeraldOre;
		case (130 << 16) | 0:     return Item::EnderChest;
		case (131 << 16) | 0:     return Item::TripwireHook;
		case (133 << 16) | 0:     return Item::EmeraldBlock;
		case (134 << 16) | 0:     return Item::SpruceStairs;
		case (135 << 16) | 0:     return Item::BirchStairs;
		case (136 << 16) | 0:     return Item::JungleStairs;
		case (137 << 16) | 0:     return Item::CommandBlock;
		case (138 << 16) | 0:     return Item::Beacon;
		case (139 << 16) | 0:     return Item::CobblestoneWall;
		case (139 << 16) | 1:     return Item::MossyCobblestoneWall;
		case (143 << 16) | 0:     return Item::OakButton;
		case (145 << 16) | 0:     return Item::Anvil;
		case (145 << 16) | 1:     return Item::ChippedAnvil;
		case (145 << 16) | 2:     return Item::DamagedAnvil;
		case (146 << 16) | 0:     return Item::TrappedChest;
		case (147 << 16) | 0:     return Item::LightWeightedPressurePlate;
		case (148 << 16) | 0:     return Item::HeavyWeightedPressurePlate;
		case (151 << 16) | 0:     return Item::DaylightDetector;
		case (152 << 16) | 0:     return Item::RedstoneBlock;
		case (153 << 16) | 0:     return Item::NetherQuartzOre;
		case (154 << 16) | 0:     return Item::Hopper;
		case (155 << 16) | 1:     return Item::ChiseledQuartzBlock;
		case (155 << 16) | 0:     return Item::QuartzBlock;
		case (155 << 16) | 2:     return Item::QuartzPillar;
		case (156 << 16) | 0:     return Item::QuartzStairs;
		case (157 << 16) | 0:     return Item::ActivatorRail;
		case (158 << 16) | 0:     return Item::Dropper;
		case (159 << 16) | 0:     return Item::WhiteTerracotta;
		case (159 << 16) | 1:     return Item::OrangeTerracotta;
		case (159 << 16) | 2:     return Item::MagentaTerracotta;
		case (159 << 16) | 3:     return Item::LightBlueTerracotta;
		case (159 << 16) | 4:     return Item::YellowTerracotta;
		case (159 << 16) | 5:     return Item::LimeTerracotta;
		case (159 << 16) | 6:     return Item::PinkTerracotta;
		case (159 << 16) | 7:     return Item::GrayTerracotta;
		case (159 << 16) | 8:     return Item::LightGrayTerracotta;
		case (159 << 16) | 9:     return Item::CyanTerracotta;
		case (159 << 16) | 10:    return Item::PurpleTerracotta;
		case (159 << 16) | 11:    return Item::BlueTerracotta;
		case (159 << 16) | 12:    return Item::BrownTerracotta;
		case (159 << 16) | 13:    return Item::GreenTerracotta;
		case (159 << 16) | 14:    return Item::RedTerracotta;
		case (159 << 16) | 15:    return Item::BlackTerracotta;
		case (166 << 16) | 0:     return Item::Barrier;
		case (167 << 16) | 0:     return Item::IronTrapdoor;
		case (170 << 16) | 0:     return Item::HayBale;
		case (171 << 16) | 0:     return Item::WhiteCarpet;
		case (171 << 16) | 1:     return Item::OrangeCarpet;
		case (171 << 16) | 2:     return Item::MagentaCarpet;
		case (171 << 16) | 3:     return Item::LightBlueCarpet;
		case (171 << 16) | 4:     return Item::YellowCarpet;
		case (171 << 16) | 5:     return Item::LimeCarpet;
		case (171 << 16) | 6:     return Item::PinkCarpet;
		case (171 << 16) | 7:     return Item::GrayCarpet;
		case (171 << 16) | 8:     return Item::LightGrayCarpet;
		case (171 << 16) | 9:     return Item::CyanCarpet;
		case (171 << 16) | 10:    return Item::PurpleCarpet;
		case (171 << 16) | 11:    return Item::BlueCarpet;
		case (171 << 16) | 12:    return Item::BrownCarpet;
		case (171 << 16) | 13:    return Item::GreenCarpet;
		case (171 << 16) | 14:    return Item::RedCarpet;
		case (171 << 16) | 15:    return Item::BlackCarpet;
		case (172 << 16) | 0:     return Item::Terracotta;
		case (173 << 16) | 0:     return Item::CoalBlock;
		case (174 << 16) | 0:     return Item::PackedIce;
		case (163 << 16) | 0:     return Item::AcaciaStairs;
		case (164 << 16) | 0:     return Item::DarkOakStairs;
		case (165 << 16) | 0:     return Item::SlimeBlock;
		case (208 << 16) | 0:     return Item::GrassPath;
		case (175 << 16) | 0:     return Item::Sunflower;
		case (175 << 16) | 1:     return Item::Lilac;
		case (175 << 16) | 4:     return Item::RoseBush;
		case (175 << 16) | 5:     return Item::Peony;
		case (175 << 16) | 2:     return Item::TallGrass;
		case (175 << 16) | 3:     return Item::LargeFern;
		case (95 << 16) | 0:      return Item::WhiteStainedGlass;
		case (95 << 16) | 1:      return Item::OrangeStainedGlass;
		case (95 << 16) | 2:      return Item::MagentaStainedGlass;
		case (95 << 16) | 3:      return Item::LightBlueStainedGlass;
		case (95 << 16) | 4:      return Item::YellowStainedGlass;
		case (95 << 16) | 5:      return Item::LimeStainedGlass;
		case (95 << 16) | 6:      return Item::PinkStainedGlass;
		case (95 << 16) | 7:      return Item::GrayStainedGlass;
		case (95 << 16) | 8:      return Item::LightGrayStainedGlass;
		case (95 << 16) | 9:      return Item::CyanStainedGlass;
		case (95 << 16) | 10:     return Item::PurpleStainedGlass;
		case (95 << 16) | 11:     return Item::BlueStainedGlass;
		case (95 << 16) | 12:     return Item::BrownStainedGlass;
		case (95 << 16) | 13:     return Item::GreenStainedGlass;
		case (95 << 16) | 14:     return Item::RedStainedGlass;
		case (95 << 16) | 15:     return Item::BlackStainedGlass;
		case (160 << 16) | 0:     return Item::WhiteStainedGlassPane;
		case (160 << 16) | 1:     return Item::OrangeStainedGlassPane;
		case (160 << 16) | 2:     return Item::MagentaStainedGlassPane;
		case (160 << 16) | 3:     return Item::LightBlueStainedGlassPane;
		case (160 << 16) | 4:     return Item::YellowStainedGlassPane;
		case (160 << 16) | 5:     return Item::LimeStainedGlassPane;
		case (160 << 16) | 6:     return Item::PinkStainedGlassPane;
		case (160 << 16) | 7:     return Item::GrayStainedGlassPane;
		case (160 << 16) | 8:     return Item::LightGrayStainedGlassPane;
		case (160 << 16) | 9:     return Item::CyanStainedGlassPane;
		case (160 << 16) | 10:    return Item::PurpleStainedGlassPane;
		case (160 << 16) | 11:    return Item::BlueStainedGlassPane;
		case (160 << 16) | 12:    return Item::BrownStainedGlassPane;
		case (160 << 16) | 13:    return Item::GreenStainedGlassPane;
		case (160 << 16) | 14:    return Item::RedStainedGlassPane;
		case (160 << 16) | 15:    return Item::BlackStainedGlassPane;
		case (168 << 16) | 0:     return Item::Prismarine;
		case (168 << 16) | 1:     return Item::PrismarineBricks;
		case (168 << 16) | 2:     return Item::DarkPrismarine;
		case (169 << 16) | 0:     return Item::SeaLantern;
		case (179 << 16) | 0:     return Item::RedSandstone;
		case (179 << 16) | 1:     return Item::ChiseledRedSandstone;
		case (179 << 16) | 2:     return Item::CutRedSandstone;
		case (180 << 16) | 0:     return Item::RedSandstoneStairs;
		case (210 << 16) | 0:     return Item::RepeatingCommandBlock;
		case (211 << 16) | 0:     return Item::ChainCommandBlock;
		case (213 << 16) | 0:     return Item::MagmaBlock;
		case (214 << 16) | 0:     return Item::NetherWartBlock;
		case (215 << 16) | 0:     return Item::RedNetherBricks;
		case (216 << 16) | 0:     return Item::BoneBlock;
		case (217 << 16) | 0:     return Item::StructureVoid;
		case (218 << 16) | 0:     return Item::Observer;
		case (219 << 16) | 0:     return Item::WhiteShulkerBox;
		case (220 << 16) | 0:     return Item::OrangeShulkerBox;
		case (221 << 16) | 0:     return Item::MagentaShulkerBox;
		case (222 << 16) | 0:     return Item::LightBlueShulkerBox;
		case (223 << 16) | 0:     return Item::YellowShulkerBox;
		case (224 << 16) | 0:     return Item::LimeShulkerBox;
		case (225 << 16) | 0:     return Item::PinkShulkerBox;
		case (226 << 16) | 0:     return Item::GrayShulkerBox;
		case (227 << 16) | 0:     return Item::LightGrayShulkerBox;
		case (228 << 16) | 0:     return Item::CyanShulkerBox;
		case (229 << 16) | 0:     return Item::PurpleShulkerBox;
		case (230 << 16) | 0:     return Item::BlueShulkerBox;
		case (231 << 16) | 0:     return Item::BrownShulkerBox;
		case (232 << 16) | 0:     return Item::GreenShulkerBox;
		case (233 << 16) | 0:     return Item::RedShulkerBox;
		case (234 << 16) | 0:     return Item::BlackShulkerBox;
		case (235 << 16) | 0:     return Item::WhiteGlazedTerracotta;
		case (236 << 16) | 0:     return Item::OrangeGlazedTerracotta;
		case (237 << 16) | 0:     return Item::MagentaGlazedTerracotta;
		case (238 << 16) | 0:     return Item::LightBlueGlazedTerracotta;
		case (239 << 16) | 0:     return Item::YellowGlazedTerracotta;
		case (240 << 16) | 0:     return Item::LimeGlazedTerracotta;
		case (241 << 16) | 0:     return Item::PinkGlazedTerracotta;
		case (242 << 16) | 0:     return Item::GrayGlazedTerracotta;
		case (243 << 16) | 0:     return Item::LightGrayGlazedTerracotta;
		case (244 << 16) | 0:     return Item::CyanGlazedTerracotta;
		case (245 << 16) | 0:     return Item::PurpleGlazedTerracotta;
		case (246 << 16) | 0:     return Item::BlueGlazedTerracotta;
		case (247 << 16) | 0:     return Item::BrownGlazedTerracotta;
		case (248 << 16) | 0:     return Item::GreenGlazedTerracotta;
		case (249 << 16) | 0:     return Item::RedGlazedTerracotta;
		case (250 << 16) | 0:     return Item::BlackGlazedTerracotta;
		case (251 << 16) | 0:     return Item::WhiteConcrete;
		case (251 << 16) | 1:     return Item::OrangeConcrete;
		case (251 << 16) | 2:     return Item::MagentaConcrete;
		case (251 << 16) | 3:     return Item::LightBlueConcrete;
		case (251 << 16) | 4:     return Item::YellowConcrete;
		case (251 << 16) | 5:     return Item::LimeConcrete;
		case (251 << 16) | 6:     return Item::PinkConcrete;
		case (251 << 16) | 7:     return Item::GrayConcrete;
		case (251 << 16) | 8:     return Item::LightGrayConcrete;
		case (251 << 16) | 9:     return Item::CyanConcrete;
		case (251 << 16) | 10:    return Item::PurpleConcrete;
		case (251 << 16) | 11:    return Item::BlueConcrete;
		case (251 << 16) | 12:    return Item::BrownConcrete;
		case (251 << 16) | 13:    return Item::GreenConcrete;
		case (251 << 16) | 14:    return Item::RedConcrete;
		case (251 << 16) | 15:    return Item::BlackConcrete;
		case (252 << 16) | 0:     return Item::WhiteConcretePowder;
		case (252 << 16) | 1:     return Item::OrangeConcretePowder;
		case (252 << 16) | 2:     return Item::MagentaConcretePowder;
		case (252 << 16) | 3:     return Item::LightBlueConcretePowder;
		case (252 << 16) | 4:     return Item::YellowConcretePowder;
		case (252 << 16) | 5:     return Item::LimeConcretePowder;
		case (252 << 16) | 6:     return Item::PinkConcretePowder;
		case (252 << 16) | 7:     return Item::GrayConcretePowder;
		case (252 << 16) | 8:     return Item::LightGrayConcretePowder;
		case (252 << 16) | 9:     return Item::CyanConcretePowder;
		case (252 << 16) | 10:    return Item::PurpleConcretePowder;
		case (252 << 16) | 11:    return Item::BlueConcretePowder;
		case (252 << 16) | 12:    return Item::BrownConcretePowder;
		case (252 << 16) | 13:    return Item::GreenConcretePowder;
		case (252 << 16) | 14:    return Item::RedConcretePowder;
		case (252 << 16) | 15:    return Item::BlackConcretePowder;
		case (330 << 16) | 0:     return Item::IronDoor;
		case (324 << 16) | 0:     return Item::OakDoor;
		case (427 << 16) | 0:     return Item::SpruceDoor;
		case (428 << 16) | 0:     return Item::BirchDoor;
		case (429 << 16) | 0:     return Item::JungleDoor;
		case (430 << 16) | 0:     return Item::AcaciaDoor;
		case (431 << 16) | 0:     return Item::DarkOakDoor;
		case (356 << 16) | 0:     return Item::Repeater;
		case (404 << 16) | 0:     return Item::Comparator;
		case (255 << 16) | 0:     return Item::StructureBlock;
		case (256 << 16) | 0:     return Item::IronShovel;
		case (257 << 16) | 0:     return Item::IronPickaxe;
		case (258 << 16) | 0:     return Item::IronAxe;
		case (259 << 16) | 0:     return Item::FlintAndSteel;
		case (260 << 16) | 0:     return Item::Apple;
		case (261 << 16) | 0:     return Item::Bow;
		case (262 << 16) | 0:     return Item::Arrow;
		case (263 << 16) | 0:     return Item::Coal;
		case (263 << 16) | 1:     return Item::Charcoal;
		case (264 << 16) | 0:     return Item::Diamond;
		case (265 << 16) | 0:     return Item::IronIngot;
		case (266 << 16) | 0:     return Item::GoldIngot;
		case (267 << 16) | 0:     return Item::IronSword;
		case (268 << 16) | 0:     return Item::WoodenSword;
		case (269 << 16) | 0:     return Item::WoodenShovel;
		case (270 << 16) | 0:     return Item::WoodenPickaxe;
		case (271 << 16) | 0:     return Item::WoodenAxe;
		case (272 << 16) | 0:     return Item::StoneSword;
		case (273 << 16) | 0:     return Item::StoneShovel;
		case (274 << 16) | 0:     return Item::StonePickaxe;
		case (275 << 16) | 0:     return Item::StoneAxe;
		case (276 << 16) | 0:     return Item::DiamondSword;
		case (277 << 16) | 0:     return Item::DiamondShovel;
		case (278 << 16) | 0:     return Item::DiamondPickaxe;
		case (279 << 16) | 0:     return Item::DiamondAxe;
		case (280 << 16) | 0:     return Item::Stick;
		case (281 << 16) | 0:     return Item::Bowl;
		case (282 << 16) | 0:     return Item::MushroomStew;
		case (283 << 16) | 0:     return Item::GoldenSword;
		case (284 << 16) | 0:     return Item::GoldenShovel;
		case (285 << 16) | 0:     return Item::GoldenPickaxe;
		case (286 << 16) | 0:     return Item::GoldenAxe;
		case (287 << 16) | 0:     return Item::String;
		case (288 << 16) | 0:     return Item::Feather;
		case (289 << 16) | 0:     return Item::Gunpowder;
		case (290 << 16) | 0:     return Item::WoodenHoe;
		case (291 << 16) | 0:     return Item::StoneHoe;
		case (292 << 16) | 0:     return Item::IronHoe;
		case (293 << 16) | 0:     return Item::DiamondHoe;
		case (294 << 16) | 0:     return Item::GoldenHoe;
		case (295 << 16) | 0:     return Item::WheatSeeds;
		case (296 << 16) | 0:     return Item::Wheat;
		case (297 << 16) | 0:     return Item::Bread;
		case (298 << 16) | 0:     return Item::LeatherHelmet;
		case (299 << 16) | 0:     return Item::LeatherChestplate;
		case (300 << 16) | 0:     return Item::LeatherLeggings;
		case (301 << 16) | 0:     return Item::LeatherBoots;
		case (302 << 16) | 0:     return Item::ChainmailHelmet;
		case (303 << 16) | 0:     return Item::ChainmailChestplate;
		case (304 << 16) | 0:     return Item::ChainmailLeggings;
		case (305 << 16) | 0:     return Item::ChainmailBoots;
		case (306 << 16) | 0:     return Item::IronHelmet;
		case (307 << 16) | 0:     return Item::IronChestplate;
		case (308 << 16) | 0:     return Item::IronLeggings;
		case (309 << 16) | 0:     return Item::IronBoots;
		case (310 << 16) | 0:     return Item::DiamondHelmet;
		case (311 << 16) | 0:     return Item::DiamondChestplate;
		case (312 << 16) | 0:     return Item::DiamondLeggings;
		case (313 << 16) | 0:     return Item::DiamondBoots;
		case (314 << 16) | 0:     return Item::GoldenHelmet;
		case (315 << 16) | 0:     return Item::GoldenChestplate;
		case (316 << 16) | 0:     return Item::GoldenLeggings;
		case (317 << 16) | 0:     return Item::GoldenBoots;
		case (318 << 16) | 0:     return Item::Flint;
		case (319 << 16) | 0:     return Item::Porkchop;
		case (320 << 16) | 0:     return Item::CookedPorkchop;
		case (321 << 16) | 0:     return Item::Painting;
		case (322 << 16) | 0:     return Item::GoldenApple;
		case (322 << 16) | 1:     return Item::EnchantedGoldenApple;
		case (323 << 16) | 0:     return Item::OakSign;
		case (325 << 16) | 0:     return Item::Bucket;
		case (326 << 16) | 0:     return Item::WaterBucket;
		case (327 << 16) | 0:     return Item::LavaBucket;
		case (328 << 16) | 0:     return Item::Minecart;
		case (329 << 16) | 0:     return Item::Saddle;
		case (331 << 16) | 0:     return Item::Redstone;
		case (332 << 16) | 0:     return Item::Snowball;
		case (333 << 16) | 0:     return Item::OakBoat;
		case (334 << 16) | 0:     return Item::Leather;
		case (335 << 16) | 0:     return Item::MilkBucket;
		case (336 << 16) | 0:     return Item::Brick;
		case (337 << 16) | 0:     return Item::ClayBall;
		case (338 << 16) | 0:     return Item::SugarCane;
		case (339 << 16) | 0:     return Item::Paper;
		case (340 << 16) | 0:     return Item::Book;
		case (341 << 16) | 0:     return Item::SlimeBall;
		case (342 << 16) | 0:     return Item::ChestMinecart;
		case (343 << 16) | 0:     return Item::FurnaceMinecart;
		case (344 << 16) | 0:     return Item::Egg;
		case (345 << 16) | 0:     return Item::Compass;
		case (346 << 16) | 0:     return Item::FishingRod;
		case (347 << 16) | 0:     return Item::Clock;
		case (348 << 16) | 0:     return Item::GlowstoneDust;
		case (349 << 16) | 0:     return Item::Cod;
		case (349 << 16) | 1:     return Item::Salmon;
		case (349 << 16) | 2:     return Item::TropicalFish;
		case (349 << 16) | 3:     return Item::Pufferfish;
		case (350 << 16) | 0:     return Item::CookedCod;
		case (350 << 16) | 1:     return Item::CookedSalmon;
		case (351 << 16) | 0:     return Item::InkSac;
		case (351 << 16) | 1:     return Item::RedDye;
		case (351 << 16) | 2:     return Item::GreenDye;
		case (351 << 16) | 3:     return Item::CocoaBeans;
		case (351 << 16) | 4:     return Item::LapisLazuli;
		case (351 << 16) | 5:     return Item::PurpleDye;
		case (351 << 16) | 6:     return Item::CyanDye;
		case (351 << 16) | 7:     return Item::LightGrayDye;
		case (351 << 16) | 8:     return Item::GrayDye;
		case (351 << 16) | 9:     return Item::PinkDye;
		case (351 << 16) | 10:    return Item::LimeDye;
		case (351 << 16) | 11:    return Item::YellowDye;
		case (351 << 16) | 12:    return Item::LightBlueDye;
		case (351 << 16) | 13:    return Item::MagentaDye;
		case (351 << 16) | 14:    return Item::OrangeDye;
		case (351 << 16) | 15:    return Item::BoneMeal;
		case (352 << 16) | 0:     return Item::Bone;
		case (353 << 16) | 0:     return Item::Sugar;
		case (354 << 16) | 0:     return Item::Cake;
		case (355 << 16) | 0:     return Item::WhiteBed;
		case (355 << 16) | 1:     return Item::OrangeBed;
		case (355 << 16) | 2:     return Item::MagentaBed;
		case (355 << 16) | 3:     return Item::LightBlueBed;
		case (355 << 16) | 4:     return Item::YellowBed;
		case (355 << 16) | 5:     return Item::LimeBed;
		case (355 << 16) | 6:     return Item::PinkBed;
		case (355 << 16) | 7:     return Item::GrayBed;
		case (355 << 16) | 8:     return Item::LightGrayBed;
		case (355 << 16) | 9:     return Item::CyanBed;
		case (355 << 16) | 10:    return Item::PurpleBed;
		case (355 << 16) | 11:    return Item::BlueBed;
		case (355 << 16) | 12:    return Item::BrownBed;
		case (355 << 16) | 13:    return Item::GreenBed;
		case (355 << 16) | 14:    return Item::RedBed;
		case (355 << 16) | 15:    return Item::BlackBed;
		case (357 << 16) | 0:     return Item::Cookie;
		case (358 << 16) | 0:     return Item::FilledMap;
		case (359 << 16) | 0:     return Item::Shears;
		case (360 << 16) | 0:     return Item::MelonSlice;
		case (361 << 16) | 0:     return Item::PumpkinSeeds;
		case (362 << 16) | 0:     return Item::MelonSeeds;
		case (363 << 16) | 0:     return Item::Beef;
		case (364 << 16) | 0:     return Item::CookedBeef;
		case (365 << 16) | 0:     return Item::Chicken;
		case (366 << 16) | 0:     return Item::CookedChicken;
		case (367 << 16) | 0:     return Item::RottenFlesh;
		case (368 << 16) | 0:     return Item::EnderPearl;
		case (369 << 16) | 0:     return Item::BlazeRod;
		case (370 << 16) | 0:     return Item::GhastTear;
		case (371 << 16) | 0:     return Item::GoldNugget;
		case (372 << 16) | 0:     return Item::NetherWart;
		case (373 << 16) | 0:     return Item::Potion;
		case (438 << 16) | 0:     return Item::SplashPotion;
		case (441 << 16) | 0:     return Item::LingeringPotion;

		// Potion type encoded in Item NBT:
		case (373 << 16) | 16:
		case (373 << 16) | 32:
		case (373 << 16) | 64:
		case (373 << 16) | 8193:
		case (373 << 16) | 8194:
		case (373 << 16) | 8195:
		case (373 << 16) | 8196:
		case (373 << 16) | 8197:
		case (373 << 16) | 8198:
		case (373 << 16) | 8200:
		case (373 << 16) | 8201:
		case (373 << 16) | 8202:
		case (373 << 16) | 8204:
		case (373 << 16) | 8205:
		case (373 << 16) | 8206:
		case (373 << 16) | 8225:
		case (373 << 16) | 8226:
		case (373 << 16) | 8228:
		case (373 << 16) | 8229:
		case (373 << 16) | 8233:
		case (373 << 16) | 8235:
		case (373 << 16) | 8236:
		case (373 << 16) | 8257:
		case (373 << 16) | 8258:
		case (373 << 16) | 8259:
		case (373 << 16) | 8260:
		case (373 << 16) | 8262:
		case (373 << 16) | 8264:
		case (373 << 16) | 8265:
		case (373 << 16) | 8266:
		case (373 << 16) | 8267:
		case (373 << 16) | 8269:
		case (373 << 16) | 8270:
		case (373 << 16) | 8289:
		case (373 << 16) | 8290:
		case (373 << 16) | 8292:
		case (373 << 16) | 8297:  return Item::Potion;

		// Potion type encoded in Item NBT:
		case (373 << 16) | 16385:
		case (373 << 16) | 16386:
		case (373 << 16) | 16387:
		case (373 << 16) | 16388:
		case (373 << 16) | 16389:
		case (373 << 16) | 16390:
		case (373 << 16) | 16392:
		case (373 << 16) | 16393:
		case (373 << 16) | 16394:
		case (373 << 16) | 16396:
		case (373 << 16) | 16397:
		case (373 << 16) | 16398:
		case (373 << 16) | 16417:
		case (373 << 16) | 16418:
		case (373 << 16) | 16420:
		case (373 << 16) | 16421:
		case (373 << 16) | 16425:
		case (373 << 16) | 16427:
		case (373 << 16) | 16428:
		case (373 << 16) | 16449:
		case (373 << 16) | 16450:
		case (373 << 16) | 16451:
		case (373 << 16) | 16452:
		case (373 << 16) | 16454:
		case (373 << 16) | 16456:
		case (373 << 16) | 16457:
		case (373 << 16) | 16458:
		case (373 << 16) | 16459:
		case (373 << 16) | 16461:
		case (373 << 16) | 16462:
		case (373 << 16) | 16481:
		case (373 << 16) | 16482:
		case (373 << 16) | 16484:
		case (373 << 16) | 16489: return Item::SplashPotion;

		case (374 << 16) | 0:     return Item::GlassBottle;
		case (375 << 16) | 0:     return Item::SpiderEye;
		case (376 << 16) | 0:     return Item::FermentedSpiderEye;
		case (377 << 16) | 0:     return Item::BlazePowder;
		case (378 << 16) | 0:     return Item::MagmaCream;
		case (379 << 16) | 0:     return Item::BrewingStand;
		case (380 << 16) | 0:     return Item::Cauldron;
		case (381 << 16) | 0:     return Item::EnderEye;
		case (382 << 16) | 0:     return Item::GlisteringMelonSlice;
		case (383 << 16) | 65:    return Item::BatSpawnEgg;
		case (383 << 16) | 61:    return Item::BlazeSpawnEgg;
		case (383 << 16) | 59:    return Item::CaveSpiderSpawnEgg;
		case (383 << 16) | 93:    return Item::ChickenSpawnEgg;
		case (383 << 16) | 92:    return Item::CowSpawnEgg;
		case (383 << 16) | 50:    return Item::CreeperSpawnEgg;
		case (383 << 16) | 31:    return Item::DonkeySpawnEgg;
		case (383 << 16) | 4:     return Item::ElderGuardianSpawnEgg;
		case (383 << 16) | 58:    return Item::EndermanSpawnEgg;
		case (383 << 16) | 67:    return Item::EndermiteSpawnEgg;
		case (383 << 16) | 34:    return Item::EvokerSpawnEgg;
		case (383 << 16) | 56:    return Item::GhastSpawnEgg;
		case (383 << 16) | 68:    return Item::GuardianSpawnEgg;
		case (383 << 16) | 100:   return Item::HorseSpawnEgg;
		case (383 << 16) | 23:    return Item::HuskSpawnEgg;
		case (383 << 16) | 103:   return Item::LlamaSpawnEgg;
		case (383 << 16) | 62:    return Item::MagmaCubeSpawnEgg;
		case (383 << 16) | 96:    return Item::MooshroomSpawnEgg;
		case (383 << 16) | 32:    return Item::MuleSpawnEgg;
		case (383 << 16) | 98:    return Item::OcelotSpawnEgg;
		case (383 << 16) | 90:    return Item::PigSpawnEgg;
		case (383 << 16) | 102:   return Item::PolarBearSpawnEgg;
		case (383 << 16) | 101:   return Item::RabbitSpawnEgg;
		case (383 << 16) | 91:    return Item::SheepSpawnEgg;
		case (383 << 16) | 69:    return Item::ShulkerSpawnEgg;
		case (383 << 16) | 51:    return Item::SkeletonSpawnEgg;
		case (383 << 16) | 28:    return Item::SkeletonHorseSpawnEgg;
		case (383 << 16) | 55:    return Item::SlimeSpawnEgg;
		case (383 << 16) | 52:    return Item::SpiderSpawnEgg;
		case (383 << 16) | 94:    return Item::SquidSpawnEgg;
		case (383 << 16) | 6:     return Item::StraySpawnEgg;
		case (383 << 16) | 35:    return Item::VexSpawnEgg;
		case (383 << 16) | 120:   return Item::VillagerSpawnEgg;
		case (383 << 16) | 36:    return Item::VindicatorSpawnEgg;
		case (383 << 16) | 66:    return Item::WitchSpawnEgg;
		case (383 << 16) | 5:     return Item::WitherSkeletonSpawnEgg;
		case (383 << 16) | 95:    return Item::WolfSpawnEgg;
		case (383 << 16) | 54:    return Item::ZombieSpawnEgg;
		case (383 << 16) | 29:    return Item::ZombieHorseSpawnEgg;
		case (383 << 16) | 57:    return Item::ZombiePigmanSpawnEgg;
		case (383 << 16) | 27:    return Item::ZombieVillagerSpawnEgg;
		case (384 << 16) | 0:     return Item::ExperienceBottle;
		case (385 << 16) | 0:     return Item::FireCharge;
		case (386 << 16) | 0:     return Item::WritableBook;
		case (387 << 16) | 0:     return Item::WrittenBook;
		case (388 << 16) | 0:     return Item::Emerald;
		case (389 << 16) | 0:     return Item::ItemFrame;
		case (390 << 16) | 0:     return Item::FlowerPot;
		case (391 << 16) | 0:     return Item::Carrot;
		case (392 << 16) | 0:     return Item::Potato;
		case (393 << 16) | 0:     return Item::BakedPotato;
		case (394 << 16) | 0:     return Item::PoisonousPotato;
		case (395 << 16) | 0:     return Item::Map;
		case (396 << 16) | 0:     return Item::GoldenCarrot;
		case (397 << 16) | 0:     return Item::SkeletonSkull;
		case (397 << 16) | 1:     return Item::WitherSkeletonSkull;
		case (397 << 16) | 3:     return Item::PlayerHead;
		case (397 << 16) | 2:     return Item::ZombieHead;
		case (397 << 16) | 4:     return Item::CreeperHead;
		case (397 << 16) | 5:     return Item::DragonHead;
		case (398 << 16) | 0:     return Item::CarrotOnAStick;
		case (399 << 16) | 0:     return Item::NetherStar;
		case (400 << 16) | 0:     return Item::PumpkinPie;
		case (401 << 16) | 0:     return Item::FireworkRocket;
		case (402 << 16) | 0:     return Item::FireworkStar;
		case (403 << 16) | 0:     return Item::EnchantedBook;
		case (405 << 16) | 0:     return Item::NetherBrick;
		case (406 << 16) | 0:     return Item::Quartz;
		case (407 << 16) | 0:     return Item::TNTMinecart;
		case (408 << 16) | 0:     return Item::HopperMinecart;
		case (409 << 16) | 0:     return Item::PrismarineShard;
		case (410 << 16) | 0:     return Item::PrismarineCrystals;
		case (411 << 16) | 0:     return Item::Rabbit;
		case (412 << 16) | 0:     return Item::CookedRabbit;
		case (413 << 16) | 0:     return Item::RabbitStew;
		case (414 << 16) | 0:     return Item::RabbitFoot;
		case (415 << 16) | 0:     return Item::RabbitHide;
		case (416 << 16) | 0:     return Item::ArmorStand;
		case (417 << 16) | 0:     return Item::IronHorseArmor;
		case (418 << 16) | 0:     return Item::GoldenHorseArmor;
		case (419 << 16) | 0:     return Item::DiamondHorseArmor;
		case (420 << 16) | 0:     return Item::Lead;
		case (421 << 16) | 0:     return Item::NameTag;
		case (422 << 16) | 0:     return Item::CommandBlockMinecart;
		case (423 << 16) | 0:     return Item::Mutton;
		case (424 << 16) | 0:     return Item::CookedMutton;
		case (425 << 16) | 15:    return Item::WhiteBanner;
		case (425 << 16) | 14:    return Item::OrangeBanner;
		case (425 << 16) | 13:    return Item::MagentaBanner;
		case (425 << 16) | 12:    return Item::LightBlueBanner;
		case (425 << 16) | 11:    return Item::YellowBanner;
		case (425 << 16) | 10:    return Item::LimeBanner;
		case (425 << 16) | 9:     return Item::PinkBanner;
		case (425 << 16) | 8:     return Item::GrayBanner;
		case (425 << 16) | 7:     return Item::LightGrayBanner;
		case (425 << 16) | 6:     return Item::CyanBanner;
		case (425 << 16) | 5:     return Item::PurpleBanner;
		case (425 << 16) | 4:     return Item::BlueBanner;
		case (425 << 16) | 3:     return Item::BrownBanner;
		case (425 << 16) | 2:     return Item::GreenBanner;
		case (425 << 16) | 1:     return Item::RedBanner;
		case (425 << 16) | 0:     return Item::BlackBanner;
		case (426 << 16) | 0:     return Item::EndCrystal;
		case (432 << 16) | 0:     return Item::ChorusFruit;
		case (433 << 16) | 0:     return Item::PoppedChorusFruit;
		case (434 << 16) | 0:     return Item::Beetroot;
		case (435 << 16) | 0:     return Item::BeetrootSeeds;
		case (436 << 16) | 0:     return Item::BeetrootSoup;
		case (437 << 16) | 0:     return Item::DragonBreath;
		case (439 << 16) | 0:     return Item::SpectralArrow;
		case (440 << 16) | 0:     return Item::TippedArrow;
		case (442 << 16) | 0:     return Item::Shield;
		case (443 << 16) | 0:     return Item::Elytra;
		case (444 << 16) | 0:     return Item::SpruceBoat;
		case (445 << 16) | 0:     return Item::BirchBoat;
		case (446 << 16) | 0:     return Item::JungleBoat;
		case (447 << 16) | 0:     return Item::AcaciaBoat;
		case (448 << 16) | 0:     return Item::DarkOakBoat;
		case (449 << 16) | 0:     return Item::TotemOfUndying;
		case (450 << 16) | 0:     return Item::ShulkerShell;
		case (452 << 16) | 0:     return Item::IronNugget;
		case (2256 << 16) | 0:    return Item::MusicDisc13;
		case (2257 << 16) | 0:    return Item::MusicDiscCat;
		case (2258 << 16) | 0:    return Item::MusicDiscBlocks;
		case (2259 << 16) | 0:    return Item::MusicDiscChirp;
		case (2260 << 16) | 0:    return Item::MusicDiscFar;
		case (2261 << 16) | 0:    return Item::MusicDiscMall;
		case (2262 << 16) | 0:    return Item::MusicDiscMellohi;
		case (2263 << 16) | 0:    return Item::MusicDiscStal;
		case (2264 << 16) | 0:    return Item::MusicDiscStrad;
		case (2265 << 16) | 0:    return Item::MusicDiscWard;
		case (2266 << 16) | 0:    return Item::MusicDisc11;
		case (2267 << 16) | 0:    return Item::MusicDiscWait;

		// Technical blocks that used to be able to appear
		// in the inventory. e.g. Water, Lava, Piston Head, Fire
		// Redstone Wire, Wall Sign, Stem, Portal, Cocoa, Tripwire, etc.
		// Some technical blocks have been manually mapped to item analogues.
		case (55 << 16) | 0:      return Item::Redstone;
		case (68 << 16) | 0:      return Item::OakSign;
		case (83 << 16) | 0:      return Item::SugarCane;
		case (127 << 16) | 0:     return Item::CocoaBeans;
		case (132 << 16) | 0:     return Item::String;
		case (141 << 16) | 0:     return Item::Carrot;
		case (142 << 16) | 0:     return Item::Potato;
		case (207 << 16) | 0:     return Item::Beetroot;

		// Monster Spawner type encoded in Item NBT
		case (52 << 16) | 50:
		case (52 << 16) | 51:
		case (52 << 16) | 52:
		case (52 << 16) | 53:
		case (52 << 16) | 54:
		case (52 << 16) | 55:
		case (52 << 16) | 56:
		case (52 << 16) | 57:
		case (52 << 16) | 58:
		case (52 << 16) | 59:
		case (52 << 16) | 60:
		case (52 << 16) | 61:
		case (52 << 16) | 62:
		case (52 << 16) | 63:
		case (52 << 16) | 64:
		case (52 << 16) | 65:
		case (52 << 16) | 66:
		case (52 << 16) | 90:
		case (52 << 16) | 91:
		case (52 << 16) | 92:
		case (52 << 16) | 93:
		case (52 << 16) | 94:
		case (52 << 16) | 95:
		case (52 << 16) | 96:
		case (52 << 16) | 97:
		case (52 << 16) | 98:
		case (52 << 16) | 99:
		case (52 << 16) | 100:    return Item::Spawner;

		default:                  return Item::Air;
	}
}

std::pair<short, short> ToItem(const Item ID)
{
	switch (ID)
	{
		case Item::Stone:                       return {1, 0};
		case Item::Granite:                     return {1, 1};
		case Item::PolishedGranite:             return {1, 2};
		case Item::Diorite:                     return {1, 3};
		case Item::PolishedDiorite:             return {1, 4};
		case Item::Andesite:                    return {1, 5};
		case Item::PolishedAndesite:            return {1, 6};
		case Item::GrassBlock:                  return {2, 0};
		case Item::Dirt:                        return {3, 0};
		case Item::CoarseDirt:                  return {3, 1};
		case Item::Podzol:                      return {3, 2};
		case Item::Cobblestone:                 return {4, 0};
		case Item::OakPlanks:                   return {5, 0};
		case Item::SprucePlanks:                return {5, 1};
		case Item::BirchPlanks:                 return {5, 2};
		case Item::JunglePlanks:                return {5, 3};
		case Item::AcaciaPlanks:                return {5, 4};
		case Item::DarkOakPlanks:               return {5, 5};
		case Item::OakSapling:                  return {6, 0};
		case Item::SpruceSapling:               return {6, 1};
		case Item::BirchSapling:                return {6, 2};
		case Item::JungleSapling:               return {6, 3};
		case Item::AcaciaSapling:               return {6, 4};
		case Item::DarkOakSapling:              return {6, 5};
		case Item::Bedrock:                     return {7, 0};
		case Item::Sand:                        return {12, 0};
		case Item::RedSand:                     return {12, 1};
		case Item::Gravel:                      return {13, 0};
		case Item::GoldOre:                     return {14, 0};
		case Item::IronOre:                     return {15, 0};
		case Item::CoalOre:                     return {16, 0};
		case Item::OakLog:                      return {17, 0};
		case Item::SpruceLog:                   return {17, 1};
		case Item::BirchLog:                    return {17, 2};
		case Item::JungleLog:                   return {17, 3};
		case Item::AcaciaLog:                   return {162, 0};
		case Item::DarkOakLog:                  return {162, 1};
		case Item::OakLeaves:                   return {18, 0};
		case Item::SpruceLeaves:                return {18, 1};
		case Item::BirchLeaves:                 return {18, 2};
		case Item::JungleLeaves:                return {18, 3};
		case Item::AcaciaLeaves:                return {161, 0};
		case Item::DarkOakLeaves:               return {161, 1};
		case Item::Sponge:                      return {19, 0};
		case Item::WetSponge:                   return {19, 1};
		case Item::Glass:                       return {20, 0};
		case Item::LapisOre:                    return {21, 0};
		case Item::LapisBlock:                  return {22, 0};
		case Item::Dispenser:                   return {23, 0};
		case Item::Sandstone:                   return {24, 0};
		case Item::ChiseledSandstone:           return {24, 1};
		case Item::CutSandstone:                return {24, 2};
		case Item::NoteBlock:                   return {25, 0};
		case Item::PoweredRail:                 return {27, 0};
		case Item::DetectorRail:                return {28, 0};
		case Item::StickyPiston:                return {29, 0};
		case Item::Cobweb:                      return {30, 0};
		case Item::Fern:                        return {31, 2};
		case Item::DeadBush:                    return {32, 0};
		case Item::Piston:                      return {33, 0};
		case Item::WhiteWool:                   return {35, 0};
		case Item::OrangeWool:                  return {35, 1};
		case Item::MagentaWool:                 return {35, 2};
		case Item::LightBlueWool:               return {35, 3};
		case Item::YellowWool:                  return {35, 4};
		case Item::LimeWool:                    return {35, 5};
		case Item::PinkWool:                    return {35, 6};
		case Item::GrayWool:                    return {35, 7};
		case Item::LightGrayWool:               return {35, 8};
		case Item::CyanWool:                    return {35, 9};
		case Item::PurpleWool:                  return {35, 10};
		case Item::BlueWool:                    return {35, 11};
		case Item::BrownWool:                   return {35, 12};
		case Item::GreenWool:                   return {35, 13};
		case Item::RedWool:                     return {35, 14};
		case Item::BlackWool:                   return {35, 15};
		case Item::Dandelion:                   return {37, 0};
		case Item::Poppy:                       return {38, 0};
		case Item::BlueOrchid:                  return {38, 1};
		case Item::Allium:                      return {38, 2};
		case Item::AzureBluet:                  return {38, 3};
		case Item::RedTulip:                    return {38, 4};
		case Item::OrangeTulip:                 return {38, 5};
		case Item::WhiteTulip:                  return {38, 6};
		case Item::PinkTulip:                   return {38, 7};
		case Item::OxeyeDaisy:                  return {38, 8};
		case Item::BrownMushroom:               return {39, 0};
		case Item::RedMushroom:                 return {40, 0};
		case Item::GoldBlock:                   return {41, 0};
		case Item::IronBlock:                   return {42, 0};
		case Item::OakSlab:                     return {126, 0};
		case Item::SpruceSlab:                  return {126, 1};
		case Item::BirchSlab:                   return {126, 2};
		case Item::JungleSlab:                  return {126, 3};
		case Item::AcaciaSlab:                  return {126, 4};
		case Item::DarkOakSlab:                 return {126, 5};
		case Item::StoneSlab:                   return {44, 2};
		case Item::SandstoneSlab:               return {44, 1};
		case Item::CobblestoneSlab:             return {44, 3};
		case Item::BrickSlab:                   return {44, 4};
		case Item::StoneBrickSlab:              return {44, 5};
		case Item::NetherBrickSlab:             return {44, 6};
		case Item::QuartzSlab:                  return {44, 7};
		case Item::RedSandstoneSlab:            return {182, 0};
		case Item::PurpurSlab:                  return {205, 0};
		case Item::SmoothQuartz:                return {43, 7};
		case Item::SmoothStone:                 return {43, 8};
		case Item::Bricks:                      return {45, 0};
		case Item::TNT:                         return {46, 0};
		case Item::Bookshelf:                   return {47, 0};
		case Item::MossyCobblestone:            return {48, 0};
		case Item::Obsidian:                    return {49, 0};
		case Item::Torch:                       return {50, 0};
		case Item::EndRod:                      return {198, 0};
		case Item::ChorusPlant:                 return {199, 0};
		case Item::ChorusFlower:                return {200, 0};
		case Item::PurpurBlock:                 return {201, 0};
		case Item::PurpurPillar:                return {202, 0};
		case Item::PurpurStairs:                return {203, 0};
		case Item::Spawner:                     return {52, 0};
		case Item::OakStairs:                   return {53, 0};
		case Item::Chest:                       return {54, 0};
		case Item::DiamondOre:                  return {56, 0};
		case Item::DiamondBlock:                return {57, 0};
		case Item::CraftingTable:               return {58, 0};
		case Item::Farmland:                    return {60, 0};
		case Item::Furnace:                     return {61, 0};
		case Item::Ladder:                      return {65, 0};
		case Item::Rail:                        return {66, 0};
		case Item::CobblestoneStairs:           return {67, 0};
		case Item::Lever:                       return {69, 0};
		case Item::StonePressurePlate:          return {70, 0};
		case Item::OakPressurePlate:            return {72, 0};
		case Item::RedstoneOre:                 return {73, 0};
		case Item::RedstoneTorch:               return {76, 0};
		case Item::StoneButton:                 return {77, 0};
		case Item::Snow:                        return {78, 0};
		case Item::Ice:                         return {79, 0};
		case Item::SnowBlock:                   return {80, 0};
		case Item::Cactus:                      return {81, 0};
		case Item::Clay:                        return {82, 0};
		case Item::Jukebox:                     return {84, 0};
		case Item::OakFence:                    return {85, 0};
		case Item::SpruceFence:                 return {188, 0};
		case Item::BirchFence:                  return {189, 0};
		case Item::JungleFence:                 return {190, 0};
		case Item::AcaciaFence:                 return {192, 0};
		case Item::DarkOakFence:                return {191, 0};
		case Item::Pumpkin:                     return {86, 0};
		case Item::Netherrack:                  return {87, 0};
		case Item::SoulSand:                    return {88, 0};
		case Item::Glowstone:                   return {89, 0};
		case Item::JackOLantern:                return {91, 0};
		case Item::OakTrapdoor:                 return {96, 0};
		case Item::InfestedStone:               return {97, 0};
		case Item::InfestedCobblestone:         return {97, 1};
		case Item::InfestedStoneBricks:         return {97, 2};
		case Item::InfestedMossyStoneBricks:    return {97, 3};
		case Item::InfestedCrackedStoneBricks:  return {97, 4};
		case Item::InfestedChiseledStoneBricks: return {97, 5};
		case Item::StoneBricks:                 return {98, 0};
		case Item::MossyStoneBricks:            return {98, 1};
		case Item::CrackedStoneBricks:          return {98, 2};
		case Item::ChiseledStoneBricks:         return {98, 3};
		case Item::BrownMushroomBlock:          return {99, 0};
		case Item::RedMushroomBlock:            return {100, 0};
		case Item::IronBars:                    return {101, 0};
		case Item::GlassPane:                   return {102, 0};
		case Item::Melon:                       return {103, 0};
		case Item::Vine:                        return {106, 0};
		case Item::OakFenceGate:                return {107, 0};
		case Item::SpruceFenceGate:             return {183, 0};
		case Item::BirchFenceGate:              return {184, 0};
		case Item::JungleFenceGate:             return {185, 0};
		case Item::AcaciaFenceGate:             return {187, 0};
		case Item::DarkOakFenceGate:            return {186, 0};
		case Item::BrickStairs:                 return {108, 0};
		case Item::StoneBrickStairs:            return {109, 0};
		case Item::Mycelium:                    return {110, 0};
		case Item::LilyPad:                     return {111, 0};
		case Item::NetherBricks:                return {112, 0};
		case Item::NetherBrickFence:            return {113, 0};
		case Item::NetherBrickStairs:           return {114, 0};
		case Item::EnchantingTable:             return {116, 0};
		case Item::EndPortalFrame:              return {120, 0};
		case Item::EndStone:                    return {121, 0};
		case Item::EndStoneBricks:              return {206, 0};
		case Item::DragonEgg:                   return {122, 0};
		case Item::RedstoneLamp:                return {123, 0};
		case Item::SandstoneStairs:             return {128, 0};
		case Item::EmeraldOre:                  return {129, 0};
		case Item::EnderChest:                  return {130, 0};
		case Item::TripwireHook:                return {131, 0};
		case Item::EmeraldBlock:                return {133, 0};
		case Item::SpruceStairs:                return {134, 0};
		case Item::BirchStairs:                 return {135, 0};
		case Item::JungleStairs:                return {136, 0};
		case Item::CommandBlock:                return {137, 0};
		case Item::Beacon:                      return {138, 0};
		case Item::CobblestoneWall:             return {139, 0};
		case Item::MossyCobblestoneWall:        return {139, 1};
		case Item::OakButton:                   return {143, 0};
		case Item::Anvil:                       return {145, 0};
		case Item::ChippedAnvil:                return {145, 1};
		case Item::DamagedAnvil:                return {145, 2};
		case Item::TrappedChest:                return {146, 0};
		case Item::LightWeightedPressurePlate:  return {147, 0};
		case Item::HeavyWeightedPressurePlate:  return {148, 0};
		case Item::DaylightDetector:            return {151, 0};
		case Item::RedstoneBlock:               return {152, 0};
		case Item::NetherQuartzOre:             return {153, 0};
		case Item::Hopper:                      return {154, 0};
		case Item::ChiseledQuartzBlock:         return {155, 1};
		case Item::QuartzBlock:                 return {155, 0};
		case Item::QuartzPillar:                return {155, 2};
		case Item::QuartzStairs:                return {156, 0};
		case Item::ActivatorRail:               return {157, 0};
		case Item::Dropper:                     return {158, 0};
		case Item::WhiteTerracotta:             return {159, 0};
		case Item::OrangeTerracotta:            return {159, 1};
		case Item::MagentaTerracotta:           return {159, 2};
		case Item::LightBlueTerracotta:         return {159, 3};
		case Item::YellowTerracotta:            return {159, 4};
		case Item::LimeTerracotta:              return {159, 5};
		case Item::PinkTerracotta:              return {159, 6};
		case Item::GrayTerracotta:              return {159, 7};
		case Item::LightGrayTerracotta:         return {159, 8};
		case Item::CyanTerracotta:              return {159, 9};
		case Item::PurpleTerracotta:            return {159, 10};
		case Item::BlueTerracotta:              return {159, 11};
		case Item::BrownTerracotta:             return {159, 12};
		case Item::GreenTerracotta:             return {159, 13};
		case Item::RedTerracotta:               return {159, 14};
		case Item::BlackTerracotta:             return {159, 15};
		case Item::Barrier:                     return {166, 0};
		case Item::IronTrapdoor:                return {167, 0};
		case Item::HayBale:                     return {170, 0};
		case Item::WhiteCarpet:                 return {171, 0};
		case Item::OrangeCarpet:                return {171, 1};
		case Item::MagentaCarpet:               return {171, 2};
		case Item::LightBlueCarpet:             return {171, 3};
		case Item::YellowCarpet:                return {171, 4};
		case Item::LimeCarpet:                  return {171, 5};
		case Item::PinkCarpet:                  return {171, 6};
		case Item::GrayCarpet:                  return {171, 7};
		case Item::LightGrayCarpet:             return {171, 8};
		case Item::CyanCarpet:                  return {171, 9};
		case Item::PurpleCarpet:                return {171, 10};
		case Item::BlueCarpet:                  return {171, 11};
		case Item::BrownCarpet:                 return {171, 12};
		case Item::GreenCarpet:                 return {171, 13};
		case Item::RedCarpet:                   return {171, 14};
		case Item::BlackCarpet:                 return {171, 15};
		case Item::Terracotta:                  return {172, 0};
		case Item::CoalBlock:                   return {173, 0};
		case Item::PackedIce:                   return {174, 0};
		case Item::AcaciaStairs:                return {163, 0};
		case Item::DarkOakStairs:               return {164, 0};
		case Item::SlimeBlock:                  return {165, 0};
		case Item::GrassPath:                   return {208, 0};
		case Item::Sunflower:                   return {175, 0};
		case Item::Lilac:                       return {175, 1};
		case Item::RoseBush:                    return {175, 4};
		case Item::Peony:                       return {175, 5};
		case Item::TallGrass:                   return {175, 2};
		case Item::LargeFern:                   return {175, 3};
		case Item::WhiteStainedGlass:           return {95, 0};
		case Item::OrangeStainedGlass:          return {95, 1};
		case Item::MagentaStainedGlass:         return {95, 2};
		case Item::LightBlueStainedGlass:       return {95, 3};
		case Item::YellowStainedGlass:          return {95, 4};
		case Item::LimeStainedGlass:            return {95, 5};
		case Item::PinkStainedGlass:            return {95, 6};
		case Item::GrayStainedGlass:            return {95, 7};
		case Item::LightGrayStainedGlass:       return {95, 8};
		case Item::CyanStainedGlass:            return {95, 9};
		case Item::PurpleStainedGlass:          return {95, 10};
		case Item::BlueStainedGlass:            return {95, 11};
		case Item::BrownStainedGlass:           return {95, 12};
		case Item::GreenStainedGlass:           return {95, 13};
		case Item::RedStainedGlass:             return {95, 14};
		case Item::BlackStainedGlass:           return {95, 15};
		case Item::WhiteStainedGlassPane:       return {160, 0};
		case Item::OrangeStainedGlassPane:      return {160, 1};
		case Item::MagentaStainedGlassPane:     return {160, 2};
		case Item::LightBlueStainedGlassPane:   return {160, 3};
		case Item::YellowStainedGlassPane:      return {160, 4};
		case Item::LimeStainedGlassPane:        return {160, 5};
		case Item::PinkStainedGlassPane:        return {160, 6};
		case Item::GrayStainedGlassPane:        return {160, 7};
		case Item::LightGrayStainedGlassPane:   return {160, 8};
		case Item::CyanStainedGlassPane:        return {160, 9};
		case Item::PurpleStainedGlassPane:      return {160, 10};
		case Item::BlueStainedGlassPane:        return {160, 11};
		case Item::BrownStainedGlassPane:       return {160, 12};
		case Item::GreenStainedGlassPane:       return {160, 13};
		case Item::RedStainedGlassPane:         return {160, 14};
		case Item::BlackStainedGlassPane:       return {160, 15};
		case Item::Prismarine:                  return {168, 0};
		case Item::PrismarineBricks:            return {168, 1};
		case Item::DarkPrismarine:              return {168, 2};
		case Item::SeaLantern:                  return {169, 0};
		case Item::RedSandstone:                return {179, 0};
		case Item::ChiseledRedSandstone:        return {179, 1};
		case Item::CutRedSandstone:             return {179, 2};
		case Item::RedSandstoneStairs:          return {180, 0};
		case Item::RepeatingCommandBlock:       return {210, 0};
		case Item::ChainCommandBlock:           return {211, 0};
		case Item::MagmaBlock:                  return {213, 0};
		case Item::NetherWartBlock:             return {214, 0};
		case Item::RedNetherBricks:             return {215, 0};
		case Item::BoneBlock:                   return {216, 0};
		case Item::StructureVoid:               return {217, 0};
		case Item::Observer:                    return {218, 0};
		case Item::WhiteShulkerBox:             return {219, 0};
		case Item::OrangeShulkerBox:            return {220, 0};
		case Item::MagentaShulkerBox:           return {221, 0};
		case Item::LightBlueShulkerBox:         return {222, 0};
		case Item::YellowShulkerBox:            return {223, 0};
		case Item::LimeShulkerBox:              return {224, 0};
		case Item::PinkShulkerBox:              return {225, 0};
		case Item::GrayShulkerBox:              return {226, 0};
		case Item::LightGrayShulkerBox:         return {227, 0};
		case Item::CyanShulkerBox:              return {228, 0};
		case Item::PurpleShulkerBox:            return {229, 0};
		case Item::BlueShulkerBox:              return {230, 0};
		case Item::BrownShulkerBox:             return {231, 0};
		case Item::GreenShulkerBox:             return {232, 0};
		case Item::RedShulkerBox:               return {233, 0};
		case Item::BlackShulkerBox:             return {234, 0};
		case Item::WhiteGlazedTerracotta:       return {235, 0};
		case Item::OrangeGlazedTerracotta:      return {236, 0};
		case Item::MagentaGlazedTerracotta:     return {237, 0};
		case Item::LightBlueGlazedTerracotta:   return {238, 0};
		case Item::YellowGlazedTerracotta:      return {239, 0};
		case Item::LimeGlazedTerracotta:        return {240, 0};
		case Item::PinkGlazedTerracotta:        return {241, 0};
		case Item::GrayGlazedTerracotta:        return {242, 0};
		case Item::LightGrayGlazedTerracotta:   return {243, 0};
		case Item::CyanGlazedTerracotta:        return {244, 0};
		case Item::PurpleGlazedTerracotta:      return {245, 0};
		case Item::BlueGlazedTerracotta:        return {246, 0};
		case Item::BrownGlazedTerracotta:       return {247, 0};
		case Item::GreenGlazedTerracotta:       return {248, 0};
		case Item::RedGlazedTerracotta:         return {249, 0};
		case Item::BlackGlazedTerracotta:       return {250, 0};
		case Item::WhiteConcrete:               return {251, 0};
		case Item::OrangeConcrete:              return {251, 1};
		case Item::MagentaConcrete:             return {251, 2};
		case Item::LightBlueConcrete:           return {251, 3};
		case Item::YellowConcrete:              return {251, 4};
		case Item::LimeConcrete:                return {251, 5};
		case Item::PinkConcrete:                return {251, 6};
		case Item::GrayConcrete:                return {251, 7};
		case Item::LightGrayConcrete:           return {251, 8};
		case Item::CyanConcrete:                return {251, 9};
		case Item::PurpleConcrete:              return {251, 10};
		case Item::BlueConcrete:                return {251, 11};
		case Item::BrownConcrete:               return {251, 12};
		case Item::GreenConcrete:               return {251, 13};
		case Item::RedConcrete:                 return {251, 14};
		case Item::BlackConcrete:               return {251, 15};
		case Item::WhiteConcretePowder:         return {252, 0};
		case Item::OrangeConcretePowder:        return {252, 1};
		case Item::MagentaConcretePowder:       return {252, 2};
		case Item::LightBlueConcretePowder:     return {252, 3};
		case Item::YellowConcretePowder:        return {252, 4};
		case Item::LimeConcretePowder:          return {252, 5};
		case Item::PinkConcretePowder:          return {252, 6};
		case Item::GrayConcretePowder:          return {252, 7};
		case Item::LightGrayConcretePowder:     return {252, 8};
		case Item::CyanConcretePowder:          return {252, 9};
		case Item::PurpleConcretePowder:        return {252, 10};
		case Item::BlueConcretePowder:          return {252, 11};
		case Item::BrownConcretePowder:         return {252, 12};
		case Item::GreenConcretePowder:         return {252, 13};
		case Item::RedConcretePowder:           return {252, 14};
		case Item::BlackConcretePowder:         return {252, 15};
		case Item::IronDoor:                    return {330, 0};
		case Item::OakDoor:                     return {324, 0};
		case Item::SpruceDoor:                  return {427, 0};
		case Item::BirchDoor:                   return {428, 0};
		case Item::JungleDoor:                  return {429, 0};
		case Item::AcaciaDoor:                  return {430, 0};
		case Item::DarkOakDoor:                 return {431, 0};
		case Item::Repeater:                    return {356, 0};
		case Item::Comparator:                  return {404, 0};
		case Item::StructureBlock:              return {255, 0};
		case Item::IronShovel:                  return {256, 0};
		case Item::IronPickaxe:                 return {257, 0};
		case Item::IronAxe:                     return {258, 0};
		case Item::FlintAndSteel:               return {259, 0};
		case Item::Apple:                       return {260, 0};
		case Item::Bow:                         return {261, 0};
		case Item::Arrow:                       return {262, 0};
		case Item::Coal:                        return {263, 0};
		case Item::Charcoal:                    return {263, 1};
		case Item::Diamond:                     return {264, 0};
		case Item::IronIngot:                   return {265, 0};
		case Item::GoldIngot:                   return {266, 0};
		case Item::IronSword:                   return {267, 0};
		case Item::WoodenSword:                 return {268, 0};
		case Item::WoodenShovel:                return {269, 0};
		case Item::WoodenPickaxe:               return {270, 0};
		case Item::WoodenAxe:                   return {271, 0};
		case Item::StoneSword:                  return {272, 0};
		case Item::StoneShovel:                 return {273, 0};
		case Item::StonePickaxe:                return {274, 0};
		case Item::StoneAxe:                    return {275, 0};
		case Item::DiamondSword:                return {276, 0};
		case Item::DiamondShovel:               return {277, 0};
		case Item::DiamondPickaxe:              return {278, 0};
		case Item::DiamondAxe:                  return {279, 0};
		case Item::Stick:                       return {280, 0};
		case Item::Bowl:                        return {281, 0};
		case Item::MushroomStew:                return {282, 0};
		case Item::GoldenSword:                 return {283, 0};
		case Item::GoldenShovel:                return {284, 0};
		case Item::GoldenPickaxe:               return {285, 0};
		case Item::GoldenAxe:                   return {286, 0};
		case Item::String:                      return {287, 0};
		case Item::Feather:                     return {288, 0};
		case Item::Gunpowder:                   return {289, 0};
		case Item::WoodenHoe:                   return {290, 0};
		case Item::StoneHoe:                    return {291, 0};
		case Item::IronHoe:                     return {292, 0};
		case Item::DiamondHoe:                  return {293, 0};
		case Item::GoldenHoe:                   return {294, 0};
		case Item::WheatSeeds:                  return {295, 0};
		case Item::Wheat:                       return {296, 0};
		case Item::Bread:                       return {297, 0};
		case Item::LeatherHelmet:               return {298, 0};
		case Item::LeatherChestplate:           return {299, 0};
		case Item::LeatherLeggings:             return {300, 0};
		case Item::LeatherBoots:                return {301, 0};
		case Item::ChainmailHelmet:             return {302, 0};
		case Item::ChainmailChestplate:         return {303, 0};
		case Item::ChainmailLeggings:           return {304, 0};
		case Item::ChainmailBoots:              return {305, 0};
		case Item::IronHelmet:                  return {306, 0};
		case Item::IronChestplate:              return {307, 0};
		case Item::IronLeggings:                return {308, 0};
		case Item::IronBoots:                   return {309, 0};
		case Item::DiamondHelmet:               return {310, 0};
		case Item::DiamondChestplate:           return {311, 0};
		case Item::DiamondLeggings:             return {312, 0};
		case Item::DiamondBoots:                return {313, 0};
		case Item::GoldenHelmet:                return {314, 0};
		case Item::GoldenChestplate:            return {315, 0};
		case Item::GoldenLeggings:              return {316, 0};
		case Item::GoldenBoots:                 return {317, 0};
		case Item::Flint:                       return {318, 0};
		case Item::Porkchop:                    return {319, 0};
		case Item::CookedPorkchop:              return {320, 0};
		case Item::Painting:                    return {321, 0};
		case Item::GoldenApple:                 return {322, 0};
		case Item::EnchantedGoldenApple:        return {322, 1};
		case Item::OakSign:                     return {323, 0};
		case Item::Bucket:                      return {325, 0};
		case Item::WaterBucket:                 return {326, 0};
		case Item::LavaBucket:                  return {327, 0};
		case Item::Minecart:                    return {328, 0};
		case Item::Saddle:                      return {329, 0};
		case Item::Redstone:                    return {331, 0};
		case Item::Snowball:                    return {332, 0};
		case Item::OakBoat:                     return {333, 0};
		case Item::Leather:                     return {334, 0};
		case Item::MilkBucket:                  return {335, 0};
		case Item::Brick:                       return {336, 0};
		case Item::ClayBall:                    return {337, 0};
		case Item::SugarCane:                   return {338, 0};
		case Item::Paper:                       return {339, 0};
		case Item::Book:                        return {340, 0};
		case Item::SlimeBall:                   return {341, 0};
		case Item::ChestMinecart:               return {342, 0};
		case Item::FurnaceMinecart:             return {343, 0};
		case Item::Egg:                         return {344, 0};
		case Item::Compass:                     return {345, 0};
		case Item::FishingRod:                  return {346, 0};
		case Item::Clock:                       return {347, 0};
		case Item::GlowstoneDust:               return {348, 0};
		case Item::Cod:                         return {349, 0};
		case Item::Salmon:                      return {349, 1};
		case Item::TropicalFish:                return {349, 2};
		case Item::Pufferfish:                  return {349, 3};
		case Item::CookedCod:                   return {350, 0};
		case Item::CookedSalmon:                return {350, 1};
		case Item::InkSac:                      return {351, 0};
		case Item::RedDye:                      return {351, 1};
		case Item::GreenDye:                    return {351, 2};
		case Item::CocoaBeans:                  return {351, 3};
		case Item::LapisLazuli:                 return {351, 4};
		case Item::PurpleDye:                   return {351, 5};
		case Item::CyanDye:                     return {351, 6};
		case Item::LightGrayDye:                return {351, 7};
		case Item::GrayDye:                     return {351, 8};
		case Item::PinkDye:                     return {351, 9};
		case Item::LimeDye:                     return {351, 10};
		case Item::YellowDye:                   return {351, 11};
		case Item::LightBlueDye:                return {351, 12};
		case Item::MagentaDye:                  return {351, 13};
		case Item::OrangeDye:                   return {351, 14};
		case Item::BoneMeal:                    return {351, 15};
		case Item::Bone:                        return {352, 0};
		case Item::Sugar:                       return {353, 0};
		case Item::Cake:                        return {354, 0};
		case Item::WhiteBed:                    return {355, 0};
		case Item::OrangeBed:                   return {355, 1};
		case Item::MagentaBed:                  return {355, 2};
		case Item::LightBlueBed:                return {355, 3};
		case Item::YellowBed:                   return {355, 4};
		case Item::LimeBed:                     return {355, 5};
		case Item::PinkBed:                     return {355, 6};
		case Item::GrayBed:                     return {355, 7};
		case Item::LightGrayBed:                return {355, 8};
		case Item::CyanBed:                     return {355, 9};
		case Item::PurpleBed:                   return {355, 10};
		case Item::BlueBed:                     return {355, 11};
		case Item::BrownBed:                    return {355, 12};
		case Item::GreenBed:                    return {355, 13};
		case Item::RedBed:                      return {355, 14};
		case Item::BlackBed:                    return {355, 15};
		case Item::Cookie:                      return {357, 0};
		case Item::FilledMap:                   return {358, 0};
		case Item::Shears:                      return {359, 0};
		case Item::MelonSlice:                  return {360, 0};
		case Item::PumpkinSeeds:                return {361, 0};
		case Item::MelonSeeds:                  return {362, 0};
		case Item::Beef:                        return {363, 0};
		case Item::CookedBeef:                  return {364, 0};
		case Item::Chicken:                     return {365, 0};
		case Item::CookedChicken:               return {366, 0};
		case Item::RottenFlesh:                 return {367, 0};
		case Item::EnderPearl:                  return {368, 0};
		case Item::BlazeRod:                    return {369, 0};
		case Item::GhastTear:                   return {370, 0};
		case Item::GoldNugget:                  return {371, 0};
		case Item::NetherWart:                  return {372, 0};
		case Item::Potion:                      return {373, 0};
		case Item::SplashPotion:                return {438, 0};
		case Item::LingeringPotion:             return {441, 0};
		case Item::GlassBottle:                 return {374, 0};
		case Item::SpiderEye:                   return {375, 0};
		case Item::FermentedSpiderEye:          return {376, 0};
		case Item::BlazePowder:                 return {377, 0};
		case Item::MagmaCream:                  return {378, 0};
		case Item::BrewingStand:                return {379, 0};
		case Item::Cauldron:                    return {380, 0};
		case Item::EnderEye:                    return {381, 0};
		case Item::GlisteringMelonSlice:        return {382, 0};
		case Item::BatSpawnEgg:                 return {383, 65};
		case Item::BlazeSpawnEgg:               return {383, 61};
		case Item::CaveSpiderSpawnEgg:          return {383, 59};
		case Item::ChickenSpawnEgg:             return {383, 93};
		case Item::CowSpawnEgg:                 return {383, 92};
		case Item::CreeperSpawnEgg:             return {383, 50};
		case Item::DonkeySpawnEgg:              return {383, 31};
		case Item::ElderGuardianSpawnEgg:       return {383, 4};
		case Item::EndermanSpawnEgg:            return {383, 58};
		case Item::EndermiteSpawnEgg:           return {383, 67};
		case Item::EvokerSpawnEgg:              return {383, 34};
		case Item::GhastSpawnEgg:               return {383, 56};
		case Item::GuardianSpawnEgg:            return {383, 68};
		case Item::HorseSpawnEgg:               return {383, 100};
		case Item::HuskSpawnEgg:                return {383, 23};
		case Item::LlamaSpawnEgg:               return {383, 103};
		case Item::MagmaCubeSpawnEgg:           return {383, 62};
		case Item::MooshroomSpawnEgg:           return {383, 96};
		case Item::MuleSpawnEgg:                return {383, 32};
		case Item::OcelotSpawnEgg:              return {383, 98};
		case Item::PigSpawnEgg:                 return {383, 90};
		case Item::PolarBearSpawnEgg:           return {383, 102};
		case Item::RabbitSpawnEgg:              return {383, 101};
		case Item::SheepSpawnEgg:               return {383, 91};
		case Item::ShulkerSpawnEgg:             return {383, 69};
		case Item::SkeletonSpawnEgg:            return {383, 51};
		case Item::SkeletonHorseSpawnEgg:       return {383, 28};
		case Item::SlimeSpawnEgg:               return {383, 55};
		case Item::SpiderSpawnEgg:              return {383, 52};
		case Item::SquidSpawnEgg:               return {383, 94};
		case Item::StraySpawnEgg:               return {383, 6};
		case Item::VexSpawnEgg:                 return {383, 35};
		case Item::VillagerSpawnEgg:            return {383, 120};
		case Item::VindicatorSpawnEgg:          return {383, 36};
		case Item::WitchSpawnEgg:               return {383, 66};
		case Item::WitherSkeletonSpawnEgg:      return {383, 5};
		case Item::WolfSpawnEgg:                return {383, 95};
		case Item::ZombieSpawnEgg:              return {383, 54};
		case Item::ZombieHorseSpawnEgg:         return {383, 29};
		case Item::ZombiePigmanSpawnEgg:        return {383, 57};
		case Item::ZombieVillagerSpawnEgg:      return {383, 27};
		case Item::ExperienceBottle:            return {384, 0};
		case Item::FireCharge:                  return {385, 0};
		case Item::WritableBook:                return {386, 0};
		case Item::WrittenBook:                 return {387, 0};
		case Item::Emerald:                     return {388, 0};
		case Item::ItemFrame:                   return {389, 0};
		case Item::FlowerPot:                   return {390, 0};
		case Item::Carrot:                      return {391, 0};
		case Item::Potato:                      return {392, 0};
		case Item::BakedPotato:                 return {393, 0};
		case Item::PoisonousPotato:             return {394, 0};
		case Item::Map:                         return {395, 0};
		case Item::GoldenCarrot:                return {396, 0};
		case Item::SkeletonSkull:               return {397, 0};
		case Item::WitherSkeletonSkull:         return {397, 1};
		case Item::PlayerHead:                  return {397, 3};
		case Item::ZombieHead:                  return {397, 2};
		case Item::CreeperHead:                 return {397, 4};
		case Item::DragonHead:                  return {397, 5};
		case Item::CarrotOnAStick:              return {398, 0};
		case Item::NetherStar:                  return {399, 0};
		case Item::PumpkinPie:                  return {400, 0};
		case Item::FireworkRocket:              return {401, 0};
		case Item::FireworkStar:                return {402, 0};
		case Item::EnchantedBook:               return {403, 0};
		case Item::NetherBrick:                 return {405, 0};
		case Item::Quartz:                      return {406, 0};
		case Item::TNTMinecart:                 return {407, 0};
		case Item::HopperMinecart:              return {408, 0};
		case Item::PrismarineShard:             return {409, 0};
		case Item::PrismarineCrystals:          return {410, 0};
		case Item::Rabbit:                      return {411, 0};
		case Item::CookedRabbit:                return {412, 0};
		case Item::RabbitStew:                  return {413, 0};
		case Item::RabbitFoot:                  return {414, 0};
		case Item::RabbitHide:                  return {415, 0};
		case Item::ArmorStand:                  return {416, 0};
		case Item::IronHorseArmor:              return {417, 0};
		case Item::GoldenHorseArmor:            return {418, 0};
		case Item::DiamondHorseArmor:           return {419, 0};
		case Item::Lead:                        return {420, 0};
		case Item::NameTag:                     return {421, 0};
		case Item::CommandBlockMinecart:        return {422, 0};
		case Item::Mutton:                      return {423, 0};
		case Item::CookedMutton:                return {424, 0};
		case Item::WhiteBanner:                 return {425, 15};
		case Item::OrangeBanner:                return {425, 14};
		case Item::MagentaBanner:               return {425, 13};
		case Item::LightBlueBanner:             return {425, 12};
		case Item::YellowBanner:                return {425, 11};
		case Item::LimeBanner:                  return {425, 10};
		case Item::PinkBanner:                  return {425, 9};
		case Item::GrayBanner:                  return {425, 8};
		case Item::LightGrayBanner:             return {425, 7};
		case Item::CyanBanner:                  return {425, 6};
		case Item::PurpleBanner:                return {425, 5};
		case Item::BlueBanner:                  return {425, 4};
		case Item::BrownBanner:                 return {425, 3};
		case Item::GreenBanner:                 return {425, 2};
		case Item::RedBanner:                   return {425, 1};
		case Item::BlackBanner:                 return {425, 0};
		case Item::EndCrystal:                  return {426, 0};
		case Item::ChorusFruit:                 return {432, 0};
		case Item::PoppedChorusFruit:           return {433, 0};
		case Item::Beetroot:                    return {434, 0};
		case Item::BeetrootSeeds:               return {435, 0};
		case Item::BeetrootSoup:                return {436, 0};
		case Item::DragonBreath:                return {437, 0};
		case Item::SpectralArrow:               return {439, 0};
		case Item::TippedArrow:                 return {440, 0};
		case Item::Shield:                      return {442, 0};
		case Item::Elytra:                      return {443, 0};
		case Item::SpruceBoat:                  return {444, 0};
		case Item::BirchBoat:                   return {445, 0};
		case Item::JungleBoat:                  return {446, 0};
		case Item::AcaciaBoat:                  return {447, 0};
		case Item::DarkOakBoat:                 return {448, 0};
		case Item::TotemOfUndying:              return {449, 0};
		case Item::ShulkerShell:                return {450, 0};
		case Item::IronNugget:                  return {452, 0};
		case Item::MusicDisc13:                 return {2256, 0};
		case Item::MusicDiscCat:                return {2257, 0};
		case Item::MusicDiscBlocks:             return {2258, 0};
		case Item::MusicDiscChirp:              return {2259, 0};
		case Item::MusicDiscFar:                return {2260, 0};
		case Item::MusicDiscMall:               return {2261, 0};
		case Item::MusicDiscMellohi:            return {2262, 0};
		case Item::MusicDiscStal:               return {2263, 0};
		case Item::MusicDiscStrad:              return {2264, 0};
		case Item::MusicDiscWard:               return {2265, 0};
		case Item::MusicDisc11:                 return {2266, 0};
		case Item::MusicDiscWait:               return {2267, 0};
		default:                                return {0, 0};
	}
}
}  // namespace PaletteUpgrade
