
#pragma once

#include "BlockHandler.h"
#include "Mixins.h"
#include "../EffectID.h"




class cBlockTrapdoorHandler :
	public cClearMetaOnDrop<cMetaRotator<cBlockHandler, 0x03, 0x01, 0x02, 0x00, 0x03, false>>
{
	using Super = cClearMetaOnDrop<cMetaRotator<cBlockHandler, 0x03, 0x01, 0x02, 0x00, 0x03, false>>;

public:

	using Super::Super;

private:

	virtual bool IsUseable(void) const override
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
	) const override
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
	) const override
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
	) const override
	{
		const auto BlockOffsetRelToPlayer = a_PlacedBlockPos - static_cast<Vector3i> (a_Player.GetPosition().Floor());

		// NOTE: The direction the player is facing is reversed to the BLOCK_FACE_* constant used

		a_BlockType = m_BlockType;
		a_BlockMeta = BlockFaceAndOffsetToMetaData(a_ClickedBlockFace, BlockOffsetRelToPlayer);

		// Trapdoor is placed on top of a block
		if ((a_ClickedBlockFace == BLOCK_FACE_YP))
		{
			// Toggle 'Move up half-block' bit off
			a_BlockMeta &= ~0x8;
		}
		// Trapdoor is placed on a higher half of a vertical block or on the bottom of a block
		else if ((a_CursorPos.y > 7) || (a_ClickedBlockFace == BLOCK_FACE_YM))
		{
			// Toggle 'Move up half-block' bit on
			a_BlockMeta |= 0x8;
		}

		return true;
	}





	inline static NIBBLETYPE BlockFaceAndOffsetToMetaData(eBlockFace a_BlockFace, const Vector3i a_BlockOffset)
	{
		// Handle placement on horizontal surface as if placed on the vertical one
		//  oriented the same direction relative to the player
		if ((a_BlockFace == BLOCK_FACE_YP) || (a_BlockFace == BLOCK_FACE_YM))
		{
			const auto IsOnXAxis = std::abs(a_BlockOffset.x) > std::abs(a_BlockOffset.z);

			if (IsOnXAxis)
			{
				if (a_BlockOffset.x > 0)
				{
					a_BlockFace = BLOCK_FACE_XM;
				}
				else
				{
					a_BlockFace = BLOCK_FACE_XP;
				}
			}
			else
			{
				if (a_BlockOffset.z > 0)
				{
					a_BlockFace = BLOCK_FACE_ZM;
				}
				else
				{
					a_BlockFace = BLOCK_FACE_ZP;
				}
			}
		}

		switch (a_BlockFace)
		{
			case BLOCK_FACE_ZP: return 0x1;
			case BLOCK_FACE_ZM: return 0x0;
			case BLOCK_FACE_XP: return 0x3;
			case BLOCK_FACE_XM: return 0x2;
			default:
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





	virtual ColourID GetMapBaseColourID(NIBBLETYPE a_Meta) const override
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




