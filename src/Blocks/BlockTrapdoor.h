
#pragma once

#include "BlockHandler.h"
#include "Mixins.h"
#include "../EffectID.h"




class cBlockTrapdoorHandler :
	public cClearMetaOnDrop<cMetaRotator<cBlockHandler, 0x03, 0x01, 0x02, 0x00, 0x03, false>>
{
	using Super = cClearMetaOnDrop<cMetaRotator<cBlockHandler, 0x03, 0x01, 0x02, 0x00, 0x03, false>>;

public:

	cBlockTrapdoorHandler(BLOCKTYPE a_BlockType):
		Super(a_BlockType)
	{
	}




	virtual bool IsUseable(void) override
	{
		return true;
	}





	virtual bool OnUse(
		cChunkInterface & a_ChunkInterface,
		cWorldInterface & a_WorldInterface,
		cPlayer & a_Player,
		const Vector3i a_BlockPos,
		eBlockFace a_BlockFace,
		const Vector3i a_CursorPos
	) override
	{
		if (m_BlockType == E_BLOCK_IRON_TRAPDOOR)
		{
			// Iron doors can only be toggled by redstone, not by right-clicking
			return false;
		}

		// Flip the ON bit on / off using the XOR bitwise operation
		NIBBLETYPE Meta = (a_ChunkInterface.GetBlockMeta(a_BlockPos) ^ 0x04);
		a_ChunkInterface.SetBlockMeta(a_BlockPos, Meta);
		a_WorldInterface.GetBroadcastManager().BroadcastSoundParticleEffect(EffectID::SFX_RANDOM_FENCE_GATE_OPEN, a_BlockPos, 0, a_Player.GetClientHandle());

		return true;
	}





	virtual void OnCancelRightClick(
		cChunkInterface & a_ChunkInterface,
		cWorldInterface & a_WorldInterface,
		cPlayer & a_Player,
		const Vector3i a_BlockPos,
		eBlockFace a_BlockFace
	) override
	{
		UNUSED(a_ChunkInterface);
		a_WorldInterface.SendBlockTo(a_BlockPos, a_Player);
	}





	virtual bool GetPlacementBlockTypeMeta(
		cChunkInterface & a_ChunkInterface,
		cPlayer & a_Player,
		const Vector3i a_PlacedBlockPos,
		eBlockFace a_ClickedBlockFace,
		const Vector3i a_CursorPos,
		BLOCKTYPE & a_BlockType, NIBBLETYPE & a_BlockMeta
	) override
	{
		a_BlockType = m_BlockType;

		// Need this editable
		auto SafeClickedBlockFace = (eBlockFace) a_ClickedBlockFace;

		// Handle horizontal placing
		if ((a_ClickedBlockFace == BLOCK_FACE_YP) || (a_ClickedBlockFace == BLOCK_FACE_YP))
		{
			// Estimate the orientation of relative to the player
			const auto RotationUnitVector = a_PlacedBlockPos - (Vector3i) a_Player.GetPosition().Floor();

			// If facing along X
			if (RotationUnitVector.x != 0)
			{
				// Towards positive X
				if (RotationUnitVector.x > 0)
				{
					SafeClickedBlockFace = BLOCK_FACE_XP;
				}
				// Towards negative X
				else
				{
					SafeClickedBlockFace = BLOCK_FACE_XM;
				}
			}
			// If facing alon Z axis:
			else
			{
				// Towards positive Z
				if (RotationUnitVector.z > 0)
				{
					SafeClickedBlockFace = BLOCK_FACE_ZP;
				}
				// Towards negative Z
				else
				{
					SafeClickedBlockFace = BLOCK_FACE_ZM;
				}

			// Lacks a check for Z = 0, because we still need
			//  some orientation for when looking straight down
			}
		}

		a_BlockMeta = BlockFaceToMetaData(SafeClickedBlockFace);

		// Check if doors occupies top-half or bottom-half of block
		if (a_CursorPos.y > 7)
		{
			// Don't move up if placing on top of block
			if (a_ClickedBlockFace != BLOCK_FACE_YM)
			{
				a_BlockMeta |= 0x8;
			}
		}

		// Move trapdoor to upper half if facing up
		if (a_ClickedBlockFace != BLOCK_FACE_YP)
		{
			a_BlockMeta |= 0x8;
		}

		return true;
	}





	inline static NIBBLETYPE BlockFaceToMetaData(eBlockFace a_BlockFace)
	{
		switch (a_BlockFace)
		{
			case BLOCK_FACE_ZP: return 0x1;
			case BLOCK_FACE_ZM: return 0x0;
			case BLOCK_FACE_XP: return 0x3;
			case BLOCK_FACE_XM: return 0x2;
			case BLOCK_FACE_YM:
			case BLOCK_FACE_YP:
			case BLOCK_FACE_NONE:
			{
				ASSERT(!"Unhandled block face!");
				return 0;
			}
		}
		UNREACHABLE("Unsupported block face");
	}





	inline static eBlockFace BlockMetaDataToBlockFace(NIBBLETYPE a_Meta)
	{
		switch (a_Meta & 0x3)
		{
			case 0x0: return BLOCK_FACE_ZM;
			case 0x1: return BLOCK_FACE_ZP;
			case 0x2: return BLOCK_FACE_XM;
			case 0x3: return BLOCK_FACE_XP;
			default:
			{
				ASSERT(!"Unhandled block meta!");
				return BLOCK_FACE_NONE;
			}
		}
	}





	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) override
	{
		UNUSED(a_Meta);
		switch (m_BlockType)
		{
			case E_BLOCK_TRAPDOOR: return 13;
			case E_BLOCK_IRON_TRAPDOOR: return 6;
			default:
			{
				ASSERT(!"Unhandled blocktype in trapdoor handler!");
				return 0;
			}
		}
	}
};




