
#pragma once





// fwd:
class cBlockHandler;




// tolua_begin
class cBlockInfo
{
public:
	// tolua_end

	/** The block type associated with this cBlockInfo. Needed for DeprecatedBindings.cpp */
	BLOCKTYPE m_BlockType;

	/** Returns the associated BlockInfo structure for the specified block type.
	This accessor makes sure that the cBlockInfo structures are properly initialized exactly once.
	It does so by using the C++ singleton approximation - storing the actual singleton as the function's static variable. */
	inline static const cBlockInfo & Get(BLOCKTYPE a_Type);

	// tolua_begin

	inline static NIBBLETYPE GetLightValue        (BLOCKTYPE a_Type) { return Get(a_Type).m_LightValue;          }
	inline static NIBBLETYPE GetSpreadLightFalloff(BLOCKTYPE a_Type) { return Get(a_Type).m_SpreadLightFalloff;  }
	inline static bool IsTransparent              (BLOCKTYPE a_Type) { return Get(a_Type).m_Transparent;         }
	inline static bool IsOneHitDig                (BLOCKTYPE a_Type) { return Get(a_Type).m_OneHitDig;           }
	inline static bool IsPistonBreakable          (BLOCKTYPE a_Type) { return Get(a_Type).m_PistonBreakable;     }
	inline static bool IsRainBlocker              (BLOCKTYPE a_Type) { return Get(a_Type).m_IsRainBlocker;       }
	inline static bool IsSkylightDispersant       (BLOCKTYPE a_Type)
	{
		return ((Get(a_Type).m_IsSkylightDispersant) || (Get(a_Type).m_SpreadLightFalloff > 1));
	}
	
	inline static bool IsSingleSlab               (BLOCKTYPE a_Type)
	{
		return (
			(a_Type == E_BLOCK_WOODEN_SLAB) ||
			(a_Type == E_BLOCK_STONE_SLAB) ||
			(a_Type == E_BLOCK_RED_SANDSTONE_SLAB) ||
			(a_Type == E_BLOCK_PURPUR_SLAB)
		);
	}
	
	inline static bool IsDoubleSlab               (BLOCKTYPE a_Type)
	{
		return (
			(a_Type == E_BLOCK_DOUBLE_STONE_SLAB) ||
			(a_Type == E_BLOCK_DOUBLE_WOODEN_SLAB) ||
			(a_Type == E_BLOCK_DOUBLE_RED_SANDSTONE_SLAB) ||
			(a_Type == E_BLOCK_PURPUR_DOUBLE_SLAB)
		);
	}
	inline static bool IsSnowable                 (BLOCKTYPE a_Type, NIBBLETYPE a_Meta)
	{
		return (
			(a_Type == E_BLOCK_ICE) ||
			(a_Type == E_BLOCK_LEAVES) ||
			(!IsTransparent(a_Type) && (a_Type != E_BLOCK_PACKED_ICE)) ||
			((IsSingleSlab(a_Type)) && (a_Meta | 0x08))
		);
	}

	/** This version of IsSnowable doesn't take care about TOP SINGLE SLAB
	It will return false for TOP SINGLE SLABS which is snowable, but it's used to keep compatibility with LUA Layer and plugins */ 
	inline static bool IsSnowable                 (BLOCKTYPE a_Type)
	{
		return (
			(a_Type == E_BLOCK_ICE) ||
			(a_Type == E_BLOCK_LEAVES) ||
			(!IsTransparent(a_Type) && (a_Type != E_BLOCK_PACKED_ICE))
		);
	}
	inline static bool IsSolid                    (BLOCKTYPE a_Type) { return Get(a_Type).m_IsSolid;             }
	inline static bool IsUseableBySpectator       (BLOCKTYPE a_Type) { return Get(a_Type).m_UseableBySpectator;  }
	inline static bool FullyOccupiesVoxel         (BLOCKTYPE a_Type) { return Get(a_Type).m_FullyOccupiesVoxel;  }
	inline static bool CanBeTerraformed           (BLOCKTYPE a_Type) { return Get(a_Type).m_CanBeTerraformed;    }
	inline static float GetBlockHeight            (BLOCKTYPE a_Type) { return Get(a_Type).m_BlockHeight;         }
	inline static float GetHardness               (BLOCKTYPE a_Type) { return Get(a_Type).m_Hardness;            }

	// tolua_end

	inline static cBlockHandler * GetHandler      (BLOCKTYPE a_Type) { return Get(a_Type).m_Handler.get();       }

	/** Creates a default BlockInfo structure, initializes all values to their defaults */
	cBlockInfo():
		m_BlockType(E_BLOCK_STONE),
		m_LightValue(0x00),
		m_SpreadLightFalloff(0x0f),
		m_Transparent(false),
		m_OneHitDig(false),
		m_PistonBreakable(false),
		m_IsRainBlocker(false),
		m_IsSkylightDispersant(false),
		m_IsSolid(true),
		m_UseableBySpectator(false),
		m_FullyOccupiesVoxel(false),
		m_CanBeTerraformed(false),
		m_BlockHeight(1.0),
		m_Hardness(0.0f),
		m_Handler()
	{
	}

private:
	/** Storage for all the BlockInfo structures. */
	class cBlockInfoArray;

	/** How much light do the blocks emit on their own? */
	NIBBLETYPE m_LightValue;

	/** How much light do the blocks consume? */
	NIBBLETYPE m_SpreadLightFalloff;

	/** Is a block transparent? (https://minecraft.gamepedia.com/Opacity) */
	bool m_Transparent;

	/** Is a block destroyed after a single hit? */
	bool m_OneHitDig;

	/** Can a piston break this block? */
	bool m_PistonBreakable;

	/** Does this block block the passage of rain? */
	bool m_IsRainBlocker;

	/** Does this block disperse sky light? (only relevant for transparent blocks) */
	bool m_IsSkylightDispersant;

	/** Is this block solid (player cannot walk through)? */
	bool m_IsSolid;

	/** Can a spectator interact with this block */
	bool m_UseableBySpectator;

	/** Does this block fully occupy its voxel - is it a 'full' block? */
	bool m_FullyOccupiesVoxel;

	/** Can a finisher change it? */
	bool m_CanBeTerraformed;

	/** Block height */
	float m_BlockHeight;

	/** Block's hardness. The greater the value the longer the player needs to break the block. */
	float m_Hardness;

	/** Custom deleter allows cBlockHandler to be an incomplete type. */
	struct sHandlerDeleter
	{
		void operator () (cBlockHandler * a_Handler);
	};

	/** Associated block handler. */
	std::unique_ptr<cBlockHandler, sHandlerDeleter> m_Handler;
};  // tolua_export





class cBlockInfo::cBlockInfoArray:
	public std::array<cBlockInfo, 256>
{
public:
	/** Initializes the contained BlockInfo structures with block-specific values. */
	cBlockInfoArray();
};





inline const cBlockInfo & cBlockInfo::Get(BLOCKTYPE a_Type)
{
	static const cBlockInfoArray ms_Info;
	return ms_Info[a_Type];
}





// Shortcut to get the blockhandler for a specific block
inline cBlockHandler * BlockHandler(BLOCKTYPE a_BlockType)
{
	return cBlockInfo::GetHandler(a_BlockType);
}
