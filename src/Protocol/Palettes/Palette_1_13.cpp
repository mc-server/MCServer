#include "Globals.h"
#include "Palette_1_13.h"
#include "Registries/BlockStates.h"

namespace Palette_1_13
{
UInt32 From(const BlockState Block)
{
	using namespace Block;

	switch (Block.ID)
	{
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 5399;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 5400;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 5401;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 5402;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 5403;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 5404;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 5405;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 5406;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 5407;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 5408;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 5409;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 5410;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 5411;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 5412;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 5413;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 5414;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5415;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5416;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5417;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5418;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5419;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 5420;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5421;
		case AcaciaButton::AcaciaButton(AcaciaButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 5422;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7869;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7870;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7871;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7872;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7873;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7874;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7875;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7876;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7877;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7878;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7879;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7880;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7881;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7882;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7883;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7884;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7885;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7886;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7887;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7888;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7889;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7890;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7891;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7892;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7893;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7894;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7895;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7896;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7897;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7898;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7899;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7900;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7901;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7902;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7903;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7904;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7905;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7906;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7907;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7908;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7909;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7910;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7911;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7912;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7913;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7914;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7915;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7916;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7917;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7918;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7919;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7920;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7921;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7922;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7923;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Upper,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7924;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7925;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7926;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7927;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7928;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7929;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7930;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7931;
		case AcaciaDoor::AcaciaDoor(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaDoor::Half::Lower,
			AcaciaDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7932;
		case AcaciaFence::AcaciaFence(true, true, true, true).ID:                                 return 7615;
		case AcaciaFence::AcaciaFence(true, true, true, false).ID:                                return 7616;
		case AcaciaFence::AcaciaFence(true, true, false, true).ID:                                return 7619;
		case AcaciaFence::AcaciaFence(true, true, false, false).ID:                               return 7620;
		case AcaciaFence::AcaciaFence(true, false, true, true).ID:                                return 7623;
		case AcaciaFence::AcaciaFence(true, false, true, false).ID:                               return 7624;
		case AcaciaFence::AcaciaFence(true, false, false, true).ID:                               return 7627;
		case AcaciaFence::AcaciaFence(true, false, false, false).ID:                              return 7628;
		case AcaciaFence::AcaciaFence(false, true, true, true).ID:                                return 7631;
		case AcaciaFence::AcaciaFence(false, true, true, false).ID:                               return 7632;
		case AcaciaFence::AcaciaFence(false, true, false, true).ID:                               return 7635;
		case AcaciaFence::AcaciaFence(false, true, false, false).ID:                              return 7636;
		case AcaciaFence::AcaciaFence(false, false, true, true).ID:                               return 7639;
		case AcaciaFence::AcaciaFence(false, false, true, false).ID:                              return 7640;
		case AcaciaFence::AcaciaFence(false, false, false, true).ID:                              return 7643;
		case AcaciaFence::AcaciaFence(false, false, false, false).ID:                             return 7644;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 7453;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 7454;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 7455;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 7456;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 7457;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 7458;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 7459;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 7460;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 7461;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 7462;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 7463;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 7464;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 7465;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 7466;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 7467;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 7468;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 7469;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 7470;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 7471;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 7472;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 7473;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 7474;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 7475;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 7476;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 7477;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 7478;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 7479;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 7480;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 7481;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 7482;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 7483;
		case AcaciaFenceGate::AcaciaFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 7484;
		case AcaciaLeaves::AcaciaLeaves(1, true).ID:                                              return 200;
		case AcaciaLeaves::AcaciaLeaves(1, false).ID:                                             return 201;
		case AcaciaLeaves::AcaciaLeaves(2, true).ID:                                              return 202;
		case AcaciaLeaves::AcaciaLeaves(2, false).ID:                                             return 203;
		case AcaciaLeaves::AcaciaLeaves(3, true).ID:                                              return 204;
		case AcaciaLeaves::AcaciaLeaves(3, false).ID:                                             return 205;
		case AcaciaLeaves::AcaciaLeaves(4, true).ID:                                              return 206;
		case AcaciaLeaves::AcaciaLeaves(4, false).ID:                                             return 207;
		case AcaciaLeaves::AcaciaLeaves(5, true).ID:                                              return 208;
		case AcaciaLeaves::AcaciaLeaves(5, false).ID:                                             return 209;
		case AcaciaLeaves::AcaciaLeaves(6, true).ID:                                              return 210;
		case AcaciaLeaves::AcaciaLeaves(6, false).ID:                                             return 211;
		case AcaciaLeaves::AcaciaLeaves(7, true).ID:                                              return 212;
		case AcaciaLeaves::AcaciaLeaves(7, false).ID:                                             return 213;
		case AcaciaLog::AcaciaLog(AcaciaLog::Axis::X).ID:                                         return 84;
		case AcaciaLog::AcaciaLog(AcaciaLog::Axis::Y).ID:                                         return 85;
		case AcaciaLog::AcaciaLog(AcaciaLog::Axis::Z).ID:                                         return 86;
		case AcaciaPlanks::AcaciaPlanks().ID:                                                     return 19;
		case AcaciaPressurePlate::AcaciaPressurePlate(true).ID:                                   return 3375;
		case AcaciaPressurePlate::AcaciaPressurePlate(false).ID:                                  return 3376;
		case AcaciaSapling::AcaciaSapling(0).ID:                                                  return 29;
		case AcaciaSapling::AcaciaSapling(1).ID:                                                  return 30;
		case AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Top).ID:                                    return 7282;
		case AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Bottom).ID:                                 return 7284;
		case AcaciaSlab::AcaciaSlab(AcaciaSlab::Type::Double).ID:                                 return 7286;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6333;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6335;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6337;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6339;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6341;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6343;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6345;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6347;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6349;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6351;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6353;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6355;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6357;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6359;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6361;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6363;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6365;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6367;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6369;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_ZP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6371;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6373;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6375;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6377;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6379;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6381;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6383;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6385;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6387;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6389;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XM,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6391;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6393;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6395;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6397;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6399;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Top,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6401;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::Straight
		)
			.ID:
			return 6403;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerLeft
		)
			.ID:
			return 6405;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::InnerRight
		)
			.ID:
			return 6407;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterLeft
		)
			.ID:
			return 6409;
		case AcaciaStairs::AcaciaStairs(
			eBlockFace::BLOCK_FACE_XP,
			AcaciaStairs::Half::Bottom,
			AcaciaStairs::Shape::OuterRight
		)
			.ID:
			return 6411;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Top, true, true).ID:
			return 3850;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Top, true, false).ID:
			return 3852;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Top, false, true).ID:
			return 3854;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Top, false, false).ID:
			return 3856;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Bottom, true, true).ID:
			return 3858;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Bottom, true, false).ID:
			return 3860;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Bottom, false, true).ID:
			return 3862;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZM, AcaciaTrapdoor::Half::Bottom, false, false).ID:
			return 3864;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Top, true, true).ID:
			return 3866;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Top, true, false).ID:
			return 3868;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Top, false, true).ID:
			return 3870;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Top, false, false).ID:
			return 3872;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Bottom, true, true).ID:
			return 3874;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Bottom, true, false).ID:
			return 3876;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Bottom, false, true).ID:
			return 3878;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_ZP, AcaciaTrapdoor::Half::Bottom, false, false).ID:
			return 3880;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Top, true, true).ID:
			return 3882;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Top, true, false).ID:
			return 3884;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Top, false, true).ID:
			return 3886;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Top, false, false).ID:
			return 3888;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Bottom, true, true).ID:
			return 3890;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Bottom, true, false).ID:
			return 3892;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Bottom, false, true).ID:
			return 3894;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XM, AcaciaTrapdoor::Half::Bottom, false, false).ID:
			return 3896;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Top, true, true).ID:
			return 3898;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Top, true, false).ID:
			return 3900;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Top, false, true).ID:
			return 3902;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Top, false, false).ID:
			return 3904;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Bottom, true, true).ID:
			return 3906;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Bottom, true, false).ID:
			return 3908;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Bottom, false, true).ID:
			return 3910;
		case AcaciaTrapdoor::AcaciaTrapdoor(eBlockFace::BLOCK_FACE_XP, AcaciaTrapdoor::Half::Bottom, false, false).ID:
			return 3912;
		case AcaciaWood::AcaciaWood(AcaciaWood::Axis::X).ID:                                            return 120;
		case AcaciaWood::AcaciaWood(AcaciaWood::Axis::Y).ID:                                            return 121;
		case AcaciaWood::AcaciaWood(AcaciaWood::Axis::Z).ID:                                            return 122;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::NorthSouth).ID:                   return 5780;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::EastWest).ID:                     return 5781;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingEast).ID:                return 5782;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingWest).ID:                return 5783;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingNorth).ID:               return 5784;
		case ActivatorRail::ActivatorRail(true, ActivatorRail::Shape::AscendingSouth).ID:               return 5785;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::NorthSouth).ID:                  return 5786;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::EastWest).ID:                    return 5787;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingEast).ID:               return 5788;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingWest).ID:               return 5789;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingNorth).ID:              return 5790;
		case ActivatorRail::ActivatorRail(false, ActivatorRail::Shape::AscendingSouth).ID:              return 5791;
		case Air::Air().ID:                                                                             return -0;
		case Allium::Allium().ID:                                                                       return 1114;
		case Andesite::Andesite().ID:                                                                   return 6;
		case Anvil::Anvil(eBlockFace::BLOCK_FACE_ZM).ID:                                                return 5567;
		case Anvil::Anvil(eBlockFace::BLOCK_FACE_ZP).ID:                                                return 5568;
		case Anvil::Anvil(eBlockFace::BLOCK_FACE_XM).ID:                                                return 5569;
		case Anvil::Anvil(eBlockFace::BLOCK_FACE_XP).ID:                                                return 5570;
		case AttachedMelonStem::AttachedMelonStem(eBlockFace::BLOCK_FACE_ZM).ID:                        return 4248;
		case AttachedMelonStem::AttachedMelonStem(eBlockFace::BLOCK_FACE_ZP).ID:                        return 4249;
		case AttachedMelonStem::AttachedMelonStem(eBlockFace::BLOCK_FACE_XM).ID:                        return 4250;
		case AttachedMelonStem::AttachedMelonStem(eBlockFace::BLOCK_FACE_XP).ID:                        return 4251;
		case AttachedPumpkinStem::AttachedPumpkinStem(eBlockFace::BLOCK_FACE_ZM).ID:                    return 4244;
		case AttachedPumpkinStem::AttachedPumpkinStem(eBlockFace::BLOCK_FACE_ZP).ID:                    return 4245;
		case AttachedPumpkinStem::AttachedPumpkinStem(eBlockFace::BLOCK_FACE_XM).ID:                    return 4246;
		case AttachedPumpkinStem::AttachedPumpkinStem(eBlockFace::BLOCK_FACE_XP).ID:                    return 4247;
		case AzureBluet::AzureBluet().ID:                                                               return 1115;
		case Barrier::Barrier().ID:                                                                     return 6493;
		case Beacon::Beacon().ID:                                                                       return 5136;
		case Bedrock::Bedrock().ID:                                                                     return 33;
		case Beetroots::Beetroots(0).ID:                                                                return 8158;
		case Beetroots::Beetroots(1).ID:                                                                return 8159;
		case Beetroots::Beetroots(2).ID:                                                                return 8160;
		case Beetroots::Beetroots(3).ID:                                                                return 8161;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 5351;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 5352;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 5353;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 5354;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 5355;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 5356;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 5357;
		case BirchButton::BirchButton(BirchButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 5358;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 5359;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 5360;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 5361;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 5362;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 5363;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 5364;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 5365;
		case BirchButton::BirchButton(BirchButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 5366;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5367;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5368;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5369;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5370;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5371;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 5372;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5373;
		case BirchButton::BirchButton(BirchButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 5374;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_ZM, BirchDoor::Half::Upper, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7741;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7742;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7743;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7744;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7745;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7746;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7747;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7748;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_ZM, BirchDoor::Half::Lower, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7749;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7750;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7751;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7752;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7753;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7754;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7755;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7756;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_ZP, BirchDoor::Half::Upper, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7757;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7758;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7759;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7760;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7761;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7762;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7763;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7764;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_ZP, BirchDoor::Half::Lower, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7765;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7766;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7767;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7768;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7769;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7770;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7771;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_ZP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7772;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_XM, BirchDoor::Half::Upper, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7773;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7774;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7775;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7776;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7777;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7778;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7779;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7780;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_XM, BirchDoor::Half::Lower, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7781;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7782;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7783;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7784;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7785;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7786;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7787;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XM,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7788;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_XP, BirchDoor::Half::Upper, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7789;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7790;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7791;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7792;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7793;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7794;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7795;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Upper,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7796;
		case BirchDoor::BirchDoor(eBlockFace::BLOCK_FACE_XP, BirchDoor::Half::Lower, BirchDoor::Hinge::Left, true, true)
			.ID:
			return 7797;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7798;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7799;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7800;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7801;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7802;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7803;
		case BirchDoor::BirchDoor(
			eBlockFace::BLOCK_FACE_XP,
			BirchDoor::Half::Lower,
			BirchDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7804;
		case BirchFence::BirchFence(true, true, true, true).ID:                                 return 7551;
		case BirchFence::BirchFence(true, true, true, false).ID:                                return 7552;
		case BirchFence::BirchFence(true, true, false, true).ID:                                return 7555;
		case BirchFence::BirchFence(true, true, false, false).ID:                               return 7556;
		case BirchFence::BirchFence(true, false, true, true).ID:                                return 7559;
		case BirchFence::BirchFence(true, false, true, false).ID:                               return 7560;
		case BirchFence::BirchFence(true, false, false, true).ID:                               return 7563;
		case BirchFence::BirchFence(true, false, false, false).ID:                              return 7564;
		case BirchFence::BirchFence(false, true, true, true).ID:                                return 7567;
		case BirchFence::BirchFence(false, true, true, false).ID:                               return 7568;
		case BirchFence::BirchFence(false, true, false, true).ID:                               return 7571;
		case BirchFence::BirchFence(false, true, false, false).ID:                              return 7572;
		case BirchFence::BirchFence(false, false, true, true).ID:                               return 7575;
		case BirchFence::BirchFence(false, false, true, false).ID:                              return 7576;
		case BirchFence::BirchFence(false, false, false, true).ID:                              return 7579;
		case BirchFence::BirchFence(false, false, false, false).ID:                             return 7580;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 7389;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 7390;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 7391;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 7392;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 7393;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 7394;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 7395;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 7396;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 7397;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 7398;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 7399;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 7400;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 7401;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 7402;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 7403;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 7404;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 7405;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 7406;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 7407;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 7408;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 7409;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 7410;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 7411;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 7412;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 7413;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 7414;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 7415;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 7416;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 7417;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 7418;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 7419;
		case BirchFenceGate::BirchFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 7420;
		case BirchLeaves::BirchLeaves(1, true).ID:                                              return 172;
		case BirchLeaves::BirchLeaves(1, false).ID:                                             return 173;
		case BirchLeaves::BirchLeaves(2, true).ID:                                              return 174;
		case BirchLeaves::BirchLeaves(2, false).ID:                                             return 175;
		case BirchLeaves::BirchLeaves(3, true).ID:                                              return 176;
		case BirchLeaves::BirchLeaves(3, false).ID:                                             return 177;
		case BirchLeaves::BirchLeaves(4, true).ID:                                              return 178;
		case BirchLeaves::BirchLeaves(4, false).ID:                                             return 179;
		case BirchLeaves::BirchLeaves(5, true).ID:                                              return 180;
		case BirchLeaves::BirchLeaves(5, false).ID:                                             return 181;
		case BirchLeaves::BirchLeaves(6, true).ID:                                              return 182;
		case BirchLeaves::BirchLeaves(6, false).ID:                                             return 183;
		case BirchLeaves::BirchLeaves(7, true).ID:                                              return 184;
		case BirchLeaves::BirchLeaves(7, false).ID:                                             return 185;
		case BirchLog::BirchLog(BirchLog::Axis::X).ID:                                          return 78;
		case BirchLog::BirchLog(BirchLog::Axis::Y).ID:                                          return 79;
		case BirchLog::BirchLog(BirchLog::Axis::Z).ID:                                          return 80;
		case BirchPlanks::BirchPlanks().ID:                                                     return 17;
		case BirchPressurePlate::BirchPressurePlate(true).ID:                                   return 3371;
		case BirchPressurePlate::BirchPressurePlate(false).ID:                                  return 3372;
		case BirchSapling::BirchSapling(0).ID:                                                  return 25;
		case BirchSapling::BirchSapling(1).ID:                                                  return 26;
		case BirchSlab::BirchSlab(BirchSlab::Type::Top).ID:                                     return 7270;
		case BirchSlab::BirchSlab(BirchSlab::Type::Bottom).ID:                                  return 7272;
		case BirchSlab::BirchSlab(BirchSlab::Type::Double).ID:                                  return 7274;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZM, BirchStairs::Half::Top, BirchStairs::Shape::Straight)
			.ID:
			return 4965;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZM, BirchStairs::Half::Top, BirchStairs::Shape::InnerLeft)
			.ID:
			return 4967;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZM, BirchStairs::Half::Top, BirchStairs::Shape::InnerRight)
			.ID:
			return 4969;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZM, BirchStairs::Half::Top, BirchStairs::Shape::OuterLeft)
			.ID:
			return 4971;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZM, BirchStairs::Half::Top, BirchStairs::Shape::OuterRight)
			.ID:
			return 4973;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::Straight
		)
			.ID:
			return 4975;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerLeft
		)
			.ID:
			return 4977;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerRight
		)
			.ID:
			return 4979;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterLeft
		)
			.ID:
			return 4981;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterRight
		)
			.ID:
			return 4983;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZP, BirchStairs::Half::Top, BirchStairs::Shape::Straight)
			.ID:
			return 4985;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZP, BirchStairs::Half::Top, BirchStairs::Shape::InnerLeft)
			.ID:
			return 4987;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZP, BirchStairs::Half::Top, BirchStairs::Shape::InnerRight)
			.ID:
			return 4989;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZP, BirchStairs::Half::Top, BirchStairs::Shape::OuterLeft)
			.ID:
			return 4991;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_ZP, BirchStairs::Half::Top, BirchStairs::Shape::OuterRight)
			.ID:
			return 4993;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::Straight
		)
			.ID:
			return 4995;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerLeft
		)
			.ID:
			return 4997;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerRight
		)
			.ID:
			return 4999;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterLeft
		)
			.ID:
			return 5001;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterRight
		)
			.ID:
			return 5003;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XM, BirchStairs::Half::Top, BirchStairs::Shape::Straight)
			.ID:
			return 5005;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XM, BirchStairs::Half::Top, BirchStairs::Shape::InnerLeft)
			.ID:
			return 5007;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XM, BirchStairs::Half::Top, BirchStairs::Shape::InnerRight)
			.ID:
			return 5009;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XM, BirchStairs::Half::Top, BirchStairs::Shape::OuterLeft)
			.ID:
			return 5011;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XM, BirchStairs::Half::Top, BirchStairs::Shape::OuterRight)
			.ID:
			return 5013;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::Straight
		)
			.ID:
			return 5015;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerLeft
		)
			.ID:
			return 5017;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerRight
		)
			.ID:
			return 5019;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterLeft
		)
			.ID:
			return 5021;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XM,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterRight
		)
			.ID:
			return 5023;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XP, BirchStairs::Half::Top, BirchStairs::Shape::Straight)
			.ID:
			return 5025;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XP, BirchStairs::Half::Top, BirchStairs::Shape::InnerLeft)
			.ID:
			return 5027;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XP, BirchStairs::Half::Top, BirchStairs::Shape::InnerRight)
			.ID:
			return 5029;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XP, BirchStairs::Half::Top, BirchStairs::Shape::OuterLeft)
			.ID:
			return 5031;
		case BirchStairs::BirchStairs(eBlockFace::BLOCK_FACE_XP, BirchStairs::Half::Top, BirchStairs::Shape::OuterRight)
			.ID:
			return 5033;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::Straight
		)
			.ID:
			return 5035;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerLeft
		)
			.ID:
			return 5037;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::InnerRight
		)
			.ID:
			return 5039;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterLeft
		)
			.ID:
			return 5041;
		case BirchStairs::BirchStairs(
			eBlockFace::BLOCK_FACE_XP,
			BirchStairs::Half::Bottom,
			BirchStairs::Shape::OuterRight
		)
			.ID:
			return 5043;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Top, true, true).ID:
			return 3722;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Top, true, false).ID:
			return 3724;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Top, false, true).ID:
			return 3726;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Top, false, false).ID:
			return 3728;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Bottom, true, true).ID:
			return 3730;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Bottom, true, false).ID:
			return 3732;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Bottom, false, true).ID:
			return 3734;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZM, BirchTrapdoor::Half::Bottom, false, false).ID:
			return 3736;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Top, true, true).ID:
			return 3738;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Top, true, false).ID:
			return 3740;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Top, false, true).ID:
			return 3742;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Top, false, false).ID:
			return 3744;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Bottom, true, true).ID:
			return 3746;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Bottom, true, false).ID:
			return 3748;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Bottom, false, true).ID:
			return 3750;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_ZP, BirchTrapdoor::Half::Bottom, false, false).ID:
			return 3752;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Top, true, true).ID:
			return 3754;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Top, true, false).ID:
			return 3756;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Top, false, true).ID:
			return 3758;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Top, false, false).ID:
			return 3760;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Bottom, true, true).ID:
			return 3762;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Bottom, true, false).ID:
			return 3764;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Bottom, false, true).ID:
			return 3766;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XM, BirchTrapdoor::Half::Bottom, false, false).ID:
			return 3768;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Top, true, true).ID:
			return 3770;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Top, true, false).ID:
			return 3772;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Top, false, true).ID:
			return 3774;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Top, false, false).ID:
			return 3776;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Bottom, true, true).ID:
			return 3778;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Bottom, true, false).ID:
			return 3780;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Bottom, false, true).ID:
			return 3782;
		case BirchTrapdoor::BirchTrapdoor(eBlockFace::BLOCK_FACE_XP, BirchTrapdoor::Half::Bottom, false, false).ID:
			return 3784;
		case BirchWood::BirchWood(BirchWood::Axis::X).ID:                                   return 114;
		case BirchWood::BirchWood(BirchWood::Axis::Y).ID:                                   return 115;
		case BirchWood::BirchWood(BirchWood::Axis::Z).ID:                                   return 116;
		case BlackBanner::BlackBanner(0).ID:                                                return 7094;
		case BlackBanner::BlackBanner(1).ID:                                                return 7095;
		case BlackBanner::BlackBanner(2).ID:                                                return 7096;
		case BlackBanner::BlackBanner(3).ID:                                                return 7097;
		case BlackBanner::BlackBanner(4).ID:                                                return 7098;
		case BlackBanner::BlackBanner(5).ID:                                                return 7099;
		case BlackBanner::BlackBanner(6).ID:                                                return 7100;
		case BlackBanner::BlackBanner(7).ID:                                                return 7101;
		case BlackBanner::BlackBanner(8).ID:                                                return 7102;
		case BlackBanner::BlackBanner(9).ID:                                                return 7103;
		case BlackBanner::BlackBanner(10).ID:                                               return 7104;
		case BlackBanner::BlackBanner(11).ID:                                               return 7105;
		case BlackBanner::BlackBanner(12).ID:                                               return 7106;
		case BlackBanner::BlackBanner(13).ID:                                               return 7107;
		case BlackBanner::BlackBanner(14).ID:                                               return 7108;
		case BlackBanner::BlackBanner(15).ID:                                               return 7109;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZM, true, BlackBed::Part::Head).ID:  return 988;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZM, true, BlackBed::Part::Foot).ID:  return 989;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZM, false, BlackBed::Part::Head).ID: return 990;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZM, false, BlackBed::Part::Foot).ID: return 991;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZP, true, BlackBed::Part::Head).ID:  return 992;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZP, true, BlackBed::Part::Foot).ID:  return 993;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZP, false, BlackBed::Part::Head).ID: return 994;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_ZP, false, BlackBed::Part::Foot).ID: return 995;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XM, true, BlackBed::Part::Head).ID:  return 996;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XM, true, BlackBed::Part::Foot).ID:  return 997;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XM, false, BlackBed::Part::Head).ID: return 998;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XM, false, BlackBed::Part::Foot).ID: return 999;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XP, true, BlackBed::Part::Head).ID:  return 1000;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XP, true, BlackBed::Part::Foot).ID:  return 1001;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XP, false, BlackBed::Part::Head).ID: return 1002;
		case BlackBed::BlackBed(eBlockFace::BLOCK_FACE_XP, false, BlackBed::Part::Foot).ID: return 1003;
		case BlackCarpet::BlackCarpet().ID:                                                 return 6838;
		case BlackConcrete::BlackConcrete().ID:                                             return 8392;
		case BlackConcretePowder::BlackConcretePowder().ID:                                 return 8408;
		case BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:    return 8373;
		case BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:    return 8374;
		case BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:    return 8375;
		case BlackGlazedTerracotta::BlackGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:    return 8376;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                return 8307;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                return 8308;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                return 8309;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                return 8310;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                return 8311;
		case BlackShulkerBox::BlackShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                return 8312;
		case BlackStainedGlass::BlackStainedGlass().ID:                                     return 3592;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, true, true, true).ID:       return 6302;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, true, true, false).ID:      return 6303;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, true, false, true).ID:      return 6306;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, true, false, false).ID:     return 6307;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, false, true, true).ID:      return 6310;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, false, true, false).ID:     return 6311;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, false, false, true).ID:     return 6314;
		case BlackStainedGlassPane::BlackStainedGlassPane(true, false, false, false).ID:    return 6315;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, true, true, true).ID:      return 6318;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, true, true, false).ID:     return 6319;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, true, false, true).ID:     return 6322;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, true, false, false).ID:    return 6323;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, false, true, true).ID:     return 6326;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, false, true, false).ID:    return 6327;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, false, false, true).ID:    return 6330;
		case BlackStainedGlassPane::BlackStainedGlassPane(false, false, false, false).ID:   return 6331;
		case BlackTerracotta::BlackTerracotta().ID:                                         return 5819;
		case BlackWallBanner::BlackWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                return 7170;
		case BlackWallBanner::BlackWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                return 7171;
		case BlackWallBanner::BlackWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                return 7172;
		case BlackWallBanner::BlackWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                return 7173;
		case BlackWool::BlackWool().ID:                                                     return 1098;
		case BlueBanner::BlueBanner(0).ID:                                                  return 7030;
		case BlueBanner::BlueBanner(1).ID:                                                  return 7031;
		case BlueBanner::BlueBanner(2).ID:                                                  return 7032;
		case BlueBanner::BlueBanner(3).ID:                                                  return 7033;
		case BlueBanner::BlueBanner(4).ID:                                                  return 7034;
		case BlueBanner::BlueBanner(5).ID:                                                  return 7035;
		case BlueBanner::BlueBanner(6).ID:                                                  return 7036;
		case BlueBanner::BlueBanner(7).ID:                                                  return 7037;
		case BlueBanner::BlueBanner(8).ID:                                                  return 7038;
		case BlueBanner::BlueBanner(9).ID:                                                  return 7039;
		case BlueBanner::BlueBanner(10).ID:                                                 return 7040;
		case BlueBanner::BlueBanner(11).ID:                                                 return 7041;
		case BlueBanner::BlueBanner(12).ID:                                                 return 7042;
		case BlueBanner::BlueBanner(13).ID:                                                 return 7043;
		case BlueBanner::BlueBanner(14).ID:                                                 return 7044;
		case BlueBanner::BlueBanner(15).ID:                                                 return 7045;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZM, true, BlueBed::Part::Head).ID:     return 924;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZM, true, BlueBed::Part::Foot).ID:     return 925;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZM, false, BlueBed::Part::Head).ID:    return 926;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZM, false, BlueBed::Part::Foot).ID:    return 927;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZP, true, BlueBed::Part::Head).ID:     return 928;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZP, true, BlueBed::Part::Foot).ID:     return 929;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZP, false, BlueBed::Part::Head).ID:    return 930;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_ZP, false, BlueBed::Part::Foot).ID:    return 931;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XM, true, BlueBed::Part::Head).ID:     return 932;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XM, true, BlueBed::Part::Foot).ID:     return 933;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XM, false, BlueBed::Part::Head).ID:    return 934;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XM, false, BlueBed::Part::Foot).ID:    return 935;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XP, true, BlueBed::Part::Head).ID:     return 936;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XP, true, BlueBed::Part::Foot).ID:     return 937;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XP, false, BlueBed::Part::Head).ID:    return 938;
		case BlueBed::BlueBed(eBlockFace::BLOCK_FACE_XP, false, BlueBed::Part::Foot).ID:    return 939;
		case BlueCarpet::BlueCarpet().ID:                                                   return 6834;
		case BlueConcrete::BlueConcrete().ID:                                               return 8388;
		case BlueConcretePowder::BlueConcretePowder().ID:                                   return 8404;
		case BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:      return 8357;
		case BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:      return 8358;
		case BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:      return 8359;
		case BlueGlazedTerracotta::BlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:      return 8360;
		case BlueIce::BlueIce().ID:                                                         return 8572;
		case BlueOrchid::BlueOrchid().ID:                                                   return 1113;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                  return 8283;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                  return 8284;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                  return 8285;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                  return 8286;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                  return 8287;
		case BlueShulkerBox::BlueShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                  return 8288;
		case BlueStainedGlass::BlueStainedGlass().ID:                                       return 3588;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, true, true, true).ID:         return 6174;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, true, true, false).ID:        return 6175;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, true, false, true).ID:        return 6178;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, true, false, false).ID:       return 6179;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, false, true, true).ID:        return 6182;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, false, true, false).ID:       return 6183;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, false, false, true).ID:       return 6186;
		case BlueStainedGlassPane::BlueStainedGlassPane(true, false, false, false).ID:      return 6187;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, true, true, true).ID:        return 6190;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, true, true, false).ID:       return 6191;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, true, false, true).ID:       return 6194;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, true, false, false).ID:      return 6195;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, false, true, true).ID:       return 6198;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, false, true, false).ID:      return 6199;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, false, false, true).ID:      return 6202;
		case BlueStainedGlassPane::BlueStainedGlassPane(false, false, false, false).ID:     return 6203;
		case BlueTerracotta::BlueTerracotta().ID:                                           return 5815;
		case BlueWallBanner::BlueWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                  return 7154;
		case BlueWallBanner::BlueWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                  return 7155;
		case BlueWallBanner::BlueWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                  return 7156;
		case BlueWallBanner::BlueWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                  return 7157;
		case BlueWool::BlueWool().ID:                                                       return 1094;
		case BoneBlock::BoneBlock(BoneBlock::Axis::X).ID:                                   return 8195;
		case BoneBlock::BoneBlock(BoneBlock::Axis::Y).ID:                                   return 8196;
		case BoneBlock::BoneBlock(BoneBlock::Axis::Z).ID:                                   return 8197;
		case Bookshelf::Bookshelf().ID:                                                     return 1127;
		case BrainCoral::BrainCoral().ID:                                                   return 8460;
		case BrainCoralBlock::BrainCoralBlock().ID:                                         return 8455;
		case BrainCoralFan::BrainCoralFan().ID:                                             return 8557;
		case BrainCoralWallFan::BrainCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:            return 8513;
		case BrainCoralWallFan::BrainCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:            return 8515;
		case BrainCoralWallFan::BrainCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:            return 8517;
		case BrainCoralWallFan::BrainCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:            return 8519;
		case BrewingStand::BrewingStand(true, true, true).ID:                               return 4613;
		case BrewingStand::BrewingStand(true, true, false).ID:                              return 4614;
		case BrewingStand::BrewingStand(true, false, true).ID:                              return 4615;
		case BrewingStand::BrewingStand(true, false, false).ID:                             return 4616;
		case BrewingStand::BrewingStand(false, true, true).ID:                              return 4617;
		case BrewingStand::BrewingStand(false, true, false).ID:                             return 4618;
		case BrewingStand::BrewingStand(false, false, true).ID:                             return 4619;
		case BrewingStand::BrewingStand(false, false, false).ID:                            return 4620;
		case BrickSlab::BrickSlab(BrickSlab::Type::Top).ID:                                 return 7318;
		case BrickSlab::BrickSlab(BrickSlab::Type::Bottom).ID:                              return 7320;
		case BrickSlab::BrickSlab(BrickSlab::Type::Double).ID:                              return 7322;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZM, BrickStairs::Half::Top, BrickStairs::Shape::Straight)
			.ID:
			return 4333;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZM, BrickStairs::Half::Top, BrickStairs::Shape::InnerLeft)
			.ID:
			return 4335;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZM, BrickStairs::Half::Top, BrickStairs::Shape::InnerRight)
			.ID:
			return 4337;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZM, BrickStairs::Half::Top, BrickStairs::Shape::OuterLeft)
			.ID:
			return 4339;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZM, BrickStairs::Half::Top, BrickStairs::Shape::OuterRight)
			.ID:
			return 4341;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::Straight
		)
			.ID:
			return 4343;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4345;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerRight
		)
			.ID:
			return 4347;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4349;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterRight
		)
			.ID:
			return 4351;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZP, BrickStairs::Half::Top, BrickStairs::Shape::Straight)
			.ID:
			return 4353;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZP, BrickStairs::Half::Top, BrickStairs::Shape::InnerLeft)
			.ID:
			return 4355;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZP, BrickStairs::Half::Top, BrickStairs::Shape::InnerRight)
			.ID:
			return 4357;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZP, BrickStairs::Half::Top, BrickStairs::Shape::OuterLeft)
			.ID:
			return 4359;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_ZP, BrickStairs::Half::Top, BrickStairs::Shape::OuterRight)
			.ID:
			return 4361;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::Straight
		)
			.ID:
			return 4363;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4365;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerRight
		)
			.ID:
			return 4367;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4369;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterRight
		)
			.ID:
			return 4371;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XM, BrickStairs::Half::Top, BrickStairs::Shape::Straight)
			.ID:
			return 4373;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XM, BrickStairs::Half::Top, BrickStairs::Shape::InnerLeft)
			.ID:
			return 4375;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XM, BrickStairs::Half::Top, BrickStairs::Shape::InnerRight)
			.ID:
			return 4377;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XM, BrickStairs::Half::Top, BrickStairs::Shape::OuterLeft)
			.ID:
			return 4379;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XM, BrickStairs::Half::Top, BrickStairs::Shape::OuterRight)
			.ID:
			return 4381;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::Straight
		)
			.ID:
			return 4383;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4385;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerRight
		)
			.ID:
			return 4387;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4389;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterRight
		)
			.ID:
			return 4391;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XP, BrickStairs::Half::Top, BrickStairs::Shape::Straight)
			.ID:
			return 4393;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XP, BrickStairs::Half::Top, BrickStairs::Shape::InnerLeft)
			.ID:
			return 4395;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XP, BrickStairs::Half::Top, BrickStairs::Shape::InnerRight)
			.ID:
			return 4397;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XP, BrickStairs::Half::Top, BrickStairs::Shape::OuterLeft)
			.ID:
			return 4399;
		case BrickStairs::BrickStairs(eBlockFace::BLOCK_FACE_XP, BrickStairs::Half::Top, BrickStairs::Shape::OuterRight)
			.ID:
			return 4401;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::Straight
		)
			.ID:
			return 4403;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4405;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::InnerRight
		)
			.ID:
			return 4407;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4409;
		case BrickStairs::BrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			BrickStairs::Half::Bottom,
			BrickStairs::Shape::OuterRight
		)
			.ID:
			return 4411;
		case Bricks::Bricks().ID:                                                                 return 1125;
		case BrownBanner::BrownBanner(0).ID:                                                      return 7046;
		case BrownBanner::BrownBanner(1).ID:                                                      return 7047;
		case BrownBanner::BrownBanner(2).ID:                                                      return 7048;
		case BrownBanner::BrownBanner(3).ID:                                                      return 7049;
		case BrownBanner::BrownBanner(4).ID:                                                      return 7050;
		case BrownBanner::BrownBanner(5).ID:                                                      return 7051;
		case BrownBanner::BrownBanner(6).ID:                                                      return 7052;
		case BrownBanner::BrownBanner(7).ID:                                                      return 7053;
		case BrownBanner::BrownBanner(8).ID:                                                      return 7054;
		case BrownBanner::BrownBanner(9).ID:                                                      return 7055;
		case BrownBanner::BrownBanner(10).ID:                                                     return 7056;
		case BrownBanner::BrownBanner(11).ID:                                                     return 7057;
		case BrownBanner::BrownBanner(12).ID:                                                     return 7058;
		case BrownBanner::BrownBanner(13).ID:                                                     return 7059;
		case BrownBanner::BrownBanner(14).ID:                                                     return 7060;
		case BrownBanner::BrownBanner(15).ID:                                                     return 7061;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZM, true, BrownBed::Part::Head).ID:        return 940;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZM, true, BrownBed::Part::Foot).ID:        return 941;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZM, false, BrownBed::Part::Head).ID:       return 942;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZM, false, BrownBed::Part::Foot).ID:       return 943;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZP, true, BrownBed::Part::Head).ID:        return 944;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZP, true, BrownBed::Part::Foot).ID:        return 945;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZP, false, BrownBed::Part::Head).ID:       return 946;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_ZP, false, BrownBed::Part::Foot).ID:       return 947;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XM, true, BrownBed::Part::Head).ID:        return 948;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XM, true, BrownBed::Part::Foot).ID:        return 949;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XM, false, BrownBed::Part::Head).ID:       return 950;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XM, false, BrownBed::Part::Foot).ID:       return 951;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XP, true, BrownBed::Part::Head).ID:        return 952;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XP, true, BrownBed::Part::Foot).ID:        return 953;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XP, false, BrownBed::Part::Head).ID:       return 954;
		case BrownBed::BrownBed(eBlockFace::BLOCK_FACE_XP, false, BrownBed::Part::Foot).ID:       return 955;
		case BrownCarpet::BrownCarpet().ID:                                                       return 6835;
		case BrownConcrete::BrownConcrete().ID:                                                   return 8389;
		case BrownConcretePowder::BrownConcretePowder().ID:                                       return 8405;
		case BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:          return 8361;
		case BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:          return 8362;
		case BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:          return 8363;
		case BrownGlazedTerracotta::BrownGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:          return 8364;
		case BrownMushroom::BrownMushroom().ID:                                                   return 1121;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, true, true, true).ID:       return 3987;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, true, true, false).ID:      return 3988;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, true, false, true).ID:      return 3989;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, true, false, false).ID:     return 3990;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, false, true, true).ID:      return 3991;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, false, true, false).ID:     return 3992;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, false, false, true).ID:     return 3993;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, true, false, false, false).ID:    return 3994;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, true, true, true).ID:      return 3995;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, true, true, false).ID:     return 3996;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, true, false, true).ID:     return 3997;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, true, false, false).ID:    return 3998;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, false, true, true).ID:     return 3999;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, false, true, false).ID:    return 4000;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, false, false, true).ID:    return 4001;
		case BrownMushroomBlock::BrownMushroomBlock(true, true, false, false, false, false).ID:   return 4002;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, true, true, true).ID:      return 4003;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, true, true, false).ID:     return 4004;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, true, false, true).ID:     return 4005;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, true, false, false).ID:    return 4006;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, false, true, true).ID:     return 4007;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, false, true, false).ID:    return 4008;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, false, false, true).ID:    return 4009;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, true, false, false, false).ID:   return 4010;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, true, true, true).ID:     return 4011;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, true, true, false).ID:    return 4012;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, true, false, true).ID:    return 4013;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, true, false, false).ID:   return 4014;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, false, true, true).ID:    return 4015;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, false, true, false).ID:   return 4016;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, false, false, true).ID:   return 4017;
		case BrownMushroomBlock::BrownMushroomBlock(true, false, false, false, false, false).ID:  return 4018;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, true, true, true).ID:      return 4019;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, true, true, false).ID:     return 4020;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, true, false, true).ID:     return 4021;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, true, false, false).ID:    return 4022;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, false, true, true).ID:     return 4023;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, false, true, false).ID:    return 4024;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, false, false, true).ID:    return 4025;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, true, false, false, false).ID:   return 4026;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, true, true, true).ID:     return 4027;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, true, true, false).ID:    return 4028;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, true, false, true).ID:    return 4029;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, true, false, false).ID:   return 4030;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, false, true, true).ID:    return 4031;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, false, true, false).ID:   return 4032;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, false, false, true).ID:   return 4033;
		case BrownMushroomBlock::BrownMushroomBlock(false, true, false, false, false, false).ID:  return 4034;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, true, true, true).ID:     return 4035;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, true, true, false).ID:    return 4036;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, true, false, true).ID:    return 4037;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, true, false, false).ID:   return 4038;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, true, true).ID:    return 4039;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, true, false).ID:   return 4040;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, false, true).ID:   return 4041;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, true, false, false, false).ID:  return 4042;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, true, true).ID:    return 4043;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, true, false).ID:   return 4044;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, false, true).ID:   return 4045;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, true, false, false).ID:  return 4046;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, true, true).ID:   return 4047;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, true, false).ID:  return 4048;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, true).ID:  return 4049;
		case BrownMushroomBlock::BrownMushroomBlock(false, false, false, false, false, false).ID: return 4050;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                      return 8289;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                      return 8290;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                      return 8291;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                      return 8292;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                      return 8293;
		case BrownShulkerBox::BrownShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                      return 8294;
		case BrownStainedGlass::BrownStainedGlass().ID:                                           return 3589;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, true, true, true).ID:             return 6206;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, true, true, false).ID:            return 6207;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, true, false, true).ID:            return 6210;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, true, false, false).ID:           return 6211;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, false, true, true).ID:            return 6214;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, false, true, false).ID:           return 6215;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, false, false, true).ID:           return 6218;
		case BrownStainedGlassPane::BrownStainedGlassPane(true, false, false, false).ID:          return 6219;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, true, true, true).ID:            return 6222;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, true, true, false).ID:           return 6223;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, true, false, true).ID:           return 6226;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, true, false, false).ID:          return 6227;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, false, true, true).ID:           return 6230;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, false, true, false).ID:          return 6231;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, false, false, true).ID:          return 6234;
		case BrownStainedGlassPane::BrownStainedGlassPane(false, false, false, false).ID:         return 6235;
		case BrownTerracotta::BrownTerracotta().ID:                                               return 5816;
		case BrownWallBanner::BrownWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                      return 7158;
		case BrownWallBanner::BrownWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                      return 7159;
		case BrownWallBanner::BrownWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                      return 7160;
		case BrownWallBanner::BrownWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                      return 7161;
		case BrownWool::BrownWool().ID:                                                           return 1095;
		case BubbleColumn::BubbleColumn(true).ID:                                                 return 8576;
		case BubbleColumn::BubbleColumn(false).ID:                                                return 8577;
		case BubbleCoral::BubbleCoral().ID:                                                       return 8461;
		case BubbleCoralBlock::BubbleCoralBlock().ID:                                             return 8456;
		case BubbleCoralFan::BubbleCoralFan().ID:                                                 return 8559;
		case BubbleCoralWallFan::BubbleCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:                return 8521;
		case BubbleCoralWallFan::BubbleCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:                return 8523;
		case BubbleCoralWallFan::BubbleCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:                return 8525;
		case BubbleCoralWallFan::BubbleCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:                return 8527;
		case Cactus::Cactus(0).ID:                                                                return 3425;
		case Cactus::Cactus(1).ID:                                                                return 3426;
		case Cactus::Cactus(2).ID:                                                                return 3427;
		case Cactus::Cactus(3).ID:                                                                return 3428;
		case Cactus::Cactus(4).ID:                                                                return 3429;
		case Cactus::Cactus(5).ID:                                                                return 3430;
		case Cactus::Cactus(6).ID:                                                                return 3431;
		case Cactus::Cactus(7).ID:                                                                return 3432;
		case Cactus::Cactus(8).ID:                                                                return 3433;
		case Cactus::Cactus(9).ID:                                                                return 3434;
		case Cactus::Cactus(10).ID:                                                               return 3435;
		case Cactus::Cactus(11).ID:                                                               return 3436;
		case Cactus::Cactus(12).ID:                                                               return 3437;
		case Cactus::Cactus(13).ID:                                                               return 3438;
		case Cactus::Cactus(14).ID:                                                               return 3439;
		case Cactus::Cactus(15).ID:                                                               return 3440;
		case Cake::Cake(0).ID:                                                                    return 3506;
		case Cake::Cake(1).ID:                                                                    return 3507;
		case Cake::Cake(2).ID:                                                                    return 3508;
		case Cake::Cake(3).ID:                                                                    return 3509;
		case Cake::Cake(4).ID:                                                                    return 3510;
		case Cake::Cake(5).ID:                                                                    return 3511;
		case Cake::Cake(6).ID:                                                                    return 3512;
		case Carrots::Carrots(0).ID:                                                              return 5287;
		case Carrots::Carrots(1).ID:                                                              return 5288;
		case Carrots::Carrots(2).ID:                                                              return 5289;
		case Carrots::Carrots(3).ID:                                                              return 5290;
		case Carrots::Carrots(4).ID:                                                              return 5291;
		case Carrots::Carrots(5).ID:                                                              return 5292;
		case Carrots::Carrots(6).ID:                                                              return 5293;
		case Carrots::Carrots(7).ID:                                                              return 5294;
		case CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_ZM).ID:                          return 3498;
		case CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_ZP).ID:                          return 3499;
		case CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_XM).ID:                          return 3500;
		case CarvedPumpkin::CarvedPumpkin(eBlockFace::BLOCK_FACE_XP).ID:                          return 3501;
		case Cauldron::Cauldron(0).ID:                                                            return 4621;
		case Cauldron::Cauldron(1).ID:                                                            return 4622;
		case Cauldron::Cauldron(2).ID:                                                            return 4623;
		case Cauldron::Cauldron(3).ID:                                                            return 4624;
		case CaveAir::CaveAir().ID:                                                               return 8575;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_ZM).ID:            return 8176;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_XP).ID:            return 8177;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_ZP).ID:            return 8178;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_XM).ID:            return 8179;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_YP).ID:            return 8180;
		case ChainCommandBlock::ChainCommandBlock(true, eBlockFace::BLOCK_FACE_YM).ID:            return 8181;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_ZM).ID:           return 8182;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_XP).ID:           return 8183;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_ZP).ID:           return 8184;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_XM).ID:           return 8185;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_YP).ID:           return 8186;
		case ChainCommandBlock::ChainCommandBlock(false, eBlockFace::BLOCK_FACE_YM).ID:           return 8187;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZM, Chest::Type::Single).ID:                     return 1729;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZM, Chest::Type::Left).ID:                       return 1731;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZM, Chest::Type::Right).ID:                      return 1733;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZP, Chest::Type::Single).ID:                     return 1735;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZP, Chest::Type::Left).ID:                       return 1737;
		case Chest::Chest(eBlockFace::BLOCK_FACE_ZP, Chest::Type::Right).ID:                      return 1739;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XM, Chest::Type::Single).ID:                     return 1741;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XM, Chest::Type::Left).ID:                       return 1743;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XM, Chest::Type::Right).ID:                      return 1745;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XP, Chest::Type::Single).ID:                     return 1747;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XP, Chest::Type::Left).ID:                       return 1749;
		case Chest::Chest(eBlockFace::BLOCK_FACE_XP, Chest::Type::Right).ID:                      return 1751;
		case ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_ZM).ID:                            return 5571;
		case ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_ZP).ID:                            return 5572;
		case ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_XM).ID:                            return 5573;
		case ChippedAnvil::ChippedAnvil(eBlockFace::BLOCK_FACE_XP).ID:                            return 5574;
		case ChiseledQuartzBlock::ChiseledQuartzBlock().ID:                                       return 5696;
		case ChiseledRedSandstone::ChiseledRedSandstone().ID:                                     return 7175;
		case ChiseledSandstone::ChiseledSandstone().ID:                                           return 246;
		case ChiseledStoneBricks::ChiseledStoneBricks().ID:                                       return 3986;
		case ChorusFlower::ChorusFlower(0).ID:                                                    return 8067;
		case ChorusFlower::ChorusFlower(1).ID:                                                    return 8068;
		case ChorusFlower::ChorusFlower(2).ID:                                                    return 8069;
		case ChorusFlower::ChorusFlower(3).ID:                                                    return 8070;
		case ChorusFlower::ChorusFlower(4).ID:                                                    return 8071;
		case ChorusFlower::ChorusFlower(5).ID:                                                    return 8072;
		case ChorusPlant::ChorusPlant(true, true, true, true, true, true).ID:                     return 8003;
		case ChorusPlant::ChorusPlant(true, true, true, true, true, false).ID:                    return 8004;
		case ChorusPlant::ChorusPlant(true, true, true, true, false, true).ID:                    return 8005;
		case ChorusPlant::ChorusPlant(true, true, true, true, false, false).ID:                   return 8006;
		case ChorusPlant::ChorusPlant(true, true, true, false, true, true).ID:                    return 8007;
		case ChorusPlant::ChorusPlant(true, true, true, false, true, false).ID:                   return 8008;
		case ChorusPlant::ChorusPlant(true, true, true, false, false, true).ID:                   return 8009;
		case ChorusPlant::ChorusPlant(true, true, true, false, false, false).ID:                  return 8010;
		case ChorusPlant::ChorusPlant(true, true, false, true, true, true).ID:                    return 8011;
		case ChorusPlant::ChorusPlant(true, true, false, true, true, false).ID:                   return 8012;
		case ChorusPlant::ChorusPlant(true, true, false, true, false, true).ID:                   return 8013;
		case ChorusPlant::ChorusPlant(true, true, false, true, false, false).ID:                  return 8014;
		case ChorusPlant::ChorusPlant(true, true, false, false, true, true).ID:                   return 8015;
		case ChorusPlant::ChorusPlant(true, true, false, false, true, false).ID:                  return 8016;
		case ChorusPlant::ChorusPlant(true, true, false, false, false, true).ID:                  return 8017;
		case ChorusPlant::ChorusPlant(true, true, false, false, false, false).ID:                 return 8018;
		case ChorusPlant::ChorusPlant(true, false, true, true, true, true).ID:                    return 8019;
		case ChorusPlant::ChorusPlant(true, false, true, true, true, false).ID:                   return 8020;
		case ChorusPlant::ChorusPlant(true, false, true, true, false, true).ID:                   return 8021;
		case ChorusPlant::ChorusPlant(true, false, true, true, false, false).ID:                  return 8022;
		case ChorusPlant::ChorusPlant(true, false, true, false, true, true).ID:                   return 8023;
		case ChorusPlant::ChorusPlant(true, false, true, false, true, false).ID:                  return 8024;
		case ChorusPlant::ChorusPlant(true, false, true, false, false, true).ID:                  return 8025;
		case ChorusPlant::ChorusPlant(true, false, true, false, false, false).ID:                 return 8026;
		case ChorusPlant::ChorusPlant(true, false, false, true, true, true).ID:                   return 8027;
		case ChorusPlant::ChorusPlant(true, false, false, true, true, false).ID:                  return 8028;
		case ChorusPlant::ChorusPlant(true, false, false, true, false, true).ID:                  return 8029;
		case ChorusPlant::ChorusPlant(true, false, false, true, false, false).ID:                 return 8030;
		case ChorusPlant::ChorusPlant(true, false, false, false, true, true).ID:                  return 8031;
		case ChorusPlant::ChorusPlant(true, false, false, false, true, false).ID:                 return 8032;
		case ChorusPlant::ChorusPlant(true, false, false, false, false, true).ID:                 return 8033;
		case ChorusPlant::ChorusPlant(true, false, false, false, false, false).ID:                return 8034;
		case ChorusPlant::ChorusPlant(false, true, true, true, true, true).ID:                    return 8035;
		case ChorusPlant::ChorusPlant(false, true, true, true, true, false).ID:                   return 8036;
		case ChorusPlant::ChorusPlant(false, true, true, true, false, true).ID:                   return 8037;
		case ChorusPlant::ChorusPlant(false, true, true, true, false, false).ID:                  return 8038;
		case ChorusPlant::ChorusPlant(false, true, true, false, true, true).ID:                   return 8039;
		case ChorusPlant::ChorusPlant(false, true, true, false, true, false).ID:                  return 8040;
		case ChorusPlant::ChorusPlant(false, true, true, false, false, true).ID:                  return 8041;
		case ChorusPlant::ChorusPlant(false, true, true, false, false, false).ID:                 return 8042;
		case ChorusPlant::ChorusPlant(false, true, false, true, true, true).ID:                   return 8043;
		case ChorusPlant::ChorusPlant(false, true, false, true, true, false).ID:                  return 8044;
		case ChorusPlant::ChorusPlant(false, true, false, true, false, true).ID:                  return 8045;
		case ChorusPlant::ChorusPlant(false, true, false, true, false, false).ID:                 return 8046;
		case ChorusPlant::ChorusPlant(false, true, false, false, true, true).ID:                  return 8047;
		case ChorusPlant::ChorusPlant(false, true, false, false, true, false).ID:                 return 8048;
		case ChorusPlant::ChorusPlant(false, true, false, false, false, true).ID:                 return 8049;
		case ChorusPlant::ChorusPlant(false, true, false, false, false, false).ID:                return 8050;
		case ChorusPlant::ChorusPlant(false, false, true, true, true, true).ID:                   return 8051;
		case ChorusPlant::ChorusPlant(false, false, true, true, true, false).ID:                  return 8052;
		case ChorusPlant::ChorusPlant(false, false, true, true, false, true).ID:                  return 8053;
		case ChorusPlant::ChorusPlant(false, false, true, true, false, false).ID:                 return 8054;
		case ChorusPlant::ChorusPlant(false, false, true, false, true, true).ID:                  return 8055;
		case ChorusPlant::ChorusPlant(false, false, true, false, true, false).ID:                 return 8056;
		case ChorusPlant::ChorusPlant(false, false, true, false, false, true).ID:                 return 8057;
		case ChorusPlant::ChorusPlant(false, false, true, false, false, false).ID:                return 8058;
		case ChorusPlant::ChorusPlant(false, false, false, true, true, true).ID:                  return 8059;
		case ChorusPlant::ChorusPlant(false, false, false, true, true, false).ID:                 return 8060;
		case ChorusPlant::ChorusPlant(false, false, false, true, false, true).ID:                 return 8061;
		case ChorusPlant::ChorusPlant(false, false, false, true, false, false).ID:                return 8062;
		case ChorusPlant::ChorusPlant(false, false, false, false, true, true).ID:                 return 8063;
		case ChorusPlant::ChorusPlant(false, false, false, false, true, false).ID:                return 8064;
		case ChorusPlant::ChorusPlant(false, false, false, false, false, true).ID:                return 8065;
		case ChorusPlant::ChorusPlant(false, false, false, false, false, false).ID:               return 8066;
		case Clay::Clay().ID:                                                                     return 3441;
		case CoalBlock::CoalBlock().ID:                                                           return 6840;
		case CoalOre::CoalOre().ID:                                                               return 71;
		case CoarseDirt::CoarseDirt().ID:                                                         return 11;
		case Cobblestone::Cobblestone().ID:                                                       return 14;
		case CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Top).ID:                     return 7312;
		case CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Bottom).ID:                  return 7314;
		case CobblestoneSlab::CobblestoneSlab(CobblestoneSlab::Type::Double).ID:                  return 7316;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3190;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3192;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3194;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3196;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3198;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3200;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3202;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3204;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3206;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3208;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3210;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3212;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3214;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3216;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3218;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3220;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3222;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3224;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3226;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3228;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3230;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3232;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3234;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3236;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3238;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3240;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3242;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3244;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3246;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3248;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3250;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3252;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3254;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3256;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Top,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3258;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::Straight
		)
			.ID:
			return 3260;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerLeft
		)
			.ID:
			return 3262;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::InnerRight
		)
			.ID:
			return 3264;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterLeft
		)
			.ID:
			return 3266;
		case CobblestoneStairs::CobblestoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			CobblestoneStairs::Half::Bottom,
			CobblestoneStairs::Shape::OuterRight
		)
			.ID:
			return 3268;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5139;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5140;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5143;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5144;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5147;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5148;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5151;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5152;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5155;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5156;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5159;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5160;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5163;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5164;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5167;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::Low,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5168;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5171;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5172;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5175;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5176;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5179;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5180;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5183;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::Low,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5184;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5187;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5188;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5191;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::Low,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5192;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5195;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			true,
			CobblestoneWall::West::None
		)
			.ID:
			return 5196;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::Low
		)
			.ID:
			return 5199;
		case CobblestoneWall::CobblestoneWall(
			CobblestoneWall::East::None,
			CobblestoneWall::North::None,
			CobblestoneWall::South::None,
			false,
			CobblestoneWall::West::None
		)
			.ID:
			return 5200;
		case Cobweb::Cobweb().ID:                                                                           return 1040;
		case Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_ZM).ID:                                                 return 4638;
		case Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_ZP).ID:                                                 return 4639;
		case Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_XM).ID:                                                 return 4640;
		case Cocoa::Cocoa(0, eBlockFace::BLOCK_FACE_XP).ID:                                                 return 4641;
		case Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_ZM).ID:                                                 return 4642;
		case Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_ZP).ID:                                                 return 4643;
		case Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_XM).ID:                                                 return 4644;
		case Cocoa::Cocoa(1, eBlockFace::BLOCK_FACE_XP).ID:                                                 return 4645;
		case Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_ZM).ID:                                                 return 4646;
		case Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_ZP).ID:                                                 return 4647;
		case Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_XM).ID:                                                 return 4648;
		case Cocoa::Cocoa(2, eBlockFace::BLOCK_FACE_XP).ID:                                                 return 4649;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_ZM).ID:                                return 5124;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_XP).ID:                                return 5125;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_ZP).ID:                                return 5126;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_XM).ID:                                return 5127;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_YP).ID:                                return 5128;
		case CommandBlock::CommandBlock(true, eBlockFace::BLOCK_FACE_YM).ID:                                return 5129;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_ZM).ID:                               return 5130;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_XP).ID:                               return 5131;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_ZP).ID:                               return 5132;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_XM).ID:                               return 5133;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_YP).ID:                               return 5134;
		case CommandBlock::CommandBlock(false, eBlockFace::BLOCK_FACE_YM).ID:                               return 5135;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, true).ID:         return 5635;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Compare, false).ID:        return 5636;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, true).ID:        return 5637;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZM, Comparator::Mode::Subtract, false).ID:       return 5638;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, true).ID:         return 5639;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Compare, false).ID:        return 5640;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, true).ID:        return 5641;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_ZP, Comparator::Mode::Subtract, false).ID:       return 5642;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, true).ID:         return 5643;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Compare, false).ID:        return 5644;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, true).ID:        return 5645;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XM, Comparator::Mode::Subtract, false).ID:       return 5646;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, true).ID:         return 5647;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Compare, false).ID:        return 5648;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, true).ID:        return 5649;
		case Comparator::Comparator(eBlockFace::BLOCK_FACE_XP, Comparator::Mode::Subtract, false).ID:       return 5650;
		case Conduit::Conduit().ID:                                                                         return 8573;
		case CrackedStoneBricks::CrackedStoneBricks().ID:                                                   return 3985;
		case CraftingTable::CraftingTable().ID:                                                             return 3050;
		case CreeperHead::CreeperHead(0).ID:                                                                return 5531;
		case CreeperHead::CreeperHead(1).ID:                                                                return 5532;
		case CreeperHead::CreeperHead(2).ID:                                                                return 5533;
		case CreeperHead::CreeperHead(3).ID:                                                                return 5534;
		case CreeperHead::CreeperHead(4).ID:                                                                return 5535;
		case CreeperHead::CreeperHead(5).ID:                                                                return 5536;
		case CreeperHead::CreeperHead(6).ID:                                                                return 5537;
		case CreeperHead::CreeperHead(7).ID:                                                                return 5538;
		case CreeperHead::CreeperHead(8).ID:                                                                return 5539;
		case CreeperHead::CreeperHead(9).ID:                                                                return 5540;
		case CreeperHead::CreeperHead(10).ID:                                                               return 5541;
		case CreeperHead::CreeperHead(11).ID:                                                               return 5542;
		case CreeperHead::CreeperHead(12).ID:                                                               return 5543;
		case CreeperHead::CreeperHead(13).ID:                                                               return 5544;
		case CreeperHead::CreeperHead(14).ID:                                                               return 5545;
		case CreeperHead::CreeperHead(15).ID:                                                               return 5546;
		case CreeperWallHead::CreeperWallHead(eBlockFace::BLOCK_FACE_ZM).ID:                                return 5527;
		case CreeperWallHead::CreeperWallHead(eBlockFace::BLOCK_FACE_ZP).ID:                                return 5528;
		case CreeperWallHead::CreeperWallHead(eBlockFace::BLOCK_FACE_XM).ID:                                return 5529;
		case CreeperWallHead::CreeperWallHead(eBlockFace::BLOCK_FACE_XP).ID:                                return 5530;
		case CutRedSandstone::CutRedSandstone().ID:                                                         return 7176;
		case CutSandstone::CutSandstone().ID:                                                               return 247;
		case CyanBanner::CyanBanner(0).ID:                                                                  return 6998;
		case CyanBanner::CyanBanner(1).ID:                                                                  return 6999;
		case CyanBanner::CyanBanner(2).ID:                                                                  return 7000;
		case CyanBanner::CyanBanner(3).ID:                                                                  return 7001;
		case CyanBanner::CyanBanner(4).ID:                                                                  return 7002;
		case CyanBanner::CyanBanner(5).ID:                                                                  return 7003;
		case CyanBanner::CyanBanner(6).ID:                                                                  return 7004;
		case CyanBanner::CyanBanner(7).ID:                                                                  return 7005;
		case CyanBanner::CyanBanner(8).ID:                                                                  return 7006;
		case CyanBanner::CyanBanner(9).ID:                                                                  return 7007;
		case CyanBanner::CyanBanner(10).ID:                                                                 return 7008;
		case CyanBanner::CyanBanner(11).ID:                                                                 return 7009;
		case CyanBanner::CyanBanner(12).ID:                                                                 return 7010;
		case CyanBanner::CyanBanner(13).ID:                                                                 return 7011;
		case CyanBanner::CyanBanner(14).ID:                                                                 return 7012;
		case CyanBanner::CyanBanner(15).ID:                                                                 return 7013;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZM, true, CyanBed::Part::Head).ID:                     return 892;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZM, true, CyanBed::Part::Foot).ID:                     return 893;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZM, false, CyanBed::Part::Head).ID:                    return 894;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZM, false, CyanBed::Part::Foot).ID:                    return 895;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZP, true, CyanBed::Part::Head).ID:                     return 896;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZP, true, CyanBed::Part::Foot).ID:                     return 897;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZP, false, CyanBed::Part::Head).ID:                    return 898;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_ZP, false, CyanBed::Part::Foot).ID:                    return 899;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XM, true, CyanBed::Part::Head).ID:                     return 900;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XM, true, CyanBed::Part::Foot).ID:                     return 901;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XM, false, CyanBed::Part::Head).ID:                    return 902;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XM, false, CyanBed::Part::Foot).ID:                    return 903;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XP, true, CyanBed::Part::Head).ID:                     return 904;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XP, true, CyanBed::Part::Foot).ID:                     return 905;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XP, false, CyanBed::Part::Head).ID:                    return 906;
		case CyanBed::CyanBed(eBlockFace::BLOCK_FACE_XP, false, CyanBed::Part::Foot).ID:                    return 907;
		case CyanCarpet::CyanCarpet().ID:                                                                   return 6832;
		case CyanConcrete::CyanConcrete().ID:                                                               return 8386;
		case CyanConcretePowder::CyanConcretePowder().ID:                                                   return 8402;
		case CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:                      return 8349;
		case CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:                      return 8350;
		case CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:                      return 8351;
		case CyanGlazedTerracotta::CyanGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:                      return 8352;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                                  return 8271;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                                  return 8272;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                                  return 8273;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                                  return 8274;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                                  return 8275;
		case CyanShulkerBox::CyanShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                                  return 8276;
		case CyanStainedGlass::CyanStainedGlass().ID:                                                       return 3586;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, true, true, true).ID:                         return 6110;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, true, true, false).ID:                        return 6111;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, true, false, true).ID:                        return 6114;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, true, false, false).ID:                       return 6115;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, false, true, true).ID:                        return 6118;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, false, true, false).ID:                       return 6119;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, false, false, true).ID:                       return 6122;
		case CyanStainedGlassPane::CyanStainedGlassPane(true, false, false, false).ID:                      return 6123;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, true, true, true).ID:                        return 6126;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, true, true, false).ID:                       return 6127;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, true, false, true).ID:                       return 6130;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, true, false, false).ID:                      return 6131;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, false, true, true).ID:                       return 6134;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, false, true, false).ID:                      return 6135;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, false, false, true).ID:                      return 6138;
		case CyanStainedGlassPane::CyanStainedGlassPane(false, false, false, false).ID:                     return 6139;
		case CyanTerracotta::CyanTerracotta().ID:                                                           return 5813;
		case CyanWallBanner::CyanWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                                  return 7146;
		case CyanWallBanner::CyanWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                                  return 7147;
		case CyanWallBanner::CyanWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                                  return 7148;
		case CyanWallBanner::CyanWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                                  return 7149;
		case CyanWool::CyanWool().ID:                                                                       return 1092;
		case DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_ZM).ID:                                      return 5575;
		case DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_ZP).ID:                                      return 5576;
		case DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_XM).ID:                                      return 5577;
		case DamagedAnvil::DamagedAnvil(eBlockFace::BLOCK_FACE_XP).ID:                                      return 5578;
		case Dandelion::Dandelion().ID:                                                                     return 1111;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5423;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5424;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5425;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5426;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5427;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID: return 5428;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5429;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID: return 5430;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:   return 5431;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:  return 5432;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:   return 5433;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:  return 5434;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:   return 5435;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:  return 5436;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:   return 5437;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:  return 5438;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:
			return 5439;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID:
			return 5440;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:
			return 5441;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID:
			return 5442;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:
			return 5443;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID:
			return 5444;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:
			return 5445;
		case DarkOakButton::DarkOakButton(DarkOakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID:
			return 5446;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7933;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7934;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7935;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7936;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7937;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7938;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7939;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7940;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7941;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7942;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7943;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7944;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7945;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7946;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7947;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7948;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7949;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7950;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7951;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7952;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7953;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7954;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7955;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7956;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7957;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7958;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7959;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7960;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7961;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7962;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7963;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7964;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7965;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7966;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7967;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7968;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7969;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7970;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7971;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7972;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7973;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7974;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7975;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7976;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7977;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7978;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7979;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7980;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7981;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7982;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7983;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7984;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7985;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7986;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7987;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Upper,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7988;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7989;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7990;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7991;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7992;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7993;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7994;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7995;
		case DarkOakDoor::DarkOakDoor(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakDoor::Half::Lower,
			DarkOakDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7996;
		case DarkOakFence::DarkOakFence(true, true, true, true).ID:                                 return 7647;
		case DarkOakFence::DarkOakFence(true, true, true, false).ID:                                return 7648;
		case DarkOakFence::DarkOakFence(true, true, false, true).ID:                                return 7651;
		case DarkOakFence::DarkOakFence(true, true, false, false).ID:                               return 7652;
		case DarkOakFence::DarkOakFence(true, false, true, true).ID:                                return 7655;
		case DarkOakFence::DarkOakFence(true, false, true, false).ID:                               return 7656;
		case DarkOakFence::DarkOakFence(true, false, false, true).ID:                               return 7659;
		case DarkOakFence::DarkOakFence(true, false, false, false).ID:                              return 7660;
		case DarkOakFence::DarkOakFence(false, true, true, true).ID:                                return 7663;
		case DarkOakFence::DarkOakFence(false, true, true, false).ID:                               return 7664;
		case DarkOakFence::DarkOakFence(false, true, false, true).ID:                               return 7667;
		case DarkOakFence::DarkOakFence(false, true, false, false).ID:                              return 7668;
		case DarkOakFence::DarkOakFence(false, false, true, true).ID:                               return 7671;
		case DarkOakFence::DarkOakFence(false, false, true, false).ID:                              return 7672;
		case DarkOakFence::DarkOakFence(false, false, false, true).ID:                              return 7675;
		case DarkOakFence::DarkOakFence(false, false, false, false).ID:                             return 7676;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 7485;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 7486;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 7487;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 7488;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 7489;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 7490;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 7491;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 7492;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 7493;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 7494;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 7495;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 7496;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 7497;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 7498;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 7499;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 7500;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 7501;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 7502;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 7503;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 7504;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 7505;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 7506;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 7507;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 7508;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 7509;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 7510;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 7511;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 7512;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 7513;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 7514;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 7515;
		case DarkOakFenceGate::DarkOakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 7516;
		case DarkOakLeaves::DarkOakLeaves(1, true).ID:                                              return 214;
		case DarkOakLeaves::DarkOakLeaves(1, false).ID:                                             return 215;
		case DarkOakLeaves::DarkOakLeaves(2, true).ID:                                              return 216;
		case DarkOakLeaves::DarkOakLeaves(2, false).ID:                                             return 217;
		case DarkOakLeaves::DarkOakLeaves(3, true).ID:                                              return 218;
		case DarkOakLeaves::DarkOakLeaves(3, false).ID:                                             return 219;
		case DarkOakLeaves::DarkOakLeaves(4, true).ID:                                              return 220;
		case DarkOakLeaves::DarkOakLeaves(4, false).ID:                                             return 221;
		case DarkOakLeaves::DarkOakLeaves(5, true).ID:                                              return 222;
		case DarkOakLeaves::DarkOakLeaves(5, false).ID:                                             return 223;
		case DarkOakLeaves::DarkOakLeaves(6, true).ID:                                              return 224;
		case DarkOakLeaves::DarkOakLeaves(6, false).ID:                                             return 225;
		case DarkOakLeaves::DarkOakLeaves(7, true).ID:                                              return 226;
		case DarkOakLeaves::DarkOakLeaves(7, false).ID:                                             return 227;
		case DarkOakLog::DarkOakLog(DarkOakLog::Axis::X).ID:                                        return 87;
		case DarkOakLog::DarkOakLog(DarkOakLog::Axis::Y).ID:                                        return 88;
		case DarkOakLog::DarkOakLog(DarkOakLog::Axis::Z).ID:                                        return 89;
		case DarkOakPlanks::DarkOakPlanks().ID:                                                     return 20;
		case DarkOakPressurePlate::DarkOakPressurePlate(true).ID:                                   return 3377;
		case DarkOakPressurePlate::DarkOakPressurePlate(false).ID:                                  return 3378;
		case DarkOakSapling::DarkOakSapling(0).ID:                                                  return 31;
		case DarkOakSapling::DarkOakSapling(1).ID:                                                  return 32;
		case DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Top).ID:                                   return 7288;
		case DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Bottom).ID:                                return 7290;
		case DarkOakSlab::DarkOakSlab(DarkOakSlab::Type::Double).ID:                                return 7292;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6413;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6415;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6417;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6419;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6421;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6423;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6425;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6427;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6429;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6431;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6433;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6435;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6437;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6439;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6441;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6443;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6445;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6447;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6449;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6451;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6453;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6455;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6457;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6459;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6461;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6463;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6465;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6467;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6469;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6471;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6473;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6475;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6477;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6479;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Top,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6481;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::Straight
		)
			.ID:
			return 6483;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerLeft
		)
			.ID:
			return 6485;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::InnerRight
		)
			.ID:
			return 6487;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterLeft
		)
			.ID:
			return 6489;
		case DarkOakStairs::DarkOakStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkOakStairs::Half::Bottom,
			DarkOakStairs::Shape::OuterRight
		)
			.ID:
			return 6491;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Top, true, true).ID:
			return 3914;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Top, true, false).ID:
			return 3916;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Top, false, true).ID:
			return 3918;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Top, false, false).ID:
			return 3920;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Bottom, true, true).ID:
			return 3922;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Bottom, true, false).ID:
			return 3924;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Bottom, false, true).ID:
			return 3926;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZM, DarkOakTrapdoor::Half::Bottom, false, false)
			.ID:
			return 3928;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Top, true, true).ID:
			return 3930;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Top, true, false).ID:
			return 3932;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Top, false, true).ID:
			return 3934;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Top, false, false).ID:
			return 3936;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Bottom, true, true).ID:
			return 3938;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Bottom, true, false).ID:
			return 3940;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Bottom, false, true).ID:
			return 3942;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_ZP, DarkOakTrapdoor::Half::Bottom, false, false)
			.ID:
			return 3944;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Top, true, true).ID:
			return 3946;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Top, true, false).ID:
			return 3948;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Top, false, true).ID:
			return 3950;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Top, false, false).ID:
			return 3952;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Bottom, true, true).ID:
			return 3954;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Bottom, true, false).ID:
			return 3956;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Bottom, false, true).ID:
			return 3958;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XM, DarkOakTrapdoor::Half::Bottom, false, false)
			.ID:
			return 3960;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Top, true, true).ID:
			return 3962;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Top, true, false).ID:
			return 3964;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Top, false, true).ID:
			return 3966;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Top, false, false).ID:
			return 3968;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Bottom, true, true).ID:
			return 3970;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Bottom, true, false).ID:
			return 3972;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Bottom, false, true).ID:
			return 3974;
		case DarkOakTrapdoor::DarkOakTrapdoor(eBlockFace::BLOCK_FACE_XP, DarkOakTrapdoor::Half::Bottom, false, false)
			.ID:
			return 3976;
		case DarkOakWood::DarkOakWood(DarkOakWood::Axis::X).ID:                           return 123;
		case DarkOakWood::DarkOakWood(DarkOakWood::Axis::Y).ID:                           return 124;
		case DarkOakWood::DarkOakWood(DarkOakWood::Axis::Z).ID:                           return 125;
		case DarkPrismarine::DarkPrismarine().ID:                                         return 6560;
		case DarkPrismarineSlab::DarkPrismarineSlab(DarkPrismarineSlab::Type::Top).ID:    return 6814;
		case DarkPrismarineSlab::DarkPrismarineSlab(DarkPrismarineSlab::Type::Bottom).ID: return 6816;
		case DarkPrismarineSlab::DarkPrismarineSlab(DarkPrismarineSlab::Type::Double).ID: return 6818;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6722;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6724;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6726;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6728;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6730;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6732;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6734;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6736;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6738;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6740;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6742;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6744;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6746;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6748;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6750;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6752;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6754;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6756;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6758;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6760;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6762;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6764;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6766;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6768;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6770;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6772;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6774;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6776;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6778;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6780;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6782;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6784;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6786;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6788;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Top,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6790;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::Straight
		)
			.ID:
			return 6792;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6794;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6796;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6798;
		case DarkPrismarineStairs::DarkPrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			DarkPrismarineStairs::Half::Bottom,
			DarkPrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6800;
		case DaylightDetector::DaylightDetector(true, 0).ID:                                return 5651;
		case DaylightDetector::DaylightDetector(true, 1).ID:                                return 5652;
		case DaylightDetector::DaylightDetector(true, 2).ID:                                return 5653;
		case DaylightDetector::DaylightDetector(true, 3).ID:                                return 5654;
		case DaylightDetector::DaylightDetector(true, 4).ID:                                return 5655;
		case DaylightDetector::DaylightDetector(true, 5).ID:                                return 5656;
		case DaylightDetector::DaylightDetector(true, 6).ID:                                return 5657;
		case DaylightDetector::DaylightDetector(true, 7).ID:                                return 5658;
		case DaylightDetector::DaylightDetector(true, 8).ID:                                return 5659;
		case DaylightDetector::DaylightDetector(true, 9).ID:                                return 5660;
		case DaylightDetector::DaylightDetector(true, 10).ID:                               return 5661;
		case DaylightDetector::DaylightDetector(true, 11).ID:                               return 5662;
		case DaylightDetector::DaylightDetector(true, 12).ID:                               return 5663;
		case DaylightDetector::DaylightDetector(true, 13).ID:                               return 5664;
		case DaylightDetector::DaylightDetector(true, 14).ID:                               return 5665;
		case DaylightDetector::DaylightDetector(true, 15).ID:                               return 5666;
		case DaylightDetector::DaylightDetector(false, 0).ID:                               return 5667;
		case DaylightDetector::DaylightDetector(false, 1).ID:                               return 5668;
		case DaylightDetector::DaylightDetector(false, 2).ID:                               return 5669;
		case DaylightDetector::DaylightDetector(false, 3).ID:                               return 5670;
		case DaylightDetector::DaylightDetector(false, 4).ID:                               return 5671;
		case DaylightDetector::DaylightDetector(false, 5).ID:                               return 5672;
		case DaylightDetector::DaylightDetector(false, 6).ID:                               return 5673;
		case DaylightDetector::DaylightDetector(false, 7).ID:                               return 5674;
		case DaylightDetector::DaylightDetector(false, 8).ID:                               return 5675;
		case DaylightDetector::DaylightDetector(false, 9).ID:                               return 5676;
		case DaylightDetector::DaylightDetector(false, 10).ID:                              return 5677;
		case DaylightDetector::DaylightDetector(false, 11).ID:                              return 5678;
		case DaylightDetector::DaylightDetector(false, 12).ID:                              return 5679;
		case DaylightDetector::DaylightDetector(false, 13).ID:                              return 5680;
		case DaylightDetector::DaylightDetector(false, 14).ID:                              return 5681;
		case DaylightDetector::DaylightDetector(false, 15).ID:                              return 5682;
		case DeadBrainCoralBlock::DeadBrainCoralBlock().ID:                                 return 8450;
		case DeadBrainCoralFan::DeadBrainCoralFan().ID:                                     return 8547;
		case DeadBrainCoralWallFan::DeadBrainCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:    return 8473;
		case DeadBrainCoralWallFan::DeadBrainCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:    return 8475;
		case DeadBrainCoralWallFan::DeadBrainCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:    return 8477;
		case DeadBrainCoralWallFan::DeadBrainCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:    return 8479;
		case DeadBubbleCoralBlock::DeadBubbleCoralBlock().ID:                               return 8451;
		case DeadBubbleCoralFan::DeadBubbleCoralFan().ID:                                   return 8549;
		case DeadBubbleCoralWallFan::DeadBubbleCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:  return 8481;
		case DeadBubbleCoralWallFan::DeadBubbleCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:  return 8483;
		case DeadBubbleCoralWallFan::DeadBubbleCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:  return 8485;
		case DeadBubbleCoralWallFan::DeadBubbleCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:  return 8487;
		case DeadBush::DeadBush().ID:                                                       return 1043;
		case DeadFireCoralBlock::DeadFireCoralBlock().ID:                                   return 8452;
		case DeadFireCoralFan::DeadFireCoralFan().ID:                                       return 8551;
		case DeadFireCoralWallFan::DeadFireCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:      return 8489;
		case DeadFireCoralWallFan::DeadFireCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:      return 8491;
		case DeadFireCoralWallFan::DeadFireCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:      return 8493;
		case DeadFireCoralWallFan::DeadFireCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:      return 8495;
		case DeadHornCoralBlock::DeadHornCoralBlock().ID:                                   return 8453;
		case DeadHornCoralFan::DeadHornCoralFan().ID:                                       return 8553;
		case DeadHornCoralWallFan::DeadHornCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:      return 8497;
		case DeadHornCoralWallFan::DeadHornCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:      return 8499;
		case DeadHornCoralWallFan::DeadHornCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:      return 8501;
		case DeadHornCoralWallFan::DeadHornCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:      return 8503;
		case DeadTubeCoralBlock::DeadTubeCoralBlock().ID:                                   return 8449;
		case DeadTubeCoralFan::DeadTubeCoralFan().ID:                                       return 8545;
		case DeadTubeCoralWallFan::DeadTubeCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:      return 8465;
		case DeadTubeCoralWallFan::DeadTubeCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:      return 8467;
		case DeadTubeCoralWallFan::DeadTubeCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:      return 8469;
		case DeadTubeCoralWallFan::DeadTubeCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:      return 8471;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::NorthSouth).ID:          return 1016;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::EastWest).ID:            return 1017;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingEast).ID:       return 1018;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingWest).ID:       return 1019;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingNorth).ID:      return 1020;
		case DetectorRail::DetectorRail(true, DetectorRail::Shape::AscendingSouth).ID:      return 1021;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::NorthSouth).ID:         return 1022;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::EastWest).ID:           return 1023;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingEast).ID:      return 1024;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingWest).ID:      return 1025;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingNorth).ID:     return 1026;
		case DetectorRail::DetectorRail(false, DetectorRail::Shape::AscendingSouth).ID:     return 1027;
		case DiamondBlock::DiamondBlock().ID:                                               return 3049;
		case DiamondOre::DiamondOre().ID:                                                   return 3048;
		case Diorite::Diorite().ID:                                                         return 4;
		case Dirt::Dirt().ID:                                                               return 10;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZM, true).ID:                      return 233;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZM, false).ID:                     return 234;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XP, true).ID:                      return 235;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XP, false).ID:                     return 236;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZP, true).ID:                      return 237;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_ZP, false).ID:                     return 238;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XM, true).ID:                      return 239;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_XM, false).ID:                     return 240;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YP, true).ID:                      return 241;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YP, false).ID:                     return 242;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YM, true).ID:                      return 243;
		case Dispenser::Dispenser(eBlockFace::BLOCK_FACE_YM, false).ID:                     return 244;
		case DragonEgg::DragonEgg().ID:                                                     return 4635;
		case DragonHead::DragonHead(0).ID:                                                  return 5551;
		case DragonHead::DragonHead(1).ID:                                                  return 5552;
		case DragonHead::DragonHead(2).ID:                                                  return 5553;
		case DragonHead::DragonHead(3).ID:                                                  return 5554;
		case DragonHead::DragonHead(4).ID:                                                  return 5555;
		case DragonHead::DragonHead(5).ID:                                                  return 5556;
		case DragonHead::DragonHead(6).ID:                                                  return 5557;
		case DragonHead::DragonHead(7).ID:                                                  return 5558;
		case DragonHead::DragonHead(8).ID:                                                  return 5559;
		case DragonHead::DragonHead(9).ID:                                                  return 5560;
		case DragonHead::DragonHead(10).ID:                                                 return 5561;
		case DragonHead::DragonHead(11).ID:                                                 return 5562;
		case DragonHead::DragonHead(12).ID:                                                 return 5563;
		case DragonHead::DragonHead(13).ID:                                                 return 5564;
		case DragonHead::DragonHead(14).ID:                                                 return 5565;
		case DragonHead::DragonHead(15).ID:                                                 return 5566;
		case DragonWallHead::DragonWallHead(eBlockFace::BLOCK_FACE_ZM).ID:                  return 5547;
		case DragonWallHead::DragonWallHead(eBlockFace::BLOCK_FACE_ZP).ID:                  return 5548;
		case DragonWallHead::DragonWallHead(eBlockFace::BLOCK_FACE_XM).ID:                  return 5549;
		case DragonWallHead::DragonWallHead(eBlockFace::BLOCK_FACE_XP).ID:                  return 5550;
		case DriedKelpBlock::DriedKelpBlock().ID:                                           return 8436;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_ZM, true).ID:                          return 5792;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_ZM, false).ID:                         return 5793;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_XP, true).ID:                          return 5794;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_XP, false).ID:                         return 5795;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_ZP, true).ID:                          return 5796;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_ZP, false).ID:                         return 5797;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_XM, true).ID:                          return 5798;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_XM, false).ID:                         return 5799;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_YP, true).ID:                          return 5800;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_YP, false).ID:                         return 5801;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_YM, true).ID:                          return 5802;
		case Dropper::Dropper(eBlockFace::BLOCK_FACE_YM, false).ID:                         return 5803;
		case EmeraldBlock::EmeraldBlock().ID:                                               return 4883;
		case EmeraldOre::EmeraldOre().ID:                                                   return 4730;
		case EnchantingTable::EnchantingTable().ID:                                         return 4612;
		case EndGateway::EndGateway().ID:                                                   return 8163;
		case EndPortal::EndPortal().ID:                                                     return 4625;
		case EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_ZM).ID:            return 4626;
		case EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_ZP).ID:            return 4627;
		case EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_XM).ID:            return 4628;
		case EndPortalFrame::EndPortalFrame(true, eBlockFace::BLOCK_FACE_XP).ID:            return 4629;
		case EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_ZM).ID:           return 4630;
		case EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_ZP).ID:           return 4631;
		case EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_XM).ID:           return 4632;
		case EndPortalFrame::EndPortalFrame(false, eBlockFace::BLOCK_FACE_XP).ID:           return 4633;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_ZM).ID:                                  return 7997;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_XP).ID:                                  return 7998;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_ZP).ID:                                  return 7999;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_XM).ID:                                  return 8000;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_YP).ID:                                  return 8001;
		case EndRod::EndRod(eBlockFace::BLOCK_FACE_YM).ID:                                  return 8002;
		case EndStone::EndStone().ID:                                                       return 4634;
		case EndStoneBricks::EndStoneBricks().ID:                                           return 8157;
		case EnderChest::EnderChest(eBlockFace::BLOCK_FACE_ZM).ID:                          return 4732;
		case EnderChest::EnderChest(eBlockFace::BLOCK_FACE_ZP).ID:                          return 4734;
		case EnderChest::EnderChest(eBlockFace::BLOCK_FACE_XM).ID:                          return 4736;
		case EnderChest::EnderChest(eBlockFace::BLOCK_FACE_XP).ID:                          return 4738;
		case Farmland::Farmland(0).ID:                                                      return 3059;
		case Farmland::Farmland(1).ID:                                                      return 3060;
		case Farmland::Farmland(2).ID:                                                      return 3061;
		case Farmland::Farmland(3).ID:                                                      return 3062;
		case Farmland::Farmland(4).ID:                                                      return 3063;
		case Farmland::Farmland(5).ID:                                                      return 3064;
		case Farmland::Farmland(6).ID:                                                      return 3065;
		case Farmland::Farmland(7).ID:                                                      return 3066;
		case Fern::Fern().ID:                                                               return 1042;
		case Fire::Fire(0, true, true, true, true, true).ID:                                return 1135;
		case Fire::Fire(0, true, true, true, true, false).ID:                               return 1136;
		case Fire::Fire(0, true, true, true, false, true).ID:                               return 1137;
		case Fire::Fire(0, true, true, true, false, false).ID:                              return 1138;
		case Fire::Fire(0, true, true, false, true, true).ID:                               return 1139;
		case Fire::Fire(0, true, true, false, true, false).ID:                              return 1140;
		case Fire::Fire(0, true, true, false, false, true).ID:                              return 1141;
		case Fire::Fire(0, true, true, false, false, false).ID:                             return 1142;
		case Fire::Fire(0, true, false, true, true, true).ID:                               return 1143;
		case Fire::Fire(0, true, false, true, true, false).ID:                              return 1144;
		case Fire::Fire(0, true, false, true, false, true).ID:                              return 1145;
		case Fire::Fire(0, true, false, true, false, false).ID:                             return 1146;
		case Fire::Fire(0, true, false, false, true, true).ID:                              return 1147;
		case Fire::Fire(0, true, false, false, true, false).ID:                             return 1148;
		case Fire::Fire(0, true, false, false, false, true).ID:                             return 1149;
		case Fire::Fire(0, true, false, false, false, false).ID:                            return 1150;
		case Fire::Fire(0, false, true, true, true, true).ID:                               return 1151;
		case Fire::Fire(0, false, true, true, true, false).ID:                              return 1152;
		case Fire::Fire(0, false, true, true, false, true).ID:                              return 1153;
		case Fire::Fire(0, false, true, true, false, false).ID:                             return 1154;
		case Fire::Fire(0, false, true, false, true, true).ID:                              return 1155;
		case Fire::Fire(0, false, true, false, true, false).ID:                             return 1156;
		case Fire::Fire(0, false, true, false, false, true).ID:                             return 1157;
		case Fire::Fire(0, false, true, false, false, false).ID:                            return 1158;
		case Fire::Fire(0, false, false, true, true, true).ID:                              return 1159;
		case Fire::Fire(0, false, false, true, true, false).ID:                             return 1160;
		case Fire::Fire(0, false, false, true, false, true).ID:                             return 1161;
		case Fire::Fire(0, false, false, true, false, false).ID:                            return 1162;
		case Fire::Fire(0, false, false, false, true, true).ID:                             return 1163;
		case Fire::Fire(0, false, false, false, true, false).ID:                            return 1164;
		case Fire::Fire(0, false, false, false, false, true).ID:                            return 1165;
		case Fire::Fire(0, false, false, false, false, false).ID:                           return 1166;
		case Fire::Fire(1, true, true, true, true, true).ID:                                return 1167;
		case Fire::Fire(1, true, true, true, true, false).ID:                               return 1168;
		case Fire::Fire(1, true, true, true, false, true).ID:                               return 1169;
		case Fire::Fire(1, true, true, true, false, false).ID:                              return 1170;
		case Fire::Fire(1, true, true, false, true, true).ID:                               return 1171;
		case Fire::Fire(1, true, true, false, true, false).ID:                              return 1172;
		case Fire::Fire(1, true, true, false, false, true).ID:                              return 1173;
		case Fire::Fire(1, true, true, false, false, false).ID:                             return 1174;
		case Fire::Fire(1, true, false, true, true, true).ID:                               return 1175;
		case Fire::Fire(1, true, false, true, true, false).ID:                              return 1176;
		case Fire::Fire(1, true, false, true, false, true).ID:                              return 1177;
		case Fire::Fire(1, true, false, true, false, false).ID:                             return 1178;
		case Fire::Fire(1, true, false, false, true, true).ID:                              return 1179;
		case Fire::Fire(1, true, false, false, true, false).ID:                             return 1180;
		case Fire::Fire(1, true, false, false, false, true).ID:                             return 1181;
		case Fire::Fire(1, true, false, false, false, false).ID:                            return 1182;
		case Fire::Fire(1, false, true, true, true, true).ID:                               return 1183;
		case Fire::Fire(1, false, true, true, true, false).ID:                              return 1184;
		case Fire::Fire(1, false, true, true, false, true).ID:                              return 1185;
		case Fire::Fire(1, false, true, true, false, false).ID:                             return 1186;
		case Fire::Fire(1, false, true, false, true, true).ID:                              return 1187;
		case Fire::Fire(1, false, true, false, true, false).ID:                             return 1188;
		case Fire::Fire(1, false, true, false, false, true).ID:                             return 1189;
		case Fire::Fire(1, false, true, false, false, false).ID:                            return 1190;
		case Fire::Fire(1, false, false, true, true, true).ID:                              return 1191;
		case Fire::Fire(1, false, false, true, true, false).ID:                             return 1192;
		case Fire::Fire(1, false, false, true, false, true).ID:                             return 1193;
		case Fire::Fire(1, false, false, true, false, false).ID:                            return 1194;
		case Fire::Fire(1, false, false, false, true, true).ID:                             return 1195;
		case Fire::Fire(1, false, false, false, true, false).ID:                            return 1196;
		case Fire::Fire(1, false, false, false, false, true).ID:                            return 1197;
		case Fire::Fire(1, false, false, false, false, false).ID:                           return 1198;
		case Fire::Fire(2, true, true, true, true, true).ID:                                return 1199;
		case Fire::Fire(2, true, true, true, true, false).ID:                               return 1200;
		case Fire::Fire(2, true, true, true, false, true).ID:                               return 1201;
		case Fire::Fire(2, true, true, true, false, false).ID:                              return 1202;
		case Fire::Fire(2, true, true, false, true, true).ID:                               return 1203;
		case Fire::Fire(2, true, true, false, true, false).ID:                              return 1204;
		case Fire::Fire(2, true, true, false, false, true).ID:                              return 1205;
		case Fire::Fire(2, true, true, false, false, false).ID:                             return 1206;
		case Fire::Fire(2, true, false, true, true, true).ID:                               return 1207;
		case Fire::Fire(2, true, false, true, true, false).ID:                              return 1208;
		case Fire::Fire(2, true, false, true, false, true).ID:                              return 1209;
		case Fire::Fire(2, true, false, true, false, false).ID:                             return 1210;
		case Fire::Fire(2, true, false, false, true, true).ID:                              return 1211;
		case Fire::Fire(2, true, false, false, true, false).ID:                             return 1212;
		case Fire::Fire(2, true, false, false, false, true).ID:                             return 1213;
		case Fire::Fire(2, true, false, false, false, false).ID:                            return 1214;
		case Fire::Fire(2, false, true, true, true, true).ID:                               return 1215;
		case Fire::Fire(2, false, true, true, true, false).ID:                              return 1216;
		case Fire::Fire(2, false, true, true, false, true).ID:                              return 1217;
		case Fire::Fire(2, false, true, true, false, false).ID:                             return 1218;
		case Fire::Fire(2, false, true, false, true, true).ID:                              return 1219;
		case Fire::Fire(2, false, true, false, true, false).ID:                             return 1220;
		case Fire::Fire(2, false, true, false, false, true).ID:                             return 1221;
		case Fire::Fire(2, false, true, false, false, false).ID:                            return 1222;
		case Fire::Fire(2, false, false, true, true, true).ID:                              return 1223;
		case Fire::Fire(2, false, false, true, true, false).ID:                             return 1224;
		case Fire::Fire(2, false, false, true, false, true).ID:                             return 1225;
		case Fire::Fire(2, false, false, true, false, false).ID:                            return 1226;
		case Fire::Fire(2, false, false, false, true, true).ID:                             return 1227;
		case Fire::Fire(2, false, false, false, true, false).ID:                            return 1228;
		case Fire::Fire(2, false, false, false, false, true).ID:                            return 1229;
		case Fire::Fire(2, false, false, false, false, false).ID:                           return 1230;
		case Fire::Fire(3, true, true, true, true, true).ID:                                return 1231;
		case Fire::Fire(3, true, true, true, true, false).ID:                               return 1232;
		case Fire::Fire(3, true, true, true, false, true).ID:                               return 1233;
		case Fire::Fire(3, true, true, true, false, false).ID:                              return 1234;
		case Fire::Fire(3, true, true, false, true, true).ID:                               return 1235;
		case Fire::Fire(3, true, true, false, true, false).ID:                              return 1236;
		case Fire::Fire(3, true, true, false, false, true).ID:                              return 1237;
		case Fire::Fire(3, true, true, false, false, false).ID:                             return 1238;
		case Fire::Fire(3, true, false, true, true, true).ID:                               return 1239;
		case Fire::Fire(3, true, false, true, true, false).ID:                              return 1240;
		case Fire::Fire(3, true, false, true, false, true).ID:                              return 1241;
		case Fire::Fire(3, true, false, true, false, false).ID:                             return 1242;
		case Fire::Fire(3, true, false, false, true, true).ID:                              return 1243;
		case Fire::Fire(3, true, false, false, true, false).ID:                             return 1244;
		case Fire::Fire(3, true, false, false, false, true).ID:                             return 1245;
		case Fire::Fire(3, true, false, false, false, false).ID:                            return 1246;
		case Fire::Fire(3, false, true, true, true, true).ID:                               return 1247;
		case Fire::Fire(3, false, true, true, true, false).ID:                              return 1248;
		case Fire::Fire(3, false, true, true, false, true).ID:                              return 1249;
		case Fire::Fire(3, false, true, true, false, false).ID:                             return 1250;
		case Fire::Fire(3, false, true, false, true, true).ID:                              return 1251;
		case Fire::Fire(3, false, true, false, true, false).ID:                             return 1252;
		case Fire::Fire(3, false, true, false, false, true).ID:                             return 1253;
		case Fire::Fire(3, false, true, false, false, false).ID:                            return 1254;
		case Fire::Fire(3, false, false, true, true, true).ID:                              return 1255;
		case Fire::Fire(3, false, false, true, true, false).ID:                             return 1256;
		case Fire::Fire(3, false, false, true, false, true).ID:                             return 1257;
		case Fire::Fire(3, false, false, true, false, false).ID:                            return 1258;
		case Fire::Fire(3, false, false, false, true, true).ID:                             return 1259;
		case Fire::Fire(3, false, false, false, true, false).ID:                            return 1260;
		case Fire::Fire(3, false, false, false, false, true).ID:                            return 1261;
		case Fire::Fire(3, false, false, false, false, false).ID:                           return 1262;
		case Fire::Fire(4, true, true, true, true, true).ID:                                return 1263;
		case Fire::Fire(4, true, true, true, true, false).ID:                               return 1264;
		case Fire::Fire(4, true, true, true, false, true).ID:                               return 1265;
		case Fire::Fire(4, true, true, true, false, false).ID:                              return 1266;
		case Fire::Fire(4, true, true, false, true, true).ID:                               return 1267;
		case Fire::Fire(4, true, true, false, true, false).ID:                              return 1268;
		case Fire::Fire(4, true, true, false, false, true).ID:                              return 1269;
		case Fire::Fire(4, true, true, false, false, false).ID:                             return 1270;
		case Fire::Fire(4, true, false, true, true, true).ID:                               return 1271;
		case Fire::Fire(4, true, false, true, true, false).ID:                              return 1272;
		case Fire::Fire(4, true, false, true, false, true).ID:                              return 1273;
		case Fire::Fire(4, true, false, true, false, false).ID:                             return 1274;
		case Fire::Fire(4, true, false, false, true, true).ID:                              return 1275;
		case Fire::Fire(4, true, false, false, true, false).ID:                             return 1276;
		case Fire::Fire(4, true, false, false, false, true).ID:                             return 1277;
		case Fire::Fire(4, true, false, false, false, false).ID:                            return 1278;
		case Fire::Fire(4, false, true, true, true, true).ID:                               return 1279;
		case Fire::Fire(4, false, true, true, true, false).ID:                              return 1280;
		case Fire::Fire(4, false, true, true, false, true).ID:                              return 1281;
		case Fire::Fire(4, false, true, true, false, false).ID:                             return 1282;
		case Fire::Fire(4, false, true, false, true, true).ID:                              return 1283;
		case Fire::Fire(4, false, true, false, true, false).ID:                             return 1284;
		case Fire::Fire(4, false, true, false, false, true).ID:                             return 1285;
		case Fire::Fire(4, false, true, false, false, false).ID:                            return 1286;
		case Fire::Fire(4, false, false, true, true, true).ID:                              return 1287;
		case Fire::Fire(4, false, false, true, true, false).ID:                             return 1288;
		case Fire::Fire(4, false, false, true, false, true).ID:                             return 1289;
		case Fire::Fire(4, false, false, true, false, false).ID:                            return 1290;
		case Fire::Fire(4, false, false, false, true, true).ID:                             return 1291;
		case Fire::Fire(4, false, false, false, true, false).ID:                            return 1292;
		case Fire::Fire(4, false, false, false, false, true).ID:                            return 1293;
		case Fire::Fire(4, false, false, false, false, false).ID:                           return 1294;
		case Fire::Fire(5, true, true, true, true, true).ID:                                return 1295;
		case Fire::Fire(5, true, true, true, true, false).ID:                               return 1296;
		case Fire::Fire(5, true, true, true, false, true).ID:                               return 1297;
		case Fire::Fire(5, true, true, true, false, false).ID:                              return 1298;
		case Fire::Fire(5, true, true, false, true, true).ID:                               return 1299;
		case Fire::Fire(5, true, true, false, true, false).ID:                              return 1300;
		case Fire::Fire(5, true, true, false, false, true).ID:                              return 1301;
		case Fire::Fire(5, true, true, false, false, false).ID:                             return 1302;
		case Fire::Fire(5, true, false, true, true, true).ID:                               return 1303;
		case Fire::Fire(5, true, false, true, true, false).ID:                              return 1304;
		case Fire::Fire(5, true, false, true, false, true).ID:                              return 1305;
		case Fire::Fire(5, true, false, true, false, false).ID:                             return 1306;
		case Fire::Fire(5, true, false, false, true, true).ID:                              return 1307;
		case Fire::Fire(5, true, false, false, true, false).ID:                             return 1308;
		case Fire::Fire(5, true, false, false, false, true).ID:                             return 1309;
		case Fire::Fire(5, true, false, false, false, false).ID:                            return 1310;
		case Fire::Fire(5, false, true, true, true, true).ID:                               return 1311;
		case Fire::Fire(5, false, true, true, true, false).ID:                              return 1312;
		case Fire::Fire(5, false, true, true, false, true).ID:                              return 1313;
		case Fire::Fire(5, false, true, true, false, false).ID:                             return 1314;
		case Fire::Fire(5, false, true, false, true, true).ID:                              return 1315;
		case Fire::Fire(5, false, true, false, true, false).ID:                             return 1316;
		case Fire::Fire(5, false, true, false, false, true).ID:                             return 1317;
		case Fire::Fire(5, false, true, false, false, false).ID:                            return 1318;
		case Fire::Fire(5, false, false, true, true, true).ID:                              return 1319;
		case Fire::Fire(5, false, false, true, true, false).ID:                             return 1320;
		case Fire::Fire(5, false, false, true, false, true).ID:                             return 1321;
		case Fire::Fire(5, false, false, true, false, false).ID:                            return 1322;
		case Fire::Fire(5, false, false, false, true, true).ID:                             return 1323;
		case Fire::Fire(5, false, false, false, true, false).ID:                            return 1324;
		case Fire::Fire(5, false, false, false, false, true).ID:                            return 1325;
		case Fire::Fire(5, false, false, false, false, false).ID:                           return 1326;
		case Fire::Fire(6, true, true, true, true, true).ID:                                return 1327;
		case Fire::Fire(6, true, true, true, true, false).ID:                               return 1328;
		case Fire::Fire(6, true, true, true, false, true).ID:                               return 1329;
		case Fire::Fire(6, true, true, true, false, false).ID:                              return 1330;
		case Fire::Fire(6, true, true, false, true, true).ID:                               return 1331;
		case Fire::Fire(6, true, true, false, true, false).ID:                              return 1332;
		case Fire::Fire(6, true, true, false, false, true).ID:                              return 1333;
		case Fire::Fire(6, true, true, false, false, false).ID:                             return 1334;
		case Fire::Fire(6, true, false, true, true, true).ID:                               return 1335;
		case Fire::Fire(6, true, false, true, true, false).ID:                              return 1336;
		case Fire::Fire(6, true, false, true, false, true).ID:                              return 1337;
		case Fire::Fire(6, true, false, true, false, false).ID:                             return 1338;
		case Fire::Fire(6, true, false, false, true, true).ID:                              return 1339;
		case Fire::Fire(6, true, false, false, true, false).ID:                             return 1340;
		case Fire::Fire(6, true, false, false, false, true).ID:                             return 1341;
		case Fire::Fire(6, true, false, false, false, false).ID:                            return 1342;
		case Fire::Fire(6, false, true, true, true, true).ID:                               return 1343;
		case Fire::Fire(6, false, true, true, true, false).ID:                              return 1344;
		case Fire::Fire(6, false, true, true, false, true).ID:                              return 1345;
		case Fire::Fire(6, false, true, true, false, false).ID:                             return 1346;
		case Fire::Fire(6, false, true, false, true, true).ID:                              return 1347;
		case Fire::Fire(6, false, true, false, true, false).ID:                             return 1348;
		case Fire::Fire(6, false, true, false, false, true).ID:                             return 1349;
		case Fire::Fire(6, false, true, false, false, false).ID:                            return 1350;
		case Fire::Fire(6, false, false, true, true, true).ID:                              return 1351;
		case Fire::Fire(6, false, false, true, true, false).ID:                             return 1352;
		case Fire::Fire(6, false, false, true, false, true).ID:                             return 1353;
		case Fire::Fire(6, false, false, true, false, false).ID:                            return 1354;
		case Fire::Fire(6, false, false, false, true, true).ID:                             return 1355;
		case Fire::Fire(6, false, false, false, true, false).ID:                            return 1356;
		case Fire::Fire(6, false, false, false, false, true).ID:                            return 1357;
		case Fire::Fire(6, false, false, false, false, false).ID:                           return 1358;
		case Fire::Fire(7, true, true, true, true, true).ID:                                return 1359;
		case Fire::Fire(7, true, true, true, true, false).ID:                               return 1360;
		case Fire::Fire(7, true, true, true, false, true).ID:                               return 1361;
		case Fire::Fire(7, true, true, true, false, false).ID:                              return 1362;
		case Fire::Fire(7, true, true, false, true, true).ID:                               return 1363;
		case Fire::Fire(7, true, true, false, true, false).ID:                              return 1364;
		case Fire::Fire(7, true, true, false, false, true).ID:                              return 1365;
		case Fire::Fire(7, true, true, false, false, false).ID:                             return 1366;
		case Fire::Fire(7, true, false, true, true, true).ID:                               return 1367;
		case Fire::Fire(7, true, false, true, true, false).ID:                              return 1368;
		case Fire::Fire(7, true, false, true, false, true).ID:                              return 1369;
		case Fire::Fire(7, true, false, true, false, false).ID:                             return 1370;
		case Fire::Fire(7, true, false, false, true, true).ID:                              return 1371;
		case Fire::Fire(7, true, false, false, true, false).ID:                             return 1372;
		case Fire::Fire(7, true, false, false, false, true).ID:                             return 1373;
		case Fire::Fire(7, true, false, false, false, false).ID:                            return 1374;
		case Fire::Fire(7, false, true, true, true, true).ID:                               return 1375;
		case Fire::Fire(7, false, true, true, true, false).ID:                              return 1376;
		case Fire::Fire(7, false, true, true, false, true).ID:                              return 1377;
		case Fire::Fire(7, false, true, true, false, false).ID:                             return 1378;
		case Fire::Fire(7, false, true, false, true, true).ID:                              return 1379;
		case Fire::Fire(7, false, true, false, true, false).ID:                             return 1380;
		case Fire::Fire(7, false, true, false, false, true).ID:                             return 1381;
		case Fire::Fire(7, false, true, false, false, false).ID:                            return 1382;
		case Fire::Fire(7, false, false, true, true, true).ID:                              return 1383;
		case Fire::Fire(7, false, false, true, true, false).ID:                             return 1384;
		case Fire::Fire(7, false, false, true, false, true).ID:                             return 1385;
		case Fire::Fire(7, false, false, true, false, false).ID:                            return 1386;
		case Fire::Fire(7, false, false, false, true, true).ID:                             return 1387;
		case Fire::Fire(7, false, false, false, true, false).ID:                            return 1388;
		case Fire::Fire(7, false, false, false, false, true).ID:                            return 1389;
		case Fire::Fire(7, false, false, false, false, false).ID:                           return 1390;
		case Fire::Fire(8, true, true, true, true, true).ID:                                return 1391;
		case Fire::Fire(8, true, true, true, true, false).ID:                               return 1392;
		case Fire::Fire(8, true, true, true, false, true).ID:                               return 1393;
		case Fire::Fire(8, true, true, true, false, false).ID:                              return 1394;
		case Fire::Fire(8, true, true, false, true, true).ID:                               return 1395;
		case Fire::Fire(8, true, true, false, true, false).ID:                              return 1396;
		case Fire::Fire(8, true, true, false, false, true).ID:                              return 1397;
		case Fire::Fire(8, true, true, false, false, false).ID:                             return 1398;
		case Fire::Fire(8, true, false, true, true, true).ID:                               return 1399;
		case Fire::Fire(8, true, false, true, true, false).ID:                              return 1400;
		case Fire::Fire(8, true, false, true, false, true).ID:                              return 1401;
		case Fire::Fire(8, true, false, true, false, false).ID:                             return 1402;
		case Fire::Fire(8, true, false, false, true, true).ID:                              return 1403;
		case Fire::Fire(8, true, false, false, true, false).ID:                             return 1404;
		case Fire::Fire(8, true, false, false, false, true).ID:                             return 1405;
		case Fire::Fire(8, true, false, false, false, false).ID:                            return 1406;
		case Fire::Fire(8, false, true, true, true, true).ID:                               return 1407;
		case Fire::Fire(8, false, true, true, true, false).ID:                              return 1408;
		case Fire::Fire(8, false, true, true, false, true).ID:                              return 1409;
		case Fire::Fire(8, false, true, true, false, false).ID:                             return 1410;
		case Fire::Fire(8, false, true, false, true, true).ID:                              return 1411;
		case Fire::Fire(8, false, true, false, true, false).ID:                             return 1412;
		case Fire::Fire(8, false, true, false, false, true).ID:                             return 1413;
		case Fire::Fire(8, false, true, false, false, false).ID:                            return 1414;
		case Fire::Fire(8, false, false, true, true, true).ID:                              return 1415;
		case Fire::Fire(8, false, false, true, true, false).ID:                             return 1416;
		case Fire::Fire(8, false, false, true, false, true).ID:                             return 1417;
		case Fire::Fire(8, false, false, true, false, false).ID:                            return 1418;
		case Fire::Fire(8, false, false, false, true, true).ID:                             return 1419;
		case Fire::Fire(8, false, false, false, true, false).ID:                            return 1420;
		case Fire::Fire(8, false, false, false, false, true).ID:                            return 1421;
		case Fire::Fire(8, false, false, false, false, false).ID:                           return 1422;
		case Fire::Fire(9, true, true, true, true, true).ID:                                return 1423;
		case Fire::Fire(9, true, true, true, true, false).ID:                               return 1424;
		case Fire::Fire(9, true, true, true, false, true).ID:                               return 1425;
		case Fire::Fire(9, true, true, true, false, false).ID:                              return 1426;
		case Fire::Fire(9, true, true, false, true, true).ID:                               return 1427;
		case Fire::Fire(9, true, true, false, true, false).ID:                              return 1428;
		case Fire::Fire(9, true, true, false, false, true).ID:                              return 1429;
		case Fire::Fire(9, true, true, false, false, false).ID:                             return 1430;
		case Fire::Fire(9, true, false, true, true, true).ID:                               return 1431;
		case Fire::Fire(9, true, false, true, true, false).ID:                              return 1432;
		case Fire::Fire(9, true, false, true, false, true).ID:                              return 1433;
		case Fire::Fire(9, true, false, true, false, false).ID:                             return 1434;
		case Fire::Fire(9, true, false, false, true, true).ID:                              return 1435;
		case Fire::Fire(9, true, false, false, true, false).ID:                             return 1436;
		case Fire::Fire(9, true, false, false, false, true).ID:                             return 1437;
		case Fire::Fire(9, true, false, false, false, false).ID:                            return 1438;
		case Fire::Fire(9, false, true, true, true, true).ID:                               return 1439;
		case Fire::Fire(9, false, true, true, true, false).ID:                              return 1440;
		case Fire::Fire(9, false, true, true, false, true).ID:                              return 1441;
		case Fire::Fire(9, false, true, true, false, false).ID:                             return 1442;
		case Fire::Fire(9, false, true, false, true, true).ID:                              return 1443;
		case Fire::Fire(9, false, true, false, true, false).ID:                             return 1444;
		case Fire::Fire(9, false, true, false, false, true).ID:                             return 1445;
		case Fire::Fire(9, false, true, false, false, false).ID:                            return 1446;
		case Fire::Fire(9, false, false, true, true, true).ID:                              return 1447;
		case Fire::Fire(9, false, false, true, true, false).ID:                             return 1448;
		case Fire::Fire(9, false, false, true, false, true).ID:                             return 1449;
		case Fire::Fire(9, false, false, true, false, false).ID:                            return 1450;
		case Fire::Fire(9, false, false, false, true, true).ID:                             return 1451;
		case Fire::Fire(9, false, false, false, true, false).ID:                            return 1452;
		case Fire::Fire(9, false, false, false, false, true).ID:                            return 1453;
		case Fire::Fire(9, false, false, false, false, false).ID:                           return 1454;
		case Fire::Fire(10, true, true, true, true, true).ID:                               return 1455;
		case Fire::Fire(10, true, true, true, true, false).ID:                              return 1456;
		case Fire::Fire(10, true, true, true, false, true).ID:                              return 1457;
		case Fire::Fire(10, true, true, true, false, false).ID:                             return 1458;
		case Fire::Fire(10, true, true, false, true, true).ID:                              return 1459;
		case Fire::Fire(10, true, true, false, true, false).ID:                             return 1460;
		case Fire::Fire(10, true, true, false, false, true).ID:                             return 1461;
		case Fire::Fire(10, true, true, false, false, false).ID:                            return 1462;
		case Fire::Fire(10, true, false, true, true, true).ID:                              return 1463;
		case Fire::Fire(10, true, false, true, true, false).ID:                             return 1464;
		case Fire::Fire(10, true, false, true, false, true).ID:                             return 1465;
		case Fire::Fire(10, true, false, true, false, false).ID:                            return 1466;
		case Fire::Fire(10, true, false, false, true, true).ID:                             return 1467;
		case Fire::Fire(10, true, false, false, true, false).ID:                            return 1468;
		case Fire::Fire(10, true, false, false, false, true).ID:                            return 1469;
		case Fire::Fire(10, true, false, false, false, false).ID:                           return 1470;
		case Fire::Fire(10, false, true, true, true, true).ID:                              return 1471;
		case Fire::Fire(10, false, true, true, true, false).ID:                             return 1472;
		case Fire::Fire(10, false, true, true, false, true).ID:                             return 1473;
		case Fire::Fire(10, false, true, true, false, false).ID:                            return 1474;
		case Fire::Fire(10, false, true, false, true, true).ID:                             return 1475;
		case Fire::Fire(10, false, true, false, true, false).ID:                            return 1476;
		case Fire::Fire(10, false, true, false, false, true).ID:                            return 1477;
		case Fire::Fire(10, false, true, false, false, false).ID:                           return 1478;
		case Fire::Fire(10, false, false, true, true, true).ID:                             return 1479;
		case Fire::Fire(10, false, false, true, true, false).ID:                            return 1480;
		case Fire::Fire(10, false, false, true, false, true).ID:                            return 1481;
		case Fire::Fire(10, false, false, true, false, false).ID:                           return 1482;
		case Fire::Fire(10, false, false, false, true, true).ID:                            return 1483;
		case Fire::Fire(10, false, false, false, true, false).ID:                           return 1484;
		case Fire::Fire(10, false, false, false, false, true).ID:                           return 1485;
		case Fire::Fire(10, false, false, false, false, false).ID:                          return 1486;
		case Fire::Fire(11, true, true, true, true, true).ID:                               return 1487;
		case Fire::Fire(11, true, true, true, true, false).ID:                              return 1488;
		case Fire::Fire(11, true, true, true, false, true).ID:                              return 1489;
		case Fire::Fire(11, true, true, true, false, false).ID:                             return 1490;
		case Fire::Fire(11, true, true, false, true, true).ID:                              return 1491;
		case Fire::Fire(11, true, true, false, true, false).ID:                             return 1492;
		case Fire::Fire(11, true, true, false, false, true).ID:                             return 1493;
		case Fire::Fire(11, true, true, false, false, false).ID:                            return 1494;
		case Fire::Fire(11, true, false, true, true, true).ID:                              return 1495;
		case Fire::Fire(11, true, false, true, true, false).ID:                             return 1496;
		case Fire::Fire(11, true, false, true, false, true).ID:                             return 1497;
		case Fire::Fire(11, true, false, true, false, false).ID:                            return 1498;
		case Fire::Fire(11, true, false, false, true, true).ID:                             return 1499;
		case Fire::Fire(11, true, false, false, true, false).ID:                            return 1500;
		case Fire::Fire(11, true, false, false, false, true).ID:                            return 1501;
		case Fire::Fire(11, true, false, false, false, false).ID:                           return 1502;
		case Fire::Fire(11, false, true, true, true, true).ID:                              return 1503;
		case Fire::Fire(11, false, true, true, true, false).ID:                             return 1504;
		case Fire::Fire(11, false, true, true, false, true).ID:                             return 1505;
		case Fire::Fire(11, false, true, true, false, false).ID:                            return 1506;
		case Fire::Fire(11, false, true, false, true, true).ID:                             return 1507;
		case Fire::Fire(11, false, true, false, true, false).ID:                            return 1508;
		case Fire::Fire(11, false, true, false, false, true).ID:                            return 1509;
		case Fire::Fire(11, false, true, false, false, false).ID:                           return 1510;
		case Fire::Fire(11, false, false, true, true, true).ID:                             return 1511;
		case Fire::Fire(11, false, false, true, true, false).ID:                            return 1512;
		case Fire::Fire(11, false, false, true, false, true).ID:                            return 1513;
		case Fire::Fire(11, false, false, true, false, false).ID:                           return 1514;
		case Fire::Fire(11, false, false, false, true, true).ID:                            return 1515;
		case Fire::Fire(11, false, false, false, true, false).ID:                           return 1516;
		case Fire::Fire(11, false, false, false, false, true).ID:                           return 1517;
		case Fire::Fire(11, false, false, false, false, false).ID:                          return 1518;
		case Fire::Fire(12, true, true, true, true, true).ID:                               return 1519;
		case Fire::Fire(12, true, true, true, true, false).ID:                              return 1520;
		case Fire::Fire(12, true, true, true, false, true).ID:                              return 1521;
		case Fire::Fire(12, true, true, true, false, false).ID:                             return 1522;
		case Fire::Fire(12, true, true, false, true, true).ID:                              return 1523;
		case Fire::Fire(12, true, true, false, true, false).ID:                             return 1524;
		case Fire::Fire(12, true, true, false, false, true).ID:                             return 1525;
		case Fire::Fire(12, true, true, false, false, false).ID:                            return 1526;
		case Fire::Fire(12, true, false, true, true, true).ID:                              return 1527;
		case Fire::Fire(12, true, false, true, true, false).ID:                             return 1528;
		case Fire::Fire(12, true, false, true, false, true).ID:                             return 1529;
		case Fire::Fire(12, true, false, true, false, false).ID:                            return 1530;
		case Fire::Fire(12, true, false, false, true, true).ID:                             return 1531;
		case Fire::Fire(12, true, false, false, true, false).ID:                            return 1532;
		case Fire::Fire(12, true, false, false, false, true).ID:                            return 1533;
		case Fire::Fire(12, true, false, false, false, false).ID:                           return 1534;
		case Fire::Fire(12, false, true, true, true, true).ID:                              return 1535;
		case Fire::Fire(12, false, true, true, true, false).ID:                             return 1536;
		case Fire::Fire(12, false, true, true, false, true).ID:                             return 1537;
		case Fire::Fire(12, false, true, true, false, false).ID:                            return 1538;
		case Fire::Fire(12, false, true, false, true, true).ID:                             return 1539;
		case Fire::Fire(12, false, true, false, true, false).ID:                            return 1540;
		case Fire::Fire(12, false, true, false, false, true).ID:                            return 1541;
		case Fire::Fire(12, false, true, false, false, false).ID:                           return 1542;
		case Fire::Fire(12, false, false, true, true, true).ID:                             return 1543;
		case Fire::Fire(12, false, false, true, true, false).ID:                            return 1544;
		case Fire::Fire(12, false, false, true, false, true).ID:                            return 1545;
		case Fire::Fire(12, false, false, true, false, false).ID:                           return 1546;
		case Fire::Fire(12, false, false, false, true, true).ID:                            return 1547;
		case Fire::Fire(12, false, false, false, true, false).ID:                           return 1548;
		case Fire::Fire(12, false, false, false, false, true).ID:                           return 1549;
		case Fire::Fire(12, false, false, false, false, false).ID:                          return 1550;
		case Fire::Fire(13, true, true, true, true, true).ID:                               return 1551;
		case Fire::Fire(13, true, true, true, true, false).ID:                              return 1552;
		case Fire::Fire(13, true, true, true, false, true).ID:                              return 1553;
		case Fire::Fire(13, true, true, true, false, false).ID:                             return 1554;
		case Fire::Fire(13, true, true, false, true, true).ID:                              return 1555;
		case Fire::Fire(13, true, true, false, true, false).ID:                             return 1556;
		case Fire::Fire(13, true, true, false, false, true).ID:                             return 1557;
		case Fire::Fire(13, true, true, false, false, false).ID:                            return 1558;
		case Fire::Fire(13, true, false, true, true, true).ID:                              return 1559;
		case Fire::Fire(13, true, false, true, true, false).ID:                             return 1560;
		case Fire::Fire(13, true, false, true, false, true).ID:                             return 1561;
		case Fire::Fire(13, true, false, true, false, false).ID:                            return 1562;
		case Fire::Fire(13, true, false, false, true, true).ID:                             return 1563;
		case Fire::Fire(13, true, false, false, true, false).ID:                            return 1564;
		case Fire::Fire(13, true, false, false, false, true).ID:                            return 1565;
		case Fire::Fire(13, true, false, false, false, false).ID:                           return 1566;
		case Fire::Fire(13, false, true, true, true, true).ID:                              return 1567;
		case Fire::Fire(13, false, true, true, true, false).ID:                             return 1568;
		case Fire::Fire(13, false, true, true, false, true).ID:                             return 1569;
		case Fire::Fire(13, false, true, true, false, false).ID:                            return 1570;
		case Fire::Fire(13, false, true, false, true, true).ID:                             return 1571;
		case Fire::Fire(13, false, true, false, true, false).ID:                            return 1572;
		case Fire::Fire(13, false, true, false, false, true).ID:                            return 1573;
		case Fire::Fire(13, false, true, false, false, false).ID:                           return 1574;
		case Fire::Fire(13, false, false, true, true, true).ID:                             return 1575;
		case Fire::Fire(13, false, false, true, true, false).ID:                            return 1576;
		case Fire::Fire(13, false, false, true, false, true).ID:                            return 1577;
		case Fire::Fire(13, false, false, true, false, false).ID:                           return 1578;
		case Fire::Fire(13, false, false, false, true, true).ID:                            return 1579;
		case Fire::Fire(13, false, false, false, true, false).ID:                           return 1580;
		case Fire::Fire(13, false, false, false, false, true).ID:                           return 1581;
		case Fire::Fire(13, false, false, false, false, false).ID:                          return 1582;
		case Fire::Fire(14, true, true, true, true, true).ID:                               return 1583;
		case Fire::Fire(14, true, true, true, true, false).ID:                              return 1584;
		case Fire::Fire(14, true, true, true, false, true).ID:                              return 1585;
		case Fire::Fire(14, true, true, true, false, false).ID:                             return 1586;
		case Fire::Fire(14, true, true, false, true, true).ID:                              return 1587;
		case Fire::Fire(14, true, true, false, true, false).ID:                             return 1588;
		case Fire::Fire(14, true, true, false, false, true).ID:                             return 1589;
		case Fire::Fire(14, true, true, false, false, false).ID:                            return 1590;
		case Fire::Fire(14, true, false, true, true, true).ID:                              return 1591;
		case Fire::Fire(14, true, false, true, true, false).ID:                             return 1592;
		case Fire::Fire(14, true, false, true, false, true).ID:                             return 1593;
		case Fire::Fire(14, true, false, true, false, false).ID:                            return 1594;
		case Fire::Fire(14, true, false, false, true, true).ID:                             return 1595;
		case Fire::Fire(14, true, false, false, true, false).ID:                            return 1596;
		case Fire::Fire(14, true, false, false, false, true).ID:                            return 1597;
		case Fire::Fire(14, true, false, false, false, false).ID:                           return 1598;
		case Fire::Fire(14, false, true, true, true, true).ID:                              return 1599;
		case Fire::Fire(14, false, true, true, true, false).ID:                             return 1600;
		case Fire::Fire(14, false, true, true, false, true).ID:                             return 1601;
		case Fire::Fire(14, false, true, true, false, false).ID:                            return 1602;
		case Fire::Fire(14, false, true, false, true, true).ID:                             return 1603;
		case Fire::Fire(14, false, true, false, true, false).ID:                            return 1604;
		case Fire::Fire(14, false, true, false, false, true).ID:                            return 1605;
		case Fire::Fire(14, false, true, false, false, false).ID:                           return 1606;
		case Fire::Fire(14, false, false, true, true, true).ID:                             return 1607;
		case Fire::Fire(14, false, false, true, true, false).ID:                            return 1608;
		case Fire::Fire(14, false, false, true, false, true).ID:                            return 1609;
		case Fire::Fire(14, false, false, true, false, false).ID:                           return 1610;
		case Fire::Fire(14, false, false, false, true, true).ID:                            return 1611;
		case Fire::Fire(14, false, false, false, true, false).ID:                           return 1612;
		case Fire::Fire(14, false, false, false, false, true).ID:                           return 1613;
		case Fire::Fire(14, false, false, false, false, false).ID:                          return 1614;
		case Fire::Fire(15, true, true, true, true, true).ID:                               return 1615;
		case Fire::Fire(15, true, true, true, true, false).ID:                              return 1616;
		case Fire::Fire(15, true, true, true, false, true).ID:                              return 1617;
		case Fire::Fire(15, true, true, true, false, false).ID:                             return 1618;
		case Fire::Fire(15, true, true, false, true, true).ID:                              return 1619;
		case Fire::Fire(15, true, true, false, true, false).ID:                             return 1620;
		case Fire::Fire(15, true, true, false, false, true).ID:                             return 1621;
		case Fire::Fire(15, true, true, false, false, false).ID:                            return 1622;
		case Fire::Fire(15, true, false, true, true, true).ID:                              return 1623;
		case Fire::Fire(15, true, false, true, true, false).ID:                             return 1624;
		case Fire::Fire(15, true, false, true, false, true).ID:                             return 1625;
		case Fire::Fire(15, true, false, true, false, false).ID:                            return 1626;
		case Fire::Fire(15, true, false, false, true, true).ID:                             return 1627;
		case Fire::Fire(15, true, false, false, true, false).ID:                            return 1628;
		case Fire::Fire(15, true, false, false, false, true).ID:                            return 1629;
		case Fire::Fire(15, true, false, false, false, false).ID:                           return 1630;
		case Fire::Fire(15, false, true, true, true, true).ID:                              return 1631;
		case Fire::Fire(15, false, true, true, true, false).ID:                             return 1632;
		case Fire::Fire(15, false, true, true, false, true).ID:                             return 1633;
		case Fire::Fire(15, false, true, true, false, false).ID:                            return 1634;
		case Fire::Fire(15, false, true, false, true, true).ID:                             return 1635;
		case Fire::Fire(15, false, true, false, true, false).ID:                            return 1636;
		case Fire::Fire(15, false, true, false, false, true).ID:                            return 1637;
		case Fire::Fire(15, false, true, false, false, false).ID:                           return 1638;
		case Fire::Fire(15, false, false, true, true, true).ID:                             return 1639;
		case Fire::Fire(15, false, false, true, true, false).ID:                            return 1640;
		case Fire::Fire(15, false, false, true, false, true).ID:                            return 1641;
		case Fire::Fire(15, false, false, true, false, false).ID:                           return 1642;
		case Fire::Fire(15, false, false, false, true, true).ID:                            return 1643;
		case Fire::Fire(15, false, false, false, true, false).ID:                           return 1644;
		case Fire::Fire(15, false, false, false, false, true).ID:                           return 1645;
		case Fire::Fire(15, false, false, false, false, false).ID:                          return 1646;
		case FireCoral::FireCoral().ID:                                                     return 8462;
		case FireCoralBlock::FireCoralBlock().ID:                                           return 8457;
		case FireCoralFan::FireCoralFan().ID:                                               return 8561;
		case FireCoralWallFan::FireCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:              return 8529;
		case FireCoralWallFan::FireCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:              return 8531;
		case FireCoralWallFan::FireCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:              return 8533;
		case FireCoralWallFan::FireCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:              return 8535;
		case FlowerPot::FlowerPot().ID:                                                     return 5265;
		case FrostedIce::FrostedIce(0).ID:                                                  return 8188;
		case FrostedIce::FrostedIce(1).ID:                                                  return 8189;
		case FrostedIce::FrostedIce(2).ID:                                                  return 8190;
		case FrostedIce::FrostedIce(3).ID:                                                  return 8191;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_ZM, true).ID:                          return 3067;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_ZM, false).ID:                         return 3068;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_ZP, true).ID:                          return 3069;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_ZP, false).ID:                         return 3070;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_XM, true).ID:                          return 3071;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_XM, false).ID:                         return 3072;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_XP, true).ID:                          return 3073;
		case Furnace::Furnace(eBlockFace::BLOCK_FACE_XP, false).ID:                         return 3074;
		case Glass::Glass().ID:                                                             return 230;
		case GlassPane::GlassPane(true, true, true, true).ID:                               return 4213;
		case GlassPane::GlassPane(true, true, true, false).ID:                              return 4214;
		case GlassPane::GlassPane(true, true, false, true).ID:                              return 4217;
		case GlassPane::GlassPane(true, true, false, false).ID:                             return 4218;
		case GlassPane::GlassPane(true, false, true, true).ID:                              return 4221;
		case GlassPane::GlassPane(true, false, true, false).ID:                             return 4222;
		case GlassPane::GlassPane(true, false, false, true).ID:                             return 4225;
		case GlassPane::GlassPane(true, false, false, false).ID:                            return 4226;
		case GlassPane::GlassPane(false, true, true, true).ID:                              return 4229;
		case GlassPane::GlassPane(false, true, true, false).ID:                             return 4230;
		case GlassPane::GlassPane(false, true, false, true).ID:                             return 4233;
		case GlassPane::GlassPane(false, true, false, false).ID:                            return 4234;
		case GlassPane::GlassPane(false, false, true, true).ID:                             return 4237;
		case GlassPane::GlassPane(false, false, true, false).ID:                            return 4238;
		case GlassPane::GlassPane(false, false, false, true).ID:                            return 4241;
		case GlassPane::GlassPane(false, false, false, false).ID:                           return 4242;
		case Glowstone::Glowstone().ID:                                                     return 3495;
		case GoldBlock::GoldBlock().ID:                                                     return 1123;
		case GoldOre::GoldOre().ID:                                                         return 69;
		case Granite::Granite().ID:                                                         return 2;
		case Grass::Grass().ID:                                                             return 1041;
		case GrassBlock::GrassBlock(true).ID:                                               return 8;
		case GrassBlock::GrassBlock(false).ID:                                              return 9;
		case GrassPath::GrassPath().ID:                                                     return 8162;
		case Gravel::Gravel().ID:                                                           return 68;
		case GrayBanner::GrayBanner(0).ID:                                                  return 6966;
		case GrayBanner::GrayBanner(1).ID:                                                  return 6967;
		case GrayBanner::GrayBanner(2).ID:                                                  return 6968;
		case GrayBanner::GrayBanner(3).ID:                                                  return 6969;
		case GrayBanner::GrayBanner(4).ID:                                                  return 6970;
		case GrayBanner::GrayBanner(5).ID:                                                  return 6971;
		case GrayBanner::GrayBanner(6).ID:                                                  return 6972;
		case GrayBanner::GrayBanner(7).ID:                                                  return 6973;
		case GrayBanner::GrayBanner(8).ID:                                                  return 6974;
		case GrayBanner::GrayBanner(9).ID:                                                  return 6975;
		case GrayBanner::GrayBanner(10).ID:                                                 return 6976;
		case GrayBanner::GrayBanner(11).ID:                                                 return 6977;
		case GrayBanner::GrayBanner(12).ID:                                                 return 6978;
		case GrayBanner::GrayBanner(13).ID:                                                 return 6979;
		case GrayBanner::GrayBanner(14).ID:                                                 return 6980;
		case GrayBanner::GrayBanner(15).ID:                                                 return 6981;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZM, true, GrayBed::Part::Head).ID:     return 860;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZM, true, GrayBed::Part::Foot).ID:     return 861;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZM, false, GrayBed::Part::Head).ID:    return 862;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZM, false, GrayBed::Part::Foot).ID:    return 863;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZP, true, GrayBed::Part::Head).ID:     return 864;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZP, true, GrayBed::Part::Foot).ID:     return 865;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZP, false, GrayBed::Part::Head).ID:    return 866;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_ZP, false, GrayBed::Part::Foot).ID:    return 867;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XM, true, GrayBed::Part::Head).ID:     return 868;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XM, true, GrayBed::Part::Foot).ID:     return 869;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XM, false, GrayBed::Part::Head).ID:    return 870;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XM, false, GrayBed::Part::Foot).ID:    return 871;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XP, true, GrayBed::Part::Head).ID:     return 872;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XP, true, GrayBed::Part::Foot).ID:     return 873;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XP, false, GrayBed::Part::Head).ID:    return 874;
		case GrayBed::GrayBed(eBlockFace::BLOCK_FACE_XP, false, GrayBed::Part::Foot).ID:    return 875;
		case GrayCarpet::GrayCarpet().ID:                                                   return 6830;
		case GrayConcrete::GrayConcrete().ID:                                               return 8384;
		case GrayConcretePowder::GrayConcretePowder().ID:                                   return 8400;
		case GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:      return 8341;
		case GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:      return 8342;
		case GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:      return 8343;
		case GrayGlazedTerracotta::GrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:      return 8344;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                  return 8259;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                  return 8260;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                  return 8261;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                  return 8262;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                  return 8263;
		case GrayShulkerBox::GrayShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                  return 8264;
		case GrayStainedGlass::GrayStainedGlass().ID:                                       return 3584;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, true, true, true).ID:         return 6046;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, true, true, false).ID:        return 6047;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, true, false, true).ID:        return 6050;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, true, false, false).ID:       return 6051;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, false, true, true).ID:        return 6054;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, false, true, false).ID:       return 6055;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, false, false, true).ID:       return 6058;
		case GrayStainedGlassPane::GrayStainedGlassPane(true, false, false, false).ID:      return 6059;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, true, true, true).ID:        return 6062;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, true, true, false).ID:       return 6063;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, true, false, true).ID:       return 6066;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, true, false, false).ID:      return 6067;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, false, true, true).ID:       return 6070;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, false, true, false).ID:      return 6071;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, false, false, true).ID:      return 6074;
		case GrayStainedGlassPane::GrayStainedGlassPane(false, false, false, false).ID:     return 6075;
		case GrayTerracotta::GrayTerracotta().ID:                                           return 5811;
		case GrayWallBanner::GrayWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                  return 7138;
		case GrayWallBanner::GrayWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                  return 7139;
		case GrayWallBanner::GrayWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                  return 7140;
		case GrayWallBanner::GrayWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                  return 7141;
		case GrayWool::GrayWool().ID:                                                       return 1090;
		case GreenBanner::GreenBanner(0).ID:                                                return 7062;
		case GreenBanner::GreenBanner(1).ID:                                                return 7063;
		case GreenBanner::GreenBanner(2).ID:                                                return 7064;
		case GreenBanner::GreenBanner(3).ID:                                                return 7065;
		case GreenBanner::GreenBanner(4).ID:                                                return 7066;
		case GreenBanner::GreenBanner(5).ID:                                                return 7067;
		case GreenBanner::GreenBanner(6).ID:                                                return 7068;
		case GreenBanner::GreenBanner(7).ID:                                                return 7069;
		case GreenBanner::GreenBanner(8).ID:                                                return 7070;
		case GreenBanner::GreenBanner(9).ID:                                                return 7071;
		case GreenBanner::GreenBanner(10).ID:                                               return 7072;
		case GreenBanner::GreenBanner(11).ID:                                               return 7073;
		case GreenBanner::GreenBanner(12).ID:                                               return 7074;
		case GreenBanner::GreenBanner(13).ID:                                               return 7075;
		case GreenBanner::GreenBanner(14).ID:                                               return 7076;
		case GreenBanner::GreenBanner(15).ID:                                               return 7077;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZM, true, GreenBed::Part::Head).ID:  return 956;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZM, true, GreenBed::Part::Foot).ID:  return 957;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZM, false, GreenBed::Part::Head).ID: return 958;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZM, false, GreenBed::Part::Foot).ID: return 959;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZP, true, GreenBed::Part::Head).ID:  return 960;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZP, true, GreenBed::Part::Foot).ID:  return 961;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZP, false, GreenBed::Part::Head).ID: return 962;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_ZP, false, GreenBed::Part::Foot).ID: return 963;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XM, true, GreenBed::Part::Head).ID:  return 964;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XM, true, GreenBed::Part::Foot).ID:  return 965;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XM, false, GreenBed::Part::Head).ID: return 966;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XM, false, GreenBed::Part::Foot).ID: return 967;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XP, true, GreenBed::Part::Head).ID:  return 968;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XP, true, GreenBed::Part::Foot).ID:  return 969;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XP, false, GreenBed::Part::Head).ID: return 970;
		case GreenBed::GreenBed(eBlockFace::BLOCK_FACE_XP, false, GreenBed::Part::Foot).ID: return 971;
		case GreenCarpet::GreenCarpet().ID:                                                 return 6836;
		case GreenConcrete::GreenConcrete().ID:                                             return 8390;
		case GreenConcretePowder::GreenConcretePowder().ID:                                 return 8406;
		case GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:    return 8365;
		case GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:    return 8366;
		case GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:    return 8367;
		case GreenGlazedTerracotta::GreenGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:    return 8368;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                return 8295;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                return 8296;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                return 8297;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                return 8298;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                return 8299;
		case GreenShulkerBox::GreenShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                return 8300;
		case GreenStainedGlass::GreenStainedGlass().ID:                                     return 3590;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, true, true, true).ID:       return 6238;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, true, true, false).ID:      return 6239;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, true, false, true).ID:      return 6242;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, true, false, false).ID:     return 6243;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, false, true, true).ID:      return 6246;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, false, true, false).ID:     return 6247;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, false, false, true).ID:     return 6250;
		case GreenStainedGlassPane::GreenStainedGlassPane(true, false, false, false).ID:    return 6251;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, true, true, true).ID:      return 6254;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, true, true, false).ID:     return 6255;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, true, false, true).ID:     return 6258;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, true, false, false).ID:    return 6259;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, false, true, true).ID:     return 6262;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, false, true, false).ID:    return 6263;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, false, false, true).ID:    return 6266;
		case GreenStainedGlassPane::GreenStainedGlassPane(false, false, false, false).ID:   return 6267;
		case GreenTerracotta::GreenTerracotta().ID:                                         return 5817;
		case GreenWallBanner::GreenWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                return 7162;
		case GreenWallBanner::GreenWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                return 7163;
		case GreenWallBanner::GreenWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                return 7164;
		case GreenWallBanner::GreenWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                return 7165;
		case GreenWool::GreenWool().ID:                                                     return 1096;
		case HayBale::HayBale(HayBale::Axis::X).ID:                                         return 6820;
		case HayBale::HayBale(HayBale::Axis::Y).ID:                                         return 6821;
		case HayBale::HayBale(HayBale::Axis::Z).ID:                                         return 6822;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(0).ID:                  return 5619;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(1).ID:                  return 5620;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(2).ID:                  return 5621;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(3).ID:                  return 5622;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(4).ID:                  return 5623;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(5).ID:                  return 5624;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(6).ID:                  return 5625;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(7).ID:                  return 5626;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(8).ID:                  return 5627;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(9).ID:                  return 5628;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(10).ID:                 return 5629;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(11).ID:                 return 5630;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(12).ID:                 return 5631;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(13).ID:                 return 5632;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(14).ID:                 return 5633;
		case HeavyWeightedPressurePlate::HeavyWeightedPressurePlate(15).ID:                 return 5634;
		case Hopper::Hopper(true, eBlockFace::BLOCK_FACE_YM).ID:                            return 5685;
		case Hopper::Hopper(true, eBlockFace::BLOCK_FACE_ZM).ID:                            return 5686;
		case Hopper::Hopper(true, eBlockFace::BLOCK_FACE_ZP).ID:                            return 5687;
		case Hopper::Hopper(true, eBlockFace::BLOCK_FACE_XM).ID:                            return 5688;
		case Hopper::Hopper(true, eBlockFace::BLOCK_FACE_XP).ID:                            return 5689;
		case Hopper::Hopper(false, eBlockFace::BLOCK_FACE_YM).ID:                           return 5690;
		case Hopper::Hopper(false, eBlockFace::BLOCK_FACE_ZM).ID:                           return 5691;
		case Hopper::Hopper(false, eBlockFace::BLOCK_FACE_ZP).ID:                           return 5692;
		case Hopper::Hopper(false, eBlockFace::BLOCK_FACE_XM).ID:                           return 5693;
		case Hopper::Hopper(false, eBlockFace::BLOCK_FACE_XP).ID:                           return 5694;
		case HornCoral::HornCoral().ID:                                                     return 8463;
		case HornCoralBlock::HornCoralBlock().ID:                                           return 8458;
		case HornCoralFan::HornCoralFan().ID:                                               return 8563;
		case HornCoralWallFan::HornCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:              return 8537;
		case HornCoralWallFan::HornCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:              return 8539;
		case HornCoralWallFan::HornCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:              return 8541;
		case HornCoralWallFan::HornCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:              return 8543;
		case Ice::Ice().ID:                                                                 return 3423;
		case InfestedChiseledStoneBricks::InfestedChiseledStoneBricks().ID:                 return 3982;
		case InfestedCobblestone::InfestedCobblestone().ID:                                 return 3978;
		case InfestedCrackedStoneBricks::InfestedCrackedStoneBricks().ID:                   return 3981;
		case InfestedMossyStoneBricks::InfestedMossyStoneBricks().ID:                       return 3980;
		case InfestedStone::InfestedStone().ID:                                             return 3977;
		case InfestedStoneBricks::InfestedStoneBricks().ID:                                 return 3979;
		case IronBars::IronBars(true, true, true, true).ID:                                 return 4181;
		case IronBars::IronBars(true, true, true, false).ID:                                return 4182;
		case IronBars::IronBars(true, true, false, true).ID:                                return 4185;
		case IronBars::IronBars(true, true, false, false).ID:                               return 4186;
		case IronBars::IronBars(true, false, true, true).ID:                                return 4189;
		case IronBars::IronBars(true, false, true, false).ID:                               return 4190;
		case IronBars::IronBars(true, false, false, true).ID:                               return 4193;
		case IronBars::IronBars(true, false, false, false).ID:                              return 4194;
		case IronBars::IronBars(false, true, true, true).ID:                                return 4197;
		case IronBars::IronBars(false, true, true, false).ID:                               return 4198;
		case IronBars::IronBars(false, true, false, true).ID:                               return 4201;
		case IronBars::IronBars(false, true, false, false).ID:                              return 4202;
		case IronBars::IronBars(false, false, true, true).ID:                               return 4205;
		case IronBars::IronBars(false, false, true, false).ID:                              return 4206;
		case IronBars::IronBars(false, false, false, true).ID:                              return 4209;
		case IronBars::IronBars(false, false, false, false).ID:                             return 4210;
		case IronBlock::IronBlock().ID:                                                     return 1124;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, true).ID:
			return 3303;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3304;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3305;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3306;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3307;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3308;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3309;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3310;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, true).ID:
			return 3311;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3312;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3313;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3314;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3315;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3316;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3317;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZM, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3318;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, true).ID:
			return 3319;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3320;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3321;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3322;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3323;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3324;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3325;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3326;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, true).ID:
			return 3327;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3328;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3329;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3330;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3331;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3332;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3333;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_ZP, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3334;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, true).ID:
			return 3335;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3336;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3337;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3338;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3339;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3340;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3341;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3342;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, true).ID:
			return 3343;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3344;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3345;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3346;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3347;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3348;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3349;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XM, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3350;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, true).ID:
			return 3351;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3352;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3353;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3354;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3355;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3356;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3357;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Upper, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3358;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, true).ID:
			return 3359;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Left, true, false)
			.ID:
			return 3360;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, true)
			.ID:
			return 3361;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Left, false, false)
			.ID:
			return 3362;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, true)
			.ID:
			return 3363;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Right, true, false)
			.ID:
			return 3364;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, true)
			.ID:
			return 3365;
		case IronDoor::IronDoor(eBlockFace::BLOCK_FACE_XP, IronDoor::Half::Lower, IronDoor::Hinge::Right, false, false)
			.ID:
			return 3366;
		case IronOre::IronOre().ID:                                                                         return 70;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, true, true).ID: return 6495;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, true, false).ID:
			return 6497;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, false, true).ID:
			return 6499;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Top, false, false).ID:
			return 6501;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, true, true).ID:
			return 6503;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, true, false).ID:
			return 6505;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, false, true).ID:
			return 6507;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZM, IronTrapdoor::Half::Bottom, false, false).ID:
			return 6509;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, true, true).ID: return 6511;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, true, false).ID:
			return 6513;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, false, true).ID:
			return 6515;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Top, false, false).ID:
			return 6517;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, true, true).ID:
			return 6519;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, true, false).ID:
			return 6521;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, false, true).ID:
			return 6523;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_ZP, IronTrapdoor::Half::Bottom, false, false).ID:
			return 6525;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, true, true).ID: return 6527;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, true, false).ID:
			return 6529;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, false, true).ID:
			return 6531;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Top, false, false).ID:
			return 6533;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, true, true).ID:
			return 6535;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, true, false).ID:
			return 6537;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, false, true).ID:
			return 6539;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XM, IronTrapdoor::Half::Bottom, false, false).ID:
			return 6541;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, true, true).ID: return 6543;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, true, false).ID:
			return 6545;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, false, true).ID:
			return 6547;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Top, false, false).ID:
			return 6549;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, true, true).ID:
			return 6551;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, true, false).ID:
			return 6553;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, false, true).ID:
			return 6555;
		case IronTrapdoor::IronTrapdoor(eBlockFace::BLOCK_FACE_XP, IronTrapdoor::Half::Bottom, false, false).ID:
			return 6557;
		case JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_ZM).ID:                                     return 3502;
		case JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_ZP).ID:                                     return 3503;
		case JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_XM).ID:                                     return 3504;
		case JackOLantern::JackOLantern(eBlockFace::BLOCK_FACE_XP).ID:                                     return 3505;
		case Jukebox::Jukebox(true).ID:                                                                    return 3458;
		case Jukebox::Jukebox(false).ID:                                                                   return 3459;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 5375;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 5376;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 5377;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 5378;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 5379;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 5380;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 5381;
		case JungleButton::JungleButton(JungleButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 5382;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 5383;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 5384;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 5385;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 5386;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 5387;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 5388;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 5389;
		case JungleButton::JungleButton(JungleButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 5390;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5391;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5392;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5393;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5394;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5395;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 5396;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5397;
		case JungleButton::JungleButton(JungleButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 5398;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7805;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7806;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7807;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7808;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7809;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7810;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7811;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7812;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7813;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7814;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7815;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7816;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7817;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7818;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7819;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7820;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7821;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7822;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7823;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7824;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7825;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7826;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7827;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7828;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7829;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7830;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7831;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7832;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7833;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7834;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7835;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_ZP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7836;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7837;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7838;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7839;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7840;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7841;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7842;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7843;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7844;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7845;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7846;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7847;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7848;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7849;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7850;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7851;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XM,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7852;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7853;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7854;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7855;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7856;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7857;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7858;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7859;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Upper,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7860;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7861;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7862;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7863;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7864;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7865;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7866;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7867;
		case JungleDoor::JungleDoor(
			eBlockFace::BLOCK_FACE_XP,
			JungleDoor::Half::Lower,
			JungleDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7868;
		case JungleFence::JungleFence(true, true, true, true).ID:                                 return 7583;
		case JungleFence::JungleFence(true, true, true, false).ID:                                return 7584;
		case JungleFence::JungleFence(true, true, false, true).ID:                                return 7587;
		case JungleFence::JungleFence(true, true, false, false).ID:                               return 7588;
		case JungleFence::JungleFence(true, false, true, true).ID:                                return 7591;
		case JungleFence::JungleFence(true, false, true, false).ID:                               return 7592;
		case JungleFence::JungleFence(true, false, false, true).ID:                               return 7595;
		case JungleFence::JungleFence(true, false, false, false).ID:                              return 7596;
		case JungleFence::JungleFence(false, true, true, true).ID:                                return 7599;
		case JungleFence::JungleFence(false, true, true, false).ID:                               return 7600;
		case JungleFence::JungleFence(false, true, false, true).ID:                               return 7603;
		case JungleFence::JungleFence(false, true, false, false).ID:                              return 7604;
		case JungleFence::JungleFence(false, false, true, true).ID:                               return 7607;
		case JungleFence::JungleFence(false, false, true, false).ID:                              return 7608;
		case JungleFence::JungleFence(false, false, false, true).ID:                              return 7611;
		case JungleFence::JungleFence(false, false, false, false).ID:                             return 7612;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 7421;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 7422;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 7423;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 7424;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 7425;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 7426;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 7427;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 7428;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 7429;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 7430;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 7431;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 7432;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 7433;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 7434;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 7435;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 7436;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 7437;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 7438;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 7439;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 7440;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 7441;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 7442;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 7443;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 7444;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 7445;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 7446;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 7447;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 7448;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 7449;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 7450;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 7451;
		case JungleFenceGate::JungleFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 7452;
		case JungleLeaves::JungleLeaves(1, true).ID:                                              return 186;
		case JungleLeaves::JungleLeaves(1, false).ID:                                             return 187;
		case JungleLeaves::JungleLeaves(2, true).ID:                                              return 188;
		case JungleLeaves::JungleLeaves(2, false).ID:                                             return 189;
		case JungleLeaves::JungleLeaves(3, true).ID:                                              return 190;
		case JungleLeaves::JungleLeaves(3, false).ID:                                             return 191;
		case JungleLeaves::JungleLeaves(4, true).ID:                                              return 192;
		case JungleLeaves::JungleLeaves(4, false).ID:                                             return 193;
		case JungleLeaves::JungleLeaves(5, true).ID:                                              return 194;
		case JungleLeaves::JungleLeaves(5, false).ID:                                             return 195;
		case JungleLeaves::JungleLeaves(6, true).ID:                                              return 196;
		case JungleLeaves::JungleLeaves(6, false).ID:                                             return 197;
		case JungleLeaves::JungleLeaves(7, true).ID:                                              return 198;
		case JungleLeaves::JungleLeaves(7, false).ID:                                             return 199;
		case JungleLog::JungleLog(JungleLog::Axis::X).ID:                                         return 81;
		case JungleLog::JungleLog(JungleLog::Axis::Y).ID:                                         return 82;
		case JungleLog::JungleLog(JungleLog::Axis::Z).ID:                                         return 83;
		case JunglePlanks::JunglePlanks().ID:                                                     return 18;
		case JunglePressurePlate::JunglePressurePlate(true).ID:                                   return 3373;
		case JunglePressurePlate::JunglePressurePlate(false).ID:                                  return 3374;
		case JungleSapling::JungleSapling(0).ID:                                                  return 27;
		case JungleSapling::JungleSapling(1).ID:                                                  return 28;
		case JungleSlab::JungleSlab(JungleSlab::Type::Top).ID:                                    return 7276;
		case JungleSlab::JungleSlab(JungleSlab::Type::Bottom).ID:                                 return 7278;
		case JungleSlab::JungleSlab(JungleSlab::Type::Double).ID:                                 return 7280;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5045;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5047;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5049;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5051;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5053;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5055;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5057;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5059;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5061;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5063;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5065;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5067;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5069;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5071;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5073;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5075;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5077;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5079;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5081;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_ZP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5083;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5085;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5087;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5089;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5091;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5093;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5095;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5097;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5099;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5101;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XM,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5103;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5105;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5107;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5109;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5111;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Top,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5113;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::Straight
		)
			.ID:
			return 5115;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerLeft
		)
			.ID:
			return 5117;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::InnerRight
		)
			.ID:
			return 5119;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterLeft
		)
			.ID:
			return 5121;
		case JungleStairs::JungleStairs(
			eBlockFace::BLOCK_FACE_XP,
			JungleStairs::Half::Bottom,
			JungleStairs::Shape::OuterRight
		)
			.ID:
			return 5123;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Top, true, true).ID:
			return 3786;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Top, true, false).ID:
			return 3788;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Top, false, true).ID:
			return 3790;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Top, false, false).ID:
			return 3792;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Bottom, true, true).ID:
			return 3794;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Bottom, true, false).ID:
			return 3796;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Bottom, false, true).ID:
			return 3798;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZM, JungleTrapdoor::Half::Bottom, false, false).ID:
			return 3800;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Top, true, true).ID:
			return 3802;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Top, true, false).ID:
			return 3804;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Top, false, true).ID:
			return 3806;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Top, false, false).ID:
			return 3808;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Bottom, true, true).ID:
			return 3810;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Bottom, true, false).ID:
			return 3812;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Bottom, false, true).ID:
			return 3814;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_ZP, JungleTrapdoor::Half::Bottom, false, false).ID:
			return 3816;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Top, true, true).ID:
			return 3818;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Top, true, false).ID:
			return 3820;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Top, false, true).ID:
			return 3822;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Top, false, false).ID:
			return 3824;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Bottom, true, true).ID:
			return 3826;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Bottom, true, false).ID:
			return 3828;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Bottom, false, true).ID:
			return 3830;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XM, JungleTrapdoor::Half::Bottom, false, false).ID:
			return 3832;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Top, true, true).ID:
			return 3834;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Top, true, false).ID:
			return 3836;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Top, false, true).ID:
			return 3838;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Top, false, false).ID:
			return 3840;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Bottom, true, true).ID:
			return 3842;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Bottom, true, false).ID:
			return 3844;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Bottom, false, true).ID:
			return 3846;
		case JungleTrapdoor::JungleTrapdoor(eBlockFace::BLOCK_FACE_XP, JungleTrapdoor::Half::Bottom, false, false).ID:
			return 3848;
		case JungleWood::JungleWood(JungleWood::Axis::X).ID:                                            return 117;
		case JungleWood::JungleWood(JungleWood::Axis::Y).ID:                                            return 118;
		case JungleWood::JungleWood(JungleWood::Axis::Z).ID:                                            return 119;
		case Kelp::Kelp(0).ID:                                                                          return 8409;
		case Kelp::Kelp(1).ID:                                                                          return 8410;
		case Kelp::Kelp(2).ID:                                                                          return 8411;
		case Kelp::Kelp(3).ID:                                                                          return 8412;
		case Kelp::Kelp(4).ID:                                                                          return 8413;
		case Kelp::Kelp(5).ID:                                                                          return 8414;
		case Kelp::Kelp(6).ID:                                                                          return 8415;
		case Kelp::Kelp(7).ID:                                                                          return 8416;
		case Kelp::Kelp(8).ID:                                                                          return 8417;
		case Kelp::Kelp(9).ID:                                                                          return 8418;
		case Kelp::Kelp(10).ID:                                                                         return 8419;
		case Kelp::Kelp(11).ID:                                                                         return 8420;
		case Kelp::Kelp(12).ID:                                                                         return 8421;
		case Kelp::Kelp(13).ID:                                                                         return 8422;
		case Kelp::Kelp(14).ID:                                                                         return 8423;
		case Kelp::Kelp(15).ID:                                                                         return 8424;
		case Kelp::Kelp(16).ID:                                                                         return 8425;
		case Kelp::Kelp(17).ID:                                                                         return 8426;
		case Kelp::Kelp(18).ID:                                                                         return 8427;
		case Kelp::Kelp(19).ID:                                                                         return 8428;
		case Kelp::Kelp(20).ID:                                                                         return 8429;
		case Kelp::Kelp(21).ID:                                                                         return 8430;
		case Kelp::Kelp(22).ID:                                                                         return 8431;
		case Kelp::Kelp(23).ID:                                                                         return 8432;
		case Kelp::Kelp(24).ID:                                                                         return 8433;
		case Kelp::Kelp(25).ID:                                                                         return 8434;
		case KelpPlant::KelpPlant().ID:                                                                 return 8435;
		case Ladder::Ladder(eBlockFace::BLOCK_FACE_ZM).ID:                                              return 3172;
		case Ladder::Ladder(eBlockFace::BLOCK_FACE_ZP).ID:                                              return 3174;
		case Ladder::Ladder(eBlockFace::BLOCK_FACE_XM).ID:                                              return 3176;
		case Ladder::Ladder(eBlockFace::BLOCK_FACE_XP).ID:                                              return 3178;
		case LapisBlock::LapisBlock().ID:                                                               return 232;
		case LapisOre::LapisOre().ID:                                                                   return 231;
		case LargeFern::LargeFern(LargeFern::Half::Upper).ID:                                           return 6852;
		case LargeFern::LargeFern(LargeFern::Half::Lower).ID:                                           return 6853;
		case Lava::Lava(0).ID:                                                                          return 50;
		case Lava::Lava(1).ID:                                                                          return 51;
		case Lava::Lava(2).ID:                                                                          return 52;
		case Lava::Lava(3).ID:                                                                          return 53;
		case Lava::Lava(4).ID:                                                                          return 54;
		case Lava::Lava(5).ID:                                                                          return 55;
		case Lava::Lava(6).ID:                                                                          return 56;
		case Lava::Lava(7).ID:                                                                          return 57;
		case Lava::Lava(8).ID:                                                                          return 58;
		case Lava::Lava(9).ID:                                                                          return 59;
		case Lava::Lava(10).ID:                                                                         return 60;
		case Lava::Lava(11).ID:                                                                         return 61;
		case Lava::Lava(12).ID:                                                                         return 62;
		case Lava::Lava(13).ID:                                                                         return 63;
		case Lava::Lava(14).ID:                                                                         return 64;
		case Lava::Lava(15).ID:                                                                         return 65;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:                      return 3277;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:                     return 3278;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:                      return 3279;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:                     return 3280;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:                      return 3281;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:                     return 3282;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:                      return 3283;
		case Lever::Lever(Lever::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:                     return 3284;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:                       return 3285;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:                      return 3286;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:                       return 3287;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:                      return 3288;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:                       return 3289;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:                      return 3290;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:                       return 3291;
		case Lever::Lever(Lever::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:                      return 3292;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:                    return 3293;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID:                   return 3294;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:                    return 3295;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID:                   return 3296;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:                    return 3297;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID:                   return 3298;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:                    return 3299;
		case Lever::Lever(Lever::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID:                   return 3300;
		case LightBlueBanner::LightBlueBanner(0).ID:                                                    return 6902;
		case LightBlueBanner::LightBlueBanner(1).ID:                                                    return 6903;
		case LightBlueBanner::LightBlueBanner(2).ID:                                                    return 6904;
		case LightBlueBanner::LightBlueBanner(3).ID:                                                    return 6905;
		case LightBlueBanner::LightBlueBanner(4).ID:                                                    return 6906;
		case LightBlueBanner::LightBlueBanner(5).ID:                                                    return 6907;
		case LightBlueBanner::LightBlueBanner(6).ID:                                                    return 6908;
		case LightBlueBanner::LightBlueBanner(7).ID:                                                    return 6909;
		case LightBlueBanner::LightBlueBanner(8).ID:                                                    return 6910;
		case LightBlueBanner::LightBlueBanner(9).ID:                                                    return 6911;
		case LightBlueBanner::LightBlueBanner(10).ID:                                                   return 6912;
		case LightBlueBanner::LightBlueBanner(11).ID:                                                   return 6913;
		case LightBlueBanner::LightBlueBanner(12).ID:                                                   return 6914;
		case LightBlueBanner::LightBlueBanner(13).ID:                                                   return 6915;
		case LightBlueBanner::LightBlueBanner(14).ID:                                                   return 6916;
		case LightBlueBanner::LightBlueBanner(15).ID:                                                   return 6917;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZM, true, LightBlueBed::Part::Head).ID:  return 796;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZM, true, LightBlueBed::Part::Foot).ID:  return 797;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZM, false, LightBlueBed::Part::Head).ID: return 798;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZM, false, LightBlueBed::Part::Foot).ID: return 799;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZP, true, LightBlueBed::Part::Head).ID:  return 800;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZP, true, LightBlueBed::Part::Foot).ID:  return 801;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZP, false, LightBlueBed::Part::Head).ID: return 802;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_ZP, false, LightBlueBed::Part::Foot).ID: return 803;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XM, true, LightBlueBed::Part::Head).ID:  return 804;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XM, true, LightBlueBed::Part::Foot).ID:  return 805;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XM, false, LightBlueBed::Part::Head).ID: return 806;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XM, false, LightBlueBed::Part::Foot).ID: return 807;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XP, true, LightBlueBed::Part::Head).ID:  return 808;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XP, true, LightBlueBed::Part::Foot).ID:  return 809;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XP, false, LightBlueBed::Part::Head).ID: return 810;
		case LightBlueBed::LightBlueBed(eBlockFace::BLOCK_FACE_XP, false, LightBlueBed::Part::Foot).ID: return 811;
		case LightBlueCarpet::LightBlueCarpet().ID:                                                     return 6826;
		case LightBlueConcrete::LightBlueConcrete().ID:                                                 return 8380;
		case LightBlueConcretePowder::LightBlueConcretePowder().ID:                                     return 8396;
		case LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:        return 8325;
		case LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:        return 8326;
		case LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:        return 8327;
		case LightBlueGlazedTerracotta::LightBlueGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:        return 8328;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                    return 8235;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                    return 8236;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                    return 8237;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                    return 8238;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                    return 8239;
		case LightBlueShulkerBox::LightBlueShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                    return 8240;
		case LightBlueStainedGlass::LightBlueStainedGlass().ID:                                         return 3580;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, true, true, true).ID:           return 5918;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, true, true, false).ID:          return 5919;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, true, false, true).ID:          return 5922;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, true, false, false).ID:         return 5923;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, false, true, true).ID:          return 5926;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, false, true, false).ID:         return 5927;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, false, false, true).ID:         return 5930;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(true, false, false, false).ID:        return 5931;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, true, true, true).ID:          return 5934;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, true, true, false).ID:         return 5935;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, true, false, true).ID:         return 5938;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, true, false, false).ID:        return 5939;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, false, true, true).ID:         return 5942;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, false, true, false).ID:        return 5943;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, false, false, true).ID:        return 5946;
		case LightBlueStainedGlassPane::LightBlueStainedGlassPane(false, false, false, false).ID:       return 5947;
		case LightBlueTerracotta::LightBlueTerracotta().ID:                                             return 5807;
		case LightBlueWallBanner::LightBlueWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                    return 7122;
		case LightBlueWallBanner::LightBlueWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                    return 7123;
		case LightBlueWallBanner::LightBlueWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                    return 7124;
		case LightBlueWallBanner::LightBlueWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                    return 7125;
		case LightBlueWool::LightBlueWool().ID:                                                         return 1086;
		case LightGrayBanner::LightGrayBanner(0).ID:                                                    return 6982;
		case LightGrayBanner::LightGrayBanner(1).ID:                                                    return 6983;
		case LightGrayBanner::LightGrayBanner(2).ID:                                                    return 6984;
		case LightGrayBanner::LightGrayBanner(3).ID:                                                    return 6985;
		case LightGrayBanner::LightGrayBanner(4).ID:                                                    return 6986;
		case LightGrayBanner::LightGrayBanner(5).ID:                                                    return 6987;
		case LightGrayBanner::LightGrayBanner(6).ID:                                                    return 6988;
		case LightGrayBanner::LightGrayBanner(7).ID:                                                    return 6989;
		case LightGrayBanner::LightGrayBanner(8).ID:                                                    return 6990;
		case LightGrayBanner::LightGrayBanner(9).ID:                                                    return 6991;
		case LightGrayBanner::LightGrayBanner(10).ID:                                                   return 6992;
		case LightGrayBanner::LightGrayBanner(11).ID:                                                   return 6993;
		case LightGrayBanner::LightGrayBanner(12).ID:                                                   return 6994;
		case LightGrayBanner::LightGrayBanner(13).ID:                                                   return 6995;
		case LightGrayBanner::LightGrayBanner(14).ID:                                                   return 6996;
		case LightGrayBanner::LightGrayBanner(15).ID:                                                   return 6997;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZM, true, LightGrayBed::Part::Head).ID:  return 876;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZM, true, LightGrayBed::Part::Foot).ID:  return 877;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZM, false, LightGrayBed::Part::Head).ID: return 878;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZM, false, LightGrayBed::Part::Foot).ID: return 879;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZP, true, LightGrayBed::Part::Head).ID:  return 880;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZP, true, LightGrayBed::Part::Foot).ID:  return 881;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZP, false, LightGrayBed::Part::Head).ID: return 882;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_ZP, false, LightGrayBed::Part::Foot).ID: return 883;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XM, true, LightGrayBed::Part::Head).ID:  return 884;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XM, true, LightGrayBed::Part::Foot).ID:  return 885;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XM, false, LightGrayBed::Part::Head).ID: return 886;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XM, false, LightGrayBed::Part::Foot).ID: return 887;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XP, true, LightGrayBed::Part::Head).ID:  return 888;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XP, true, LightGrayBed::Part::Foot).ID:  return 889;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XP, false, LightGrayBed::Part::Head).ID: return 890;
		case LightGrayBed::LightGrayBed(eBlockFace::BLOCK_FACE_XP, false, LightGrayBed::Part::Foot).ID: return 891;
		case LightGrayCarpet::LightGrayCarpet().ID:                                                     return 6831;
		case LightGrayConcrete::LightGrayConcrete().ID:                                                 return 8385;
		case LightGrayConcretePowder::LightGrayConcretePowder().ID:                                     return 8401;
		case LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:        return 8345;
		case LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:        return 8346;
		case LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:        return 8347;
		case LightGrayGlazedTerracotta::LightGrayGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:        return 8348;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                    return 8265;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                    return 8266;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                    return 8267;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                    return 8268;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                    return 8269;
		case LightGrayShulkerBox::LightGrayShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                    return 8270;
		case LightGrayStainedGlass::LightGrayStainedGlass().ID:                                         return 3585;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, true, true, true).ID:           return 6078;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, true, true, false).ID:          return 6079;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, true, false, true).ID:          return 6082;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, true, false, false).ID:         return 6083;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, false, true, true).ID:          return 6086;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, false, true, false).ID:         return 6087;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, false, false, true).ID:         return 6090;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(true, false, false, false).ID:        return 6091;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, true, true, true).ID:          return 6094;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, true, true, false).ID:         return 6095;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, true, false, true).ID:         return 6098;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, true, false, false).ID:        return 6099;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, false, true, true).ID:         return 6102;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, false, true, false).ID:        return 6103;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, false, false, true).ID:        return 6106;
		case LightGrayStainedGlassPane::LightGrayStainedGlassPane(false, false, false, false).ID:       return 6107;
		case LightGrayTerracotta::LightGrayTerracotta().ID:                                             return 5812;
		case LightGrayWallBanner::LightGrayWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                    return 7142;
		case LightGrayWallBanner::LightGrayWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                    return 7143;
		case LightGrayWallBanner::LightGrayWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                    return 7144;
		case LightGrayWallBanner::LightGrayWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                    return 7145;
		case LightGrayWool::LightGrayWool().ID:                                                         return 1091;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(0).ID:                              return 5603;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(1).ID:                              return 5604;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(2).ID:                              return 5605;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(3).ID:                              return 5606;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(4).ID:                              return 5607;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(5).ID:                              return 5608;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(6).ID:                              return 5609;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(7).ID:                              return 5610;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(8).ID:                              return 5611;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(9).ID:                              return 5612;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(10).ID:                             return 5613;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(11).ID:                             return 5614;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(12).ID:                             return 5615;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(13).ID:                             return 5616;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(14).ID:                             return 5617;
		case LightWeightedPressurePlate::LightWeightedPressurePlate(15).ID:                             return 5618;
		case Lilac::Lilac(Lilac::Half::Upper).ID:                                                       return 6844;
		case Lilac::Lilac(Lilac::Half::Lower).ID:                                                       return 6845;
		case LilyPad::LilyPad().ID:                                                                     return 4494;
		case LimeBanner::LimeBanner(0).ID:                                                              return 6934;
		case LimeBanner::LimeBanner(1).ID:                                                              return 6935;
		case LimeBanner::LimeBanner(2).ID:                                                              return 6936;
		case LimeBanner::LimeBanner(3).ID:                                                              return 6937;
		case LimeBanner::LimeBanner(4).ID:                                                              return 6938;
		case LimeBanner::LimeBanner(5).ID:                                                              return 6939;
		case LimeBanner::LimeBanner(6).ID:                                                              return 6940;
		case LimeBanner::LimeBanner(7).ID:                                                              return 6941;
		case LimeBanner::LimeBanner(8).ID:                                                              return 6942;
		case LimeBanner::LimeBanner(9).ID:                                                              return 6943;
		case LimeBanner::LimeBanner(10).ID:                                                             return 6944;
		case LimeBanner::LimeBanner(11).ID:                                                             return 6945;
		case LimeBanner::LimeBanner(12).ID:                                                             return 6946;
		case LimeBanner::LimeBanner(13).ID:                                                             return 6947;
		case LimeBanner::LimeBanner(14).ID:                                                             return 6948;
		case LimeBanner::LimeBanner(15).ID:                                                             return 6949;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZM, true, LimeBed::Part::Head).ID:                 return 828;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZM, true, LimeBed::Part::Foot).ID:                 return 829;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZM, false, LimeBed::Part::Head).ID:                return 830;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZM, false, LimeBed::Part::Foot).ID:                return 831;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZP, true, LimeBed::Part::Head).ID:                 return 832;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZP, true, LimeBed::Part::Foot).ID:                 return 833;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZP, false, LimeBed::Part::Head).ID:                return 834;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_ZP, false, LimeBed::Part::Foot).ID:                return 835;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XM, true, LimeBed::Part::Head).ID:                 return 836;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XM, true, LimeBed::Part::Foot).ID:                 return 837;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XM, false, LimeBed::Part::Head).ID:                return 838;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XM, false, LimeBed::Part::Foot).ID:                return 839;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XP, true, LimeBed::Part::Head).ID:                 return 840;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XP, true, LimeBed::Part::Foot).ID:                 return 841;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XP, false, LimeBed::Part::Head).ID:                return 842;
		case LimeBed::LimeBed(eBlockFace::BLOCK_FACE_XP, false, LimeBed::Part::Foot).ID:                return 843;
		case LimeCarpet::LimeCarpet().ID:                                                               return 6828;
		case LimeConcrete::LimeConcrete().ID:                                                           return 8382;
		case LimeConcretePowder::LimeConcretePowder().ID:                                               return 8398;
		case LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:                  return 8333;
		case LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:                  return 8334;
		case LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:                  return 8335;
		case LimeGlazedTerracotta::LimeGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:                  return 8336;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                              return 8247;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                              return 8248;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                              return 8249;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                              return 8250;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                              return 8251;
		case LimeShulkerBox::LimeShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                              return 8252;
		case LimeStainedGlass::LimeStainedGlass().ID:                                                   return 3582;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, true, true, true).ID:                     return 5982;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, true, true, false).ID:                    return 5983;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, true, false, true).ID:                    return 5986;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, true, false, false).ID:                   return 5987;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, false, true, true).ID:                    return 5990;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, false, true, false).ID:                   return 5991;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, false, false, true).ID:                   return 5994;
		case LimeStainedGlassPane::LimeStainedGlassPane(true, false, false, false).ID:                  return 5995;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, true, true, true).ID:                    return 5998;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, true, true, false).ID:                   return 5999;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, true, false, true).ID:                   return 6002;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, true, false, false).ID:                  return 6003;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, false, true, true).ID:                   return 6006;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, false, true, false).ID:                  return 6007;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, false, false, true).ID:                  return 6010;
		case LimeStainedGlassPane::LimeStainedGlassPane(false, false, false, false).ID:                 return 6011;
		case LimeTerracotta::LimeTerracotta().ID:                                                       return 5809;
		case LimeWallBanner::LimeWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                              return 7130;
		case LimeWallBanner::LimeWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                              return 7131;
		case LimeWallBanner::LimeWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                              return 7132;
		case LimeWallBanner::LimeWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                              return 7133;
		case LimeWool::LimeWool().ID:                                                                   return 1088;
		case MagentaBanner::MagentaBanner(0).ID:                                                        return 6886;
		case MagentaBanner::MagentaBanner(1).ID:                                                        return 6887;
		case MagentaBanner::MagentaBanner(2).ID:                                                        return 6888;
		case MagentaBanner::MagentaBanner(3).ID:                                                        return 6889;
		case MagentaBanner::MagentaBanner(4).ID:                                                        return 6890;
		case MagentaBanner::MagentaBanner(5).ID:                                                        return 6891;
		case MagentaBanner::MagentaBanner(6).ID:                                                        return 6892;
		case MagentaBanner::MagentaBanner(7).ID:                                                        return 6893;
		case MagentaBanner::MagentaBanner(8).ID:                                                        return 6894;
		case MagentaBanner::MagentaBanner(9).ID:                                                        return 6895;
		case MagentaBanner::MagentaBanner(10).ID:                                                       return 6896;
		case MagentaBanner::MagentaBanner(11).ID:                                                       return 6897;
		case MagentaBanner::MagentaBanner(12).ID:                                                       return 6898;
		case MagentaBanner::MagentaBanner(13).ID:                                                       return 6899;
		case MagentaBanner::MagentaBanner(14).ID:                                                       return 6900;
		case MagentaBanner::MagentaBanner(15).ID:                                                       return 6901;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZM, true, MagentaBed::Part::Head).ID:        return 780;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZM, true, MagentaBed::Part::Foot).ID:        return 781;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZM, false, MagentaBed::Part::Head).ID:       return 782;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZM, false, MagentaBed::Part::Foot).ID:       return 783;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZP, true, MagentaBed::Part::Head).ID:        return 784;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZP, true, MagentaBed::Part::Foot).ID:        return 785;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZP, false, MagentaBed::Part::Head).ID:       return 786;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_ZP, false, MagentaBed::Part::Foot).ID:       return 787;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XM, true, MagentaBed::Part::Head).ID:        return 788;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XM, true, MagentaBed::Part::Foot).ID:        return 789;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XM, false, MagentaBed::Part::Head).ID:       return 790;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XM, false, MagentaBed::Part::Foot).ID:       return 791;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XP, true, MagentaBed::Part::Head).ID:        return 792;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XP, true, MagentaBed::Part::Foot).ID:        return 793;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XP, false, MagentaBed::Part::Head).ID:       return 794;
		case MagentaBed::MagentaBed(eBlockFace::BLOCK_FACE_XP, false, MagentaBed::Part::Foot).ID:       return 795;
		case MagentaCarpet::MagentaCarpet().ID:                                                         return 6825;
		case MagentaConcrete::MagentaConcrete().ID:                                                     return 8379;
		case MagentaConcretePowder::MagentaConcretePowder().ID:                                         return 8395;
		case MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:            return 8321;
		case MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:            return 8322;
		case MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:            return 8323;
		case MagentaGlazedTerracotta::MagentaGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:            return 8324;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                        return 8229;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                        return 8230;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                        return 8231;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                        return 8232;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                        return 8233;
		case MagentaShulkerBox::MagentaShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                        return 8234;
		case MagentaStainedGlass::MagentaStainedGlass().ID:                                             return 3579;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, true, true, true).ID:               return 5886;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, true, true, false).ID:              return 5887;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, true, false, true).ID:              return 5890;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, true, false, false).ID:             return 5891;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, false, true, true).ID:              return 5894;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, false, true, false).ID:             return 5895;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, false, false, true).ID:             return 5898;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(true, false, false, false).ID:            return 5899;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, true, true, true).ID:              return 5902;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, true, true, false).ID:             return 5903;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, true, false, true).ID:             return 5906;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, true, false, false).ID:            return 5907;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, false, true, true).ID:             return 5910;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, false, true, false).ID:            return 5911;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, false, false, true).ID:            return 5914;
		case MagentaStainedGlassPane::MagentaStainedGlassPane(false, false, false, false).ID:           return 5915;
		case MagentaTerracotta::MagentaTerracotta().ID:                                                 return 5806;
		case MagentaWallBanner::MagentaWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                        return 7118;
		case MagentaWallBanner::MagentaWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                        return 7119;
		case MagentaWallBanner::MagentaWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                        return 7120;
		case MagentaWallBanner::MagentaWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                        return 7121;
		case MagentaWool::MagentaWool().ID:                                                             return 1085;
		case MagmaBlock::MagmaBlock().ID:                                                               return 8192;
		case Melon::Melon().ID:                                                                         return 4243;
		case MelonStem::MelonStem(0).ID:                                                                return 4260;
		case MelonStem::MelonStem(1).ID:                                                                return 4261;
		case MelonStem::MelonStem(2).ID:                                                                return 4262;
		case MelonStem::MelonStem(3).ID:                                                                return 4263;
		case MelonStem::MelonStem(4).ID:                                                                return 4264;
		case MelonStem::MelonStem(5).ID:                                                                return 4265;
		case MelonStem::MelonStem(6).ID:                                                                return 4266;
		case MelonStem::MelonStem(7).ID:                                                                return 4267;
		case MossyCobblestone::MossyCobblestone().ID:                                                   return 1128;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5203;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5204;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5207;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5208;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5211;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5212;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5215;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5216;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5219;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5220;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5223;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5224;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5227;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5228;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5231;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::Low,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5232;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5235;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5236;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5239;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5240;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5243;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5244;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5247;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::Low,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5248;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5251;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5252;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5255;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::Low,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5256;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5259;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			true,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5260;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::Low
		)
			.ID:
			return 5263;
		case MossyCobblestoneWall::MossyCobblestoneWall(
			MossyCobblestoneWall::East::None,
			MossyCobblestoneWall::North::None,
			MossyCobblestoneWall::South::None,
			false,
			MossyCobblestoneWall::West::None
		)
			.ID:
			return 5264;
		case MossyStoneBricks::MossyStoneBricks().ID:                                              return 3984;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZM, MovingPiston::Type::Normal).ID: return 1099;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZM, MovingPiston::Type::Sticky).ID: return 1100;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XP, MovingPiston::Type::Normal).ID: return 1101;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XP, MovingPiston::Type::Sticky).ID: return 1102;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZP, MovingPiston::Type::Normal).ID: return 1103;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_ZP, MovingPiston::Type::Sticky).ID: return 1104;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XM, MovingPiston::Type::Normal).ID: return 1105;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_XM, MovingPiston::Type::Sticky).ID: return 1106;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YP, MovingPiston::Type::Normal).ID: return 1107;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YP, MovingPiston::Type::Sticky).ID: return 1108;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YM, MovingPiston::Type::Normal).ID: return 1109;
		case MovingPiston::MovingPiston(eBlockFace::BLOCK_FACE_YM, MovingPiston::Type::Sticky).ID: return 1110;
		case MushroomStem::MushroomStem(true, true, true, true, true, true).ID:                    return 4115;
		case MushroomStem::MushroomStem(true, true, true, true, true, false).ID:                   return 4116;
		case MushroomStem::MushroomStem(true, true, true, true, false, true).ID:                   return 4117;
		case MushroomStem::MushroomStem(true, true, true, true, false, false).ID:                  return 4118;
		case MushroomStem::MushroomStem(true, true, true, false, true, true).ID:                   return 4119;
		case MushroomStem::MushroomStem(true, true, true, false, true, false).ID:                  return 4120;
		case MushroomStem::MushroomStem(true, true, true, false, false, true).ID:                  return 4121;
		case MushroomStem::MushroomStem(true, true, true, false, false, false).ID:                 return 4122;
		case MushroomStem::MushroomStem(true, true, false, true, true, true).ID:                   return 4123;
		case MushroomStem::MushroomStem(true, true, false, true, true, false).ID:                  return 4124;
		case MushroomStem::MushroomStem(true, true, false, true, false, true).ID:                  return 4125;
		case MushroomStem::MushroomStem(true, true, false, true, false, false).ID:                 return 4126;
		case MushroomStem::MushroomStem(true, true, false, false, true, true).ID:                  return 4127;
		case MushroomStem::MushroomStem(true, true, false, false, true, false).ID:                 return 4128;
		case MushroomStem::MushroomStem(true, true, false, false, false, true).ID:                 return 4129;
		case MushroomStem::MushroomStem(true, true, false, false, false, false).ID:                return 4130;
		case MushroomStem::MushroomStem(true, false, true, true, true, true).ID:                   return 4131;
		case MushroomStem::MushroomStem(true, false, true, true, true, false).ID:                  return 4132;
		case MushroomStem::MushroomStem(true, false, true, true, false, true).ID:                  return 4133;
		case MushroomStem::MushroomStem(true, false, true, true, false, false).ID:                 return 4134;
		case MushroomStem::MushroomStem(true, false, true, false, true, true).ID:                  return 4135;
		case MushroomStem::MushroomStem(true, false, true, false, true, false).ID:                 return 4136;
		case MushroomStem::MushroomStem(true, false, true, false, false, true).ID:                 return 4137;
		case MushroomStem::MushroomStem(true, false, true, false, false, false).ID:                return 4138;
		case MushroomStem::MushroomStem(true, false, false, true, true, true).ID:                  return 4139;
		case MushroomStem::MushroomStem(true, false, false, true, true, false).ID:                 return 4140;
		case MushroomStem::MushroomStem(true, false, false, true, false, true).ID:                 return 4141;
		case MushroomStem::MushroomStem(true, false, false, true, false, false).ID:                return 4142;
		case MushroomStem::MushroomStem(true, false, false, false, true, true).ID:                 return 4143;
		case MushroomStem::MushroomStem(true, false, false, false, true, false).ID:                return 4144;
		case MushroomStem::MushroomStem(true, false, false, false, false, true).ID:                return 4145;
		case MushroomStem::MushroomStem(true, false, false, false, false, false).ID:               return 4146;
		case MushroomStem::MushroomStem(false, true, true, true, true, true).ID:                   return 4147;
		case MushroomStem::MushroomStem(false, true, true, true, true, false).ID:                  return 4148;
		case MushroomStem::MushroomStem(false, true, true, true, false, true).ID:                  return 4149;
		case MushroomStem::MushroomStem(false, true, true, true, false, false).ID:                 return 4150;
		case MushroomStem::MushroomStem(false, true, true, false, true, true).ID:                  return 4151;
		case MushroomStem::MushroomStem(false, true, true, false, true, false).ID:                 return 4152;
		case MushroomStem::MushroomStem(false, true, true, false, false, true).ID:                 return 4153;
		case MushroomStem::MushroomStem(false, true, true, false, false, false).ID:                return 4154;
		case MushroomStem::MushroomStem(false, true, false, true, true, true).ID:                  return 4155;
		case MushroomStem::MushroomStem(false, true, false, true, true, false).ID:                 return 4156;
		case MushroomStem::MushroomStem(false, true, false, true, false, true).ID:                 return 4157;
		case MushroomStem::MushroomStem(false, true, false, true, false, false).ID:                return 4158;
		case MushroomStem::MushroomStem(false, true, false, false, true, true).ID:                 return 4159;
		case MushroomStem::MushroomStem(false, true, false, false, true, false).ID:                return 4160;
		case MushroomStem::MushroomStem(false, true, false, false, false, true).ID:                return 4161;
		case MushroomStem::MushroomStem(false, true, false, false, false, false).ID:               return 4162;
		case MushroomStem::MushroomStem(false, false, true, true, true, true).ID:                  return 4163;
		case MushroomStem::MushroomStem(false, false, true, true, true, false).ID:                 return 4164;
		case MushroomStem::MushroomStem(false, false, true, true, false, true).ID:                 return 4165;
		case MushroomStem::MushroomStem(false, false, true, true, false, false).ID:                return 4166;
		case MushroomStem::MushroomStem(false, false, true, false, true, true).ID:                 return 4167;
		case MushroomStem::MushroomStem(false, false, true, false, true, false).ID:                return 4168;
		case MushroomStem::MushroomStem(false, false, true, false, false, true).ID:                return 4169;
		case MushroomStem::MushroomStem(false, false, true, false, false, false).ID:               return 4170;
		case MushroomStem::MushroomStem(false, false, false, true, true, true).ID:                 return 4171;
		case MushroomStem::MushroomStem(false, false, false, true, true, false).ID:                return 4172;
		case MushroomStem::MushroomStem(false, false, false, true, false, true).ID:                return 4173;
		case MushroomStem::MushroomStem(false, false, false, true, false, false).ID:               return 4174;
		case MushroomStem::MushroomStem(false, false, false, false, true, true).ID:                return 4175;
		case MushroomStem::MushroomStem(false, false, false, false, true, false).ID:               return 4176;
		case MushroomStem::MushroomStem(false, false, false, false, false, true).ID:               return 4177;
		case MushroomStem::MushroomStem(false, false, false, false, false, false).ID:              return 4178;
		case Mycelium::Mycelium(true).ID:                                                          return 4492;
		case Mycelium::Mycelium(false).ID:                                                         return 4493;
		case NetherBrickFence::NetherBrickFence(true, true, true, true).ID:                        return 4498;
		case NetherBrickFence::NetherBrickFence(true, true, true, false).ID:                       return 4499;
		case NetherBrickFence::NetherBrickFence(true, true, false, true).ID:                       return 4502;
		case NetherBrickFence::NetherBrickFence(true, true, false, false).ID:                      return 4503;
		case NetherBrickFence::NetherBrickFence(true, false, true, true).ID:                       return 4506;
		case NetherBrickFence::NetherBrickFence(true, false, true, false).ID:                      return 4507;
		case NetherBrickFence::NetherBrickFence(true, false, false, true).ID:                      return 4510;
		case NetherBrickFence::NetherBrickFence(true, false, false, false).ID:                     return 4511;
		case NetherBrickFence::NetherBrickFence(false, true, true, true).ID:                       return 4514;
		case NetherBrickFence::NetherBrickFence(false, true, true, false).ID:                      return 4515;
		case NetherBrickFence::NetherBrickFence(false, true, false, true).ID:                      return 4518;
		case NetherBrickFence::NetherBrickFence(false, true, false, false).ID:                     return 4519;
		case NetherBrickFence::NetherBrickFence(false, false, true, true).ID:                      return 4522;
		case NetherBrickFence::NetherBrickFence(false, false, true, false).ID:                     return 4523;
		case NetherBrickFence::NetherBrickFence(false, false, false, true).ID:                     return 4526;
		case NetherBrickFence::NetherBrickFence(false, false, false, false).ID:                    return 4527;
		case NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Top).ID:                      return 7330;
		case NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Bottom).ID:                   return 7332;
		case NetherBrickSlab::NetherBrickSlab(NetherBrickSlab::Type::Double).ID:                   return 7334;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4529;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4531;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4533;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4535;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4537;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4539;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4541;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4543;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4545;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4547;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4549;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4551;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4553;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4555;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4557;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4559;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4561;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4563;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4565;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4567;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4569;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4571;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4573;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4575;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4577;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4579;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4581;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4583;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4585;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4587;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4589;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4591;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4593;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4595;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Top,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4597;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::Straight
		)
			.ID:
			return 4599;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4601;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4603;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4605;
		case NetherBrickStairs::NetherBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			NetherBrickStairs::Half::Bottom,
			NetherBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4607;
		case NetherBricks::NetherBricks().ID:                                                     return 4495;
		case NetherPortal::NetherPortal(NetherPortal::Axis::X).ID:                                return 3496;
		case NetherPortal::NetherPortal(NetherPortal::Axis::Z).ID:                                return 3497;
		case NetherQuartzOre::NetherQuartzOre().ID:                                               return 5684;
		case NetherWart::NetherWart(0).ID:                                                        return 4608;
		case NetherWart::NetherWart(1).ID:                                                        return 4609;
		case NetherWart::NetherWart(2).ID:                                                        return 4610;
		case NetherWart::NetherWart(3).ID:                                                        return 4611;
		case NetherWartBlock::NetherWartBlock().ID:                                               return 8193;
		case Netherrack::Netherrack().ID:                                                         return 3493;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 0, true).ID:                       return 248;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 0, false).ID:                      return 249;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 1, true).ID:                       return 250;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 1, false).ID:                      return 251;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 2, true).ID:                       return 252;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 2, false).ID:                      return 253;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 3, true).ID:                       return 254;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 3, false).ID:                      return 255;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 4, true).ID:                       return 256;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 4, false).ID:                      return 257;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 5, true).ID:                       return 258;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 5, false).ID:                      return 259;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 6, true).ID:                       return 260;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 6, false).ID:                      return 261;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 7, true).ID:                       return 262;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 7, false).ID:                      return 263;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 8, true).ID:                       return 264;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 8, false).ID:                      return 265;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 9, true).ID:                       return 266;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 9, false).ID:                      return 267;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 10, true).ID:                      return 268;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 10, false).ID:                     return 269;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 11, true).ID:                      return 270;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 11, false).ID:                     return 271;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 12, true).ID:                      return 272;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 12, false).ID:                     return 273;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 13, true).ID:                      return 274;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 13, false).ID:                     return 275;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 14, true).ID:                      return 276;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 14, false).ID:                     return 277;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 15, true).ID:                      return 278;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 15, false).ID:                     return 279;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 16, true).ID:                      return 280;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 16, false).ID:                     return 281;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 17, true).ID:                      return 282;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 17, false).ID:                     return 283;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 18, true).ID:                      return 284;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 18, false).ID:                     return 285;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 19, true).ID:                      return 286;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 19, false).ID:                     return 287;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 20, true).ID:                      return 288;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 20, false).ID:                     return 289;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 21, true).ID:                      return 290;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 21, false).ID:                     return 291;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 22, true).ID:                      return 292;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 22, false).ID:                     return 293;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 23, true).ID:                      return 294;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 23, false).ID:                     return 295;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 24, true).ID:                      return 296;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Harp, 24, false).ID:                     return 297;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 0, true).ID:                   return 298;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 0, false).ID:                  return 299;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 1, true).ID:                   return 300;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 1, false).ID:                  return 301;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 2, true).ID:                   return 302;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 2, false).ID:                  return 303;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 3, true).ID:                   return 304;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 3, false).ID:                  return 305;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 4, true).ID:                   return 306;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 4, false).ID:                  return 307;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 5, true).ID:                   return 308;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 5, false).ID:                  return 309;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 6, true).ID:                   return 310;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 6, false).ID:                  return 311;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 7, true).ID:                   return 312;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 7, false).ID:                  return 313;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 8, true).ID:                   return 314;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 8, false).ID:                  return 315;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 9, true).ID:                   return 316;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 9, false).ID:                  return 317;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 10, true).ID:                  return 318;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 10, false).ID:                 return 319;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 11, true).ID:                  return 320;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 11, false).ID:                 return 321;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 12, true).ID:                  return 322;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 12, false).ID:                 return 323;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 13, true).ID:                  return 324;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 13, false).ID:                 return 325;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 14, true).ID:                  return 326;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 14, false).ID:                 return 327;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 15, true).ID:                  return 328;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 15, false).ID:                 return 329;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 16, true).ID:                  return 330;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 16, false).ID:                 return 331;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 17, true).ID:                  return 332;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 17, false).ID:                 return 333;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 18, true).ID:                  return 334;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 18, false).ID:                 return 335;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 19, true).ID:                  return 336;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 19, false).ID:                 return 337;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 20, true).ID:                  return 338;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 20, false).ID:                 return 339;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 21, true).ID:                  return 340;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 21, false).ID:                 return 341;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 22, true).ID:                  return 342;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 22, false).ID:                 return 343;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 23, true).ID:                  return 344;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 23, false).ID:                 return 345;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 24, true).ID:                  return 346;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Basedrum, 24, false).ID:                 return 347;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 0, true).ID:                      return 348;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 0, false).ID:                     return 349;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 1, true).ID:                      return 350;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 1, false).ID:                     return 351;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 2, true).ID:                      return 352;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 2, false).ID:                     return 353;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 3, true).ID:                      return 354;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 3, false).ID:                     return 355;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 4, true).ID:                      return 356;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 4, false).ID:                     return 357;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 5, true).ID:                      return 358;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 5, false).ID:                     return 359;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 6, true).ID:                      return 360;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 6, false).ID:                     return 361;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 7, true).ID:                      return 362;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 7, false).ID:                     return 363;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 8, true).ID:                      return 364;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 8, false).ID:                     return 365;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 9, true).ID:                      return 366;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 9, false).ID:                     return 367;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 10, true).ID:                     return 368;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 10, false).ID:                    return 369;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 11, true).ID:                     return 370;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 11, false).ID:                    return 371;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 12, true).ID:                     return 372;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 12, false).ID:                    return 373;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 13, true).ID:                     return 374;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 13, false).ID:                    return 375;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 14, true).ID:                     return 376;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 14, false).ID:                    return 377;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 15, true).ID:                     return 378;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 15, false).ID:                    return 379;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 16, true).ID:                     return 380;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 16, false).ID:                    return 381;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 17, true).ID:                     return 382;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 17, false).ID:                    return 383;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 18, true).ID:                     return 384;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 18, false).ID:                    return 385;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 19, true).ID:                     return 386;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 19, false).ID:                    return 387;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 20, true).ID:                     return 388;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 20, false).ID:                    return 389;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 21, true).ID:                     return 390;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 21, false).ID:                    return 391;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 22, true).ID:                     return 392;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 22, false).ID:                    return 393;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 23, true).ID:                     return 394;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 23, false).ID:                    return 395;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 24, true).ID:                     return 396;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Snare, 24, false).ID:                    return 397;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 0, true).ID:                        return 398;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 0, false).ID:                       return 399;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 1, true).ID:                        return 400;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 1, false).ID:                       return 401;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 2, true).ID:                        return 402;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 2, false).ID:                       return 403;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 3, true).ID:                        return 404;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 3, false).ID:                       return 405;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 4, true).ID:                        return 406;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 4, false).ID:                       return 407;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 5, true).ID:                        return 408;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 5, false).ID:                       return 409;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 6, true).ID:                        return 410;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 6, false).ID:                       return 411;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 7, true).ID:                        return 412;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 7, false).ID:                       return 413;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 8, true).ID:                        return 414;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 8, false).ID:                       return 415;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 9, true).ID:                        return 416;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 9, false).ID:                       return 417;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 10, true).ID:                       return 418;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 10, false).ID:                      return 419;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 11, true).ID:                       return 420;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 11, false).ID:                      return 421;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 12, true).ID:                       return 422;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 12, false).ID:                      return 423;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 13, true).ID:                       return 424;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 13, false).ID:                      return 425;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 14, true).ID:                       return 426;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 14, false).ID:                      return 427;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 15, true).ID:                       return 428;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 15, false).ID:                      return 429;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 16, true).ID:                       return 430;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 16, false).ID:                      return 431;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 17, true).ID:                       return 432;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 17, false).ID:                      return 433;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 18, true).ID:                       return 434;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 18, false).ID:                      return 435;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 19, true).ID:                       return 436;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 19, false).ID:                      return 437;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 20, true).ID:                       return 438;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 20, false).ID:                      return 439;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 21, true).ID:                       return 440;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 21, false).ID:                      return 441;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 22, true).ID:                       return 442;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 22, false).ID:                      return 443;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 23, true).ID:                       return 444;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 23, false).ID:                      return 445;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 24, true).ID:                       return 446;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Hat, 24, false).ID:                      return 447;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 0, true).ID:                       return 448;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 0, false).ID:                      return 449;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 1, true).ID:                       return 450;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 1, false).ID:                      return 451;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 2, true).ID:                       return 452;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 2, false).ID:                      return 453;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 3, true).ID:                       return 454;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 3, false).ID:                      return 455;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 4, true).ID:                       return 456;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 4, false).ID:                      return 457;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 5, true).ID:                       return 458;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 5, false).ID:                      return 459;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 6, true).ID:                       return 460;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 6, false).ID:                      return 461;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 7, true).ID:                       return 462;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 7, false).ID:                      return 463;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 8, true).ID:                       return 464;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 8, false).ID:                      return 465;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 9, true).ID:                       return 466;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 9, false).ID:                      return 467;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 10, true).ID:                      return 468;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 10, false).ID:                     return 469;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 11, true).ID:                      return 470;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 11, false).ID:                     return 471;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 12, true).ID:                      return 472;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 12, false).ID:                     return 473;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 13, true).ID:                      return 474;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 13, false).ID:                     return 475;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 14, true).ID:                      return 476;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 14, false).ID:                     return 477;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 15, true).ID:                      return 478;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 15, false).ID:                     return 479;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 16, true).ID:                      return 480;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 16, false).ID:                     return 481;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 17, true).ID:                      return 482;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 17, false).ID:                     return 483;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 18, true).ID:                      return 484;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 18, false).ID:                     return 485;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 19, true).ID:                      return 486;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 19, false).ID:                     return 487;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 20, true).ID:                      return 488;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 20, false).ID:                     return 489;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 21, true).ID:                      return 490;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 21, false).ID:                     return 491;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 22, true).ID:                      return 492;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 22, false).ID:                     return 493;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 23, true).ID:                      return 494;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 23, false).ID:                     return 495;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 24, true).ID:                      return 496;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bass, 24, false).ID:                     return 497;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 0, true).ID:                      return 498;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 0, false).ID:                     return 499;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 1, true).ID:                      return 500;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 1, false).ID:                     return 501;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 2, true).ID:                      return 502;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 2, false).ID:                     return 503;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 3, true).ID:                      return 504;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 3, false).ID:                     return 505;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 4, true).ID:                      return 506;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 4, false).ID:                     return 507;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 5, true).ID:                      return 508;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 5, false).ID:                     return 509;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 6, true).ID:                      return 510;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 6, false).ID:                     return 511;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 7, true).ID:                      return 512;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 7, false).ID:                     return 513;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 8, true).ID:                      return 514;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 8, false).ID:                     return 515;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 9, true).ID:                      return 516;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 9, false).ID:                     return 517;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 10, true).ID:                     return 518;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 10, false).ID:                    return 519;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 11, true).ID:                     return 520;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 11, false).ID:                    return 521;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 12, true).ID:                     return 522;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 12, false).ID:                    return 523;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 13, true).ID:                     return 524;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 13, false).ID:                    return 525;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 14, true).ID:                     return 526;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 14, false).ID:                    return 527;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 15, true).ID:                     return 528;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 15, false).ID:                    return 529;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 16, true).ID:                     return 530;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 16, false).ID:                    return 531;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 17, true).ID:                     return 532;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 17, false).ID:                    return 533;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 18, true).ID:                     return 534;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 18, false).ID:                    return 535;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 19, true).ID:                     return 536;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 19, false).ID:                    return 537;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 20, true).ID:                     return 538;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 20, false).ID:                    return 539;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 21, true).ID:                     return 540;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 21, false).ID:                    return 541;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 22, true).ID:                     return 542;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 22, false).ID:                    return 543;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 23, true).ID:                     return 544;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 23, false).ID:                    return 545;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 24, true).ID:                     return 546;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Flute, 24, false).ID:                    return 547;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 0, true).ID:                       return 548;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 0, false).ID:                      return 549;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 1, true).ID:                       return 550;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 1, false).ID:                      return 551;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 2, true).ID:                       return 552;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 2, false).ID:                      return 553;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 3, true).ID:                       return 554;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 3, false).ID:                      return 555;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 4, true).ID:                       return 556;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 4, false).ID:                      return 557;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 5, true).ID:                       return 558;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 5, false).ID:                      return 559;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 6, true).ID:                       return 560;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 6, false).ID:                      return 561;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 7, true).ID:                       return 562;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 7, false).ID:                      return 563;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 8, true).ID:                       return 564;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 8, false).ID:                      return 565;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 9, true).ID:                       return 566;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 9, false).ID:                      return 567;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 10, true).ID:                      return 568;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 10, false).ID:                     return 569;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 11, true).ID:                      return 570;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 11, false).ID:                     return 571;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 12, true).ID:                      return 572;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 12, false).ID:                     return 573;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 13, true).ID:                      return 574;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 13, false).ID:                     return 575;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 14, true).ID:                      return 576;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 14, false).ID:                     return 577;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 15, true).ID:                      return 578;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 15, false).ID:                     return 579;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 16, true).ID:                      return 580;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 16, false).ID:                     return 581;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 17, true).ID:                      return 582;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 17, false).ID:                     return 583;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 18, true).ID:                      return 584;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 18, false).ID:                     return 585;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 19, true).ID:                      return 586;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 19, false).ID:                     return 587;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 20, true).ID:                      return 588;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 20, false).ID:                     return 589;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 21, true).ID:                      return 590;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 21, false).ID:                     return 591;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 22, true).ID:                      return 592;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 22, false).ID:                     return 593;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 23, true).ID:                      return 594;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 23, false).ID:                     return 595;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 24, true).ID:                      return 596;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Bell, 24, false).ID:                     return 597;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 0, true).ID:                     return 598;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 0, false).ID:                    return 599;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 1, true).ID:                     return 600;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 1, false).ID:                    return 601;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 2, true).ID:                     return 602;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 2, false).ID:                    return 603;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 3, true).ID:                     return 604;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 3, false).ID:                    return 605;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 4, true).ID:                     return 606;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 4, false).ID:                    return 607;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 5, true).ID:                     return 608;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 5, false).ID:                    return 609;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 6, true).ID:                     return 610;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 6, false).ID:                    return 611;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 7, true).ID:                     return 612;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 7, false).ID:                    return 613;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 8, true).ID:                     return 614;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 8, false).ID:                    return 615;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 9, true).ID:                     return 616;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 9, false).ID:                    return 617;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 10, true).ID:                    return 618;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 10, false).ID:                   return 619;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 11, true).ID:                    return 620;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 11, false).ID:                   return 621;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 12, true).ID:                    return 622;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 12, false).ID:                   return 623;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 13, true).ID:                    return 624;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 13, false).ID:                   return 625;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 14, true).ID:                    return 626;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 14, false).ID:                   return 627;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 15, true).ID:                    return 628;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 15, false).ID:                   return 629;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 16, true).ID:                    return 630;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 16, false).ID:                   return 631;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 17, true).ID:                    return 632;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 17, false).ID:                   return 633;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 18, true).ID:                    return 634;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 18, false).ID:                   return 635;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 19, true).ID:                    return 636;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 19, false).ID:                   return 637;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 20, true).ID:                    return 638;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 20, false).ID:                   return 639;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 21, true).ID:                    return 640;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 21, false).ID:                   return 641;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 22, true).ID:                    return 642;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 22, false).ID:                   return 643;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 23, true).ID:                    return 644;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 23, false).ID:                   return 645;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 24, true).ID:                    return 646;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Guitar, 24, false).ID:                   return 647;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 0, true).ID:                      return 648;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 0, false).ID:                     return 649;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 1, true).ID:                      return 650;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 1, false).ID:                     return 651;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 2, true).ID:                      return 652;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 2, false).ID:                     return 653;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 3, true).ID:                      return 654;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 3, false).ID:                     return 655;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 4, true).ID:                      return 656;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 4, false).ID:                     return 657;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 5, true).ID:                      return 658;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 5, false).ID:                     return 659;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 6, true).ID:                      return 660;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 6, false).ID:                     return 661;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 7, true).ID:                      return 662;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 7, false).ID:                     return 663;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 8, true).ID:                      return 664;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 8, false).ID:                     return 665;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 9, true).ID:                      return 666;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 9, false).ID:                     return 667;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 10, true).ID:                     return 668;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 10, false).ID:                    return 669;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 11, true).ID:                     return 670;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 11, false).ID:                    return 671;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 12, true).ID:                     return 672;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 12, false).ID:                    return 673;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 13, true).ID:                     return 674;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 13, false).ID:                    return 675;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 14, true).ID:                     return 676;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 14, false).ID:                    return 677;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 15, true).ID:                     return 678;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 15, false).ID:                    return 679;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 16, true).ID:                     return 680;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 16, false).ID:                    return 681;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 17, true).ID:                     return 682;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 17, false).ID:                    return 683;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 18, true).ID:                     return 684;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 18, false).ID:                    return 685;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 19, true).ID:                     return 686;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 19, false).ID:                    return 687;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 20, true).ID:                     return 688;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 20, false).ID:                    return 689;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 21, true).ID:                     return 690;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 21, false).ID:                    return 691;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 22, true).ID:                     return 692;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 22, false).ID:                    return 693;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 23, true).ID:                     return 694;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 23, false).ID:                    return 695;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 24, true).ID:                     return 696;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Chime, 24, false).ID:                    return 697;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 0, true).ID:                  return 698;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 0, false).ID:                 return 699;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 1, true).ID:                  return 700;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 1, false).ID:                 return 701;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 2, true).ID:                  return 702;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 2, false).ID:                 return 703;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 3, true).ID:                  return 704;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 3, false).ID:                 return 705;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 4, true).ID:                  return 706;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 4, false).ID:                 return 707;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 5, true).ID:                  return 708;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 5, false).ID:                 return 709;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 6, true).ID:                  return 710;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 6, false).ID:                 return 711;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 7, true).ID:                  return 712;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 7, false).ID:                 return 713;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 8, true).ID:                  return 714;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 8, false).ID:                 return 715;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 9, true).ID:                  return 716;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 9, false).ID:                 return 717;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 10, true).ID:                 return 718;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 10, false).ID:                return 719;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 11, true).ID:                 return 720;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 11, false).ID:                return 721;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 12, true).ID:                 return 722;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 12, false).ID:                return 723;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 13, true).ID:                 return 724;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 13, false).ID:                return 725;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 14, true).ID:                 return 726;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 14, false).ID:                return 727;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 15, true).ID:                 return 728;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 15, false).ID:                return 729;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 16, true).ID:                 return 730;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 16, false).ID:                return 731;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 17, true).ID:                 return 732;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 17, false).ID:                return 733;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 18, true).ID:                 return 734;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 18, false).ID:                return 735;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 19, true).ID:                 return 736;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 19, false).ID:                return 737;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 20, true).ID:                 return 738;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 20, false).ID:                return 739;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 21, true).ID:                 return 740;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 21, false).ID:                return 741;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 22, true).ID:                 return 742;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 22, false).ID:                return 743;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 23, true).ID:                 return 744;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 23, false).ID:                return 745;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 24, true).ID:                 return 746;
		case NoteBlock::NoteBlock(NoteBlock::Instrument::Xylophone, 24, false).ID:                return 747;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 5303;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 5304;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 5305;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 5306;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 5307;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 5308;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 5309;
		case OakButton::OakButton(OakButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 5310;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 5311;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 5312;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 5313;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 5314;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 5315;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 5316;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 5317;
		case OakButton::OakButton(OakButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 5318;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5319;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5320;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5321;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5322;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5323;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 5324;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5325;
		case OakButton::OakButton(OakButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 5326;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, true).ID:
			return 3107;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false).ID:
			return 3108;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, true).ID:
			return 3109;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, false).ID:
			return 3110;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, true).ID:
			return 3111;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, false).ID:
			return 3112;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, true).ID:
			return 3113;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, false).ID:
			return 3114;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, true).ID:
			return 3115;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, false).ID:
			return 3116;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, true).ID:
			return 3117;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, false).ID:
			return 3118;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, true).ID:
			return 3119;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, false).ID:
			return 3120;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, true).ID:
			return 3121;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZM, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, false).ID:
			return 3122;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, true).ID:
			return 3123;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false).ID:
			return 3124;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, true).ID:
			return 3125;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, false).ID:
			return 3126;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, true).ID:
			return 3127;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, false).ID:
			return 3128;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, true).ID:
			return 3129;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, false).ID:
			return 3130;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, true).ID:
			return 3131;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, false).ID:
			return 3132;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, true).ID:
			return 3133;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, false).ID:
			return 3134;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, true).ID:
			return 3135;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, false).ID:
			return 3136;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, true).ID:
			return 3137;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_ZP, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, false).ID:
			return 3138;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, true).ID:
			return 3139;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false).ID:
			return 3140;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, true).ID:
			return 3141;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, false).ID:
			return 3142;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, true).ID:
			return 3143;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, false).ID:
			return 3144;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, true).ID:
			return 3145;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, false).ID:
			return 3146;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, true).ID:
			return 3147;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, false).ID:
			return 3148;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, true).ID:
			return 3149;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, false).ID:
			return 3150;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, true).ID:
			return 3151;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, false).ID:
			return 3152;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, true).ID:
			return 3153;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XM, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, false).ID:
			return 3154;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, true).ID:
			return 3155;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, true, false).ID:
			return 3156;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, true).ID:
			return 3157;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Left, false, false).ID:
			return 3158;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, true).ID:
			return 3159;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Right, true, false).ID:
			return 3160;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, true).ID:
			return 3161;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Upper, OakDoor::Hinge::Right, false, false).ID:
			return 3162;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, true).ID:
			return 3163;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Left, true, false).ID:
			return 3164;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, true).ID:
			return 3165;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Left, false, false).ID:
			return 3166;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, true).ID:
			return 3167;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Right, true, false).ID:
			return 3168;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, true).ID:
			return 3169;
		case OakDoor::OakDoor(eBlockFace::BLOCK_FACE_XP, OakDoor::Half::Lower, OakDoor::Hinge::Right, false, false).ID:
			return 3170;
		case OakFence::OakFence(true, true, true, true).ID:                                 return 3462;
		case OakFence::OakFence(true, true, true, false).ID:                                return 3463;
		case OakFence::OakFence(true, true, false, true).ID:                                return 3466;
		case OakFence::OakFence(true, true, false, false).ID:                               return 3467;
		case OakFence::OakFence(true, false, true, true).ID:                                return 3470;
		case OakFence::OakFence(true, false, true, false).ID:                               return 3471;
		case OakFence::OakFence(true, false, false, true).ID:                               return 3474;
		case OakFence::OakFence(true, false, false, false).ID:                              return 3475;
		case OakFence::OakFence(false, true, true, true).ID:                                return 3478;
		case OakFence::OakFence(false, true, true, false).ID:                               return 3479;
		case OakFence::OakFence(false, true, false, true).ID:                               return 3482;
		case OakFence::OakFence(false, true, false, false).ID:                              return 3483;
		case OakFence::OakFence(false, false, true, true).ID:                               return 3486;
		case OakFence::OakFence(false, false, true, false).ID:                              return 3487;
		case OakFence::OakFence(false, false, false, true).ID:                              return 3490;
		case OakFence::OakFence(false, false, false, false).ID:                             return 3491;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 4300;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 4301;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 4302;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 4303;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 4304;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 4305;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 4306;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 4307;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 4308;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 4309;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 4310;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 4311;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 4312;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 4313;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 4314;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 4315;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 4316;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 4317;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 4318;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 4319;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 4320;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 4321;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 4322;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 4323;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 4324;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 4325;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 4326;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 4327;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 4328;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 4329;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 4330;
		case OakFenceGate::OakFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 4331;
		case OakLeaves::OakLeaves(1, true).ID:                                              return 144;
		case OakLeaves::OakLeaves(1, false).ID:                                             return 145;
		case OakLeaves::OakLeaves(2, true).ID:                                              return 146;
		case OakLeaves::OakLeaves(2, false).ID:                                             return 147;
		case OakLeaves::OakLeaves(3, true).ID:                                              return 148;
		case OakLeaves::OakLeaves(3, false).ID:                                             return 149;
		case OakLeaves::OakLeaves(4, true).ID:                                              return 150;
		case OakLeaves::OakLeaves(4, false).ID:                                             return 151;
		case OakLeaves::OakLeaves(5, true).ID:                                              return 152;
		case OakLeaves::OakLeaves(5, false).ID:                                             return 153;
		case OakLeaves::OakLeaves(6, true).ID:                                              return 154;
		case OakLeaves::OakLeaves(6, false).ID:                                             return 155;
		case OakLeaves::OakLeaves(7, true).ID:                                              return 156;
		case OakLeaves::OakLeaves(7, false).ID:                                             return 157;
		case OakLog::OakLog(OakLog::Axis::X).ID:                                            return 72;
		case OakLog::OakLog(OakLog::Axis::Y).ID:                                            return 73;
		case OakLog::OakLog(OakLog::Axis::Z).ID:                                            return 74;
		case OakPlanks::OakPlanks().ID:                                                     return 15;
		case OakPressurePlate::OakPressurePlate(true).ID:                                   return 3367;
		case OakPressurePlate::OakPressurePlate(false).ID:                                  return 3368;
		case OakSapling::OakSapling(0).ID:                                                  return 21;
		case OakSapling::OakSapling(1).ID:                                                  return 22;
		case OakSlab::OakSlab(OakSlab::Type::Top).ID:                                       return 7258;
		case OakSlab::OakSlab(OakSlab::Type::Bottom).ID:                                    return 7260;
		case OakSlab::OakSlab(OakSlab::Type::Double).ID:                                    return 7262;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::Straight).ID:
			return 1649;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::InnerLeft).ID:
			return 1651;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::InnerRight).ID:
			return 1653;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::OuterLeft).ID:
			return 1655;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Top, OakStairs::Shape::OuterRight).ID:
			return 1657;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::Straight).ID:
			return 1659;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::InnerLeft).ID:
			return 1661;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::InnerRight).ID:
			return 1663;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::OuterLeft).ID:
			return 1665;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZM, OakStairs::Half::Bottom, OakStairs::Shape::OuterRight).ID:
			return 1667;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::Straight).ID:
			return 1669;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::InnerLeft).ID:
			return 1671;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::InnerRight).ID:
			return 1673;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::OuterLeft).ID:
			return 1675;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Top, OakStairs::Shape::OuterRight).ID:
			return 1677;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::Straight).ID:
			return 1679;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::InnerLeft).ID:
			return 1681;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::InnerRight).ID:
			return 1683;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::OuterLeft).ID:
			return 1685;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_ZP, OakStairs::Half::Bottom, OakStairs::Shape::OuterRight).ID:
			return 1687;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::Straight).ID:
			return 1689;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::InnerLeft).ID:
			return 1691;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::InnerRight).ID:
			return 1693;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::OuterLeft).ID:
			return 1695;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Top, OakStairs::Shape::OuterRight).ID:
			return 1697;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::Straight).ID:
			return 1699;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::InnerLeft).ID:
			return 1701;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::InnerRight).ID:
			return 1703;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::OuterLeft).ID:
			return 1705;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XM, OakStairs::Half::Bottom, OakStairs::Shape::OuterRight).ID:
			return 1707;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::Straight).ID:
			return 1709;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::InnerLeft).ID:
			return 1711;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::InnerRight).ID:
			return 1713;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::OuterLeft).ID:
			return 1715;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Top, OakStairs::Shape::OuterRight).ID:
			return 1717;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::Straight).ID:
			return 1719;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::InnerLeft).ID:
			return 1721;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::InnerRight).ID:
			return 1723;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::OuterLeft).ID:
			return 1725;
		case OakStairs::OakStairs(eBlockFace::BLOCK_FACE_XP, OakStairs::Half::Bottom, OakStairs::Shape::OuterRight).ID:
			return 1727;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, true, true).ID:    return 3594;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, true, false).ID:   return 3596;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, false, true).ID:   return 3598;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Top, false, false).ID:  return 3600;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, true, true).ID: return 3602;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, true, false).ID:
			return 3604;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, false, true).ID:
			return 3606;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZM, OakTrapdoor::Half::Bottom, false, false).ID:
			return 3608;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, true, true).ID:    return 3610;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, true, false).ID:   return 3612;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, false, true).ID:   return 3614;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Top, false, false).ID:  return 3616;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, true, true).ID: return 3618;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, true, false).ID:
			return 3620;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, false, true).ID:
			return 3622;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_ZP, OakTrapdoor::Half::Bottom, false, false).ID:
			return 3624;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, true, true).ID:    return 3626;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, true, false).ID:   return 3628;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, false, true).ID:   return 3630;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Top, false, false).ID:  return 3632;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, true, true).ID: return 3634;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, true, false).ID:
			return 3636;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, false, true).ID:
			return 3638;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XM, OakTrapdoor::Half::Bottom, false, false).ID:
			return 3640;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, true, true).ID:    return 3642;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, true, false).ID:   return 3644;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, false, true).ID:   return 3646;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Top, false, false).ID:  return 3648;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, true, true).ID: return 3650;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, true, false).ID:
			return 3652;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, false, true).ID:
			return 3654;
		case OakTrapdoor::OakTrapdoor(eBlockFace::BLOCK_FACE_XP, OakTrapdoor::Half::Bottom, false, false).ID:
			return 3656;
		case OakWood::OakWood(OakWood::Axis::X).ID:                                                 return 108;
		case OakWood::OakWood(OakWood::Axis::Y).ID:                                                 return 109;
		case OakWood::OakWood(OakWood::Axis::Z).ID:                                                 return 110;
		case Observer::Observer(eBlockFace::BLOCK_FACE_ZM, true).ID:                                return 8199;
		case Observer::Observer(eBlockFace::BLOCK_FACE_ZM, false).ID:                               return 8200;
		case Observer::Observer(eBlockFace::BLOCK_FACE_XP, true).ID:                                return 8201;
		case Observer::Observer(eBlockFace::BLOCK_FACE_XP, false).ID:                               return 8202;
		case Observer::Observer(eBlockFace::BLOCK_FACE_ZP, true).ID:                                return 8203;
		case Observer::Observer(eBlockFace::BLOCK_FACE_ZP, false).ID:                               return 8204;
		case Observer::Observer(eBlockFace::BLOCK_FACE_XM, true).ID:                                return 8205;
		case Observer::Observer(eBlockFace::BLOCK_FACE_XM, false).ID:                               return 8206;
		case Observer::Observer(eBlockFace::BLOCK_FACE_YP, true).ID:                                return 8207;
		case Observer::Observer(eBlockFace::BLOCK_FACE_YP, false).ID:                               return 8208;
		case Observer::Observer(eBlockFace::BLOCK_FACE_YM, true).ID:                                return 8209;
		case Observer::Observer(eBlockFace::BLOCK_FACE_YM, false).ID:                               return 8210;
		case Obsidian::Obsidian().ID:                                                               return 1129;
		case OrangeBanner::OrangeBanner(0).ID:                                                      return 6870;
		case OrangeBanner::OrangeBanner(1).ID:                                                      return 6871;
		case OrangeBanner::OrangeBanner(2).ID:                                                      return 6872;
		case OrangeBanner::OrangeBanner(3).ID:                                                      return 6873;
		case OrangeBanner::OrangeBanner(4).ID:                                                      return 6874;
		case OrangeBanner::OrangeBanner(5).ID:                                                      return 6875;
		case OrangeBanner::OrangeBanner(6).ID:                                                      return 6876;
		case OrangeBanner::OrangeBanner(7).ID:                                                      return 6877;
		case OrangeBanner::OrangeBanner(8).ID:                                                      return 6878;
		case OrangeBanner::OrangeBanner(9).ID:                                                      return 6879;
		case OrangeBanner::OrangeBanner(10).ID:                                                     return 6880;
		case OrangeBanner::OrangeBanner(11).ID:                                                     return 6881;
		case OrangeBanner::OrangeBanner(12).ID:                                                     return 6882;
		case OrangeBanner::OrangeBanner(13).ID:                                                     return 6883;
		case OrangeBanner::OrangeBanner(14).ID:                                                     return 6884;
		case OrangeBanner::OrangeBanner(15).ID:                                                     return 6885;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZM, true, OrangeBed::Part::Head).ID:       return 764;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZM, true, OrangeBed::Part::Foot).ID:       return 765;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZM, false, OrangeBed::Part::Head).ID:      return 766;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZM, false, OrangeBed::Part::Foot).ID:      return 767;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZP, true, OrangeBed::Part::Head).ID:       return 768;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZP, true, OrangeBed::Part::Foot).ID:       return 769;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZP, false, OrangeBed::Part::Head).ID:      return 770;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_ZP, false, OrangeBed::Part::Foot).ID:      return 771;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XM, true, OrangeBed::Part::Head).ID:       return 772;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XM, true, OrangeBed::Part::Foot).ID:       return 773;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XM, false, OrangeBed::Part::Head).ID:      return 774;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XM, false, OrangeBed::Part::Foot).ID:      return 775;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XP, true, OrangeBed::Part::Head).ID:       return 776;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XP, true, OrangeBed::Part::Foot).ID:       return 777;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XP, false, OrangeBed::Part::Head).ID:      return 778;
		case OrangeBed::OrangeBed(eBlockFace::BLOCK_FACE_XP, false, OrangeBed::Part::Foot).ID:      return 779;
		case OrangeCarpet::OrangeCarpet().ID:                                                       return 6824;
		case OrangeConcrete::OrangeConcrete().ID:                                                   return 8378;
		case OrangeConcretePowder::OrangeConcretePowder().ID:                                       return 8394;
		case OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:          return 8317;
		case OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:          return 8318;
		case OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:          return 8319;
		case OrangeGlazedTerracotta::OrangeGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:          return 8320;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                      return 8223;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                      return 8224;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                      return 8225;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                      return 8226;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                      return 8227;
		case OrangeShulkerBox::OrangeShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                      return 8228;
		case OrangeStainedGlass::OrangeStainedGlass().ID:                                           return 3578;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, true, true, true).ID:             return 5854;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, true, true, false).ID:            return 5855;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, true, false, true).ID:            return 5858;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, true, false, false).ID:           return 5859;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, false, true, true).ID:            return 5862;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, false, true, false).ID:           return 5863;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, false, false, true).ID:           return 5866;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(true, false, false, false).ID:          return 5867;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, true, true, true).ID:            return 5870;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, true, true, false).ID:           return 5871;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, true, false, true).ID:           return 5874;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, true, false, false).ID:          return 5875;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, false, true, true).ID:           return 5878;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, false, true, false).ID:          return 5879;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, false, false, true).ID:          return 5882;
		case OrangeStainedGlassPane::OrangeStainedGlassPane(false, false, false, false).ID:         return 5883;
		case OrangeTerracotta::OrangeTerracotta().ID:                                               return 5805;
		case OrangeTulip::OrangeTulip().ID:                                                         return 1117;
		case OrangeWallBanner::OrangeWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                      return 7114;
		case OrangeWallBanner::OrangeWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                      return 7115;
		case OrangeWallBanner::OrangeWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                      return 7116;
		case OrangeWallBanner::OrangeWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                      return 7117;
		case OrangeWool::OrangeWool().ID:                                                           return 1084;
		case OxeyeDaisy::OxeyeDaisy().ID:                                                           return 1120;
		case PackedIce::PackedIce().ID:                                                             return 6841;
		case Peony::Peony(Peony::Half::Upper).ID:                                                   return 6848;
		case Peony::Peony(Peony::Half::Lower).ID:                                                   return 6849;
		case PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Top).ID:                    return 7306;
		case PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Bottom).ID:                 return 7308;
		case PetrifiedOakSlab::PetrifiedOakSlab(PetrifiedOakSlab::Type::Double).ID:                 return 7310;
		case PinkBanner::PinkBanner(0).ID:                                                          return 6950;
		case PinkBanner::PinkBanner(1).ID:                                                          return 6951;
		case PinkBanner::PinkBanner(2).ID:                                                          return 6952;
		case PinkBanner::PinkBanner(3).ID:                                                          return 6953;
		case PinkBanner::PinkBanner(4).ID:                                                          return 6954;
		case PinkBanner::PinkBanner(5).ID:                                                          return 6955;
		case PinkBanner::PinkBanner(6).ID:                                                          return 6956;
		case PinkBanner::PinkBanner(7).ID:                                                          return 6957;
		case PinkBanner::PinkBanner(8).ID:                                                          return 6958;
		case PinkBanner::PinkBanner(9).ID:                                                          return 6959;
		case PinkBanner::PinkBanner(10).ID:                                                         return 6960;
		case PinkBanner::PinkBanner(11).ID:                                                         return 6961;
		case PinkBanner::PinkBanner(12).ID:                                                         return 6962;
		case PinkBanner::PinkBanner(13).ID:                                                         return 6963;
		case PinkBanner::PinkBanner(14).ID:                                                         return 6964;
		case PinkBanner::PinkBanner(15).ID:                                                         return 6965;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZM, true, PinkBed::Part::Head).ID:             return 844;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZM, true, PinkBed::Part::Foot).ID:             return 845;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZM, false, PinkBed::Part::Head).ID:            return 846;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZM, false, PinkBed::Part::Foot).ID:            return 847;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZP, true, PinkBed::Part::Head).ID:             return 848;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZP, true, PinkBed::Part::Foot).ID:             return 849;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZP, false, PinkBed::Part::Head).ID:            return 850;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_ZP, false, PinkBed::Part::Foot).ID:            return 851;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XM, true, PinkBed::Part::Head).ID:             return 852;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XM, true, PinkBed::Part::Foot).ID:             return 853;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XM, false, PinkBed::Part::Head).ID:            return 854;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XM, false, PinkBed::Part::Foot).ID:            return 855;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XP, true, PinkBed::Part::Head).ID:             return 856;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XP, true, PinkBed::Part::Foot).ID:             return 857;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XP, false, PinkBed::Part::Head).ID:            return 858;
		case PinkBed::PinkBed(eBlockFace::BLOCK_FACE_XP, false, PinkBed::Part::Foot).ID:            return 859;
		case PinkCarpet::PinkCarpet().ID:                                                           return 6829;
		case PinkConcrete::PinkConcrete().ID:                                                       return 8383;
		case PinkConcretePowder::PinkConcretePowder().ID:                                           return 8399;
		case PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:              return 8337;
		case PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:              return 8338;
		case PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:              return 8339;
		case PinkGlazedTerracotta::PinkGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:              return 8340;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                          return 8253;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                          return 8254;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                          return 8255;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                          return 8256;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                          return 8257;
		case PinkShulkerBox::PinkShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                          return 8258;
		case PinkStainedGlass::PinkStainedGlass().ID:                                               return 3583;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, true, true, true).ID:                 return 6014;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, true, true, false).ID:                return 6015;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, true, false, true).ID:                return 6018;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, true, false, false).ID:               return 6019;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, false, true, true).ID:                return 6022;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, false, true, false).ID:               return 6023;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, false, false, true).ID:               return 6026;
		case PinkStainedGlassPane::PinkStainedGlassPane(true, false, false, false).ID:              return 6027;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, true, true, true).ID:                return 6030;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, true, true, false).ID:               return 6031;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, true, false, true).ID:               return 6034;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, true, false, false).ID:              return 6035;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, false, true, true).ID:               return 6038;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, false, true, false).ID:              return 6039;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, false, false, true).ID:              return 6042;
		case PinkStainedGlassPane::PinkStainedGlassPane(false, false, false, false).ID:             return 6043;
		case PinkTerracotta::PinkTerracotta().ID:                                                   return 5810;
		case PinkTulip::PinkTulip().ID:                                                             return 1119;
		case PinkWallBanner::PinkWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                          return 7134;
		case PinkWallBanner::PinkWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                          return 7135;
		case PinkWallBanner::PinkWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                          return 7136;
		case PinkWallBanner::PinkWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                          return 7137;
		case PinkWool::PinkWool().ID:                                                               return 1089;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_ZM).ID:                                    return 1047;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_XP).ID:                                    return 1048;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_ZP).ID:                                    return 1049;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_XM).ID:                                    return 1050;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_YP).ID:                                    return 1051;
		case Piston::Piston(true, eBlockFace::BLOCK_FACE_YM).ID:                                    return 1052;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_ZM).ID:                                   return 1053;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_XP).ID:                                   return 1054;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_ZP).ID:                                   return 1055;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_XM).ID:                                   return 1056;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_YP).ID:                                   return 1057;
		case Piston::Piston(false, eBlockFace::BLOCK_FACE_YM).ID:                                   return 1058;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, true, PistonHead::Type::Normal).ID:  return 1059;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, true, PistonHead::Type::Sticky).ID:  return 1060;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, false, PistonHead::Type::Normal).ID: return 1061;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZM, false, PistonHead::Type::Sticky).ID: return 1062;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, true, PistonHead::Type::Normal).ID:  return 1063;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, true, PistonHead::Type::Sticky).ID:  return 1064;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, false, PistonHead::Type::Normal).ID: return 1065;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XP, false, PistonHead::Type::Sticky).ID: return 1066;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, true, PistonHead::Type::Normal).ID:  return 1067;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, true, PistonHead::Type::Sticky).ID:  return 1068;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, false, PistonHead::Type::Normal).ID: return 1069;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_ZP, false, PistonHead::Type::Sticky).ID: return 1070;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, true, PistonHead::Type::Normal).ID:  return 1071;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, true, PistonHead::Type::Sticky).ID:  return 1072;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, false, PistonHead::Type::Normal).ID: return 1073;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_XM, false, PistonHead::Type::Sticky).ID: return 1074;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, true, PistonHead::Type::Normal).ID:  return 1075;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, true, PistonHead::Type::Sticky).ID:  return 1076;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, false, PistonHead::Type::Normal).ID: return 1077;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YP, false, PistonHead::Type::Sticky).ID: return 1078;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, true, PistonHead::Type::Normal).ID:  return 1079;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, true, PistonHead::Type::Sticky).ID:  return 1080;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, false, PistonHead::Type::Normal).ID: return 1081;
		case PistonHead::PistonHead(eBlockFace::BLOCK_FACE_YM, false, PistonHead::Type::Sticky).ID: return 1082;
		case PlayerHead::PlayerHead(0).ID:                                                          return 5511;
		case PlayerHead::PlayerHead(1).ID:                                                          return 5512;
		case PlayerHead::PlayerHead(2).ID:                                                          return 5513;
		case PlayerHead::PlayerHead(3).ID:                                                          return 5514;
		case PlayerHead::PlayerHead(4).ID:                                                          return 5515;
		case PlayerHead::PlayerHead(5).ID:                                                          return 5516;
		case PlayerHead::PlayerHead(6).ID:                                                          return 5517;
		case PlayerHead::PlayerHead(7).ID:                                                          return 5518;
		case PlayerHead::PlayerHead(8).ID:                                                          return 5519;
		case PlayerHead::PlayerHead(9).ID:                                                          return 5520;
		case PlayerHead::PlayerHead(10).ID:                                                         return 5521;
		case PlayerHead::PlayerHead(11).ID:                                                         return 5522;
		case PlayerHead::PlayerHead(12).ID:                                                         return 5523;
		case PlayerHead::PlayerHead(13).ID:                                                         return 5524;
		case PlayerHead::PlayerHead(14).ID:                                                         return 5525;
		case PlayerHead::PlayerHead(15).ID:                                                         return 5526;
		case PlayerWallHead::PlayerWallHead(eBlockFace::BLOCK_FACE_ZM).ID:                          return 5507;
		case PlayerWallHead::PlayerWallHead(eBlockFace::BLOCK_FACE_ZP).ID:                          return 5508;
		case PlayerWallHead::PlayerWallHead(eBlockFace::BLOCK_FACE_XM).ID:                          return 5509;
		case PlayerWallHead::PlayerWallHead(eBlockFace::BLOCK_FACE_XP).ID:                          return 5510;
		case Podzol::Podzol(true).ID:                                                               return 12;
		case Podzol::Podzol(false).ID:                                                              return 13;
		case PolishedAndesite::PolishedAndesite().ID:                                               return 7;
		case PolishedDiorite::PolishedDiorite().ID:                                                 return 5;
		case PolishedGranite::PolishedGranite().ID:                                                 return 3;
		case Poppy::Poppy().ID:                                                                     return 1112;
		case Potatoes::Potatoes(0).ID:                                                              return 5295;
		case Potatoes::Potatoes(1).ID:                                                              return 5296;
		case Potatoes::Potatoes(2).ID:                                                              return 5297;
		case Potatoes::Potatoes(3).ID:                                                              return 5298;
		case Potatoes::Potatoes(4).ID:                                                              return 5299;
		case Potatoes::Potatoes(5).ID:                                                              return 5300;
		case Potatoes::Potatoes(6).ID:                                                              return 5301;
		case Potatoes::Potatoes(7).ID:                                                              return 5302;
		case PottedAcaciaSapling::PottedAcaciaSapling().ID:                                         return 5270;
		case PottedAllium::PottedAllium().ID:                                                       return 5276;
		case PottedAzureBluet::PottedAzureBluet().ID:                                               return 5277;
		case PottedBirchSapling::PottedBirchSapling().ID:                                           return 5268;
		case PottedBlueOrchid::PottedBlueOrchid().ID:                                               return 5275;
		case PottedBrownMushroom::PottedBrownMushroom().ID:                                         return 5284;
		case PottedCactus::PottedCactus().ID:                                                       return 5286;
		case PottedDandelion::PottedDandelion().ID:                                                 return 5273;
		case PottedDarkOakSapling::PottedDarkOakSapling().ID:                                       return 5271;
		case PottedDeadBush::PottedDeadBush().ID:                                                   return 5285;
		case PottedFern::PottedFern().ID:                                                           return 5272;
		case PottedJungleSapling::PottedJungleSapling().ID:                                         return 5269;
		case PottedOakSapling::PottedOakSapling().ID:                                               return 5266;
		case PottedOrangeTulip::PottedOrangeTulip().ID:                                             return 5279;
		case PottedOxeyeDaisy::PottedOxeyeDaisy().ID:                                               return 5282;
		case PottedPinkTulip::PottedPinkTulip().ID:                                                 return 5281;
		case PottedPoppy::PottedPoppy().ID:                                                         return 5274;
		case PottedRedMushroom::PottedRedMushroom().ID:                                             return 5283;
		case PottedRedTulip::PottedRedTulip().ID:                                                   return 5278;
		case PottedSpruceSapling::PottedSpruceSapling().ID:                                         return 5267;
		case PottedWhiteTulip::PottedWhiteTulip().ID:                                               return 5280;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::NorthSouth).ID:                     return 1004;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::EastWest).ID:                       return 1005;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingEast).ID:                  return 1006;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingWest).ID:                  return 1007;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingNorth).ID:                 return 1008;
		case PoweredRail::PoweredRail(true, PoweredRail::Shape::AscendingSouth).ID:                 return 1009;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::NorthSouth).ID:                    return 1010;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::EastWest).ID:                      return 1011;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingEast).ID:                 return 1012;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingWest).ID:                 return 1013;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingNorth).ID:                return 1014;
		case PoweredRail::PoweredRail(false, PoweredRail::Shape::AscendingSouth).ID:                return 1015;
		case Prismarine::Prismarine().ID:                                                           return 6558;
		case PrismarineBrickSlab::PrismarineBrickSlab(PrismarineBrickSlab::Type::Top).ID:           return 6808;
		case PrismarineBrickSlab::PrismarineBrickSlab(PrismarineBrickSlab::Type::Bottom).ID:        return 6810;
		case PrismarineBrickSlab::PrismarineBrickSlab(PrismarineBrickSlab::Type::Double).ID:        return 6812;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6642;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6644;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6646;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6648;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6650;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6652;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6654;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6656;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6658;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6660;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6662;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6664;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6666;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6668;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6670;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6672;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6674;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6676;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6678;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6680;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6682;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6684;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6686;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6688;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6690;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6692;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6694;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6696;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6698;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6700;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6702;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6704;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6706;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6708;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Top,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6710;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::Straight
		)
			.ID:
			return 6712;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 6714;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::InnerRight
		)
			.ID:
			return 6716;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 6718;
		case PrismarineBrickStairs::PrismarineBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineBrickStairs::Half::Bottom,
			PrismarineBrickStairs::Shape::OuterRight
		)
			.ID:
			return 6720;
		case PrismarineBricks::PrismarineBricks().ID:                         return 6559;
		case PrismarineSlab::PrismarineSlab(PrismarineSlab::Type::Top).ID:    return 6802;
		case PrismarineSlab::PrismarineSlab(PrismarineSlab::Type::Bottom).ID: return 6804;
		case PrismarineSlab::PrismarineSlab(PrismarineSlab::Type::Double).ID: return 6806;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6562;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6564;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6566;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6568;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6570;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6572;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6574;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6576;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6578;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6580;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6582;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6584;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6586;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6588;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6590;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6592;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6594;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6596;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6598;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6600;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6602;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6604;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6606;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6608;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6610;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6612;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6614;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6616;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6618;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XM,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6620;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6622;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6624;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6626;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6628;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Top,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6630;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::Straight
		)
			.ID:
			return 6632;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerLeft
		)
			.ID:
			return 6634;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::InnerRight
		)
			.ID:
			return 6636;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterLeft
		)
			.ID:
			return 6638;
		case PrismarineStairs::PrismarineStairs(
			eBlockFace::BLOCK_FACE_XP,
			PrismarineStairs::Half::Bottom,
			PrismarineStairs::Shape::OuterRight
		)
			.ID:
			return 6640;
		case Pumpkin::Pumpkin().ID:                                                            return 3492;
		case PumpkinStem::PumpkinStem(0).ID:                                                   return 4252;
		case PumpkinStem::PumpkinStem(1).ID:                                                   return 4253;
		case PumpkinStem::PumpkinStem(2).ID:                                                   return 4254;
		case PumpkinStem::PumpkinStem(3).ID:                                                   return 4255;
		case PumpkinStem::PumpkinStem(4).ID:                                                   return 4256;
		case PumpkinStem::PumpkinStem(5).ID:                                                   return 4257;
		case PumpkinStem::PumpkinStem(6).ID:                                                   return 4258;
		case PumpkinStem::PumpkinStem(7).ID:                                                   return 4259;
		case PurpleBanner::PurpleBanner(0).ID:                                                 return 7014;
		case PurpleBanner::PurpleBanner(1).ID:                                                 return 7015;
		case PurpleBanner::PurpleBanner(2).ID:                                                 return 7016;
		case PurpleBanner::PurpleBanner(3).ID:                                                 return 7017;
		case PurpleBanner::PurpleBanner(4).ID:                                                 return 7018;
		case PurpleBanner::PurpleBanner(5).ID:                                                 return 7019;
		case PurpleBanner::PurpleBanner(6).ID:                                                 return 7020;
		case PurpleBanner::PurpleBanner(7).ID:                                                 return 7021;
		case PurpleBanner::PurpleBanner(8).ID:                                                 return 7022;
		case PurpleBanner::PurpleBanner(9).ID:                                                 return 7023;
		case PurpleBanner::PurpleBanner(10).ID:                                                return 7024;
		case PurpleBanner::PurpleBanner(11).ID:                                                return 7025;
		case PurpleBanner::PurpleBanner(12).ID:                                                return 7026;
		case PurpleBanner::PurpleBanner(13).ID:                                                return 7027;
		case PurpleBanner::PurpleBanner(14).ID:                                                return 7028;
		case PurpleBanner::PurpleBanner(15).ID:                                                return 7029;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZM, true, PurpleBed::Part::Head).ID:  return 908;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZM, true, PurpleBed::Part::Foot).ID:  return 909;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZM, false, PurpleBed::Part::Head).ID: return 910;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZM, false, PurpleBed::Part::Foot).ID: return 911;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZP, true, PurpleBed::Part::Head).ID:  return 912;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZP, true, PurpleBed::Part::Foot).ID:  return 913;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZP, false, PurpleBed::Part::Head).ID: return 914;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_ZP, false, PurpleBed::Part::Foot).ID: return 915;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XM, true, PurpleBed::Part::Head).ID:  return 916;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XM, true, PurpleBed::Part::Foot).ID:  return 917;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XM, false, PurpleBed::Part::Head).ID: return 918;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XM, false, PurpleBed::Part::Foot).ID: return 919;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XP, true, PurpleBed::Part::Head).ID:  return 920;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XP, true, PurpleBed::Part::Foot).ID:  return 921;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XP, false, PurpleBed::Part::Head).ID: return 922;
		case PurpleBed::PurpleBed(eBlockFace::BLOCK_FACE_XP, false, PurpleBed::Part::Foot).ID: return 923;
		case PurpleCarpet::PurpleCarpet().ID:                                                  return 6833;
		case PurpleConcrete::PurpleConcrete().ID:                                              return 8387;
		case PurpleConcretePowder::PurpleConcretePowder().ID:                                  return 8403;
		case PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:     return 8353;
		case PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:     return 8354;
		case PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:     return 8355;
		case PurpleGlazedTerracotta::PurpleGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:     return 8356;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                 return 8277;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                 return 8278;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                 return 8279;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                 return 8280;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                 return 8281;
		case PurpleShulkerBox::PurpleShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                 return 8282;
		case PurpleStainedGlass::PurpleStainedGlass().ID:                                      return 3587;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, true, true, true).ID:        return 6142;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, true, true, false).ID:       return 6143;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, true, false, true).ID:       return 6146;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, true, false, false).ID:      return 6147;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, false, true, true).ID:       return 6150;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, false, true, false).ID:      return 6151;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, false, false, true).ID:      return 6154;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(true, false, false, false).ID:     return 6155;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, true, true, true).ID:       return 6158;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, true, true, false).ID:      return 6159;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, true, false, true).ID:      return 6162;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, true, false, false).ID:     return 6163;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, false, true, true).ID:      return 6166;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, false, true, false).ID:     return 6167;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, false, false, true).ID:     return 6170;
		case PurpleStainedGlassPane::PurpleStainedGlassPane(false, false, false, false).ID:    return 6171;
		case PurpleTerracotta::PurpleTerracotta().ID:                                          return 5814;
		case PurpleWallBanner::PurpleWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                 return 7150;
		case PurpleWallBanner::PurpleWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                 return 7151;
		case PurpleWallBanner::PurpleWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                 return 7152;
		case PurpleWallBanner::PurpleWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                 return 7153;
		case PurpleWool::PurpleWool().ID:                                                      return 1093;
		case PurpurBlock::PurpurBlock().ID:                                                    return 8073;
		case PurpurPillar::PurpurPillar(PurpurPillar::Axis::X).ID:                             return 8074;
		case PurpurPillar::PurpurPillar(PurpurPillar::Axis::Y).ID:                             return 8075;
		case PurpurPillar::PurpurPillar(PurpurPillar::Axis::Z).ID:                             return 8076;
		case PurpurSlab::PurpurSlab(PurpurSlab::Type::Top).ID:                                 return 7348;
		case PurpurSlab::PurpurSlab(PurpurSlab::Type::Bottom).ID:                              return 7350;
		case PurpurSlab::PurpurSlab(PurpurSlab::Type::Double).ID:                              return 7352;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8078;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8080;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8082;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8084;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8086;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8088;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8090;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8092;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8094;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8096;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8098;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8100;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8102;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8104;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8106;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8108;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8110;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8112;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8114;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_ZP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8116;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8118;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8120;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8122;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8124;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8126;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8128;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8130;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8132;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8134;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XM,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8136;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8138;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8140;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8142;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8144;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Top,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8146;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::Straight
		)
			.ID:
			return 8148;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerLeft
		)
			.ID:
			return 8150;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::InnerRight
		)
			.ID:
			return 8152;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterLeft
		)
			.ID:
			return 8154;
		case PurpurStairs::PurpurStairs(
			eBlockFace::BLOCK_FACE_XP,
			PurpurStairs::Half::Bottom,
			PurpurStairs::Shape::OuterRight
		)
			.ID:
			return 8156;
		case QuartzBlock::QuartzBlock().ID:                        return 5695;
		case QuartzPillar::QuartzPillar(QuartzPillar::Axis::X).ID: return 5697;
		case QuartzPillar::QuartzPillar(QuartzPillar::Axis::Y).ID: return 5698;
		case QuartzPillar::QuartzPillar(QuartzPillar::Axis::Z).ID: return 5699;
		case QuartzSlab::QuartzSlab(QuartzSlab::Type::Top).ID:     return 7336;
		case QuartzSlab::QuartzSlab(QuartzSlab::Type::Bottom).ID:  return 7338;
		case QuartzSlab::QuartzSlab(QuartzSlab::Type::Double).ID:  return 7340;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5701;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5703;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5705;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5707;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5709;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5711;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5713;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5715;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5717;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5719;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5721;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5723;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5725;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5727;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5729;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5731;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5733;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5735;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5737;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_ZP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5739;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5741;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5743;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5745;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5747;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5749;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5751;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5753;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5755;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5757;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XM,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5759;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5761;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5763;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5765;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5767;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Top,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5769;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::Straight
		)
			.ID:
			return 5771;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerLeft
		)
			.ID:
			return 5773;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::InnerRight
		)
			.ID:
			return 5775;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterLeft
		)
			.ID:
			return 5777;
		case QuartzStairs::QuartzStairs(
			eBlockFace::BLOCK_FACE_XP,
			QuartzStairs::Half::Bottom,
			QuartzStairs::Shape::OuterRight
		)
			.ID:
			return 5779;
		case Rail::Rail(Rail::Shape::NorthSouth).ID:                                          return 3179;
		case Rail::Rail(Rail::Shape::EastWest).ID:                                            return 3180;
		case Rail::Rail(Rail::Shape::AscendingEast).ID:                                       return 3181;
		case Rail::Rail(Rail::Shape::AscendingWest).ID:                                       return 3182;
		case Rail::Rail(Rail::Shape::AscendingNorth).ID:                                      return 3183;
		case Rail::Rail(Rail::Shape::AscendingSouth).ID:                                      return 3184;
		case Rail::Rail(Rail::Shape::SouthEast).ID:                                           return 3185;
		case Rail::Rail(Rail::Shape::SouthWest).ID:                                           return 3186;
		case Rail::Rail(Rail::Shape::NorthWest).ID:                                           return 3187;
		case Rail::Rail(Rail::Shape::NorthEast).ID:                                           return 3188;
		case RedBanner::RedBanner(0).ID:                                                      return 7078;
		case RedBanner::RedBanner(1).ID:                                                      return 7079;
		case RedBanner::RedBanner(2).ID:                                                      return 7080;
		case RedBanner::RedBanner(3).ID:                                                      return 7081;
		case RedBanner::RedBanner(4).ID:                                                      return 7082;
		case RedBanner::RedBanner(5).ID:                                                      return 7083;
		case RedBanner::RedBanner(6).ID:                                                      return 7084;
		case RedBanner::RedBanner(7).ID:                                                      return 7085;
		case RedBanner::RedBanner(8).ID:                                                      return 7086;
		case RedBanner::RedBanner(9).ID:                                                      return 7087;
		case RedBanner::RedBanner(10).ID:                                                     return 7088;
		case RedBanner::RedBanner(11).ID:                                                     return 7089;
		case RedBanner::RedBanner(12).ID:                                                     return 7090;
		case RedBanner::RedBanner(13).ID:                                                     return 7091;
		case RedBanner::RedBanner(14).ID:                                                     return 7092;
		case RedBanner::RedBanner(15).ID:                                                     return 7093;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, true, RedBed::Part::Head).ID:          return 972;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, true, RedBed::Part::Foot).ID:          return 973;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, false, RedBed::Part::Head).ID:         return 974;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZM, false, RedBed::Part::Foot).ID:         return 975;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, true, RedBed::Part::Head).ID:          return 976;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, true, RedBed::Part::Foot).ID:          return 977;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, false, RedBed::Part::Head).ID:         return 978;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_ZP, false, RedBed::Part::Foot).ID:         return 979;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, true, RedBed::Part::Head).ID:          return 980;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, true, RedBed::Part::Foot).ID:          return 981;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, false, RedBed::Part::Head).ID:         return 982;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XM, false, RedBed::Part::Foot).ID:         return 983;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, true, RedBed::Part::Head).ID:          return 984;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, true, RedBed::Part::Foot).ID:          return 985;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, false, RedBed::Part::Head).ID:         return 986;
		case RedBed::RedBed(eBlockFace::BLOCK_FACE_XP, false, RedBed::Part::Foot).ID:         return 987;
		case RedCarpet::RedCarpet().ID:                                                       return 6837;
		case RedConcrete::RedConcrete().ID:                                                   return 8391;
		case RedConcretePowder::RedConcretePowder().ID:                                       return 8407;
		case RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:          return 8369;
		case RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:          return 8370;
		case RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:          return 8371;
		case RedGlazedTerracotta::RedGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:          return 8372;
		case RedMushroom::RedMushroom().ID:                                                   return 1122;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, true, true, true).ID:       return 4051;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, true, true, false).ID:      return 4052;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, true, false, true).ID:      return 4053;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, true, false, false).ID:     return 4054;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, false, true, true).ID:      return 4055;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, false, true, false).ID:     return 4056;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, false, false, true).ID:     return 4057;
		case RedMushroomBlock::RedMushroomBlock(true, true, true, false, false, false).ID:    return 4058;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, true, true, true).ID:      return 4059;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, true, true, false).ID:     return 4060;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, true, false, true).ID:     return 4061;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, true, false, false).ID:    return 4062;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, false, true, true).ID:     return 4063;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, false, true, false).ID:    return 4064;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, false, false, true).ID:    return 4065;
		case RedMushroomBlock::RedMushroomBlock(true, true, false, false, false, false).ID:   return 4066;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, true, true, true).ID:      return 4067;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, true, true, false).ID:     return 4068;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, true, false, true).ID:     return 4069;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, true, false, false).ID:    return 4070;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, false, true, true).ID:     return 4071;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, false, true, false).ID:    return 4072;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, false, false, true).ID:    return 4073;
		case RedMushroomBlock::RedMushroomBlock(true, false, true, false, false, false).ID:   return 4074;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, true, true, true).ID:     return 4075;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, true, true, false).ID:    return 4076;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, true, false, true).ID:    return 4077;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, true, false, false).ID:   return 4078;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, false, true, true).ID:    return 4079;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, false, true, false).ID:   return 4080;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, false, false, true).ID:   return 4081;
		case RedMushroomBlock::RedMushroomBlock(true, false, false, false, false, false).ID:  return 4082;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, true, true, true).ID:      return 4083;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, true, true, false).ID:     return 4084;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, true, false, true).ID:     return 4085;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, true, false, false).ID:    return 4086;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, false, true, true).ID:     return 4087;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, false, true, false).ID:    return 4088;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, false, false, true).ID:    return 4089;
		case RedMushroomBlock::RedMushroomBlock(false, true, true, false, false, false).ID:   return 4090;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, true, true, true).ID:     return 4091;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, true, true, false).ID:    return 4092;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, true, false, true).ID:    return 4093;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, true, false, false).ID:   return 4094;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, false, true, true).ID:    return 4095;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, false, true, false).ID:   return 4096;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, false, false, true).ID:   return 4097;
		case RedMushroomBlock::RedMushroomBlock(false, true, false, false, false, false).ID:  return 4098;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, true, true, true).ID:     return 4099;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, true, true, false).ID:    return 4100;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, true, false, true).ID:    return 4101;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, true, false, false).ID:   return 4102;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, false, true, true).ID:    return 4103;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, false, true, false).ID:   return 4104;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, false, false, true).ID:   return 4105;
		case RedMushroomBlock::RedMushroomBlock(false, false, true, false, false, false).ID:  return 4106;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, true, true, true).ID:    return 4107;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, true, true, false).ID:   return 4108;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, true, false, true).ID:   return 4109;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, true, false, false).ID:  return 4110;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, false, true, true).ID:   return 4111;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, false, true, false).ID:  return 4112;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, true).ID:  return 4113;
		case RedMushroomBlock::RedMushroomBlock(false, false, false, false, false, false).ID: return 4114;
		case RedNetherBricks::RedNetherBricks().ID:                                           return 8194;
		case RedSand::RedSand().ID:                                                           return 67;
		case RedSandstone::RedSandstone().ID:                                                 return 7174;
		case RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Top).ID:              return 7342;
		case RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Bottom).ID:           return 7344;
		case RedSandstoneSlab::RedSandstoneSlab(RedSandstoneSlab::Type::Double).ID:           return 7346;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7178;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7180;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7182;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7184;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7186;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7188;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7190;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7192;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7194;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7196;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7198;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7200;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7202;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7204;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7206;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7208;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7210;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7212;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7214;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7216;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7218;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7220;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7222;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7224;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7226;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7228;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7230;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7232;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7234;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7236;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7238;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7240;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7242;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7244;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Top,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7246;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::Straight
		)
			.ID:
			return 7248;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 7250;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 7252;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 7254;
		case RedSandstoneStairs::RedSandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			RedSandstoneStairs::Half::Bottom,
			RedSandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 7256;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                return 8301;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                return 8302;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                return 8303;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                return 8304;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                return 8305;
		case RedShulkerBox::RedShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                return 8306;
		case RedStainedGlass::RedStainedGlass().ID:                                     return 3591;
		case RedStainedGlassPane::RedStainedGlassPane(true, true, true, true).ID:       return 6270;
		case RedStainedGlassPane::RedStainedGlassPane(true, true, true, false).ID:      return 6271;
		case RedStainedGlassPane::RedStainedGlassPane(true, true, false, true).ID:      return 6274;
		case RedStainedGlassPane::RedStainedGlassPane(true, true, false, false).ID:     return 6275;
		case RedStainedGlassPane::RedStainedGlassPane(true, false, true, true).ID:      return 6278;
		case RedStainedGlassPane::RedStainedGlassPane(true, false, true, false).ID:     return 6279;
		case RedStainedGlassPane::RedStainedGlassPane(true, false, false, true).ID:     return 6282;
		case RedStainedGlassPane::RedStainedGlassPane(true, false, false, false).ID:    return 6283;
		case RedStainedGlassPane::RedStainedGlassPane(false, true, true, true).ID:      return 6286;
		case RedStainedGlassPane::RedStainedGlassPane(false, true, true, false).ID:     return 6287;
		case RedStainedGlassPane::RedStainedGlassPane(false, true, false, true).ID:     return 6290;
		case RedStainedGlassPane::RedStainedGlassPane(false, true, false, false).ID:    return 6291;
		case RedStainedGlassPane::RedStainedGlassPane(false, false, true, true).ID:     return 6294;
		case RedStainedGlassPane::RedStainedGlassPane(false, false, true, false).ID:    return 6295;
		case RedStainedGlassPane::RedStainedGlassPane(false, false, false, true).ID:    return 6298;
		case RedStainedGlassPane::RedStainedGlassPane(false, false, false, false).ID:   return 6299;
		case RedTerracotta::RedTerracotta().ID:                                         return 5818;
		case RedTulip::RedTulip().ID:                                                   return 1116;
		case RedWallBanner::RedWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                return 7166;
		case RedWallBanner::RedWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                return 7167;
		case RedWallBanner::RedWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                return 7168;
		case RedWallBanner::RedWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                return 7169;
		case RedWool::RedWool().ID:                                                     return 1097;
		case RedstoneBlock::RedstoneBlock().ID:                                         return 5683;
		case RedstoneLamp::RedstoneLamp(true).ID:                                       return 4636;
		case RedstoneLamp::RedstoneLamp(false).ID:                                      return 4637;
		case RedstoneOre::RedstoneOre(true).ID:                                         return 3379;
		case RedstoneOre::RedstoneOre(false).ID:                                        return 3380;
		case RedstoneTorch::RedstoneTorch(true).ID:                                     return 3381;
		case RedstoneTorch::RedstoneTorch(false).ID:                                    return 3382;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZM, true).ID:  return 3383;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZM, false).ID: return 3384;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZP, true).ID:  return 3385;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_ZP, false).ID: return 3386;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XM, true).ID:  return 3387;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XM, false).ID: return 3388;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XP, true).ID:  return 3389;
		case RedstoneWallTorch::RedstoneWallTorch(eBlockFace::BLOCK_FACE_XP, false).ID: return 3390;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1752;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1753;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1754;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1755;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1756;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1757;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1758;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1759;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1760;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1761;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1762;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1763;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1764;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1765;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1766;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1767;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1768;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1769;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1770;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1771;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1772;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1773;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1774;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1775;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1776;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1777;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1778;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1779;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1780;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1781;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1782;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1783;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1784;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1785;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1786;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1787;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1788;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1789;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1790;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1791;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1792;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1793;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1794;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1795;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1796;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1797;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1798;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1799;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1800;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1801;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1802;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1803;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1804;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1805;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1806;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1807;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1808;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1809;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1810;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1811;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1812;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1813;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1814;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1815;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1816;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1817;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1818;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1819;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1820;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1821;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1822;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1823;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1824;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1825;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1826;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1827;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1828;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1829;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1830;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1831;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1832;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1833;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1834;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1835;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1836;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1837;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1838;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1839;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1840;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1841;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1842;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1843;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1844;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1845;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1846;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1847;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1848;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1849;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1850;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1851;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1852;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1853;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1854;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1855;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1856;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1857;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1858;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1859;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1860;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1861;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1862;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1863;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1864;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1865;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1866;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1867;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1868;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1869;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1870;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1871;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1872;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1873;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1874;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1875;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1876;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1877;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1878;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1879;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1880;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1881;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1882;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1883;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1884;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1885;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1886;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1887;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1888;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1889;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1890;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1891;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1892;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1893;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1894;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1895;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1896;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1897;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1898;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1899;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1900;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1901;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1902;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1903;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1904;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1905;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1906;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1907;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1908;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1909;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1910;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1911;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1912;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1913;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1914;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1915;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1916;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1917;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1918;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1919;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1920;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1921;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1922;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1923;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1924;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1925;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1926;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1927;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1928;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1929;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1930;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1931;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1932;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1933;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1934;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1935;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1936;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1937;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1938;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1939;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1940;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1941;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1942;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1943;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1944;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1945;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1946;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1947;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1948;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1949;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1950;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1951;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1952;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1953;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1954;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1955;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1956;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1957;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1958;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1959;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1960;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1961;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1962;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1963;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1964;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1965;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1966;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1967;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1968;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1969;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1970;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1971;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1972;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1973;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1974;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1975;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1976;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1977;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1978;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1979;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1980;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1981;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1982;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1983;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1984;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1985;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1986;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1987;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1988;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1989;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1990;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 1991;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 1992;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 1993;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 1994;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 1995;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 1996;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 1997;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 1998;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 1999;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2000;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2001;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2002;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2003;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2004;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2005;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2006;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2007;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2008;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2009;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2010;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2011;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2012;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2013;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2014;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2015;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2016;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2017;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2018;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2019;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2020;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2021;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2022;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2023;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2024;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2025;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2026;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2027;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2028;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2029;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2030;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2031;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2032;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2033;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2034;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2035;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2036;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2037;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2038;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2039;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2040;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2041;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2042;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2043;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2044;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2045;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2046;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2047;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2048;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2049;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2050;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2051;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2052;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2053;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2054;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2055;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2056;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2057;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2058;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2059;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2060;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2061;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2062;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2063;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2064;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2065;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2066;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2067;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2068;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2069;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2070;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2071;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2072;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2073;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2074;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2075;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2076;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2077;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2078;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2079;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2080;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2081;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2082;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2083;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2084;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2085;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2086;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2087;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2088;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2089;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2090;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2091;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2092;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2093;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2094;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2095;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2096;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2097;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2098;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2099;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2100;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2101;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2102;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2103;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2104;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2105;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2106;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2107;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2108;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2109;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2110;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2111;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2112;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2113;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2114;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2115;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2116;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2117;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2118;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2119;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2120;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2121;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2122;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2123;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2124;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2125;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2126;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2127;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2128;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2129;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2130;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2131;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2132;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2133;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2134;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2135;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2136;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2137;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2138;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2139;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2140;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2141;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2142;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2143;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2144;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2145;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2146;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2147;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2148;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2149;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2150;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2151;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2152;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2153;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2154;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2155;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2156;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2157;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2158;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2159;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2160;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2161;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2162;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2163;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2164;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2165;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2166;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2167;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2168;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2169;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2170;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2171;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2172;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2173;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2174;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2175;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2176;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2177;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2178;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2179;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2180;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2181;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2182;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Up,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2183;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2184;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2185;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2186;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2187;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2188;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2189;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2190;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2191;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2192;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2193;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2194;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2195;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2196;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2197;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2198;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2199;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2200;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2201;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2202;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2203;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2204;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2205;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2206;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2207;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2208;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2209;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2210;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2211;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2212;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2213;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2214;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2215;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2216;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2217;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2218;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2219;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2220;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2221;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2222;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2223;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2224;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2225;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2226;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2227;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2228;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2229;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2230;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2231;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2232;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2233;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2234;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2235;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2236;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2237;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2238;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2239;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2240;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2241;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2242;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2243;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2244;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2245;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2246;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2247;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2248;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2249;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2250;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2251;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2252;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2253;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2254;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2255;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2256;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2257;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2258;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2259;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2260;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2261;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2262;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2263;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2264;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2265;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2266;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2267;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2268;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2269;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2270;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2271;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2272;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2273;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2274;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2275;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2276;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2277;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2278;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2279;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2280;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2281;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2282;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2283;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2284;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2285;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2286;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2287;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2288;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2289;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2290;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2291;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2292;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2293;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2294;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2295;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2296;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2297;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2298;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2299;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2300;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2301;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2302;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2303;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2304;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2305;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2306;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2307;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2308;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2309;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2310;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2311;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2312;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2313;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2314;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2315;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2316;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2317;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2318;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2319;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2320;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2321;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2322;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2323;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2324;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2325;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2326;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2327;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2328;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2329;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2330;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2331;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2332;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2333;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2334;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2335;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2336;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2337;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2338;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2339;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2340;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2341;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2342;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2343;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2344;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2345;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2346;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2347;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2348;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2349;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2350;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2351;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2352;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2353;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2354;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2355;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2356;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2357;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2358;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2359;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2360;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2361;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2362;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2363;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2364;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2365;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2366;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2367;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2368;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2369;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2370;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2371;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2372;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2373;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2374;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2375;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2376;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2377;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2378;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2379;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2380;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2381;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2382;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2383;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2384;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2385;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2386;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2387;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2388;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2389;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2390;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2391;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2392;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2393;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2394;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2395;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2396;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2397;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2398;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2399;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2400;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2401;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2402;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2403;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2404;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2405;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2406;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2407;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2408;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2409;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2410;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2411;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2412;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2413;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2414;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2415;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2416;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2417;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2418;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2419;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2420;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2421;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2422;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2423;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2424;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2425;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2426;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2427;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2428;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2429;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2430;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2431;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2432;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2433;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2434;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2435;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2436;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2437;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2438;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2439;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2440;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2441;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2442;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2443;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2444;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2445;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2446;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2447;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2448;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2449;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2450;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2451;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2452;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2453;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2454;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2455;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2456;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2457;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2458;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2459;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2460;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2461;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2462;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2463;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2464;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2465;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2466;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2467;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2468;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2469;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2470;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2471;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2472;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2473;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2474;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2475;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2476;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2477;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2478;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2479;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2480;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2481;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2482;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2483;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2484;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2485;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2486;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2487;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2488;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2489;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2490;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2491;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2492;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2493;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2494;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2495;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2496;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2497;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2498;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2499;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2500;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2501;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2502;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2503;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2504;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2505;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2506;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2507;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2508;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2509;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2510;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2511;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2512;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2513;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2514;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2515;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2516;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2517;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2518;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2519;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2520;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2521;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2522;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2523;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2524;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2525;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2526;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2527;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2528;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2529;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2530;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2531;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2532;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2533;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2534;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2535;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2536;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2537;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2538;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2539;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2540;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2541;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2542;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2543;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2544;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2545;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2546;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2547;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2548;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2549;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2550;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2551;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2552;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2553;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2554;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2555;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2556;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2557;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2558;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2559;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2560;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2561;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2562;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2563;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2564;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2565;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2566;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2567;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2568;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2569;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2570;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2571;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2572;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2573;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2574;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2575;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2576;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2577;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2578;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2579;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2580;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2581;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2582;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2583;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2584;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2585;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2586;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2587;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2588;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2589;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2590;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2591;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2592;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2593;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2594;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2595;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2596;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2597;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2598;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2599;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2600;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2601;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2602;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2603;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2604;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2605;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2606;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2607;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2608;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2609;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2610;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2611;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2612;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2613;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2614;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::Side,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2615;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2616;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2617;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2618;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2619;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2620;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2621;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2622;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2623;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2624;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2625;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2626;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2627;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2628;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2629;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2630;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2631;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2632;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2633;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2634;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2635;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2636;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2637;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2638;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2639;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2640;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2641;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2642;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2643;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2644;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2645;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2646;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2647;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2648;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2649;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2650;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2651;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2652;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2653;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2654;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2655;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2656;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2657;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2658;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2659;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2660;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2661;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2662;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2663;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2664;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2665;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2666;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2667;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2668;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2669;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2670;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2671;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2672;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2673;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2674;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2675;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2676;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2677;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2678;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2679;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2680;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2681;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2682;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2683;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2684;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2685;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2686;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2687;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2688;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2689;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2690;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2691;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2692;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2693;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2694;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2695;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2696;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2697;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2698;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2699;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2700;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2701;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2702;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2703;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2704;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2705;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2706;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2707;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2708;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2709;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2710;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2711;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2712;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2713;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2714;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2715;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2716;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2717;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2718;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2719;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2720;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2721;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2722;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2723;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2724;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2725;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2726;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2727;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2728;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2729;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2730;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2731;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2732;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2733;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2734;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2735;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2736;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2737;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2738;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2739;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2740;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2741;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2742;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2743;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2744;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2745;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2746;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2747;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2748;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2749;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2750;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2751;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2752;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2753;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2754;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2755;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2756;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2757;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2758;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Up,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2759;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2760;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2761;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2762;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2763;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2764;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2765;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2766;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2767;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2768;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2769;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2770;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2771;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2772;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2773;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2774;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2775;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2776;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2777;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2778;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2779;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2780;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2781;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2782;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2783;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2784;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2785;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2786;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2787;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2788;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2789;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2790;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2791;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2792;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2793;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2794;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2795;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2796;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2797;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2798;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2799;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2800;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2801;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2802;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2803;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2804;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2805;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2806;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2807;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2808;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2809;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2810;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2811;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2812;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2813;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2814;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2815;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2816;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2817;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2818;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2819;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2820;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2821;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2822;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2823;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2824;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2825;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2826;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2827;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2828;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2829;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2830;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2831;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2832;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2833;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2834;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2835;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2836;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2837;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2838;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2839;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2840;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2841;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2842;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2843;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2844;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2845;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2846;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2847;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2848;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2849;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2850;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2851;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2852;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2853;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2854;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2855;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2856;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2857;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2858;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2859;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2860;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2861;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2862;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2863;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2864;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2865;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2866;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2867;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2868;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2869;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2870;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2871;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2872;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2873;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2874;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2875;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2876;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2877;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2878;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2879;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2880;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2881;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2882;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2883;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2884;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2885;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2886;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2887;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2888;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2889;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2890;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2891;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2892;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2893;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2894;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2895;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2896;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2897;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2898;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2899;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2900;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2901;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2902;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::Side,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2903;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2904;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2905;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2906;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2907;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2908;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2909;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2910;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2911;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			0,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2912;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2913;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2914;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2915;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2916;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2917;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2918;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2919;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2920;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			1,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2921;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2922;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2923;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2924;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2925;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2926;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2927;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2928;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2929;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			2,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2930;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2931;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2932;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2933;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2934;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2935;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2936;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2937;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2938;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			3,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2939;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2940;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2941;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2942;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2943;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2944;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2945;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2946;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2947;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			4,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2948;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2949;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2950;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2951;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2952;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2953;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2954;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2955;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2956;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			5,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2957;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2958;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2959;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2960;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2961;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2962;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2963;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2964;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2965;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			6,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2966;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2967;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2968;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2969;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2970;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2971;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2972;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2973;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2974;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			7,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2975;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2976;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2977;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2978;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2979;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2980;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2981;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2982;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2983;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			8,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2984;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2985;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2986;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2987;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2988;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2989;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2990;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 2991;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 2992;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			9,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 2993;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 2994;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 2995;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 2996;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 2997;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 2998;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 2999;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3000;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3001;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			10,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3002;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 3003;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 3004;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 3005;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 3006;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 3007;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 3008;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3009;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3010;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			11,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3011;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 3012;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 3013;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 3014;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 3015;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 3016;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 3017;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3018;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3019;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			12,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3020;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 3021;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 3022;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 3023;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 3024;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 3025;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 3026;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3027;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3028;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			13,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3029;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 3030;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 3031;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 3032;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 3033;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 3034;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 3035;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3036;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3037;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			14,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3038;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Up
		)
			.ID:
			return 3039;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::Side
		)
			.ID:
			return 3040;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Up,
			RedstoneWire::West::None
		)
			.ID:
			return 3041;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Up
		)
			.ID:
			return 3042;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::Side
		)
			.ID:
			return 3043;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::Side,
			RedstoneWire::West::None
		)
			.ID:
			return 3044;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Up
		)
			.ID:
			return 3045;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::Side
		)
			.ID:
			return 3046;
		case RedstoneWire::RedstoneWire(
			RedstoneWire::East::None,
			RedstoneWire::North::None,
			15,
			RedstoneWire::South::None,
			RedstoneWire::West::None
		)
			.ID:
			return 3047;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, true, true).ID:                   return 3513;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, true, false).ID:                  return 3514;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, false, true).ID:                  return 3515;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZM, false, false).ID:                 return 3516;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, true, true).ID:                   return 3517;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, true, false).ID:                  return 3518;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, false, true).ID:                  return 3519;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_ZP, false, false).ID:                 return 3520;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, true, true).ID:                   return 3521;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, true, false).ID:                  return 3522;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, false, true).ID:                  return 3523;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XM, false, false).ID:                 return 3524;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, true, true).ID:                   return 3525;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, true, false).ID:                  return 3526;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, false, true).ID:                  return 3527;
		case Repeater::Repeater(1, eBlockFace::BLOCK_FACE_XP, false, false).ID:                 return 3528;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, true, true).ID:                   return 3529;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, true, false).ID:                  return 3530;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, false, true).ID:                  return 3531;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZM, false, false).ID:                 return 3532;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, true, true).ID:                   return 3533;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, true, false).ID:                  return 3534;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, false, true).ID:                  return 3535;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_ZP, false, false).ID:                 return 3536;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, true, true).ID:                   return 3537;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, true, false).ID:                  return 3538;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, false, true).ID:                  return 3539;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XM, false, false).ID:                 return 3540;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, true, true).ID:                   return 3541;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, true, false).ID:                  return 3542;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, false, true).ID:                  return 3543;
		case Repeater::Repeater(2, eBlockFace::BLOCK_FACE_XP, false, false).ID:                 return 3544;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, true, true).ID:                   return 3545;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, true, false).ID:                  return 3546;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, false, true).ID:                  return 3547;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZM, false, false).ID:                 return 3548;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, true, true).ID:                   return 3549;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, true, false).ID:                  return 3550;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, false, true).ID:                  return 3551;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_ZP, false, false).ID:                 return 3552;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, true, true).ID:                   return 3553;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, true, false).ID:                  return 3554;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, false, true).ID:                  return 3555;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XM, false, false).ID:                 return 3556;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, true, true).ID:                   return 3557;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, true, false).ID:                  return 3558;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, false, true).ID:                  return 3559;
		case Repeater::Repeater(3, eBlockFace::BLOCK_FACE_XP, false, false).ID:                 return 3560;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, true, true).ID:                   return 3561;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, true, false).ID:                  return 3562;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, false, true).ID:                  return 3563;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZM, false, false).ID:                 return 3564;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, true, true).ID:                   return 3565;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, true, false).ID:                  return 3566;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, false, true).ID:                  return 3567;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_ZP, false, false).ID:                 return 3568;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, true, true).ID:                   return 3569;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, true, false).ID:                  return 3570;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, false, true).ID:                  return 3571;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XM, false, false).ID:                 return 3572;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, true, true).ID:                   return 3573;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, true, false).ID:                  return 3574;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, false, true).ID:                  return 3575;
		case Repeater::Repeater(4, eBlockFace::BLOCK_FACE_XP, false, false).ID:                 return 3576;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_ZM).ID:  return 8164;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_XP).ID:  return 8165;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_ZP).ID:  return 8166;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_XM).ID:  return 8167;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_YP).ID:  return 8168;
		case RepeatingCommandBlock::RepeatingCommandBlock(true, eBlockFace::BLOCK_FACE_YM).ID:  return 8169;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_ZM).ID: return 8170;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_XP).ID: return 8171;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_ZP).ID: return 8172;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_XM).ID: return 8173;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_YP).ID: return 8174;
		case RepeatingCommandBlock::RepeatingCommandBlock(false, eBlockFace::BLOCK_FACE_YM).ID: return 8175;
		case RoseBush::RoseBush(RoseBush::Half::Upper).ID:                                      return 6846;
		case RoseBush::RoseBush(RoseBush::Half::Lower).ID:                                      return 6847;
		case Sand::Sand().ID:                                                                   return 66;
		case Sandstone::Sandstone().ID:                                                         return 245;
		case SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Top).ID:                         return 7300;
		case SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Bottom).ID:                      return 7302;
		case SandstoneSlab::SandstoneSlab(SandstoneSlab::Type::Double).ID:                      return 7304;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4651;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4653;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4655;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4657;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4659;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4661;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4663;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4665;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4667;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4669;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4671;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4673;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4675;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4677;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4679;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4681;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4683;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4685;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4687;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4689;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4691;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4693;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4695;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4697;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4699;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4701;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4703;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4705;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4707;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XM,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4709;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4711;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4713;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4715;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4717;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Top,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4719;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::Straight
		)
			.ID:
			return 4721;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerLeft
		)
			.ID:
			return 4723;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::InnerRight
		)
			.ID:
			return 4725;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterLeft
		)
			.ID:
			return 4727;
		case SandstoneStairs::SandstoneStairs(
			eBlockFace::BLOCK_FACE_XP,
			SandstoneStairs::Half::Bottom,
			SandstoneStairs::Shape::OuterRight
		)
			.ID:
			return 4729;
		case SeaLantern::SeaLantern().ID:                                                                  return 6819;
		case SeaPickle::SeaPickle(1).ID:                                                                   return 8565;
		case SeaPickle::SeaPickle(2).ID:                                                                   return 8567;
		case SeaPickle::SeaPickle(3).ID:                                                                   return 8569;
		case SeaPickle::SeaPickle(4).ID:                                                                   return 8571;
		case Seagrass::Seagrass().ID:                                                                      return 1044;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                                         return 8211;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                                         return 8212;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                                         return 8213;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                                         return 8214;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                                         return 8215;
		case ShulkerBox::ShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                                         return 8216;
		case OakSign::OakSign(0).ID:                                                                       return 3076;
		case OakSign::OakSign(1).ID:                                                                       return 3078;
		case OakSign::OakSign(2).ID:                                                                       return 3080;
		case OakSign::OakSign(3).ID:                                                                       return 3082;
		case OakSign::OakSign(4).ID:                                                                       return 3084;
		case OakSign::OakSign(5).ID:                                                                       return 3086;
		case OakSign::OakSign(6).ID:                                                                       return 3088;
		case OakSign::OakSign(7).ID:                                                                       return 3090;
		case OakSign::OakSign(8).ID:                                                                       return 3092;
		case OakSign::OakSign(9).ID:                                                                       return 3094;
		case OakSign::OakSign(10).ID:                                                                      return 3096;
		case OakSign::OakSign(11).ID:                                                                      return 3098;
		case OakSign::OakSign(12).ID:                                                                      return 3100;
		case OakSign::OakSign(13).ID:                                                                      return 3102;
		case OakSign::OakSign(14).ID:                                                                      return 3104;
		case OakSign::OakSign(15).ID:                                                                      return 3106;
		case SkeletonSkull::SkeletonSkull(0).ID:                                                           return 5451;
		case SkeletonSkull::SkeletonSkull(1).ID:                                                           return 5452;
		case SkeletonSkull::SkeletonSkull(2).ID:                                                           return 5453;
		case SkeletonSkull::SkeletonSkull(3).ID:                                                           return 5454;
		case SkeletonSkull::SkeletonSkull(4).ID:                                                           return 5455;
		case SkeletonSkull::SkeletonSkull(5).ID:                                                           return 5456;
		case SkeletonSkull::SkeletonSkull(6).ID:                                                           return 5457;
		case SkeletonSkull::SkeletonSkull(7).ID:                                                           return 5458;
		case SkeletonSkull::SkeletonSkull(8).ID:                                                           return 5459;
		case SkeletonSkull::SkeletonSkull(9).ID:                                                           return 5460;
		case SkeletonSkull::SkeletonSkull(10).ID:                                                          return 5461;
		case SkeletonSkull::SkeletonSkull(11).ID:                                                          return 5462;
		case SkeletonSkull::SkeletonSkull(12).ID:                                                          return 5463;
		case SkeletonSkull::SkeletonSkull(13).ID:                                                          return 5464;
		case SkeletonSkull::SkeletonSkull(14).ID:                                                          return 5465;
		case SkeletonSkull::SkeletonSkull(15).ID:                                                          return 5466;
		case SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_ZM).ID:                           return 5447;
		case SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_ZP).ID:                           return 5448;
		case SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_XM).ID:                           return 5449;
		case SkeletonWallSkull::SkeletonWallSkull(eBlockFace::BLOCK_FACE_XP).ID:                           return 5450;
		case SlimeBlock::SlimeBlock().ID:                                                                  return 6492;
		case SmoothQuartz::SmoothQuartz().ID:                                                              return 7355;
		case SmoothRedSandstone::SmoothRedSandstone().ID:                                                  return 7356;
		case SmoothSandstone::SmoothSandstone().ID:                                                        return 7354;
		case SmoothStone::SmoothStone().ID:                                                                return 7353;
		case Snow::Snow(1).ID:                                                                             return 3415;
		case Snow::Snow(2).ID:                                                                             return 3416;
		case Snow::Snow(3).ID:                                                                             return 3417;
		case Snow::Snow(4).ID:                                                                             return 3418;
		case Snow::Snow(5).ID:                                                                             return 3419;
		case Snow::Snow(6).ID:                                                                             return 3420;
		case Snow::Snow(7).ID:                                                                             return 3421;
		case Snow::Snow(8).ID:                                                                             return 3422;
		case SnowBlock::SnowBlock().ID:                                                                    return 3424;
		case SoulSand::SoulSand().ID:                                                                      return 3494;
		case Spawner::Spawner().ID:                                                                        return 1647;
		case Sponge::Sponge().ID:                                                                          return 228;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 5327;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 5328;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 5329;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 5330;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 5331;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 5332;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 5333;
		case SpruceButton::SpruceButton(SpruceButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 5334;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 5335;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 5336;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 5337;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 5338;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 5339;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 5340;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 5341;
		case SpruceButton::SpruceButton(SpruceButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 5342;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 5343;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 5344;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 5345;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 5346;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 5347;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 5348;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 5349;
		case SpruceButton::SpruceButton(SpruceButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 5350;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7677;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7678;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7679;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7680;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7681;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7682;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7683;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7684;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7685;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7686;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7687;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7688;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7689;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7690;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7691;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7692;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7693;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7694;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7695;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7696;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7697;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7698;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7699;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7700;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7701;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7702;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7703;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7704;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7705;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7706;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7707;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7708;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7709;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7710;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7711;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7712;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7713;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7714;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7715;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7716;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7717;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7718;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7719;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7720;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7721;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7722;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7723;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XM,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7724;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7725;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7726;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7727;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7728;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7729;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7730;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7731;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Upper,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7732;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			true
		)
			.ID:
			return 7733;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			true,
			false
		)
			.ID:
			return 7734;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			true
		)
			.ID:
			return 7735;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Left,
			false,
			false
		)
			.ID:
			return 7736;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			true
		)
			.ID:
			return 7737;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			true,
			false
		)
			.ID:
			return 7738;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			true
		)
			.ID:
			return 7739;
		case SpruceDoor::SpruceDoor(
			eBlockFace::BLOCK_FACE_XP,
			SpruceDoor::Half::Lower,
			SpruceDoor::Hinge::Right,
			false,
			false
		)
			.ID:
			return 7740;
		case SpruceFence::SpruceFence(true, true, true, true).ID:                                 return 7519;
		case SpruceFence::SpruceFence(true, true, true, false).ID:                                return 7520;
		case SpruceFence::SpruceFence(true, true, false, true).ID:                                return 7523;
		case SpruceFence::SpruceFence(true, true, false, false).ID:                               return 7524;
		case SpruceFence::SpruceFence(true, false, true, true).ID:                                return 7527;
		case SpruceFence::SpruceFence(true, false, true, false).ID:                               return 7528;
		case SpruceFence::SpruceFence(true, false, false, true).ID:                               return 7531;
		case SpruceFence::SpruceFence(true, false, false, false).ID:                              return 7532;
		case SpruceFence::SpruceFence(false, true, true, true).ID:                                return 7535;
		case SpruceFence::SpruceFence(false, true, true, false).ID:                               return 7536;
		case SpruceFence::SpruceFence(false, true, false, true).ID:                               return 7539;
		case SpruceFence::SpruceFence(false, true, false, false).ID:                              return 7540;
		case SpruceFence::SpruceFence(false, false, true, true).ID:                               return 7543;
		case SpruceFence::SpruceFence(false, false, true, false).ID:                              return 7544;
		case SpruceFence::SpruceFence(false, false, false, true).ID:                              return 7547;
		case SpruceFence::SpruceFence(false, false, false, false).ID:                             return 7548;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, true).ID:    return 7357;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, true, true, false).ID:   return 7358;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, true).ID:   return 7359;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, true, false, false).ID:  return 7360;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, true).ID:   return 7361;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, true, false).ID:  return 7362;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, true).ID:  return 7363;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZM, false, false, false).ID: return 7364;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, true).ID:    return 7365;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, true, true, false).ID:   return 7366;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, true).ID:   return 7367;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, true, false, false).ID:  return 7368;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, true).ID:   return 7369;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, true, false).ID:  return 7370;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, true).ID:  return 7371;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_ZP, false, false, false).ID: return 7372;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, true).ID:    return 7373;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, true, true, false).ID:   return 7374;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, true).ID:   return 7375;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, true, false, false).ID:  return 7376;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, true).ID:   return 7377;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, true, false).ID:  return 7378;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, true).ID:  return 7379;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XM, false, false, false).ID: return 7380;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, true).ID:    return 7381;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, true, true, false).ID:   return 7382;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, true).ID:   return 7383;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, true, false, false).ID:  return 7384;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, true).ID:   return 7385;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, true, false).ID:  return 7386;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, true).ID:  return 7387;
		case SpruceFenceGate::SpruceFenceGate(eBlockFace::BLOCK_FACE_XP, false, false, false).ID: return 7388;
		case SpruceLeaves::SpruceLeaves(1, true).ID:                                              return 158;
		case SpruceLeaves::SpruceLeaves(1, false).ID:                                             return 159;
		case SpruceLeaves::SpruceLeaves(2, true).ID:                                              return 160;
		case SpruceLeaves::SpruceLeaves(2, false).ID:                                             return 161;
		case SpruceLeaves::SpruceLeaves(3, true).ID:                                              return 162;
		case SpruceLeaves::SpruceLeaves(3, false).ID:                                             return 163;
		case SpruceLeaves::SpruceLeaves(4, true).ID:                                              return 164;
		case SpruceLeaves::SpruceLeaves(4, false).ID:                                             return 165;
		case SpruceLeaves::SpruceLeaves(5, true).ID:                                              return 166;
		case SpruceLeaves::SpruceLeaves(5, false).ID:                                             return 167;
		case SpruceLeaves::SpruceLeaves(6, true).ID:                                              return 168;
		case SpruceLeaves::SpruceLeaves(6, false).ID:                                             return 169;
		case SpruceLeaves::SpruceLeaves(7, true).ID:                                              return 170;
		case SpruceLeaves::SpruceLeaves(7, false).ID:                                             return 171;
		case SpruceLog::SpruceLog(SpruceLog::Axis::X).ID:                                         return 75;
		case SpruceLog::SpruceLog(SpruceLog::Axis::Y).ID:                                         return 76;
		case SpruceLog::SpruceLog(SpruceLog::Axis::Z).ID:                                         return 77;
		case SprucePlanks::SprucePlanks().ID:                                                     return 16;
		case SprucePressurePlate::SprucePressurePlate(true).ID:                                   return 3369;
		case SprucePressurePlate::SprucePressurePlate(false).ID:                                  return 3370;
		case SpruceSapling::SpruceSapling(0).ID:                                                  return 23;
		case SpruceSapling::SpruceSapling(1).ID:                                                  return 24;
		case SpruceSlab::SpruceSlab(SpruceSlab::Type::Top).ID:                                    return 7264;
		case SpruceSlab::SpruceSlab(SpruceSlab::Type::Bottom).ID:                                 return 7266;
		case SpruceSlab::SpruceSlab(SpruceSlab::Type::Double).ID:                                 return 7268;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4885;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4887;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4889;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4891;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4893;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4895;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4897;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4899;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4901;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4903;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4905;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4907;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4909;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4911;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4913;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4915;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4917;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4919;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4921;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_ZP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4923;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4925;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4927;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4929;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4931;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4933;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4935;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4937;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4939;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4941;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XM,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4943;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4945;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4947;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4949;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4951;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Top,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4953;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::Straight
		)
			.ID:
			return 4955;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerLeft
		)
			.ID:
			return 4957;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::InnerRight
		)
			.ID:
			return 4959;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterLeft
		)
			.ID:
			return 4961;
		case SpruceStairs::SpruceStairs(
			eBlockFace::BLOCK_FACE_XP,
			SpruceStairs::Half::Bottom,
			SpruceStairs::Shape::OuterRight
		)
			.ID:
			return 4963;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Top, true, true).ID:
			return 3658;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Top, true, false).ID:
			return 3660;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Top, false, true).ID:
			return 3662;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Top, false, false).ID:
			return 3664;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Bottom, true, true).ID:
			return 3666;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Bottom, true, false).ID:
			return 3668;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Bottom, false, true).ID:
			return 3670;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZM, SpruceTrapdoor::Half::Bottom, false, false).ID:
			return 3672;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Top, true, true).ID:
			return 3674;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Top, true, false).ID:
			return 3676;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Top, false, true).ID:
			return 3678;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Top, false, false).ID:
			return 3680;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Bottom, true, true).ID:
			return 3682;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Bottom, true, false).ID:
			return 3684;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Bottom, false, true).ID:
			return 3686;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_ZP, SpruceTrapdoor::Half::Bottom, false, false).ID:
			return 3688;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Top, true, true).ID:
			return 3690;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Top, true, false).ID:
			return 3692;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Top, false, true).ID:
			return 3694;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Top, false, false).ID:
			return 3696;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Bottom, true, true).ID:
			return 3698;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Bottom, true, false).ID:
			return 3700;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Bottom, false, true).ID:
			return 3702;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XM, SpruceTrapdoor::Half::Bottom, false, false).ID:
			return 3704;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Top, true, true).ID:
			return 3706;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Top, true, false).ID:
			return 3708;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Top, false, true).ID:
			return 3710;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Top, false, false).ID:
			return 3712;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Bottom, true, true).ID:
			return 3714;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Bottom, true, false).ID:
			return 3716;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Bottom, false, true).ID:
			return 3718;
		case SpruceTrapdoor::SpruceTrapdoor(eBlockFace::BLOCK_FACE_XP, SpruceTrapdoor::Half::Bottom, false, false).ID:
			return 3720;
		case SpruceWood::SpruceWood(SpruceWood::Axis::X).ID:                  return 111;
		case SpruceWood::SpruceWood(SpruceWood::Axis::Y).ID:                  return 112;
		case SpruceWood::SpruceWood(SpruceWood::Axis::Z).ID:                  return 113;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_ZM).ID:  return 1028;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_XP).ID:  return 1029;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_ZP).ID:  return 1030;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_XM).ID:  return 1031;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_YP).ID:  return 1032;
		case StickyPiston::StickyPiston(true, eBlockFace::BLOCK_FACE_YM).ID:  return 1033;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_ZM).ID: return 1034;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_XP).ID: return 1035;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_ZP).ID: return 1036;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_XM).ID: return 1037;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_YP).ID: return 1038;
		case StickyPiston::StickyPiston(false, eBlockFace::BLOCK_FACE_YM).ID: return 1039;
		case Stone::Stone().ID:                                               return 1;
		case StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Top).ID:    return 7324;
		case StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Bottom).ID: return 7326;
		case StoneBrickSlab::StoneBrickSlab(StoneBrickSlab::Type::Double).ID: return 7328;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4413;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4415;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4417;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4419;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4421;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4423;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4425;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4427;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4429;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4431;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4433;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4435;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4437;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4439;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4441;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4443;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4445;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4447;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4449;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_ZP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4451;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4453;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4455;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4457;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4459;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4461;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4463;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4465;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4467;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4469;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XM,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4471;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4473;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4475;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4477;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4479;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Top,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4481;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::Straight
		)
			.ID:
			return 4483;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerLeft
		)
			.ID:
			return 4485;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::InnerRight
		)
			.ID:
			return 4487;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterLeft
		)
			.ID:
			return 4489;
		case StoneBrickStairs::StoneBrickStairs(
			eBlockFace::BLOCK_FACE_XP,
			StoneBrickStairs::Half::Bottom,
			StoneBrickStairs::Shape::OuterRight
		)
			.ID:
			return 4491;
		case StoneBricks::StoneBricks().ID:                                                             return 3983;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, true).ID:    return 3391;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZM, false).ID:   return 3392;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, true).ID:    return 3393;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_ZP, false).ID:   return 3394;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, true).ID:    return 3395;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_XM, false).ID:   return 3396;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, true).ID:    return 3397;
		case StoneButton::StoneButton(StoneButton::Face::Floor, eBlockFace::BLOCK_FACE_XP, false).ID:   return 3398;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, true).ID:     return 3399;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZM, false).ID:    return 3400;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, true).ID:     return 3401;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_ZP, false).ID:    return 3402;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, true).ID:     return 3403;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XM, false).ID:    return 3404;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, true).ID:     return 3405;
		case StoneButton::StoneButton(StoneButton::Face::Wall, eBlockFace::BLOCK_FACE_XP, false).ID:    return 3406;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, true).ID:  return 3407;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZM, false).ID: return 3408;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, true).ID:  return 3409;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_ZP, false).ID: return 3410;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, true).ID:  return 3411;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XM, false).ID: return 3412;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, true).ID:  return 3413;
		case StoneButton::StoneButton(StoneButton::Face::Ceiling, eBlockFace::BLOCK_FACE_XP, false).ID: return 3414;
		case StonePressurePlate::StonePressurePlate(true).ID:                                           return 3301;
		case StonePressurePlate::StonePressurePlate(false).ID:                                          return 3302;
		case StoneSlab::StoneSlab(StoneSlab::Type::Top).ID:                                             return 7294;
		case StoneSlab::StoneSlab(StoneSlab::Type::Bottom).ID:                                          return 7296;
		case StoneSlab::StoneSlab(StoneSlab::Type::Double).ID:                                          return 7298;
		case StrippedAcaciaLog::StrippedAcaciaLog(StrippedAcaciaLog::Axis::X).ID:                       return 99;
		case StrippedAcaciaLog::StrippedAcaciaLog(StrippedAcaciaLog::Axis::Y).ID:                       return 100;
		case StrippedAcaciaLog::StrippedAcaciaLog(StrippedAcaciaLog::Axis::Z).ID:                       return 101;
		case StrippedAcaciaWood::StrippedAcaciaWood(StrippedAcaciaWood::Axis::X).ID:                    return 138;
		case StrippedAcaciaWood::StrippedAcaciaWood(StrippedAcaciaWood::Axis::Y).ID:                    return 139;
		case StrippedAcaciaWood::StrippedAcaciaWood(StrippedAcaciaWood::Axis::Z).ID:                    return 140;
		case StrippedBirchLog::StrippedBirchLog(StrippedBirchLog::Axis::X).ID:                          return 93;
		case StrippedBirchLog::StrippedBirchLog(StrippedBirchLog::Axis::Y).ID:                          return 94;
		case StrippedBirchLog::StrippedBirchLog(StrippedBirchLog::Axis::Z).ID:                          return 95;
		case StrippedBirchWood::StrippedBirchWood(StrippedBirchWood::Axis::X).ID:                       return 132;
		case StrippedBirchWood::StrippedBirchWood(StrippedBirchWood::Axis::Y).ID:                       return 133;
		case StrippedBirchWood::StrippedBirchWood(StrippedBirchWood::Axis::Z).ID:                       return 134;
		case StrippedDarkOakLog::StrippedDarkOakLog(StrippedDarkOakLog::Axis::X).ID:                    return 102;
		case StrippedDarkOakLog::StrippedDarkOakLog(StrippedDarkOakLog::Axis::Y).ID:                    return 103;
		case StrippedDarkOakLog::StrippedDarkOakLog(StrippedDarkOakLog::Axis::Z).ID:                    return 104;
		case StrippedDarkOakWood::StrippedDarkOakWood(StrippedDarkOakWood::Axis::X).ID:                 return 141;
		case StrippedDarkOakWood::StrippedDarkOakWood(StrippedDarkOakWood::Axis::Y).ID:                 return 142;
		case StrippedDarkOakWood::StrippedDarkOakWood(StrippedDarkOakWood::Axis::Z).ID:                 return 143;
		case StrippedJungleLog::StrippedJungleLog(StrippedJungleLog::Axis::X).ID:                       return 96;
		case StrippedJungleLog::StrippedJungleLog(StrippedJungleLog::Axis::Y).ID:                       return 97;
		case StrippedJungleLog::StrippedJungleLog(StrippedJungleLog::Axis::Z).ID:                       return 98;
		case StrippedJungleWood::StrippedJungleWood(StrippedJungleWood::Axis::X).ID:                    return 135;
		case StrippedJungleWood::StrippedJungleWood(StrippedJungleWood::Axis::Y).ID:                    return 136;
		case StrippedJungleWood::StrippedJungleWood(StrippedJungleWood::Axis::Z).ID:                    return 137;
		case StrippedOakLog::StrippedOakLog(StrippedOakLog::Axis::X).ID:                                return 105;
		case StrippedOakLog::StrippedOakLog(StrippedOakLog::Axis::Y).ID:                                return 106;
		case StrippedOakLog::StrippedOakLog(StrippedOakLog::Axis::Z).ID:                                return 107;
		case StrippedOakWood::StrippedOakWood(StrippedOakWood::Axis::X).ID:                             return 126;
		case StrippedOakWood::StrippedOakWood(StrippedOakWood::Axis::Y).ID:                             return 127;
		case StrippedOakWood::StrippedOakWood(StrippedOakWood::Axis::Z).ID:                             return 128;
		case StrippedSpruceLog::StrippedSpruceLog(StrippedSpruceLog::Axis::X).ID:                       return 90;
		case StrippedSpruceLog::StrippedSpruceLog(StrippedSpruceLog::Axis::Y).ID:                       return 91;
		case StrippedSpruceLog::StrippedSpruceLog(StrippedSpruceLog::Axis::Z).ID:                       return 92;
		case StrippedSpruceWood::StrippedSpruceWood(StrippedSpruceWood::Axis::X).ID:                    return 129;
		case StrippedSpruceWood::StrippedSpruceWood(StrippedSpruceWood::Axis::Y).ID:                    return 130;
		case StrippedSpruceWood::StrippedSpruceWood(StrippedSpruceWood::Axis::Z).ID:                    return 131;
		case StructureBlock::StructureBlock(StructureBlock::Mode::Save).ID:                             return 8578;
		case StructureBlock::StructureBlock(StructureBlock::Mode::Load).ID:                             return 8579;
		case StructureBlock::StructureBlock(StructureBlock::Mode::Corner).ID:                           return 8580;
		case StructureBlock::StructureBlock(StructureBlock::Mode::Data).ID:                             return 8581;
		case StructureVoid::StructureVoid().ID:                                                         return 8198;
		case SugarCane::SugarCane(0).ID:                                                                return 3442;
		case SugarCane::SugarCane(1).ID:                                                                return 3443;
		case SugarCane::SugarCane(2).ID:                                                                return 3444;
		case SugarCane::SugarCane(3).ID:                                                                return 3445;
		case SugarCane::SugarCane(4).ID:                                                                return 3446;
		case SugarCane::SugarCane(5).ID:                                                                return 3447;
		case SugarCane::SugarCane(6).ID:                                                                return 3448;
		case SugarCane::SugarCane(7).ID:                                                                return 3449;
		case SugarCane::SugarCane(8).ID:                                                                return 3450;
		case SugarCane::SugarCane(9).ID:                                                                return 3451;
		case SugarCane::SugarCane(10).ID:                                                               return 3452;
		case SugarCane::SugarCane(11).ID:                                                               return 3453;
		case SugarCane::SugarCane(12).ID:                                                               return 3454;
		case SugarCane::SugarCane(13).ID:                                                               return 3455;
		case SugarCane::SugarCane(14).ID:                                                               return 3456;
		case SugarCane::SugarCane(15).ID:                                                               return 3457;
		case Sunflower::Sunflower(Sunflower::Half::Upper).ID:                                           return 6842;
		case Sunflower::Sunflower(Sunflower::Half::Lower).ID:                                           return 6843;
		case TNT::TNT(true).ID:                                                                         return 1126;
		case TNT::TNT(false).ID:                                                                        return 1126;
		case TallGrass::TallGrass(TallGrass::Half::Upper).ID:                                           return 6850;
		case TallGrass::TallGrass(TallGrass::Half::Lower).ID:                                           return 6851;
		case TallSeagrass::TallSeagrass(TallSeagrass::Half::Upper).ID:                                  return 1045;
		case TallSeagrass::TallSeagrass(TallSeagrass::Half::Lower).ID:                                  return 1046;
		case Terracotta::Terracotta().ID:                                                               return 6839;
		case Torch::Torch().ID:                                                                         return 1130;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZM, TrappedChest::Type::Single).ID:      return 5580;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZM, TrappedChest::Type::Left).ID:        return 5582;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZM, TrappedChest::Type::Right).ID:       return 5584;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZP, TrappedChest::Type::Single).ID:      return 5586;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZP, TrappedChest::Type::Left).ID:        return 5588;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_ZP, TrappedChest::Type::Right).ID:       return 5590;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XM, TrappedChest::Type::Single).ID:      return 5592;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XM, TrappedChest::Type::Left).ID:        return 5594;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XM, TrappedChest::Type::Right).ID:       return 5596;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XP, TrappedChest::Type::Single).ID:      return 5598;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XP, TrappedChest::Type::Left).ID:        return 5600;
		case TrappedChest::TrappedChest(eBlockFace::BLOCK_FACE_XP, TrappedChest::Type::Right).ID:       return 5602;
		case Tripwire::Tripwire(true, true, true, true, true, true, true).ID:                           return 4755;
		case Tripwire::Tripwire(true, true, true, true, true, true, false).ID:                          return 4756;
		case Tripwire::Tripwire(true, true, true, true, true, false, true).ID:                          return 4757;
		case Tripwire::Tripwire(true, true, true, true, true, false, false).ID:                         return 4758;
		case Tripwire::Tripwire(true, true, true, true, false, true, true).ID:                          return 4759;
		case Tripwire::Tripwire(true, true, true, true, false, true, false).ID:                         return 4760;
		case Tripwire::Tripwire(true, true, true, true, false, false, true).ID:                         return 4761;
		case Tripwire::Tripwire(true, true, true, true, false, false, false).ID:                        return 4762;
		case Tripwire::Tripwire(true, true, true, false, true, true, true).ID:                          return 4763;
		case Tripwire::Tripwire(true, true, true, false, true, true, false).ID:                         return 4764;
		case Tripwire::Tripwire(true, true, true, false, true, false, true).ID:                         return 4765;
		case Tripwire::Tripwire(true, true, true, false, true, false, false).ID:                        return 4766;
		case Tripwire::Tripwire(true, true, true, false, false, true, true).ID:                         return 4767;
		case Tripwire::Tripwire(true, true, true, false, false, true, false).ID:                        return 4768;
		case Tripwire::Tripwire(true, true, true, false, false, false, true).ID:                        return 4769;
		case Tripwire::Tripwire(true, true, true, false, false, false, false).ID:                       return 4770;
		case Tripwire::Tripwire(true, true, false, true, true, true, true).ID:                          return 4771;
		case Tripwire::Tripwire(true, true, false, true, true, true, false).ID:                         return 4772;
		case Tripwire::Tripwire(true, true, false, true, true, false, true).ID:                         return 4773;
		case Tripwire::Tripwire(true, true, false, true, true, false, false).ID:                        return 4774;
		case Tripwire::Tripwire(true, true, false, true, false, true, true).ID:                         return 4775;
		case Tripwire::Tripwire(true, true, false, true, false, true, false).ID:                        return 4776;
		case Tripwire::Tripwire(true, true, false, true, false, false, true).ID:                        return 4777;
		case Tripwire::Tripwire(true, true, false, true, false, false, false).ID:                       return 4778;
		case Tripwire::Tripwire(true, true, false, false, true, true, true).ID:                         return 4779;
		case Tripwire::Tripwire(true, true, false, false, true, true, false).ID:                        return 4780;
		case Tripwire::Tripwire(true, true, false, false, true, false, true).ID:                        return 4781;
		case Tripwire::Tripwire(true, true, false, false, true, false, false).ID:                       return 4782;
		case Tripwire::Tripwire(true, true, false, false, false, true, true).ID:                        return 4783;
		case Tripwire::Tripwire(true, true, false, false, false, true, false).ID:                       return 4784;
		case Tripwire::Tripwire(true, true, false, false, false, false, true).ID:                       return 4785;
		case Tripwire::Tripwire(true, true, false, false, false, false, false).ID:                      return 4786;
		case Tripwire::Tripwire(true, false, true, true, true, true, true).ID:                          return 4787;
		case Tripwire::Tripwire(true, false, true, true, true, true, false).ID:                         return 4788;
		case Tripwire::Tripwire(true, false, true, true, true, false, true).ID:                         return 4789;
		case Tripwire::Tripwire(true, false, true, true, true, false, false).ID:                        return 4790;
		case Tripwire::Tripwire(true, false, true, true, false, true, true).ID:                         return 4791;
		case Tripwire::Tripwire(true, false, true, true, false, true, false).ID:                        return 4792;
		case Tripwire::Tripwire(true, false, true, true, false, false, true).ID:                        return 4793;
		case Tripwire::Tripwire(true, false, true, true, false, false, false).ID:                       return 4794;
		case Tripwire::Tripwire(true, false, true, false, true, true, true).ID:                         return 4795;
		case Tripwire::Tripwire(true, false, true, false, true, true, false).ID:                        return 4796;
		case Tripwire::Tripwire(true, false, true, false, true, false, true).ID:                        return 4797;
		case Tripwire::Tripwire(true, false, true, false, true, false, false).ID:                       return 4798;
		case Tripwire::Tripwire(true, false, true, false, false, true, true).ID:                        return 4799;
		case Tripwire::Tripwire(true, false, true, false, false, true, false).ID:                       return 4800;
		case Tripwire::Tripwire(true, false, true, false, false, false, true).ID:                       return 4801;
		case Tripwire::Tripwire(true, false, true, false, false, false, false).ID:                      return 4802;
		case Tripwire::Tripwire(true, false, false, true, true, true, true).ID:                         return 4803;
		case Tripwire::Tripwire(true, false, false, true, true, true, false).ID:                        return 4804;
		case Tripwire::Tripwire(true, false, false, true, true, false, true).ID:                        return 4805;
		case Tripwire::Tripwire(true, false, false, true, true, false, false).ID:                       return 4806;
		case Tripwire::Tripwire(true, false, false, true, false, true, true).ID:                        return 4807;
		case Tripwire::Tripwire(true, false, false, true, false, true, false).ID:                       return 4808;
		case Tripwire::Tripwire(true, false, false, true, false, false, true).ID:                       return 4809;
		case Tripwire::Tripwire(true, false, false, true, false, false, false).ID:                      return 4810;
		case Tripwire::Tripwire(true, false, false, false, true, true, true).ID:                        return 4811;
		case Tripwire::Tripwire(true, false, false, false, true, true, false).ID:                       return 4812;
		case Tripwire::Tripwire(true, false, false, false, true, false, true).ID:                       return 4813;
		case Tripwire::Tripwire(true, false, false, false, true, false, false).ID:                      return 4814;
		case Tripwire::Tripwire(true, false, false, false, false, true, true).ID:                       return 4815;
		case Tripwire::Tripwire(true, false, false, false, false, true, false).ID:                      return 4816;
		case Tripwire::Tripwire(true, false, false, false, false, false, true).ID:                      return 4817;
		case Tripwire::Tripwire(true, false, false, false, false, false, false).ID:                     return 4818;
		case Tripwire::Tripwire(false, true, true, true, true, true, true).ID:                          return 4819;
		case Tripwire::Tripwire(false, true, true, true, true, true, false).ID:                         return 4820;
		case Tripwire::Tripwire(false, true, true, true, true, false, true).ID:                         return 4821;
		case Tripwire::Tripwire(false, true, true, true, true, false, false).ID:                        return 4822;
		case Tripwire::Tripwire(false, true, true, true, false, true, true).ID:                         return 4823;
		case Tripwire::Tripwire(false, true, true, true, false, true, false).ID:                        return 4824;
		case Tripwire::Tripwire(false, true, true, true, false, false, true).ID:                        return 4825;
		case Tripwire::Tripwire(false, true, true, true, false, false, false).ID:                       return 4826;
		case Tripwire::Tripwire(false, true, true, false, true, true, true).ID:                         return 4827;
		case Tripwire::Tripwire(false, true, true, false, true, true, false).ID:                        return 4828;
		case Tripwire::Tripwire(false, true, true, false, true, false, true).ID:                        return 4829;
		case Tripwire::Tripwire(false, true, true, false, true, false, false).ID:                       return 4830;
		case Tripwire::Tripwire(false, true, true, false, false, true, true).ID:                        return 4831;
		case Tripwire::Tripwire(false, true, true, false, false, true, false).ID:                       return 4832;
		case Tripwire::Tripwire(false, true, true, false, false, false, true).ID:                       return 4833;
		case Tripwire::Tripwire(false, true, true, false, false, false, false).ID:                      return 4834;
		case Tripwire::Tripwire(false, true, false, true, true, true, true).ID:                         return 4835;
		case Tripwire::Tripwire(false, true, false, true, true, true, false).ID:                        return 4836;
		case Tripwire::Tripwire(false, true, false, true, true, false, true).ID:                        return 4837;
		case Tripwire::Tripwire(false, true, false, true, true, false, false).ID:                       return 4838;
		case Tripwire::Tripwire(false, true, false, true, false, true, true).ID:                        return 4839;
		case Tripwire::Tripwire(false, true, false, true, false, true, false).ID:                       return 4840;
		case Tripwire::Tripwire(false, true, false, true, false, false, true).ID:                       return 4841;
		case Tripwire::Tripwire(false, true, false, true, false, false, false).ID:                      return 4842;
		case Tripwire::Tripwire(false, true, false, false, true, true, true).ID:                        return 4843;
		case Tripwire::Tripwire(false, true, false, false, true, true, false).ID:                       return 4844;
		case Tripwire::Tripwire(false, true, false, false, true, false, true).ID:                       return 4845;
		case Tripwire::Tripwire(false, true, false, false, true, false, false).ID:                      return 4846;
		case Tripwire::Tripwire(false, true, false, false, false, true, true).ID:                       return 4847;
		case Tripwire::Tripwire(false, true, false, false, false, true, false).ID:                      return 4848;
		case Tripwire::Tripwire(false, true, false, false, false, false, true).ID:                      return 4849;
		case Tripwire::Tripwire(false, true, false, false, false, false, false).ID:                     return 4850;
		case Tripwire::Tripwire(false, false, true, true, true, true, true).ID:                         return 4851;
		case Tripwire::Tripwire(false, false, true, true, true, true, false).ID:                        return 4852;
		case Tripwire::Tripwire(false, false, true, true, true, false, true).ID:                        return 4853;
		case Tripwire::Tripwire(false, false, true, true, true, false, false).ID:                       return 4854;
		case Tripwire::Tripwire(false, false, true, true, false, true, true).ID:                        return 4855;
		case Tripwire::Tripwire(false, false, true, true, false, true, false).ID:                       return 4856;
		case Tripwire::Tripwire(false, false, true, true, false, false, true).ID:                       return 4857;
		case Tripwire::Tripwire(false, false, true, true, false, false, false).ID:                      return 4858;
		case Tripwire::Tripwire(false, false, true, false, true, true, true).ID:                        return 4859;
		case Tripwire::Tripwire(false, false, true, false, true, true, false).ID:                       return 4860;
		case Tripwire::Tripwire(false, false, true, false, true, false, true).ID:                       return 4861;
		case Tripwire::Tripwire(false, false, true, false, true, false, false).ID:                      return 4862;
		case Tripwire::Tripwire(false, false, true, false, false, true, true).ID:                       return 4863;
		case Tripwire::Tripwire(false, false, true, false, false, true, false).ID:                      return 4864;
		case Tripwire::Tripwire(false, false, true, false, false, false, true).ID:                      return 4865;
		case Tripwire::Tripwire(false, false, true, false, false, false, false).ID:                     return 4866;
		case Tripwire::Tripwire(false, false, false, true, true, true, true).ID:                        return 4867;
		case Tripwire::Tripwire(false, false, false, true, true, true, false).ID:                       return 4868;
		case Tripwire::Tripwire(false, false, false, true, true, false, true).ID:                       return 4869;
		case Tripwire::Tripwire(false, false, false, true, true, false, false).ID:                      return 4870;
		case Tripwire::Tripwire(false, false, false, true, false, true, true).ID:                       return 4871;
		case Tripwire::Tripwire(false, false, false, true, false, true, false).ID:                      return 4872;
		case Tripwire::Tripwire(false, false, false, true, false, false, true).ID:                      return 4873;
		case Tripwire::Tripwire(false, false, false, true, false, false, false).ID:                     return 4874;
		case Tripwire::Tripwire(false, false, false, false, true, true, true).ID:                       return 4875;
		case Tripwire::Tripwire(false, false, false, false, true, true, false).ID:                      return 4876;
		case Tripwire::Tripwire(false, false, false, false, true, false, true).ID:                      return 4877;
		case Tripwire::Tripwire(false, false, false, false, true, false, false).ID:                     return 4878;
		case Tripwire::Tripwire(false, false, false, false, false, true, true).ID:                      return 4879;
		case Tripwire::Tripwire(false, false, false, false, false, true, false).ID:                     return 4880;
		case Tripwire::Tripwire(false, false, false, false, false, false, true).ID:                     return 4881;
		case Tripwire::Tripwire(false, false, false, false, false, false, false).ID:                    return 4882;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZM, true).ID:                      return 4739;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZM, false).ID:                     return 4740;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZP, true).ID:                      return 4741;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_ZP, false).ID:                     return 4742;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XM, true).ID:                      return 4743;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XM, false).ID:                     return 4744;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XP, true).ID:                      return 4745;
		case TripwireHook::TripwireHook(true, eBlockFace::BLOCK_FACE_XP, false).ID:                     return 4746;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZM, true).ID:                     return 4747;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZM, false).ID:                    return 4748;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZP, true).ID:                     return 4749;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_ZP, false).ID:                    return 4750;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XM, true).ID:                     return 4751;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XM, false).ID:                    return 4752;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XP, true).ID:                     return 4753;
		case TripwireHook::TripwireHook(false, eBlockFace::BLOCK_FACE_XP, false).ID:                    return 4754;
		case TubeCoral::TubeCoral().ID:                                                                 return 8459;
		case TubeCoralBlock::TubeCoralBlock().ID:                                                       return 8454;
		case TubeCoralFan::TubeCoralFan().ID:                                                           return 8555;
		case TubeCoralWallFan::TubeCoralWallFan(eBlockFace::BLOCK_FACE_ZM).ID:                          return 8505;
		case TubeCoralWallFan::TubeCoralWallFan(eBlockFace::BLOCK_FACE_ZP).ID:                          return 8507;
		case TubeCoralWallFan::TubeCoralWallFan(eBlockFace::BLOCK_FACE_XM).ID:                          return 8509;
		case TubeCoralWallFan::TubeCoralWallFan(eBlockFace::BLOCK_FACE_XP).ID:                          return 8511;
		case TurtleEgg::TurtleEgg(1, 0).ID:                                                             return 8437;
		case TurtleEgg::TurtleEgg(1, 1).ID:                                                             return 8438;
		case TurtleEgg::TurtleEgg(1, 2).ID:                                                             return 8439;
		case TurtleEgg::TurtleEgg(2, 0).ID:                                                             return 8440;
		case TurtleEgg::TurtleEgg(2, 1).ID:                                                             return 8441;
		case TurtleEgg::TurtleEgg(2, 2).ID:                                                             return 8442;
		case TurtleEgg::TurtleEgg(3, 0).ID:                                                             return 8443;
		case TurtleEgg::TurtleEgg(3, 1).ID:                                                             return 8444;
		case TurtleEgg::TurtleEgg(3, 2).ID:                                                             return 8445;
		case TurtleEgg::TurtleEgg(4, 0).ID:                                                             return 8446;
		case TurtleEgg::TurtleEgg(4, 1).ID:                                                             return 8447;
		case TurtleEgg::TurtleEgg(4, 2).ID:                                                             return 8448;
		case Vine::Vine(true, true, true, true, true).ID:                                               return 4268;
		case Vine::Vine(true, true, true, true, false).ID:                                              return 4269;
		case Vine::Vine(true, true, true, false, true).ID:                                              return 4270;
		case Vine::Vine(true, true, true, false, false).ID:                                             return 4271;
		case Vine::Vine(true, true, false, true, true).ID:                                              return 4272;
		case Vine::Vine(true, true, false, true, false).ID:                                             return 4273;
		case Vine::Vine(true, true, false, false, true).ID:                                             return 4274;
		case Vine::Vine(true, true, false, false, false).ID:                                            return 4275;
		case Vine::Vine(true, false, true, true, true).ID:                                              return 4276;
		case Vine::Vine(true, false, true, true, false).ID:                                             return 4277;
		case Vine::Vine(true, false, true, false, true).ID:                                             return 4278;
		case Vine::Vine(true, false, true, false, false).ID:                                            return 4279;
		case Vine::Vine(true, false, false, true, true).ID:                                             return 4280;
		case Vine::Vine(true, false, false, true, false).ID:                                            return 4281;
		case Vine::Vine(true, false, false, false, true).ID:                                            return 4282;
		case Vine::Vine(true, false, false, false, false).ID:                                           return 4283;
		case Vine::Vine(false, true, true, true, true).ID:                                              return 4284;
		case Vine::Vine(false, true, true, true, false).ID:                                             return 4285;
		case Vine::Vine(false, true, true, false, true).ID:                                             return 4286;
		case Vine::Vine(false, true, true, false, false).ID:                                            return 4287;
		case Vine::Vine(false, true, false, true, true).ID:                                             return 4288;
		case Vine::Vine(false, true, false, true, false).ID:                                            return 4289;
		case Vine::Vine(false, true, false, false, true).ID:                                            return 4290;
		case Vine::Vine(false, true, false, false, false).ID:                                           return 4291;
		case Vine::Vine(false, false, true, true, true).ID:                                             return 4292;
		case Vine::Vine(false, false, true, true, false).ID:                                            return 4293;
		case Vine::Vine(false, false, true, false, true).ID:                                            return 4294;
		case Vine::Vine(false, false, true, false, false).ID:                                           return 4295;
		case Vine::Vine(false, false, false, true, true).ID:                                            return 4296;
		case Vine::Vine(false, false, false, true, false).ID:                                           return 4297;
		case Vine::Vine(false, false, false, false, true).ID:                                           return 4298;
		case Vine::Vine(false, false, false, false, false).ID:                                          return 4299;
		case VoidAir::VoidAir().ID:                                                                     return 8574;
		case OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_ZM).ID:                                    return 3270;
		case OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_ZP).ID:                                    return 3272;
		case OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_XM).ID:                                    return 3274;
		case OakWallSign::OakWallSign(eBlockFace::BLOCK_FACE_XP).ID:                                    return 3276;
		case WallTorch::WallTorch(eBlockFace::BLOCK_FACE_ZM).ID:                                        return 1131;
		case WallTorch::WallTorch(eBlockFace::BLOCK_FACE_ZP).ID:                                        return 1132;
		case WallTorch::WallTorch(eBlockFace::BLOCK_FACE_XM).ID:                                        return 1133;
		case WallTorch::WallTorch(eBlockFace::BLOCK_FACE_XP).ID:                                        return 1134;
		case Water::Water(0).ID:                                                                        return 34;
		case Water::Water(1).ID:                                                                        return 35;
		case Water::Water(2).ID:                                                                        return 36;
		case Water::Water(3).ID:                                                                        return 37;
		case Water::Water(4).ID:                                                                        return 38;
		case Water::Water(5).ID:                                                                        return 39;
		case Water::Water(6).ID:                                                                        return 40;
		case Water::Water(7).ID:                                                                        return 41;
		case Water::Water(8).ID:                                                                        return 42;
		case Water::Water(9).ID:                                                                        return 43;
		case Water::Water(10).ID:                                                                       return 44;
		case Water::Water(11).ID:                                                                       return 45;
		case Water::Water(12).ID:                                                                       return 46;
		case Water::Water(13).ID:                                                                       return 47;
		case Water::Water(14).ID:                                                                       return 48;
		case Water::Water(15).ID:                                                                       return 49;
		case WetSponge::WetSponge().ID:                                                                 return 229;
		case Wheat::Wheat(0).ID:                                                                        return 3051;
		case Wheat::Wheat(1).ID:                                                                        return 3052;
		case Wheat::Wheat(2).ID:                                                                        return 3053;
		case Wheat::Wheat(3).ID:                                                                        return 3054;
		case Wheat::Wheat(4).ID:                                                                        return 3055;
		case Wheat::Wheat(5).ID:                                                                        return 3056;
		case Wheat::Wheat(6).ID:                                                                        return 3057;
		case Wheat::Wheat(7).ID:                                                                        return 3058;
		case WhiteBanner::WhiteBanner(0).ID:                                                            return 6854;
		case WhiteBanner::WhiteBanner(1).ID:                                                            return 6855;
		case WhiteBanner::WhiteBanner(2).ID:                                                            return 6856;
		case WhiteBanner::WhiteBanner(3).ID:                                                            return 6857;
		case WhiteBanner::WhiteBanner(4).ID:                                                            return 6858;
		case WhiteBanner::WhiteBanner(5).ID:                                                            return 6859;
		case WhiteBanner::WhiteBanner(6).ID:                                                            return 6860;
		case WhiteBanner::WhiteBanner(7).ID:                                                            return 6861;
		case WhiteBanner::WhiteBanner(8).ID:                                                            return 6862;
		case WhiteBanner::WhiteBanner(9).ID:                                                            return 6863;
		case WhiteBanner::WhiteBanner(10).ID:                                                           return 6864;
		case WhiteBanner::WhiteBanner(11).ID:                                                           return 6865;
		case WhiteBanner::WhiteBanner(12).ID:                                                           return 6866;
		case WhiteBanner::WhiteBanner(13).ID:                                                           return 6867;
		case WhiteBanner::WhiteBanner(14).ID:                                                           return 6868;
		case WhiteBanner::WhiteBanner(15).ID:                                                           return 6869;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZM, true, WhiteBed::Part::Head).ID:              return 748;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZM, true, WhiteBed::Part::Foot).ID:              return 749;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZM, false, WhiteBed::Part::Head).ID:             return 750;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZM, false, WhiteBed::Part::Foot).ID:             return 751;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZP, true, WhiteBed::Part::Head).ID:              return 752;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZP, true, WhiteBed::Part::Foot).ID:              return 753;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZP, false, WhiteBed::Part::Head).ID:             return 754;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_ZP, false, WhiteBed::Part::Foot).ID:             return 755;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XM, true, WhiteBed::Part::Head).ID:              return 756;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XM, true, WhiteBed::Part::Foot).ID:              return 757;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XM, false, WhiteBed::Part::Head).ID:             return 758;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XM, false, WhiteBed::Part::Foot).ID:             return 759;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XP, true, WhiteBed::Part::Head).ID:              return 760;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XP, true, WhiteBed::Part::Foot).ID:              return 761;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XP, false, WhiteBed::Part::Head).ID:             return 762;
		case WhiteBed::WhiteBed(eBlockFace::BLOCK_FACE_XP, false, WhiteBed::Part::Foot).ID:             return 763;
		case WhiteCarpet::WhiteCarpet().ID:                                                             return 6823;
		case WhiteConcrete::WhiteConcrete().ID:                                                         return 8377;
		case WhiteConcretePowder::WhiteConcretePowder().ID:                                             return 8393;
		case WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:                return 8313;
		case WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:                return 8314;
		case WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:                return 8315;
		case WhiteGlazedTerracotta::WhiteGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:                return 8316;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                            return 8217;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                            return 8218;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                            return 8219;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                            return 8220;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                            return 8221;
		case WhiteShulkerBox::WhiteShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                            return 8222;
		case WhiteStainedGlass::WhiteStainedGlass().ID:                                                 return 3577;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, true, true, true).ID:                   return 5822;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, true, true, false).ID:                  return 5823;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, true, false, true).ID:                  return 5826;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, true, false, false).ID:                 return 5827;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, false, true, true).ID:                  return 5830;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, false, true, false).ID:                 return 5831;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, false, false, true).ID:                 return 5834;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(true, false, false, false).ID:                return 5835;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, true, true, true).ID:                  return 5838;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, true, true, false).ID:                 return 5839;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, true, false, true).ID:                 return 5842;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, true, false, false).ID:                return 5843;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, false, true, true).ID:                 return 5846;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, false, true, false).ID:                return 5847;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, false, false, true).ID:                return 5850;
		case WhiteStainedGlassPane::WhiteStainedGlassPane(false, false, false, false).ID:               return 5851;
		case WhiteTerracotta::WhiteTerracotta().ID:                                                     return 5804;
		case WhiteTulip::WhiteTulip().ID:                                                               return 1118;
		case WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                            return 7110;
		case WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                            return 7111;
		case WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                            return 7112;
		case WhiteWallBanner::WhiteWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                            return 7113;
		case WhiteWool::WhiteWool().ID:                                                                 return 1083;
		case WitherSkeletonSkull::WitherSkeletonSkull(0).ID:                                            return 5471;
		case WitherSkeletonSkull::WitherSkeletonSkull(1).ID:                                            return 5472;
		case WitherSkeletonSkull::WitherSkeletonSkull(2).ID:                                            return 5473;
		case WitherSkeletonSkull::WitherSkeletonSkull(3).ID:                                            return 5474;
		case WitherSkeletonSkull::WitherSkeletonSkull(4).ID:                                            return 5475;
		case WitherSkeletonSkull::WitherSkeletonSkull(5).ID:                                            return 5476;
		case WitherSkeletonSkull::WitherSkeletonSkull(6).ID:                                            return 5477;
		case WitherSkeletonSkull::WitherSkeletonSkull(7).ID:                                            return 5478;
		case WitherSkeletonSkull::WitherSkeletonSkull(8).ID:                                            return 5479;
		case WitherSkeletonSkull::WitherSkeletonSkull(9).ID:                                            return 5480;
		case WitherSkeletonSkull::WitherSkeletonSkull(10).ID:                                           return 5481;
		case WitherSkeletonSkull::WitherSkeletonSkull(11).ID:                                           return 5482;
		case WitherSkeletonSkull::WitherSkeletonSkull(12).ID:                                           return 5483;
		case WitherSkeletonSkull::WitherSkeletonSkull(13).ID:                                           return 5484;
		case WitherSkeletonSkull::WitherSkeletonSkull(14).ID:                                           return 5485;
		case WitherSkeletonSkull::WitherSkeletonSkull(15).ID:                                           return 5486;
		case WitherSkeletonWallSkull::WitherSkeletonWallSkull(eBlockFace::BLOCK_FACE_ZM).ID:            return 5467;
		case WitherSkeletonWallSkull::WitherSkeletonWallSkull(eBlockFace::BLOCK_FACE_ZP).ID:            return 5468;
		case WitherSkeletonWallSkull::WitherSkeletonWallSkull(eBlockFace::BLOCK_FACE_XM).ID:            return 5469;
		case WitherSkeletonWallSkull::WitherSkeletonWallSkull(eBlockFace::BLOCK_FACE_XP).ID:            return 5470;
		case YellowBanner::YellowBanner(0).ID:                                                          return 6918;
		case YellowBanner::YellowBanner(1).ID:                                                          return 6919;
		case YellowBanner::YellowBanner(2).ID:                                                          return 6920;
		case YellowBanner::YellowBanner(3).ID:                                                          return 6921;
		case YellowBanner::YellowBanner(4).ID:                                                          return 6922;
		case YellowBanner::YellowBanner(5).ID:                                                          return 6923;
		case YellowBanner::YellowBanner(6).ID:                                                          return 6924;
		case YellowBanner::YellowBanner(7).ID:                                                          return 6925;
		case YellowBanner::YellowBanner(8).ID:                                                          return 6926;
		case YellowBanner::YellowBanner(9).ID:                                                          return 6927;
		case YellowBanner::YellowBanner(10).ID:                                                         return 6928;
		case YellowBanner::YellowBanner(11).ID:                                                         return 6929;
		case YellowBanner::YellowBanner(12).ID:                                                         return 6930;
		case YellowBanner::YellowBanner(13).ID:                                                         return 6931;
		case YellowBanner::YellowBanner(14).ID:                                                         return 6932;
		case YellowBanner::YellowBanner(15).ID:                                                         return 6933;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZM, true, YellowBed::Part::Head).ID:           return 812;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZM, true, YellowBed::Part::Foot).ID:           return 813;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZM, false, YellowBed::Part::Head).ID:          return 814;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZM, false, YellowBed::Part::Foot).ID:          return 815;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZP, true, YellowBed::Part::Head).ID:           return 816;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZP, true, YellowBed::Part::Foot).ID:           return 817;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZP, false, YellowBed::Part::Head).ID:          return 818;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_ZP, false, YellowBed::Part::Foot).ID:          return 819;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XM, true, YellowBed::Part::Head).ID:           return 820;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XM, true, YellowBed::Part::Foot).ID:           return 821;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XM, false, YellowBed::Part::Head).ID:          return 822;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XM, false, YellowBed::Part::Foot).ID:          return 823;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XP, true, YellowBed::Part::Head).ID:           return 824;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XP, true, YellowBed::Part::Foot).ID:           return 825;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XP, false, YellowBed::Part::Head).ID:          return 826;
		case YellowBed::YellowBed(eBlockFace::BLOCK_FACE_XP, false, YellowBed::Part::Foot).ID:          return 827;
		case YellowCarpet::YellowCarpet().ID:                                                           return 6827;
		case YellowConcrete::YellowConcrete().ID:                                                       return 8381;
		case YellowConcretePowder::YellowConcretePowder().ID:                                           return 8397;
		case YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_ZM).ID:              return 8329;
		case YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_ZP).ID:              return 8330;
		case YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_XM).ID:              return 8331;
		case YellowGlazedTerracotta::YellowGlazedTerracotta(eBlockFace::BLOCK_FACE_XP).ID:              return 8332;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_ZM).ID:                          return 8241;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_XP).ID:                          return 8242;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_ZP).ID:                          return 8243;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_XM).ID:                          return 8244;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_YP).ID:                          return 8245;
		case YellowShulkerBox::YellowShulkerBox(eBlockFace::BLOCK_FACE_YM).ID:                          return 8246;
		case YellowStainedGlass::YellowStainedGlass().ID:                                               return 3581;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, true, true, true).ID:                 return 5950;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, true, true, false).ID:                return 5951;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, true, false, true).ID:                return 5954;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, true, false, false).ID:               return 5955;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, false, true, true).ID:                return 5958;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, false, true, false).ID:               return 5959;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, false, false, true).ID:               return 5962;
		case YellowStainedGlassPane::YellowStainedGlassPane(true, false, false, false).ID:              return 5963;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, true, true, true).ID:                return 5966;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, true, true, false).ID:               return 5967;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, true, false, true).ID:               return 5970;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, true, false, false).ID:              return 5971;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, false, true, true).ID:               return 5974;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, false, true, false).ID:              return 5975;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, false, false, true).ID:              return 5978;
		case YellowStainedGlassPane::YellowStainedGlassPane(false, false, false, false).ID:             return 5979;
		case YellowTerracotta::YellowTerracotta().ID:                                                   return 5808;
		case YellowWallBanner::YellowWallBanner(eBlockFace::BLOCK_FACE_ZM).ID:                          return 7126;
		case YellowWallBanner::YellowWallBanner(eBlockFace::BLOCK_FACE_ZP).ID:                          return 7127;
		case YellowWallBanner::YellowWallBanner(eBlockFace::BLOCK_FACE_XM).ID:                          return 7128;
		case YellowWallBanner::YellowWallBanner(eBlockFace::BLOCK_FACE_XP).ID:                          return 7129;
		case YellowWool::YellowWool().ID:                                                               return 1087;
		case ZombieHead::ZombieHead(0).ID:                                                              return 5491;
		case ZombieHead::ZombieHead(1).ID:                                                              return 5492;
		case ZombieHead::ZombieHead(2).ID:                                                              return 5493;
		case ZombieHead::ZombieHead(3).ID:                                                              return 5494;
		case ZombieHead::ZombieHead(4).ID:                                                              return 5495;
		case ZombieHead::ZombieHead(5).ID:                                                              return 5496;
		case ZombieHead::ZombieHead(6).ID:                                                              return 5497;
		case ZombieHead::ZombieHead(7).ID:                                                              return 5498;
		case ZombieHead::ZombieHead(8).ID:                                                              return 5499;
		case ZombieHead::ZombieHead(9).ID:                                                              return 5500;
		case ZombieHead::ZombieHead(10).ID:                                                             return 5501;
		case ZombieHead::ZombieHead(11).ID:                                                             return 5502;
		case ZombieHead::ZombieHead(12).ID:                                                             return 5503;
		case ZombieHead::ZombieHead(13).ID:                                                             return 5504;
		case ZombieHead::ZombieHead(14).ID:                                                             return 5505;
		case ZombieHead::ZombieHead(15).ID:                                                             return 5506;
		case ZombieWallHead::ZombieWallHead(eBlockFace::BLOCK_FACE_ZM).ID:                              return 5487;
		case ZombieWallHead::ZombieWallHead(eBlockFace::BLOCK_FACE_ZP).ID:                              return 5488;
		case ZombieWallHead::ZombieWallHead(eBlockFace::BLOCK_FACE_XM).ID:                              return 5489;
		case ZombieWallHead::ZombieWallHead(eBlockFace::BLOCK_FACE_XP).ID:                              return 5490;
		default:                                                                                        return 0;
	}
}

UInt32 From(const Item ID)
{
	switch (ID)
	{
		case Item::AcaciaBoat:                  return 762;
		case Item::AcaciaButton:                return 245;
		case Item::AcaciaDoor:                  return 460;
		case Item::AcaciaFence:                 return 179;
		case Item::AcaciaFenceGate:             return 214;
		case Item::AcaciaLeaves:                return 60;
		case Item::AcaciaLog:                   return 36;
		case Item::AcaciaPlanks:                return 17;
		case Item::AcaciaPressurePlate:         return 164;
		case Item::AcaciaSapling:               return 23;
		case Item::AcaciaSlab:                  return 116;
		case Item::AcaciaStairs:                return 301;
		case Item::AcaciaTrapdoor:              return 191;
		case Item::AcaciaWood:                  return 54;
		case Item::ActivatorRail:               return 261;
		case Item::Air:                         return -0;
		case Item::Allium:                      return 101;
		case Item::Andesite:                    return 6;
		case Item::Anvil:                       return 247;
		case Item::Apple:                       return 471;
		case Item::ArmorStand:                  return 721;
		case Item::Arrow:                       return 473;
		case Item::AzureBluet:                  return 102;
		case Item::BakedPotato:                 return 694;
		case Item::Barrier:                     return 279;
		case Item::BatSpawnEgg:                 return 634;
		case Item::Beacon:                      return 238;
		case Item::Bedrock:                     return 25;
		case Item::Beef:                        return 614;
		case Item::Beetroot:                    return 749;
		case Item::BeetrootSeeds:               return 750;
		case Item::BeetrootSoup:                return 751;
		case Item::BirchBoat:                   return 760;
		case Item::BirchButton:                 return 243;
		case Item::BirchDoor:                   return 458;
		case Item::BirchFence:                  return 177;
		case Item::BirchFenceGate:              return 212;
		case Item::BirchLeaves:                 return 58;
		case Item::BirchLog:                    return 34;
		case Item::BirchPlanks:                 return 15;
		case Item::BirchPressurePlate:          return 162;
		case Item::BirchSapling:                return 21;
		case Item::BirchSlab:                   return 114;
		case Item::BirchStairs:                 return 235;
		case Item::BirchTrapdoor:               return 189;
		case Item::BirchWood:                   return 52;
		case Item::BlackBanner:                 return 745;
		case Item::BlackBed:                    return 606;
		case Item::BlackCarpet:                 return 297;
		case Item::BlackConcrete:               return 410;
		case Item::BlackConcretePowder:         return 426;
		case Item::BlackGlazedTerracotta:       return 394;
		case Item::BlackShulkerBox:             return 378;
		case Item::BlackStainedGlass:           return 326;
		case Item::BlackStainedGlassPane:       return 342;
		case Item::BlackTerracotta:             return 278;
		case Item::BlackWool:                   return 97;
		case Item::BlazePowder:                 return 628;
		case Item::BlazeRod:                    return 620;
		case Item::BlazeSpawnEgg:               return 635;
		case Item::BlueBanner:                  return 741;
		case Item::BlueBed:                     return 602;
		case Item::BlueCarpet:                  return 293;
		case Item::BlueConcrete:                return 406;
		case Item::BlueConcretePowder:          return 422;
		case Item::BlueGlazedTerracotta:        return 390;
		case Item::BlueIce:                     return 453;
		case Item::BlueOrchid:                  return 100;
		case Item::BlueShulkerBox:              return 374;
		case Item::BlueStainedGlass:            return 322;
		case Item::BlueStainedGlassPane:        return 338;
		case Item::BlueTerracotta:              return 274;
		case Item::BlueWool:                    return 93;
		case Item::Bone:                        return 588;
		case Item::BoneBlock:                   return 359;
		case Item::BoneMeal:                    return 587;
		case Item::Book:                        return 557;
		case Item::Bookshelf:                   return 137;
		case Item::Bow:                         return 472;
		case Item::Bowl:                        return 493;
		case Item::BrainCoral:                  return 439;
		case Item::BrainCoralBlock:             return 434;
		case Item::BrainCoralFan:               return 444;
		case Item::Bread:                       return 509;
		case Item::BrewingStand:                return 630;
		case Item::Brick:                       return 551;
		case Item::BrickSlab:                   return 122;
		case Item::BrickStairs:                 return 216;
		case Item::Bricks:                      return 135;
		case Item::BrownBanner:                 return 742;
		case Item::BrownBed:                    return 603;
		case Item::BrownCarpet:                 return 294;
		case Item::BrownConcrete:               return 407;
		case Item::BrownConcretePowder:         return 423;
		case Item::BrownGlazedTerracotta:       return 391;
		case Item::BrownMushroom:               return 108;
		case Item::BrownMushroomBlock:          return 203;
		case Item::BrownShulkerBox:             return 375;
		case Item::BrownStainedGlass:           return 323;
		case Item::BrownStainedGlassPane:       return 339;
		case Item::BrownTerracotta:             return 275;
		case Item::BrownWool:                   return 94;
		case Item::BubbleCoral:                 return 440;
		case Item::BubbleCoralBlock:            return 435;
		case Item::BubbleCoralFan:              return 445;
		case Item::Bucket:                      return 537;
		case Item::Cactus:                      return 172;
		case Item::GreenDye:                    return 574;
		case Item::Cake:                        return 590;
		case Item::Carrot:                      return 692;
		case Item::CarrotOnAStick:              return 704;
		case Item::CarvedPumpkin:               return 182;
		case Item::Cauldron:                    return 631;
		case Item::CaveSpiderSpawnEgg:          return 636;
		case Item::ChainCommandBlock:           return 355;
		case Item::ChainmailBoots:              return 517;
		case Item::ChainmailChestplate:         return 515;
		case Item::ChainmailHelmet:             return 514;
		case Item::ChainmailLeggings:           return 516;
		case Item::Charcoal:                    return 475;
		case Item::Chest:                       return 149;
		case Item::ChestMinecart:               return 559;
		case Item::Chicken:                     return 616;
		case Item::ChickenSpawnEgg:             return 637;
		case Item::ChippedAnvil:                return 248;
		case Item::ChiseledQuartzBlock:         return 257;
		case Item::ChiseledRedSandstone:        return 351;
		case Item::ChiseledSandstone:           return 69;
		case Item::ChiseledStoneBricks:         return 202;
		case Item::ChorusFlower:                return 143;
		case Item::ChorusFruit:                 return 747;
		case Item::ChorusPlant:                 return 142;
		case Item::Clay:                        return 173;
		case Item::ClayBall:                    return 552;
		case Item::Clock:                       return 564;
		case Item::Coal:                        return 474;
		case Item::CoalBlock:                   return 299;
		case Item::CoalOre:                     return 31;
		case Item::CoarseDirt:                  return 10;
		case Item::Cobblestone:                 return 12;
		case Item::CobblestoneSlab:             return 121;
		case Item::CobblestoneStairs:           return 157;
		case Item::CobblestoneWall:             return 239;
		case Item::Cobweb:                      return 75;
		case Item::CocoaBeans:                  return 575;
		case Item::Cod:                         return 566;
		case Item::CodBucket:                   return 549;
		case Item::CodSpawnEgg:                 return 638;
		case Item::CommandBlock:                return 237;
		case Item::CommandBlockMinecart:        return 727;
		case Item::Comparator:                  return 463;
		case Item::Compass:                     return 562;
		case Item::Conduit:                     return 454;
		case Item::CookedBeef:                  return 615;
		case Item::CookedChicken:               return 617;
		case Item::CookedCod:                   return 570;
		case Item::CookedMutton:                return 729;
		case Item::CookedPorkchop:              return 532;
		case Item::CookedRabbit:                return 717;
		case Item::CookedSalmon:                return 571;
		case Item::Cookie:                      return 607;
		case Item::CowSpawnEgg:                 return 639;
		case Item::CrackedStoneBricks:          return 201;
		case Item::CraftingTable:               return 152;
		case Item::CreeperHead:                 return 702;
		case Item::CreeperSpawnEgg:             return 640;
		case Item::CutRedSandstone:             return 352;
		case Item::CutSandstone:                return 70;
		case Item::CyanBanner:                  return 739;
		case Item::CyanBed:                     return 600;
		case Item::CyanCarpet:                  return 291;
		case Item::CyanConcrete:                return 404;
		case Item::CyanConcretePowder:          return 420;
		case Item::CyanDye:                     return 578;
		case Item::CyanGlazedTerracotta:        return 388;
		case Item::CyanShulkerBox:              return 372;
		case Item::CyanStainedGlass:            return 320;
		case Item::CyanStainedGlassPane:        return 336;
		case Item::CyanTerracotta:              return 272;
		case Item::CyanWool:                    return 91;
		case Item::DamagedAnvil:                return 249;
		case Item::Dandelion:                   return 98;
		case Item::YellowDye:                   return 583;
		case Item::DarkOakBoat:                 return 763;
		case Item::DarkOakButton:               return 246;
		case Item::DarkOakDoor:                 return 461;
		case Item::DarkOakFence:                return 180;
		case Item::DarkOakFenceGate:            return 215;
		case Item::DarkOakLeaves:               return 61;
		case Item::DarkOakLog:                  return 37;
		case Item::DarkOakPlanks:               return 18;
		case Item::DarkOakPressurePlate:        return 165;
		case Item::DarkOakSapling:              return 24;
		case Item::DarkOakSlab:                 return 117;
		case Item::DarkOakStairs:               return 302;
		case Item::DarkOakTrapdoor:             return 192;
		case Item::DarkOakWood:                 return 55;
		case Item::DarkPrismarine:              return 345;
		case Item::DarkPrismarineSlab:          return 130;
		case Item::DarkPrismarineStairs:        return 348;
		case Item::DaylightDetector:            return 253;
		case Item::DeadBrainCoralBlock:         return 429;
		case Item::DeadBrainCoralFan:           return 449;
		case Item::DeadBubbleCoralBlock:        return 430;
		case Item::DeadBubbleCoralFan:          return 450;
		case Item::DeadBush:                    return 78;
		case Item::DeadFireCoralBlock:          return 431;
		case Item::DeadFireCoralFan:            return 451;
		case Item::DeadHornCoralBlock:          return 432;
		case Item::DeadHornCoralFan:            return 452;
		case Item::DeadTubeCoralBlock:          return 428;
		case Item::DeadTubeCoralFan:            return 448;
		case Item::DebugStick:                  return 768;
		case Item::DetectorRail:                return 73;
		case Item::Diamond:                     return 476;
		case Item::DiamondAxe:                  return 491;
		case Item::DiamondBlock:                return 151;
		case Item::DiamondBoots:                return 525;
		case Item::DiamondChestplate:           return 523;
		case Item::DiamondHelmet:               return 522;
		case Item::DiamondHoe:                  return 505;
		case Item::DiamondHorseArmor:           return 724;
		case Item::DiamondLeggings:             return 524;
		case Item::DiamondOre:                  return 150;
		case Item::DiamondPickaxe:              return 490;
		case Item::DiamondShovel:               return 489;
		case Item::DiamondSword:                return 488;
		case Item::Diorite:                     return 4;
		case Item::Dirt:                        return 9;
		case Item::Dispenser:                   return 67;
		case Item::DolphinSpawnEgg:             return 641;
		case Item::DonkeySpawnEgg:              return 642;
		case Item::DragonBreath:                return 752;
		case Item::DragonEgg:                   return 227;
		case Item::DragonHead:                  return 703;
		case Item::DriedKelp:                   return 611;
		case Item::DriedKelpBlock:              return 555;
		case Item::Dropper:                     return 262;
		case Item::DrownedSpawnEgg:             return 643;
		case Item::Egg:                         return 561;
		case Item::ElderGuardianSpawnEgg:       return 644;
		case Item::Elytra:                      return 758;
		case Item::Emerald:                     return 689;
		case Item::EmeraldBlock:                return 233;
		case Item::EmeraldOre:                  return 230;
		case Item::EnchantedBook:               return 709;
		case Item::EnchantedGoldenApple:        return 535;
		case Item::EnchantingTable:             return 223;
		case Item::EndCrystal:                  return 746;
		case Item::EndPortalFrame:              return 224;
		case Item::EndRod:                      return 141;
		case Item::EndStone:                    return 225;
		case Item::EndStoneBricks:              return 226;
		case Item::EnderChest:                  return 231;
		case Item::EnderEye:                    return 632;
		case Item::EnderPearl:                  return 619;
		case Item::EndermanSpawnEgg:            return 645;
		case Item::EndermiteSpawnEgg:           return 646;
		case Item::EvokerSpawnEgg:              return 647;
		case Item::ExperienceBottle:            return 685;
		case Item::Farmland:                    return 153;
		case Item::Feather:                     return 500;
		case Item::FermentedSpiderEye:          return 627;
		case Item::Fern:                        return 77;
		case Item::FilledMap:                   return 608;
		case Item::FireCharge:                  return 686;
		case Item::FireCoral:                   return 441;
		case Item::FireCoralBlock:              return 436;
		case Item::FireCoralFan:                return 446;
		case Item::FireworkRocket:              return 707;
		case Item::FireworkStar:                return 708;
		case Item::FishingRod:                  return 563;
		case Item::Flint:                       return 530;
		case Item::FlintAndSteel:               return 470;
		case Item::FlowerPot:                   return 691;
		case Item::Furnace:                     return 154;
		case Item::FurnaceMinecart:             return 560;
		case Item::GhastSpawnEgg:               return 648;
		case Item::GhastTear:                   return 621;
		case Item::Glass:                       return 64;
		case Item::GlassBottle:                 return 625;
		case Item::GlassPane:                   return 207;
		case Item::GlisteringMelonSlice:        return 633;
		case Item::Glowstone:                   return 185;
		case Item::GlowstoneDust:               return 565;
		case Item::GoldBlock:                   return 110;
		case Item::GoldIngot:                   return 478;
		case Item::GoldNugget:                  return 622;
		case Item::GoldOre:                     return 29;
		case Item::GoldenApple:                 return 534;
		case Item::GoldenAxe:                   return 498;
		case Item::GoldenBoots:                 return 529;
		case Item::GoldenCarrot:                return 697;
		case Item::GoldenChestplate:            return 527;
		case Item::GoldenHelmet:                return 526;
		case Item::GoldenHoe:                   return 506;
		case Item::GoldenHorseArmor:            return 723;
		case Item::GoldenLeggings:              return 528;
		case Item::GoldenPickaxe:               return 497;
		case Item::GoldenShovel:                return 496;
		case Item::GoldenSword:                 return 495;
		case Item::Granite:                     return 2;
		case Item::Grass:                       return 76;
		case Item::GrassBlock:                  return 8;
		case Item::GrassPath:                   return 304;
		case Item::Gravel:                      return 28;
		case Item::GrayBanner:                  return 737;
		case Item::GrayBed:                     return 598;
		case Item::GrayCarpet:                  return 289;
		case Item::GrayConcrete:                return 402;
		case Item::GrayConcretePowder:          return 418;
		case Item::GrayDye:                     return 580;
		case Item::GrayGlazedTerracotta:        return 386;
		case Item::GrayShulkerBox:              return 370;
		case Item::GrayStainedGlass:            return 318;
		case Item::GrayStainedGlassPane:        return 334;
		case Item::GrayTerracotta:              return 270;
		case Item::GrayWool:                    return 89;
		case Item::GreenBanner:                 return 743;
		case Item::GreenBed:                    return 604;
		case Item::GreenCarpet:                 return 295;
		case Item::GreenConcrete:               return 408;
		case Item::GreenConcretePowder:         return 424;
		case Item::GreenGlazedTerracotta:       return 392;
		case Item::GreenShulkerBox:             return 376;
		case Item::GreenStainedGlass:           return 324;
		case Item::GreenStainedGlassPane:       return 340;
		case Item::GreenTerracotta:             return 276;
		case Item::GreenWool:                   return 95;
		case Item::GuardianSpawnEgg:            return 649;
		case Item::Gunpowder:                   return 501;
		case Item::HayBale:                     return 281;
		case Item::HeartOfTheSea:               return 784;
		case Item::HeavyWeightedPressurePlate:  return 252;
		case Item::Hopper:                      return 256;
		case Item::HopperMinecart:              return 713;
		case Item::HornCoral:                   return 442;
		case Item::HornCoralBlock:              return 437;
		case Item::HornCoralFan:                return 447;
		case Item::HorseSpawnEgg:               return 650;
		case Item::HuskSpawnEgg:                return 651;
		case Item::Ice:                         return 170;
		case Item::InfestedChiseledStoneBricks: return 198;
		case Item::InfestedCobblestone:         return 194;
		case Item::InfestedCrackedStoneBricks:  return 197;
		case Item::InfestedMossyStoneBricks:    return 196;
		case Item::InfestedStone:               return 193;
		case Item::InfestedStoneBricks:         return 195;
		case Item::InkSac:                      return 572;
		case Item::IronAxe:                     return 469;
		case Item::IronBars:                    return 206;
		case Item::IronBlock:                   return 111;
		case Item::IronBoots:                   return 521;
		case Item::IronChestplate:              return 519;
		case Item::IronDoor:                    return 455;
		case Item::IronHelmet:                  return 518;
		case Item::IronHoe:                     return 504;
		case Item::IronHorseArmor:              return 722;
		case Item::IronIngot:                   return 477;
		case Item::IronLeggings:                return 520;
		case Item::IronNugget:                  return 766;
		case Item::IronOre:                     return 30;
		case Item::IronPickaxe:                 return 468;
		case Item::IronShovel:                  return 467;
		case Item::IronSword:                   return 479;
		case Item::IronTrapdoor:                return 280;
		case Item::ItemFrame:                   return 690;
		case Item::JackOLantern:                return 186;
		case Item::Jukebox:                     return 174;
		case Item::JungleBoat:                  return 761;
		case Item::JungleButton:                return 244;
		case Item::JungleDoor:                  return 459;
		case Item::JungleFence:                 return 178;
		case Item::JungleFenceGate:             return 213;
		case Item::JungleLeaves:                return 59;
		case Item::JungleLog:                   return 35;
		case Item::JunglePlanks:                return 16;
		case Item::JunglePressurePlate:         return 163;
		case Item::JungleSapling:               return 22;
		case Item::JungleSlab:                  return 115;
		case Item::JungleStairs:                return 236;
		case Item::JungleTrapdoor:              return 190;
		case Item::JungleWood:                  return 53;
		case Item::Kelp:                        return 554;
		case Item::KnowledgeBook:               return 767;
		case Item::Ladder:                      return 155;
		case Item::LapisBlock:                  return 66;
		case Item::LapisLazuli:                 return 576;
		case Item::LapisOre:                    return 65;
		case Item::LargeFern:                   return 310;
		case Item::LavaBucket:                  return 539;
		case Item::Lead:                        return 725;
		case Item::Leather:                     return 545;
		case Item::LeatherBoots:                return 513;
		case Item::LeatherChestplate:           return 511;
		case Item::LeatherHelmet:               return 510;
		case Item::LeatherLeggings:             return 512;
		case Item::Lever:                       return 158;
		case Item::LightBlueBanner:             return 733;
		case Item::LightBlueBed:                return 594;
		case Item::LightBlueCarpet:             return 285;
		case Item::LightBlueConcrete:           return 398;
		case Item::LightBlueConcretePowder:     return 414;
		case Item::LightBlueDye:                return 584;
		case Item::LightBlueGlazedTerracotta:   return 382;
		case Item::LightBlueShulkerBox:         return 366;
		case Item::LightBlueStainedGlass:       return 314;
		case Item::LightBlueStainedGlassPane:   return 330;
		case Item::LightBlueTerracotta:         return 266;
		case Item::LightBlueWool:               return 85;
		case Item::LightGrayBanner:             return 738;
		case Item::LightGrayBed:                return 599;
		case Item::LightGrayCarpet:             return 290;
		case Item::LightGrayConcrete:           return 403;
		case Item::LightGrayConcretePowder:     return 419;
		case Item::LightGrayDye:                return 579;
		case Item::LightGrayGlazedTerracotta:   return 387;
		case Item::LightGrayShulkerBox:         return 371;
		case Item::LightGrayStainedGlass:       return 319;
		case Item::LightGrayStainedGlassPane:   return 335;
		case Item::LightGrayTerracotta:         return 271;
		case Item::LightGrayWool:               return 90;
		case Item::LightWeightedPressurePlate:  return 251;
		case Item::Lilac:                       return 306;
		case Item::LilyPad:                     return 219;
		case Item::LimeBanner:                  return 735;
		case Item::LimeBed:                     return 596;
		case Item::LimeCarpet:                  return 287;
		case Item::LimeConcrete:                return 400;
		case Item::LimeConcretePowder:          return 416;
		case Item::LimeDye:                     return 582;
		case Item::LimeGlazedTerracotta:        return 384;
		case Item::LimeShulkerBox:              return 368;
		case Item::LimeStainedGlass:            return 316;
		case Item::LimeStainedGlassPane:        return 332;
		case Item::LimeTerracotta:              return 268;
		case Item::LimeWool:                    return 87;
		case Item::LingeringPotion:             return 756;
		case Item::LlamaSpawnEgg:               return 652;
		case Item::MagentaBanner:               return 732;
		case Item::MagentaBed:                  return 593;
		case Item::MagentaCarpet:               return 284;
		case Item::MagentaConcrete:             return 397;
		case Item::MagentaConcretePowder:       return 413;
		case Item::MagentaDye:                  return 585;
		case Item::MagentaGlazedTerracotta:     return 381;
		case Item::MagentaShulkerBox:           return 365;
		case Item::MagentaStainedGlass:         return 313;
		case Item::MagentaStainedGlassPane:     return 329;
		case Item::MagentaTerracotta:           return 265;
		case Item::MagentaWool:                 return 84;
		case Item::MagmaBlock:                  return 356;
		case Item::MagmaCream:                  return 629;
		case Item::MagmaCubeSpawnEgg:           return 653;
		case Item::Map:                         return 696;
		case Item::Melon:                       return 208;
		case Item::MelonSeeds:                  return 613;
		case Item::MelonSlice:                  return 610;
		case Item::MilkBucket:                  return 546;
		case Item::Minecart:                    return 540;
		case Item::MooshroomSpawnEgg:           return 654;
		case Item::MossyCobblestone:            return 138;
		case Item::MossyCobblestoneWall:        return 240;
		case Item::MossyStoneBricks:            return 200;
		case Item::MuleSpawnEgg:                return 655;
		case Item::MushroomStem:                return 205;
		case Item::MushroomStew:                return 494;
		case Item::MusicDisc11:                 return 779;
		case Item::MusicDisc13:                 return 769;
		case Item::MusicDiscBlocks:             return 771;
		case Item::MusicDiscCat:                return 770;
		case Item::MusicDiscChirp:              return 772;
		case Item::MusicDiscFar:                return 773;
		case Item::MusicDiscMall:               return 774;
		case Item::MusicDiscMellohi:            return 775;
		case Item::MusicDiscStal:               return 776;
		case Item::MusicDiscStrad:              return 777;
		case Item::MusicDiscWait:               return 780;
		case Item::MusicDiscWard:               return 778;
		case Item::Mutton:                      return 728;
		case Item::Mycelium:                    return 218;
		case Item::NameTag:                     return 726;
		case Item::NautilusShell:               return 783;
		case Item::NetherBrick:                 return 710;
		case Item::NetherBrickFence:            return 221;
		case Item::NetherBrickSlab:             return 124;
		case Item::NetherBrickStairs:           return 222;
		case Item::NetherBricks:                return 220;
		case Item::NetherQuartzOre:             return 255;
		case Item::NetherStar:                  return 705;
		case Item::NetherWart:                  return 623;
		case Item::NetherWartBlock:             return 357;
		case Item::Netherrack:                  return 183;
		case Item::NoteBlock:                   return 71;
		case Item::OakBoat:                     return 544;
		case Item::OakButton:                   return 241;
		case Item::OakDoor:                     return 456;
		case Item::OakFence:                    return 175;
		case Item::OakFenceGate:                return 210;
		case Item::OakLeaves:                   return 56;
		case Item::OakLog:                      return 32;
		case Item::OakPlanks:                   return 13;
		case Item::OakPressurePlate:            return 160;
		case Item::OakSapling:                  return 19;
		case Item::OakSlab:                     return 112;
		case Item::OakStairs:                   return 148;
		case Item::OakTrapdoor:                 return 187;
		case Item::OakWood:                     return 50;
		case Item::Observer:                    return 361;
		case Item::Obsidian:                    return 139;
		case Item::OcelotSpawnEgg:              return 656;
		case Item::OrangeBanner:                return 731;
		case Item::OrangeBed:                   return 592;
		case Item::OrangeCarpet:                return 283;
		case Item::OrangeConcrete:              return 396;
		case Item::OrangeConcretePowder:        return 412;
		case Item::OrangeDye:                   return 586;
		case Item::OrangeGlazedTerracotta:      return 380;
		case Item::OrangeShulkerBox:            return 364;
		case Item::OrangeStainedGlass:          return 312;
		case Item::OrangeStainedGlassPane:      return 328;
		case Item::OrangeTerracotta:            return 264;
		case Item::OrangeTulip:                 return 104;
		case Item::OrangeWool:                  return 83;
		case Item::OxeyeDaisy:                  return 107;
		case Item::PackedIce:                   return 300;
		case Item::Painting:                    return 533;
		case Item::Paper:                       return 556;
		case Item::ParrotSpawnEgg:              return 657;
		case Item::Peony:                       return 308;
		case Item::PetrifiedOakSlab:            return 120;
		case Item::PhantomMembrane:             return 782;
		case Item::PhantomSpawnEgg:             return 658;
		case Item::PigSpawnEgg:                 return 659;
		case Item::PinkBanner:                  return 736;
		case Item::PinkBed:                     return 597;
		case Item::PinkCarpet:                  return 288;
		case Item::PinkConcrete:                return 401;
		case Item::PinkConcretePowder:          return 417;
		case Item::PinkDye:                     return 581;
		case Item::PinkGlazedTerracotta:        return 385;
		case Item::PinkShulkerBox:              return 369;
		case Item::PinkStainedGlass:            return 317;
		case Item::PinkStainedGlassPane:        return 333;
		case Item::PinkTerracotta:              return 269;
		case Item::PinkTulip:                   return 106;
		case Item::PinkWool:                    return 88;
		case Item::Piston:                      return 81;
		case Item::PlayerHead:                  return 700;
		case Item::Podzol:                      return 11;
		case Item::PoisonousPotato:             return 695;
		case Item::PolarBearSpawnEgg:           return 660;
		case Item::PolishedAndesite:            return 7;
		case Item::PolishedDiorite:             return 5;
		case Item::PolishedGranite:             return 3;
		case Item::PoppedChorusFruit:           return 748;
		case Item::Poppy:                       return 99;
		case Item::Porkchop:                    return 531;
		case Item::Potato:                      return 693;
		case Item::Potion:                      return 624;
		case Item::PoweredRail:                 return 72;
		case Item::Prismarine:                  return 343;
		case Item::PrismarineBrickSlab:         return 129;
		case Item::PrismarineBrickStairs:       return 347;
		case Item::PrismarineBricks:            return 344;
		case Item::PrismarineCrystals:          return 715;
		case Item::PrismarineShard:             return 714;
		case Item::PrismarineSlab:              return 128;
		case Item::PrismarineStairs:            return 346;
		case Item::Pufferfish:                  return 569;
		case Item::PufferfishBucket:            return 547;
		case Item::PufferfishSpawnEgg:          return 661;
		case Item::Pumpkin:                     return 181;
		case Item::PumpkinPie:                  return 706;
		case Item::PumpkinSeeds:                return 612;
		case Item::PurpleBanner:                return 740;
		case Item::PurpleBed:                   return 601;
		case Item::PurpleCarpet:                return 292;
		case Item::PurpleConcrete:              return 405;
		case Item::PurpleConcretePowder:        return 421;
		case Item::PurpleDye:                   return 577;
		case Item::PurpleGlazedTerracotta:      return 389;
		case Item::PurpleShulkerBox:            return 373;
		case Item::PurpleStainedGlass:          return 321;
		case Item::PurpleStainedGlassPane:      return 337;
		case Item::PurpleTerracotta:            return 273;
		case Item::PurpleWool:                  return 92;
		case Item::PurpurBlock:                 return 144;
		case Item::PurpurPillar:                return 145;
		case Item::PurpurSlab:                  return 127;
		case Item::PurpurStairs:                return 146;
		case Item::Quartz:                      return 711;
		case Item::QuartzBlock:                 return 258;
		case Item::QuartzPillar:                return 259;
		case Item::QuartzSlab:                  return 125;
		case Item::QuartzStairs:                return 260;
		case Item::Rabbit:                      return 716;
		case Item::RabbitFoot:                  return 719;
		case Item::RabbitHide:                  return 720;
		case Item::RabbitSpawnEgg:              return 662;
		case Item::RabbitStew:                  return 718;
		case Item::Rail:                        return 156;
		case Item::RedBanner:                   return 744;
		case Item::RedBed:                      return 605;
		case Item::RedCarpet:                   return 296;
		case Item::RedConcrete:                 return 409;
		case Item::RedConcretePowder:           return 425;
		case Item::RedGlazedTerracotta:         return 393;
		case Item::RedMushroom:                 return 109;
		case Item::RedMushroomBlock:            return 204;
		case Item::RedNetherBricks:             return 358;
		case Item::RedSand:                     return 27;
		case Item::RedSandstone:                return 350;
		case Item::RedSandstoneSlab:            return 126;
		case Item::RedSandstoneStairs:          return 353;
		case Item::RedShulkerBox:               return 377;
		case Item::RedStainedGlass:             return 325;
		case Item::RedStainedGlassPane:         return 341;
		case Item::RedTerracotta:               return 277;
		case Item::RedTulip:                    return 103;
		case Item::RedWool:                     return 96;
		case Item::Redstone:                    return 542;
		case Item::RedstoneBlock:               return 254;
		case Item::RedstoneLamp:                return 228;
		case Item::RedstoneOre:                 return 166;
		case Item::RedstoneTorch:               return 167;
		case Item::Repeater:                    return 462;
		case Item::RepeatingCommandBlock:       return 354;
		case Item::RoseBush:                    return 307;
		case Item::RedDye:                      return 573;
		case Item::RottenFlesh:                 return 618;
		case Item::Saddle:                      return 541;
		case Item::Salmon:                      return 567;
		case Item::SalmonBucket:                return 548;
		case Item::SalmonSpawnEgg:              return 663;
		case Item::Sand:                        return 26;
		case Item::Sandstone:                   return 68;
		case Item::SandstoneSlab:               return 119;
		case Item::SandstoneStairs:             return 229;
		case Item::Scute:                       return 466;
		case Item::SeaLantern:                  return 349;
		case Item::SeaPickle:                   return 80;
		case Item::Seagrass:                    return 79;
		case Item::Shears:                      return 609;
		case Item::SheepSpawnEgg:               return 664;
		case Item::Shield:                      return 757;
		case Item::ShulkerBox:                  return 362;
		case Item::ShulkerShell:                return 765;
		case Item::ShulkerSpawnEgg:             return 665;
		case Item::OakSign:                     return 536;
		case Item::SilverfishSpawnEgg:          return 666;
		case Item::SkeletonHorseSpawnEgg:       return 668;
		case Item::SkeletonSkull:               return 698;
		case Item::SkeletonSpawnEgg:            return 667;
		case Item::SlimeBall:                   return 558;
		case Item::SlimeBlock:                  return 303;
		case Item::SlimeSpawnEgg:               return 669;
		case Item::SmoothQuartz:                return 131;
		case Item::SmoothRedSandstone:          return 132;
		case Item::SmoothSandstone:             return 133;
		case Item::SmoothStone:                 return 134;
		case Item::Snow:                        return 169;
		case Item::SnowBlock:                   return 171;
		case Item::Snowball:                    return 543;
		case Item::SoulSand:                    return 184;
		case Item::Spawner:                     return 147;
		case Item::SpectralArrow:               return 754;
		case Item::SpiderEye:                   return 626;
		case Item::SpiderSpawnEgg:              return 670;
		case Item::SplashPotion:                return 753;
		case Item::Sponge:                      return 62;
		case Item::SpruceBoat:                  return 759;
		case Item::SpruceButton:                return 242;
		case Item::SpruceDoor:                  return 457;
		case Item::SpruceFence:                 return 176;
		case Item::SpruceFenceGate:             return 211;
		case Item::SpruceLeaves:                return 57;
		case Item::SpruceLog:                   return 33;
		case Item::SprucePlanks:                return 14;
		case Item::SprucePressurePlate:         return 161;
		case Item::SpruceSapling:               return 20;
		case Item::SpruceSlab:                  return 113;
		case Item::SpruceStairs:                return 234;
		case Item::SpruceTrapdoor:              return 188;
		case Item::SpruceWood:                  return 51;
		case Item::SquidSpawnEgg:               return 671;
		case Item::Stick:                       return 492;
		case Item::StickyPiston:                return 74;
		case Item::Stone:                       return 1;
		case Item::StoneAxe:                    return 487;
		case Item::StoneBrickSlab:              return 123;
		case Item::StoneBrickStairs:            return 217;
		case Item::StoneBricks:                 return 199;
		case Item::StoneButton:                 return 168;
		case Item::StoneHoe:                    return 503;
		case Item::StonePickaxe:                return 486;
		case Item::StonePressurePlate:          return 159;
		case Item::StoneShovel:                 return 485;
		case Item::StoneSlab:                   return 118;
		case Item::StoneSword:                  return 484;
		case Item::StraySpawnEgg:               return 672;
		case Item::String:                      return 499;
		case Item::StrippedAcaciaLog:           return 42;
		case Item::StrippedAcaciaWood:          return 48;
		case Item::StrippedBirchLog:            return 40;
		case Item::StrippedBirchWood:           return 46;
		case Item::StrippedDarkOakLog:          return 43;
		case Item::StrippedDarkOakWood:         return 49;
		case Item::StrippedJungleLog:           return 41;
		case Item::StrippedJungleWood:          return 47;
		case Item::StrippedOakLog:              return 38;
		case Item::StrippedOakWood:             return 44;
		case Item::StrippedSpruceLog:           return 39;
		case Item::StrippedSpruceWood:          return 45;
		case Item::StructureBlock:              return 464;
		case Item::StructureVoid:               return 360;
		case Item::Sugar:                       return 589;
		case Item::SugarCane:                   return 553;
		case Item::Sunflower:                   return 305;
		case Item::TallGrass:                   return 309;
		case Item::Terracotta:                  return 298;
		case Item::TippedArrow:                 return 755;
		case Item::TNT:                         return 136;
		case Item::TNTMinecart:                 return 712;
		case Item::Torch:                       return 140;
		case Item::TotemOfUndying:              return 764;
		case Item::TrappedChest:                return 250;
		case Item::Trident:                     return 781;
		case Item::TripwireHook:                return 232;
		case Item::TropicalFish:                return 568;
		case Item::TropicalFishBucket:          return 550;
		case Item::TropicalFishSpawnEgg:        return 673;
		case Item::TubeCoral:                   return 438;
		case Item::TubeCoralBlock:              return 433;
		case Item::TubeCoralFan:                return 443;
		case Item::TurtleEgg:                   return 427;
		case Item::TurtleHelmet:                return 465;
		case Item::TurtleSpawnEgg:              return 674;
		case Item::VexSpawnEgg:                 return 675;
		case Item::VillagerSpawnEgg:            return 676;
		case Item::VindicatorSpawnEgg:          return 677;
		case Item::Vine:                        return 209;
		case Item::WaterBucket:                 return 538;
		case Item::WetSponge:                   return 63;
		case Item::Wheat:                       return 508;
		case Item::WheatSeeds:                  return 507;
		case Item::WhiteBanner:                 return 730;
		case Item::WhiteBed:                    return 591;
		case Item::WhiteCarpet:                 return 282;
		case Item::WhiteConcrete:               return 395;
		case Item::WhiteConcretePowder:         return 411;
		case Item::WhiteGlazedTerracotta:       return 379;
		case Item::WhiteShulkerBox:             return 363;
		case Item::WhiteStainedGlass:           return 311;
		case Item::WhiteStainedGlassPane:       return 327;
		case Item::WhiteTerracotta:             return 263;
		case Item::WhiteTulip:                  return 105;
		case Item::WhiteWool:                   return 82;
		case Item::WitchSpawnEgg:               return 678;
		case Item::WitherSkeletonSkull:         return 699;
		case Item::WitherSkeletonSpawnEgg:      return 679;
		case Item::WolfSpawnEgg:                return 680;
		case Item::WoodenAxe:                   return 483;
		case Item::WoodenHoe:                   return 502;
		case Item::WoodenPickaxe:               return 482;
		case Item::WoodenShovel:                return 481;
		case Item::WoodenSword:                 return 480;
		case Item::WritableBook:                return 687;
		case Item::WrittenBook:                 return 688;
		case Item::YellowBanner:                return 734;
		case Item::YellowBed:                   return 595;
		case Item::YellowCarpet:                return 286;
		case Item::YellowConcrete:              return 399;
		case Item::YellowConcretePowder:        return 415;
		case Item::YellowGlazedTerracotta:      return 383;
		case Item::YellowShulkerBox:            return 367;
		case Item::YellowStainedGlass:          return 315;
		case Item::YellowStainedGlassPane:      return 331;
		case Item::YellowTerracotta:            return 267;
		case Item::YellowWool:                  return 86;
		case Item::ZombieHead:                  return 701;
		case Item::ZombieHorseSpawnEgg:         return 682;
		case Item::ZombiePigmanSpawnEgg:        return 683;
		case Item::ZombieSpawnEgg:              return 681;
		case Item::ZombieVillagerSpawnEgg:      return 684;
		default:                                return 0;
	}
}

UInt32 From(const CustomStatistic ID)
{
	switch (ID)
	{
		case CustomStatistic::AnimalsBred:               return 25;
		case CustomStatistic::AviateOneCm:               return 17;
		case CustomStatistic::BoatOneCm:                 return 14;
		case CustomStatistic::CleanArmor:                return 33;
		case CustomStatistic::CleanBanner:               return 34;
		case CustomStatistic::ClimbOneCm:                return 10;
		case CustomStatistic::CrouchOneCm:               return 6;
		case CustomStatistic::DamageDealt:               return 21;
		case CustomStatistic::DamageTaken:               return 22;
		case CustomStatistic::Deaths:                    return 23;
		case CustomStatistic::Drop:                      return 20;
		case CustomStatistic::EatCakeSlice:              return 30;
		case CustomStatistic::EnchantItem:               return 45;
		case CustomStatistic::FallOneCm:                 return 9;
		case CustomStatistic::FillCauldron:              return 31;
		case CustomStatistic::FishCaught:                return 27;
		case CustomStatistic::FlyOneCm:                  return 11;
		case CustomStatistic::HorseOneCm:                return 16;
		case CustomStatistic::InspectDispenser:          return 39;
		case CustomStatistic::InspectDropper:            return 37;
		case CustomStatistic::InspectHopper:             return 38;
		case CustomStatistic::InteractWithBeacon:        return 36;
		case CustomStatistic::InteractWithBrewingstand:  return 35;
		case CustomStatistic::InteractWithCraftingTable: return 48;
		case CustomStatistic::InteractWithFurnace:       return 47;
		case CustomStatistic::Jump:                      return 19;
		case CustomStatistic::LeaveGame:                 return 0;
		case CustomStatistic::MinecartOneCm:             return 13;
		case CustomStatistic::MobKills:                  return 24;
		case CustomStatistic::OpenChest:                 return 49;
		case CustomStatistic::OpenEnderchest:            return 44;
		case CustomStatistic::OpenShulkerBox:            return 51;
		case CustomStatistic::PigOneCm:                  return 15;
		case CustomStatistic::PlayerKills:               return 26;
		case CustomStatistic::PlayNoteblock:             return 40;
		case CustomStatistic::PlayOneMinute:             return 1;
		case CustomStatistic::PlayRecord:                return 46;
		case CustomStatistic::PotFlower:                 return 42;
		case CustomStatistic::SleepInBed:                return 50;
		case CustomStatistic::SneakTime:                 return 4;
		case CustomStatistic::SprintOneCm:               return 7;
		case CustomStatistic::SwimOneCm:                 return 8;
		case CustomStatistic::TalkedToVillager:          return 28;
		case CustomStatistic::TimeSinceDeath:            return 2;
		case CustomStatistic::TimeSinceRest:             return 3;
		case CustomStatistic::TradedWithVillager:        return 29;
		case CustomStatistic::TriggerTrappedChest:       return 43;
		case CustomStatistic::TuneNoteblock:             return 41;
		case CustomStatistic::UseCauldron:               return 32;
		case CustomStatistic::WalkOneCm:                 return 5;
		case CustomStatistic::WalkOnWaterOneCm:          return 18;
		case CustomStatistic::WalkUnderWaterOneCm:       return 12;
		default:                                         return UInt32(-1);
	}
}

Item ToItem(const UInt32 ID)
{
	switch (ID)
	{
		case 762: return Item::AcaciaBoat;
		case 245: return Item::AcaciaButton;
		case 460: return Item::AcaciaDoor;
		case 179: return Item::AcaciaFence;
		case 214: return Item::AcaciaFenceGate;
		case 60:  return Item::AcaciaLeaves;
		case 36:  return Item::AcaciaLog;
		case 17:  return Item::AcaciaPlanks;
		case 164: return Item::AcaciaPressurePlate;
		case 23:  return Item::AcaciaSapling;
		case 116: return Item::AcaciaSlab;
		case 301: return Item::AcaciaStairs;
		case 191: return Item::AcaciaTrapdoor;
		case 54:  return Item::AcaciaWood;
		case 261: return Item::ActivatorRail;
		case -0:  return Item::Air;
		case 101: return Item::Allium;
		case 6:   return Item::Andesite;
		case 247: return Item::Anvil;
		case 471: return Item::Apple;
		case 721: return Item::ArmorStand;
		case 473: return Item::Arrow;
		case 102: return Item::AzureBluet;
		case 694: return Item::BakedPotato;
		case 279: return Item::Barrier;
		case 634: return Item::BatSpawnEgg;
		case 238: return Item::Beacon;
		case 25:  return Item::Bedrock;
		case 614: return Item::Beef;
		case 749: return Item::Beetroot;
		case 750: return Item::BeetrootSeeds;
		case 751: return Item::BeetrootSoup;
		case 760: return Item::BirchBoat;
		case 243: return Item::BirchButton;
		case 458: return Item::BirchDoor;
		case 177: return Item::BirchFence;
		case 212: return Item::BirchFenceGate;
		case 58:  return Item::BirchLeaves;
		case 34:  return Item::BirchLog;
		case 15:  return Item::BirchPlanks;
		case 162: return Item::BirchPressurePlate;
		case 21:  return Item::BirchSapling;
		case 114: return Item::BirchSlab;
		case 235: return Item::BirchStairs;
		case 189: return Item::BirchTrapdoor;
		case 52:  return Item::BirchWood;
		case 745: return Item::BlackBanner;
		case 606: return Item::BlackBed;
		case 297: return Item::BlackCarpet;
		case 410: return Item::BlackConcrete;
		case 426: return Item::BlackConcretePowder;
		case 394: return Item::BlackGlazedTerracotta;
		case 378: return Item::BlackShulkerBox;
		case 326: return Item::BlackStainedGlass;
		case 342: return Item::BlackStainedGlassPane;
		case 278: return Item::BlackTerracotta;
		case 97:  return Item::BlackWool;
		case 628: return Item::BlazePowder;
		case 620: return Item::BlazeRod;
		case 635: return Item::BlazeSpawnEgg;
		case 741: return Item::BlueBanner;
		case 602: return Item::BlueBed;
		case 293: return Item::BlueCarpet;
		case 406: return Item::BlueConcrete;
		case 422: return Item::BlueConcretePowder;
		case 390: return Item::BlueGlazedTerracotta;
		case 453: return Item::BlueIce;
		case 100: return Item::BlueOrchid;
		case 374: return Item::BlueShulkerBox;
		case 322: return Item::BlueStainedGlass;
		case 338: return Item::BlueStainedGlassPane;
		case 274: return Item::BlueTerracotta;
		case 93:  return Item::BlueWool;
		case 588: return Item::Bone;
		case 359: return Item::BoneBlock;
		case 587: return Item::BoneMeal;
		case 557: return Item::Book;
		case 137: return Item::Bookshelf;
		case 472: return Item::Bow;
		case 493: return Item::Bowl;
		case 439: return Item::BrainCoral;
		case 434: return Item::BrainCoralBlock;
		case 444: return Item::BrainCoralFan;
		case 509: return Item::Bread;
		case 630: return Item::BrewingStand;
		case 551: return Item::Brick;
		case 122: return Item::BrickSlab;
		case 216: return Item::BrickStairs;
		case 135: return Item::Bricks;
		case 742: return Item::BrownBanner;
		case 603: return Item::BrownBed;
		case 294: return Item::BrownCarpet;
		case 407: return Item::BrownConcrete;
		case 423: return Item::BrownConcretePowder;
		case 391: return Item::BrownGlazedTerracotta;
		case 108: return Item::BrownMushroom;
		case 203: return Item::BrownMushroomBlock;
		case 375: return Item::BrownShulkerBox;
		case 323: return Item::BrownStainedGlass;
		case 339: return Item::BrownStainedGlassPane;
		case 275: return Item::BrownTerracotta;
		case 94:  return Item::BrownWool;
		case 440: return Item::BubbleCoral;
		case 435: return Item::BubbleCoralBlock;
		case 445: return Item::BubbleCoralFan;
		case 537: return Item::Bucket;
		case 172: return Item::Cactus;
		case 574: return Item::GreenDye;
		case 590: return Item::Cake;
		case 692: return Item::Carrot;
		case 704: return Item::CarrotOnAStick;
		case 182: return Item::CarvedPumpkin;
		case 631: return Item::Cauldron;
		case 636: return Item::CaveSpiderSpawnEgg;
		case 355: return Item::ChainCommandBlock;
		case 517: return Item::ChainmailBoots;
		case 515: return Item::ChainmailChestplate;
		case 514: return Item::ChainmailHelmet;
		case 516: return Item::ChainmailLeggings;
		case 475: return Item::Charcoal;
		case 149: return Item::Chest;
		case 559: return Item::ChestMinecart;
		case 616: return Item::Chicken;
		case 637: return Item::ChickenSpawnEgg;
		case 248: return Item::ChippedAnvil;
		case 257: return Item::ChiseledQuartzBlock;
		case 351: return Item::ChiseledRedSandstone;
		case 69:  return Item::ChiseledSandstone;
		case 202: return Item::ChiseledStoneBricks;
		case 143: return Item::ChorusFlower;
		case 747: return Item::ChorusFruit;
		case 142: return Item::ChorusPlant;
		case 173: return Item::Clay;
		case 552: return Item::ClayBall;
		case 564: return Item::Clock;
		case 474: return Item::Coal;
		case 299: return Item::CoalBlock;
		case 31:  return Item::CoalOre;
		case 10:  return Item::CoarseDirt;
		case 12:  return Item::Cobblestone;
		case 121: return Item::CobblestoneSlab;
		case 157: return Item::CobblestoneStairs;
		case 239: return Item::CobblestoneWall;
		case 75:  return Item::Cobweb;
		case 575: return Item::CocoaBeans;
		case 566: return Item::Cod;
		case 549: return Item::CodBucket;
		case 638: return Item::CodSpawnEgg;
		case 237: return Item::CommandBlock;
		case 727: return Item::CommandBlockMinecart;
		case 463: return Item::Comparator;
		case 562: return Item::Compass;
		case 454: return Item::Conduit;
		case 615: return Item::CookedBeef;
		case 617: return Item::CookedChicken;
		case 570: return Item::CookedCod;
		case 729: return Item::CookedMutton;
		case 532: return Item::CookedPorkchop;
		case 717: return Item::CookedRabbit;
		case 571: return Item::CookedSalmon;
		case 607: return Item::Cookie;
		case 639: return Item::CowSpawnEgg;
		case 201: return Item::CrackedStoneBricks;
		case 152: return Item::CraftingTable;
		case 702: return Item::CreeperHead;
		case 640: return Item::CreeperSpawnEgg;
		case 352: return Item::CutRedSandstone;
		case 70:  return Item::CutSandstone;
		case 739: return Item::CyanBanner;
		case 600: return Item::CyanBed;
		case 291: return Item::CyanCarpet;
		case 404: return Item::CyanConcrete;
		case 420: return Item::CyanConcretePowder;
		case 578: return Item::CyanDye;
		case 388: return Item::CyanGlazedTerracotta;
		case 372: return Item::CyanShulkerBox;
		case 320: return Item::CyanStainedGlass;
		case 336: return Item::CyanStainedGlassPane;
		case 272: return Item::CyanTerracotta;
		case 91:  return Item::CyanWool;
		case 249: return Item::DamagedAnvil;
		case 98:  return Item::Dandelion;
		case 583: return Item::YellowDye;
		case 763: return Item::DarkOakBoat;
		case 246: return Item::DarkOakButton;
		case 461: return Item::DarkOakDoor;
		case 180: return Item::DarkOakFence;
		case 215: return Item::DarkOakFenceGate;
		case 61:  return Item::DarkOakLeaves;
		case 37:  return Item::DarkOakLog;
		case 18:  return Item::DarkOakPlanks;
		case 165: return Item::DarkOakPressurePlate;
		case 24:  return Item::DarkOakSapling;
		case 117: return Item::DarkOakSlab;
		case 302: return Item::DarkOakStairs;
		case 192: return Item::DarkOakTrapdoor;
		case 55:  return Item::DarkOakWood;
		case 345: return Item::DarkPrismarine;
		case 130: return Item::DarkPrismarineSlab;
		case 348: return Item::DarkPrismarineStairs;
		case 253: return Item::DaylightDetector;
		case 429: return Item::DeadBrainCoralBlock;
		case 449: return Item::DeadBrainCoralFan;
		case 430: return Item::DeadBubbleCoralBlock;
		case 450: return Item::DeadBubbleCoralFan;
		case 78:  return Item::DeadBush;
		case 431: return Item::DeadFireCoralBlock;
		case 451: return Item::DeadFireCoralFan;
		case 432: return Item::DeadHornCoralBlock;
		case 452: return Item::DeadHornCoralFan;
		case 428: return Item::DeadTubeCoralBlock;
		case 448: return Item::DeadTubeCoralFan;
		case 768: return Item::DebugStick;
		case 73:  return Item::DetectorRail;
		case 476: return Item::Diamond;
		case 491: return Item::DiamondAxe;
		case 151: return Item::DiamondBlock;
		case 525: return Item::DiamondBoots;
		case 523: return Item::DiamondChestplate;
		case 522: return Item::DiamondHelmet;
		case 505: return Item::DiamondHoe;
		case 724: return Item::DiamondHorseArmor;
		case 524: return Item::DiamondLeggings;
		case 150: return Item::DiamondOre;
		case 490: return Item::DiamondPickaxe;
		case 489: return Item::DiamondShovel;
		case 488: return Item::DiamondSword;
		case 4:   return Item::Diorite;
		case 9:   return Item::Dirt;
		case 67:  return Item::Dispenser;
		case 641: return Item::DolphinSpawnEgg;
		case 642: return Item::DonkeySpawnEgg;
		case 752: return Item::DragonBreath;
		case 227: return Item::DragonEgg;
		case 703: return Item::DragonHead;
		case 611: return Item::DriedKelp;
		case 555: return Item::DriedKelpBlock;
		case 262: return Item::Dropper;
		case 643: return Item::DrownedSpawnEgg;
		case 561: return Item::Egg;
		case 644: return Item::ElderGuardianSpawnEgg;
		case 758: return Item::Elytra;
		case 689: return Item::Emerald;
		case 233: return Item::EmeraldBlock;
		case 230: return Item::EmeraldOre;
		case 709: return Item::EnchantedBook;
		case 535: return Item::EnchantedGoldenApple;
		case 223: return Item::EnchantingTable;
		case 746: return Item::EndCrystal;
		case 224: return Item::EndPortalFrame;
		case 141: return Item::EndRod;
		case 225: return Item::EndStone;
		case 226: return Item::EndStoneBricks;
		case 231: return Item::EnderChest;
		case 632: return Item::EnderEye;
		case 619: return Item::EnderPearl;
		case 645: return Item::EndermanSpawnEgg;
		case 646: return Item::EndermiteSpawnEgg;
		case 647: return Item::EvokerSpawnEgg;
		case 685: return Item::ExperienceBottle;
		case 153: return Item::Farmland;
		case 500: return Item::Feather;
		case 627: return Item::FermentedSpiderEye;
		case 77:  return Item::Fern;
		case 608: return Item::FilledMap;
		case 686: return Item::FireCharge;
		case 441: return Item::FireCoral;
		case 436: return Item::FireCoralBlock;
		case 446: return Item::FireCoralFan;
		case 707: return Item::FireworkRocket;
		case 708: return Item::FireworkStar;
		case 563: return Item::FishingRod;
		case 530: return Item::Flint;
		case 470: return Item::FlintAndSteel;
		case 691: return Item::FlowerPot;
		case 154: return Item::Furnace;
		case 560: return Item::FurnaceMinecart;
		case 648: return Item::GhastSpawnEgg;
		case 621: return Item::GhastTear;
		case 64:  return Item::Glass;
		case 625: return Item::GlassBottle;
		case 207: return Item::GlassPane;
		case 633: return Item::GlisteringMelonSlice;
		case 185: return Item::Glowstone;
		case 565: return Item::GlowstoneDust;
		case 110: return Item::GoldBlock;
		case 478: return Item::GoldIngot;
		case 622: return Item::GoldNugget;
		case 29:  return Item::GoldOre;
		case 534: return Item::GoldenApple;
		case 498: return Item::GoldenAxe;
		case 529: return Item::GoldenBoots;
		case 697: return Item::GoldenCarrot;
		case 527: return Item::GoldenChestplate;
		case 526: return Item::GoldenHelmet;
		case 506: return Item::GoldenHoe;
		case 723: return Item::GoldenHorseArmor;
		case 528: return Item::GoldenLeggings;
		case 497: return Item::GoldenPickaxe;
		case 496: return Item::GoldenShovel;
		case 495: return Item::GoldenSword;
		case 2:   return Item::Granite;
		case 76:  return Item::Grass;
		case 8:   return Item::GrassBlock;
		case 304: return Item::GrassPath;
		case 28:  return Item::Gravel;
		case 737: return Item::GrayBanner;
		case 598: return Item::GrayBed;
		case 289: return Item::GrayCarpet;
		case 402: return Item::GrayConcrete;
		case 418: return Item::GrayConcretePowder;
		case 580: return Item::GrayDye;
		case 386: return Item::GrayGlazedTerracotta;
		case 370: return Item::GrayShulkerBox;
		case 318: return Item::GrayStainedGlass;
		case 334: return Item::GrayStainedGlassPane;
		case 270: return Item::GrayTerracotta;
		case 89:  return Item::GrayWool;
		case 743: return Item::GreenBanner;
		case 604: return Item::GreenBed;
		case 295: return Item::GreenCarpet;
		case 408: return Item::GreenConcrete;
		case 424: return Item::GreenConcretePowder;
		case 392: return Item::GreenGlazedTerracotta;
		case 376: return Item::GreenShulkerBox;
		case 324: return Item::GreenStainedGlass;
		case 340: return Item::GreenStainedGlassPane;
		case 276: return Item::GreenTerracotta;
		case 95:  return Item::GreenWool;
		case 649: return Item::GuardianSpawnEgg;
		case 501: return Item::Gunpowder;
		case 281: return Item::HayBale;
		case 784: return Item::HeartOfTheSea;
		case 252: return Item::HeavyWeightedPressurePlate;
		case 256: return Item::Hopper;
		case 713: return Item::HopperMinecart;
		case 442: return Item::HornCoral;
		case 437: return Item::HornCoralBlock;
		case 447: return Item::HornCoralFan;
		case 650: return Item::HorseSpawnEgg;
		case 651: return Item::HuskSpawnEgg;
		case 170: return Item::Ice;
		case 198: return Item::InfestedChiseledStoneBricks;
		case 194: return Item::InfestedCobblestone;
		case 197: return Item::InfestedCrackedStoneBricks;
		case 196: return Item::InfestedMossyStoneBricks;
		case 193: return Item::InfestedStone;
		case 195: return Item::InfestedStoneBricks;
		case 572: return Item::InkSac;
		case 469: return Item::IronAxe;
		case 206: return Item::IronBars;
		case 111: return Item::IronBlock;
		case 521: return Item::IronBoots;
		case 519: return Item::IronChestplate;
		case 455: return Item::IronDoor;
		case 518: return Item::IronHelmet;
		case 504: return Item::IronHoe;
		case 722: return Item::IronHorseArmor;
		case 477: return Item::IronIngot;
		case 520: return Item::IronLeggings;
		case 766: return Item::IronNugget;
		case 30:  return Item::IronOre;
		case 468: return Item::IronPickaxe;
		case 467: return Item::IronShovel;
		case 479: return Item::IronSword;
		case 280: return Item::IronTrapdoor;
		case 690: return Item::ItemFrame;
		case 186: return Item::JackOLantern;
		case 174: return Item::Jukebox;
		case 761: return Item::JungleBoat;
		case 244: return Item::JungleButton;
		case 459: return Item::JungleDoor;
		case 178: return Item::JungleFence;
		case 213: return Item::JungleFenceGate;
		case 59:  return Item::JungleLeaves;
		case 35:  return Item::JungleLog;
		case 16:  return Item::JunglePlanks;
		case 163: return Item::JunglePressurePlate;
		case 22:  return Item::JungleSapling;
		case 115: return Item::JungleSlab;
		case 236: return Item::JungleStairs;
		case 190: return Item::JungleTrapdoor;
		case 53:  return Item::JungleWood;
		case 554: return Item::Kelp;
		case 767: return Item::KnowledgeBook;
		case 155: return Item::Ladder;
		case 66:  return Item::LapisBlock;
		case 576: return Item::LapisLazuli;
		case 65:  return Item::LapisOre;
		case 310: return Item::LargeFern;
		case 539: return Item::LavaBucket;
		case 725: return Item::Lead;
		case 545: return Item::Leather;
		case 513: return Item::LeatherBoots;
		case 511: return Item::LeatherChestplate;
		case 510: return Item::LeatherHelmet;
		case 512: return Item::LeatherLeggings;
		case 158: return Item::Lever;
		case 733: return Item::LightBlueBanner;
		case 594: return Item::LightBlueBed;
		case 285: return Item::LightBlueCarpet;
		case 398: return Item::LightBlueConcrete;
		case 414: return Item::LightBlueConcretePowder;
		case 584: return Item::LightBlueDye;
		case 382: return Item::LightBlueGlazedTerracotta;
		case 366: return Item::LightBlueShulkerBox;
		case 314: return Item::LightBlueStainedGlass;
		case 330: return Item::LightBlueStainedGlassPane;
		case 266: return Item::LightBlueTerracotta;
		case 85:  return Item::LightBlueWool;
		case 738: return Item::LightGrayBanner;
		case 599: return Item::LightGrayBed;
		case 290: return Item::LightGrayCarpet;
		case 403: return Item::LightGrayConcrete;
		case 419: return Item::LightGrayConcretePowder;
		case 579: return Item::LightGrayDye;
		case 387: return Item::LightGrayGlazedTerracotta;
		case 371: return Item::LightGrayShulkerBox;
		case 319: return Item::LightGrayStainedGlass;
		case 335: return Item::LightGrayStainedGlassPane;
		case 271: return Item::LightGrayTerracotta;
		case 90:  return Item::LightGrayWool;
		case 251: return Item::LightWeightedPressurePlate;
		case 306: return Item::Lilac;
		case 219: return Item::LilyPad;
		case 735: return Item::LimeBanner;
		case 596: return Item::LimeBed;
		case 287: return Item::LimeCarpet;
		case 400: return Item::LimeConcrete;
		case 416: return Item::LimeConcretePowder;
		case 582: return Item::LimeDye;
		case 384: return Item::LimeGlazedTerracotta;
		case 368: return Item::LimeShulkerBox;
		case 316: return Item::LimeStainedGlass;
		case 332: return Item::LimeStainedGlassPane;
		case 268: return Item::LimeTerracotta;
		case 87:  return Item::LimeWool;
		case 756: return Item::LingeringPotion;
		case 652: return Item::LlamaSpawnEgg;
		case 732: return Item::MagentaBanner;
		case 593: return Item::MagentaBed;
		case 284: return Item::MagentaCarpet;
		case 397: return Item::MagentaConcrete;
		case 413: return Item::MagentaConcretePowder;
		case 585: return Item::MagentaDye;
		case 381: return Item::MagentaGlazedTerracotta;
		case 365: return Item::MagentaShulkerBox;
		case 313: return Item::MagentaStainedGlass;
		case 329: return Item::MagentaStainedGlassPane;
		case 265: return Item::MagentaTerracotta;
		case 84:  return Item::MagentaWool;
		case 356: return Item::MagmaBlock;
		case 629: return Item::MagmaCream;
		case 653: return Item::MagmaCubeSpawnEgg;
		case 696: return Item::Map;
		case 208: return Item::Melon;
		case 613: return Item::MelonSeeds;
		case 610: return Item::MelonSlice;
		case 546: return Item::MilkBucket;
		case 540: return Item::Minecart;
		case 654: return Item::MooshroomSpawnEgg;
		case 138: return Item::MossyCobblestone;
		case 240: return Item::MossyCobblestoneWall;
		case 200: return Item::MossyStoneBricks;
		case 655: return Item::MuleSpawnEgg;
		case 205: return Item::MushroomStem;
		case 494: return Item::MushroomStew;
		case 779: return Item::MusicDisc11;
		case 769: return Item::MusicDisc13;
		case 771: return Item::MusicDiscBlocks;
		case 770: return Item::MusicDiscCat;
		case 772: return Item::MusicDiscChirp;
		case 773: return Item::MusicDiscFar;
		case 774: return Item::MusicDiscMall;
		case 775: return Item::MusicDiscMellohi;
		case 776: return Item::MusicDiscStal;
		case 777: return Item::MusicDiscStrad;
		case 780: return Item::MusicDiscWait;
		case 778: return Item::MusicDiscWard;
		case 728: return Item::Mutton;
		case 218: return Item::Mycelium;
		case 726: return Item::NameTag;
		case 783: return Item::NautilusShell;
		case 710: return Item::NetherBrick;
		case 221: return Item::NetherBrickFence;
		case 124: return Item::NetherBrickSlab;
		case 222: return Item::NetherBrickStairs;
		case 220: return Item::NetherBricks;
		case 255: return Item::NetherQuartzOre;
		case 705: return Item::NetherStar;
		case 623: return Item::NetherWart;
		case 357: return Item::NetherWartBlock;
		case 183: return Item::Netherrack;
		case 71:  return Item::NoteBlock;
		case 544: return Item::OakBoat;
		case 241: return Item::OakButton;
		case 456: return Item::OakDoor;
		case 175: return Item::OakFence;
		case 210: return Item::OakFenceGate;
		case 56:  return Item::OakLeaves;
		case 32:  return Item::OakLog;
		case 13:  return Item::OakPlanks;
		case 160: return Item::OakPressurePlate;
		case 19:  return Item::OakSapling;
		case 112: return Item::OakSlab;
		case 148: return Item::OakStairs;
		case 187: return Item::OakTrapdoor;
		case 50:  return Item::OakWood;
		case 361: return Item::Observer;
		case 139: return Item::Obsidian;
		case 656: return Item::OcelotSpawnEgg;
		case 731: return Item::OrangeBanner;
		case 592: return Item::OrangeBed;
		case 283: return Item::OrangeCarpet;
		case 396: return Item::OrangeConcrete;
		case 412: return Item::OrangeConcretePowder;
		case 586: return Item::OrangeDye;
		case 380: return Item::OrangeGlazedTerracotta;
		case 364: return Item::OrangeShulkerBox;
		case 312: return Item::OrangeStainedGlass;
		case 328: return Item::OrangeStainedGlassPane;
		case 264: return Item::OrangeTerracotta;
		case 104: return Item::OrangeTulip;
		case 83:  return Item::OrangeWool;
		case 107: return Item::OxeyeDaisy;
		case 300: return Item::PackedIce;
		case 533: return Item::Painting;
		case 556: return Item::Paper;
		case 657: return Item::ParrotSpawnEgg;
		case 308: return Item::Peony;
		case 120: return Item::PetrifiedOakSlab;
		case 782: return Item::PhantomMembrane;
		case 658: return Item::PhantomSpawnEgg;
		case 659: return Item::PigSpawnEgg;
		case 736: return Item::PinkBanner;
		case 597: return Item::PinkBed;
		case 288: return Item::PinkCarpet;
		case 401: return Item::PinkConcrete;
		case 417: return Item::PinkConcretePowder;
		case 581: return Item::PinkDye;
		case 385: return Item::PinkGlazedTerracotta;
		case 369: return Item::PinkShulkerBox;
		case 317: return Item::PinkStainedGlass;
		case 333: return Item::PinkStainedGlassPane;
		case 269: return Item::PinkTerracotta;
		case 106: return Item::PinkTulip;
		case 88:  return Item::PinkWool;
		case 81:  return Item::Piston;
		case 700: return Item::PlayerHead;
		case 11:  return Item::Podzol;
		case 695: return Item::PoisonousPotato;
		case 660: return Item::PolarBearSpawnEgg;
		case 7:   return Item::PolishedAndesite;
		case 5:   return Item::PolishedDiorite;
		case 3:   return Item::PolishedGranite;
		case 748: return Item::PoppedChorusFruit;
		case 99:  return Item::Poppy;
		case 531: return Item::Porkchop;
		case 693: return Item::Potato;
		case 624: return Item::Potion;
		case 72:  return Item::PoweredRail;
		case 343: return Item::Prismarine;
		case 129: return Item::PrismarineBrickSlab;
		case 347: return Item::PrismarineBrickStairs;
		case 344: return Item::PrismarineBricks;
		case 715: return Item::PrismarineCrystals;
		case 714: return Item::PrismarineShard;
		case 128: return Item::PrismarineSlab;
		case 346: return Item::PrismarineStairs;
		case 569: return Item::Pufferfish;
		case 547: return Item::PufferfishBucket;
		case 661: return Item::PufferfishSpawnEgg;
		case 181: return Item::Pumpkin;
		case 706: return Item::PumpkinPie;
		case 612: return Item::PumpkinSeeds;
		case 740: return Item::PurpleBanner;
		case 601: return Item::PurpleBed;
		case 292: return Item::PurpleCarpet;
		case 405: return Item::PurpleConcrete;
		case 421: return Item::PurpleConcretePowder;
		case 577: return Item::PurpleDye;
		case 389: return Item::PurpleGlazedTerracotta;
		case 373: return Item::PurpleShulkerBox;
		case 321: return Item::PurpleStainedGlass;
		case 337: return Item::PurpleStainedGlassPane;
		case 273: return Item::PurpleTerracotta;
		case 92:  return Item::PurpleWool;
		case 144: return Item::PurpurBlock;
		case 145: return Item::PurpurPillar;
		case 127: return Item::PurpurSlab;
		case 146: return Item::PurpurStairs;
		case 711: return Item::Quartz;
		case 258: return Item::QuartzBlock;
		case 259: return Item::QuartzPillar;
		case 125: return Item::QuartzSlab;
		case 260: return Item::QuartzStairs;
		case 716: return Item::Rabbit;
		case 719: return Item::RabbitFoot;
		case 720: return Item::RabbitHide;
		case 662: return Item::RabbitSpawnEgg;
		case 718: return Item::RabbitStew;
		case 156: return Item::Rail;
		case 744: return Item::RedBanner;
		case 605: return Item::RedBed;
		case 296: return Item::RedCarpet;
		case 409: return Item::RedConcrete;
		case 425: return Item::RedConcretePowder;
		case 393: return Item::RedGlazedTerracotta;
		case 109: return Item::RedMushroom;
		case 204: return Item::RedMushroomBlock;
		case 358: return Item::RedNetherBricks;
		case 27:  return Item::RedSand;
		case 350: return Item::RedSandstone;
		case 126: return Item::RedSandstoneSlab;
		case 353: return Item::RedSandstoneStairs;
		case 377: return Item::RedShulkerBox;
		case 325: return Item::RedStainedGlass;
		case 341: return Item::RedStainedGlassPane;
		case 277: return Item::RedTerracotta;
		case 103: return Item::RedTulip;
		case 96:  return Item::RedWool;
		case 542: return Item::Redstone;
		case 254: return Item::RedstoneBlock;
		case 228: return Item::RedstoneLamp;
		case 166: return Item::RedstoneOre;
		case 167: return Item::RedstoneTorch;
		case 462: return Item::Repeater;
		case 354: return Item::RepeatingCommandBlock;
		case 307: return Item::RoseBush;
		case 573: return Item::RedDye;
		case 618: return Item::RottenFlesh;
		case 541: return Item::Saddle;
		case 567: return Item::Salmon;
		case 548: return Item::SalmonBucket;
		case 663: return Item::SalmonSpawnEgg;
		case 26:  return Item::Sand;
		case 68:  return Item::Sandstone;
		case 119: return Item::SandstoneSlab;
		case 229: return Item::SandstoneStairs;
		case 466: return Item::Scute;
		case 349: return Item::SeaLantern;
		case 80:  return Item::SeaPickle;
		case 79:  return Item::Seagrass;
		case 609: return Item::Shears;
		case 664: return Item::SheepSpawnEgg;
		case 757: return Item::Shield;
		case 362: return Item::ShulkerBox;
		case 765: return Item::ShulkerShell;
		case 665: return Item::ShulkerSpawnEgg;
		case 536: return Item::OakSign;
		case 666: return Item::SilverfishSpawnEgg;
		case 668: return Item::SkeletonHorseSpawnEgg;
		case 698: return Item::SkeletonSkull;
		case 667: return Item::SkeletonSpawnEgg;
		case 558: return Item::SlimeBall;
		case 303: return Item::SlimeBlock;
		case 669: return Item::SlimeSpawnEgg;
		case 131: return Item::SmoothQuartz;
		case 132: return Item::SmoothRedSandstone;
		case 133: return Item::SmoothSandstone;
		case 134: return Item::SmoothStone;
		case 169: return Item::Snow;
		case 171: return Item::SnowBlock;
		case 543: return Item::Snowball;
		case 184: return Item::SoulSand;
		case 147: return Item::Spawner;
		case 754: return Item::SpectralArrow;
		case 626: return Item::SpiderEye;
		case 670: return Item::SpiderSpawnEgg;
		case 753: return Item::SplashPotion;
		case 62:  return Item::Sponge;
		case 759: return Item::SpruceBoat;
		case 242: return Item::SpruceButton;
		case 457: return Item::SpruceDoor;
		case 176: return Item::SpruceFence;
		case 211: return Item::SpruceFenceGate;
		case 57:  return Item::SpruceLeaves;
		case 33:  return Item::SpruceLog;
		case 14:  return Item::SprucePlanks;
		case 161: return Item::SprucePressurePlate;
		case 20:  return Item::SpruceSapling;
		case 113: return Item::SpruceSlab;
		case 234: return Item::SpruceStairs;
		case 188: return Item::SpruceTrapdoor;
		case 51:  return Item::SpruceWood;
		case 671: return Item::SquidSpawnEgg;
		case 492: return Item::Stick;
		case 74:  return Item::StickyPiston;
		case 1:   return Item::Stone;
		case 487: return Item::StoneAxe;
		case 123: return Item::StoneBrickSlab;
		case 217: return Item::StoneBrickStairs;
		case 199: return Item::StoneBricks;
		case 168: return Item::StoneButton;
		case 503: return Item::StoneHoe;
		case 486: return Item::StonePickaxe;
		case 159: return Item::StonePressurePlate;
		case 485: return Item::StoneShovel;
		case 118: return Item::StoneSlab;
		case 484: return Item::StoneSword;
		case 672: return Item::StraySpawnEgg;
		case 499: return Item::String;
		case 42:  return Item::StrippedAcaciaLog;
		case 48:  return Item::StrippedAcaciaWood;
		case 40:  return Item::StrippedBirchLog;
		case 46:  return Item::StrippedBirchWood;
		case 43:  return Item::StrippedDarkOakLog;
		case 49:  return Item::StrippedDarkOakWood;
		case 41:  return Item::StrippedJungleLog;
		case 47:  return Item::StrippedJungleWood;
		case 38:  return Item::StrippedOakLog;
		case 44:  return Item::StrippedOakWood;
		case 39:  return Item::StrippedSpruceLog;
		case 45:  return Item::StrippedSpruceWood;
		case 464: return Item::StructureBlock;
		case 360: return Item::StructureVoid;
		case 589: return Item::Sugar;
		case 553: return Item::SugarCane;
		case 305: return Item::Sunflower;
		case 309: return Item::TallGrass;
		case 298: return Item::Terracotta;
		case 755: return Item::TippedArrow;
		case 136: return Item::TNT;
		case 712: return Item::TNTMinecart;
		case 140: return Item::Torch;
		case 764: return Item::TotemOfUndying;
		case 250: return Item::TrappedChest;
		case 781: return Item::Trident;
		case 232: return Item::TripwireHook;
		case 568: return Item::TropicalFish;
		case 550: return Item::TropicalFishBucket;
		case 673: return Item::TropicalFishSpawnEgg;
		case 438: return Item::TubeCoral;
		case 433: return Item::TubeCoralBlock;
		case 443: return Item::TubeCoralFan;
		case 427: return Item::TurtleEgg;
		case 465: return Item::TurtleHelmet;
		case 674: return Item::TurtleSpawnEgg;
		case 675: return Item::VexSpawnEgg;
		case 676: return Item::VillagerSpawnEgg;
		case 677: return Item::VindicatorSpawnEgg;
		case 209: return Item::Vine;
		case 538: return Item::WaterBucket;
		case 63:  return Item::WetSponge;
		case 508: return Item::Wheat;
		case 507: return Item::WheatSeeds;
		case 730: return Item::WhiteBanner;
		case 591: return Item::WhiteBed;
		case 282: return Item::WhiteCarpet;
		case 395: return Item::WhiteConcrete;
		case 411: return Item::WhiteConcretePowder;
		case 379: return Item::WhiteGlazedTerracotta;
		case 363: return Item::WhiteShulkerBox;
		case 311: return Item::WhiteStainedGlass;
		case 327: return Item::WhiteStainedGlassPane;
		case 263: return Item::WhiteTerracotta;
		case 105: return Item::WhiteTulip;
		case 82:  return Item::WhiteWool;
		case 678: return Item::WitchSpawnEgg;
		case 699: return Item::WitherSkeletonSkull;
		case 679: return Item::WitherSkeletonSpawnEgg;
		case 680: return Item::WolfSpawnEgg;
		case 483: return Item::WoodenAxe;
		case 502: return Item::WoodenHoe;
		case 482: return Item::WoodenPickaxe;
		case 481: return Item::WoodenShovel;
		case 480: return Item::WoodenSword;
		case 687: return Item::WritableBook;
		case 688: return Item::WrittenBook;
		case 734: return Item::YellowBanner;
		case 595: return Item::YellowBed;
		case 286: return Item::YellowCarpet;
		case 399: return Item::YellowConcrete;
		case 415: return Item::YellowConcretePowder;
		case 383: return Item::YellowGlazedTerracotta;
		case 367: return Item::YellowShulkerBox;
		case 315: return Item::YellowStainedGlass;
		case 331: return Item::YellowStainedGlassPane;
		case 267: return Item::YellowTerracotta;
		case 86:  return Item::YellowWool;
		case 701: return Item::ZombieHead;
		case 682: return Item::ZombieHorseSpawnEgg;
		case 683: return Item::ZombiePigmanSpawnEgg;
		case 681: return Item::ZombieSpawnEgg;
		case 684: return Item::ZombieVillagerSpawnEgg;
		default:  return Item::Air;
	}
}
}  // namespace Palette_1_13
