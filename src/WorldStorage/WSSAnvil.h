
// WSSAnvil.h

// Interfaces to the cWSSAnvil class representing the Anvil world storage scheme




#pragma once

#include "BlockEntities/BlockEntity.h"
#include "WorldStorage/WorldStorage.h"
#include "WorldStorage/FastNBT.h"
#include "StringCompression.h"





// fwd:
class cItem;
class cItemGrid;
class cMonster;
class cProjectileEntity;
class cHangingEntity;
class cUUID;
class ChunkBlockData;





enum
{
	/** Maximum number of chunks in an MCA file - also the count of the header items */
	MCA_MAX_CHUNKS = 32 * 32,

	/** The MCA header is 8 KiB */
	MCA_HEADER_SIZE = MCA_MAX_CHUNKS * 8,

	/** There are 5 bytes of header in front of each chunk */
	MCA_CHUNK_HEADER_LENGTH = 5,
} ;





class cWSSAnvil:
	public cWSSchema
{
	using Super = cWSSchema;

public:

	cWSSAnvil(cWorld * a_World, int a_CompressionFactor);

protected:

	class cMCAFile
	{
	public:

		cMCAFile(cWSSAnvil & a_ParentSchema, const AString & a_FileName, int a_RegionX, int a_RegionZ);

		bool GetChunkData  (const cChunkCoords & a_Chunk, ContiguousByteBuffer & a_Data);
		bool SetChunkData  (const cChunkCoords & a_Chunk, ContiguousByteBufferView a_Data);

		int             GetRegionX (void) const {return m_RegionX; }
		int             GetRegionZ (void) const {return m_RegionZ; }
		const AString & GetFileName(void) const {return m_FileName; }

	private:

		cWSSAnvil & m_ParentSchema;

		int     m_RegionX;
		int     m_RegionZ;
		cFile   m_File;
		AString m_FileName;

		// The header, copied from the file so we don't have to seek to it all the time
		// First 1024 entries are chunk locations - the 3 + 1 byte sector-offset and sector-count
		std::array<unsigned, MCA_MAX_CHUNKS> m_Header;

		// Chunk timestamps, following the chunk headers
		std::array<unsigned, MCA_MAX_CHUNKS> m_TimeStamps;

		/** Finds a free location large enough to hold a_Data. Returns the sector number. */
		unsigned FindFreeLocation(int a_LocalX, int a_LocalZ, size_t a_DataSize);

		/** Opens a MCA file either for a Read operation (fails if doesn't exist) or for a Write operation (creates new if not found) */
		bool OpenFile(bool a_IsForReading);
	} ;
	using cMCAFiles = std::list<std::shared_ptr<cMCAFile>>;

	cCriticalSection m_CS;
	cMCAFiles        m_CachedFiles;  // a MRU cache of MCA files

	Compression::Extractor m_Extractor;
	Compression::Compressor m_Compressor;

	/** Reports that the specified chunk failed to load and saves the chunk data to an external file. */
	void ChunkLoadFailed(int a_ChunkX, int a_ChunkZ, const AString & a_Reason, ContiguousByteBufferView a_ChunkDataToSave);

	/** Gets chunk data from the correct file; locks file CS as needed */
	bool GetChunkData(const cChunkCoords & a_Chunk, ContiguousByteBuffer & a_Data);

	/** Copies a_Length bytes of data from the specified NBT Tag's Child into the a_Destination buffer */
	const std::byte * GetSectionData(const cParsedNBT & a_NBT, int a_Tag, const AString & a_ChildName, size_t a_Length);

	/** Sets chunk data into the correct file; locks file CS as needed */
	bool SetChunkData(const cChunkCoords & a_Chunk, ContiguousByteBufferView a_Data);

	/** Loads the chunk from the data (no locking needed) */
	bool LoadChunkFromData(const cChunkCoords & a_Chunk, ContiguousByteBufferView a_Data);

	/** Saves the chunk into datastream (no locking needed) */
	Compression::Result SaveChunkToData(const cChunkCoords & a_Chunk);

	/** Loads the chunk from NBT data (no locking needed).
	a_RawChunkData is the raw (compressed) chunk data, used for offloading when chunk loading fails. */
	bool LoadChunkFromNBT(const cChunkCoords & a_Chunk, const cParsedNBT & a_NBT, ContiguousByteBufferView a_RawChunkData);

	/** Loads the chunk's biome map into a_BiomeMap if biomes present and valid; returns false otherwise. */
	bool LoadBiomeMapFromNBT(cChunkDef::BiomeMap & a_BiomeMap, const cParsedNBT & a_NBT, int a_TagIdx, eDataVersion a_DataVersion);

	/** Loads the chunk's height map into a_HeightMap if heights present and valid; returns false otherwise. */
	bool LoadHeightMapFromNBT(cChunkDef::HeightMap & a_HeightMap, const cParsedNBT & a_NBT, int a_TagIdx, eDataVersion a_DataVersion);

	/** Loads the chunk's entities from NBT data (a_Tag is the Level\\Entities list tag; may be -1) */
	void LoadEntitiesFromNBT(cEntityList & a_Entitites, const cParsedNBT & a_NBT, int a_Tag, eDataVersion a_DataVersion);

	/** Loads the chunk's BlockEntities from NBT data (a_Tag is the Level\\TileEntities list tag; may be -1) */
	void LoadBlockEntitiesFromNBT(cBlockEntities & a_BlockEntitites, const cParsedNBT & a_NBT, int a_Tag, const ChunkBlockData & a_BlockData, eDataVersion a_DataVersion);

	/** Gets the correct MCA file either from cache or from disk, manages the m_MCAFiles cache; assumes m_CS is locked */
	std::shared_ptr<cMCAFile> LoadMCAFile(const cChunkCoords & a_Chunk);

	// cWSSchema overrides:
	bool LoadChunk(const cChunkCoords & a_Chunk) override;
	bool SaveChunk(const cChunkCoords & a_Chunk) override;
	const AString GetName(void) const override { return "anvil"; }
} ;
