
// cClientHandle.h

// Interfaces to the cClientHandle class representing a client connected to this server. The client need not be a player yet





#pragma once

#include "OSSupport/Network.h"
#include "Defines.h"
#include "Scoreboard.h"
#include "UI/SlotArea.h"
#include "json/json.h"
#include "ChunkSender.h"
#include "EffectID.h"





// fwd:
class cChunkDataSerializer;
class cMonster;
class cExpOrb;
class cPainting;
class cPickup;
class cPlayer;
class cProtocol;
class cWindow;
class cFallingBlock;
class cCompositeChat;
class cStatManager;
class cMap;
class cClientHandle;
typedef std::shared_ptr<cClientHandle> cClientHandlePtr;





class cClientHandle  // tolua_export
	: public cTCPLink::cCallbacks
{  // tolua_export
public:  // tolua_export

	#if defined(ANDROID)
		static const int DEFAULT_VIEW_DISTANCE = 4;  // The default ViewDistance (used when no value is set in Settings.ini)
	#else
		static const int DEFAULT_VIEW_DISTANCE = 10;
	#endif
	static const int MAX_VIEW_DISTANCE = 32;
	static const int MIN_VIEW_DISTANCE = 1;

	/** The percentage how much a block has to be broken.
	Should be a value between 0.7 (70% broken) and 1 (100% broken) depending on lag.
	Can be set in settings.ini [AntiCheat] FastBreakPercentage=(from 0 to 100) */
	static float FASTBREAK_PERCENTAGE;

	/** Creates a new client with the specified IP address in its description and the specified initial view distance. */
	cClientHandle(const AString & a_IPString, int a_ViewDistance);

	virtual ~cClientHandle() override;

	const AString & GetIPString(void) const { return m_IPString; }  // tolua_export

	/** Sets the IP string that the client is using. Overrides the IP string that was read from the socket.
	Used mainly by BungeeCord compatibility code. */
	void SetIPString(const AString & a_IPString) { m_IPString = a_IPString; }

	cPlayer * GetPlayer(void) { return m_Player; }  // tolua_export

	/** Returns the player's UUID, as used by the protocol, in the short form (no dashes) */
	const AString & GetUUID(void) const { return m_UUID; }  // tolua_export

	/** Sets the player's UUID, as used by the protocol. Short UUID form (no dashes) is expected.
	Used mainly by BungeeCord compatibility code - when authenticating is done on the BungeeCord server
	and the results are passed to MCS running in offline mode. */
	void SetUUID(const AString & a_UUID) { ASSERT(a_UUID.size() == 32); m_UUID = a_UUID; }

	const Json::Value & GetProperties(void) const { return m_Properties; }

	/** Sets the player's properties, such as skin image and signature.
	Used mainly by BungeeCord compatibility code - property querying is done on the BungeeCord server
	and the results are passed to MCS running in offline mode. */
	void SetProperties(const Json::Value & a_Properties) { m_Properties = a_Properties; }

	/** Generates an UUID based on the username stored for this client, and stores it in the m_UUID member.
	This is used for the offline (non-auth) mode, when there's no UUID source.
	Each username generates a unique and constant UUID, so that when the player reconnects with the same name, their UUID is the same.
	Internally calls the GenerateOfflineUUID static function. */
	void GenerateOfflineUUID(void);

	/** Generates an UUID based on the player name provided.
	This is used for the offline (non-auth) mode, when there's no UUID source.
	Each username generates a unique and constant UUID, so that when the player reconnects with the same name, their UUID is the same.
	Returns a 32-char UUID (no dashes). */
	static AString GenerateOfflineUUID(const AString & a_Username);  // tolua_export

	/** Returns true if the UUID is generated by online auth, false if it is an offline-generated UUID.
	We use Version-3 UUIDs for offline UUIDs, online UUIDs are Version-4, thus we can tell them apart.
	Accepts both 32-char and 36-char UUIDs (with and without dashes).
	If the string given is not a valid UUID, returns false. */
	static bool IsUUIDOnline(const AString & a_UUID);  // tolua_export

	/** Formats the type of message with the proper color and prefix for sending to the client. */
	static AString FormatMessageType(bool ShouldAppendChatPrefixes, eMessageType a_ChatPrefix, const AString & a_AdditionalData);

	static AString FormatChatPrefix(bool ShouldAppendChatPrefixes, AString a_ChatPrefixS, AString m_Color1, AString m_Color2);

	void Kick(const AString & a_Reason);  // tolua_export

	/** Authenticates the specified user, called by cAuthenticator */
	void Authenticate(const AString & a_Name, const AString & a_UUID, const Json::Value & a_Properties);

	/** This function sends a new unloaded chunk to the player. Returns true if all chunks are loaded. */
	bool StreamNextChunk();

	/** Remove all loaded chunks that are no longer in range */
	void UnloadOutOfRangeChunks(void);

	/** Removes the client from all chunks. Used when destroying the player.
	When switching worlds, RemoveFromWorld does this function's job so it isn't called. */
	void RemoveFromAllChunks(void);

	inline bool IsLoggedIn(void) const { return (m_State >= csAuthenticating); }

	/** Called while the client is being ticked from the world via its cPlayer object */
	void Tick(float a_Dt);

	/** Called while the client is being ticked from the cServer object */
	void ServerTick(float a_Dt);

	void Destroy(void);

	bool IsPlaying   (void) const { return (m_State == csPlaying); }
	bool IsDestroyed (void) const { return (m_State == csDestroyed); }
	bool IsDestroying(void) const { return (m_State == csDestroying); }

	// The following functions send the various packets:
	// (Please keep these alpha-sorted)
	void SendAttachEntity               (const cEntity & a_Entity, const cEntity & a_Vehicle);
	void SendBlockAction                (int a_BlockX, int a_BlockY, int a_BlockZ, char a_Byte1, char a_Byte2, BLOCKTYPE a_BlockType);
	void SendBlockBreakAnim             (UInt32 a_EntityID, int a_BlockX, int a_BlockY, int a_BlockZ, char a_Stage);
	void SendBlockChange                (int a_BlockX, int a_BlockY, int a_BlockZ, BLOCKTYPE a_BlockType, NIBBLETYPE a_BlockMeta);  // tolua_export
	void SendBlockChanges               (int a_ChunkX, int a_ChunkZ, const sSetBlockVector & a_Changes);
	void SendCameraSetTo                (const cEntity & a_Entity);
	void SendChat                       (const AString & a_Message, eMessageType a_ChatPrefix, const AString & a_AdditionalData = "");
	void SendChat                       (const cCompositeChat & a_Message);
	void SendChatRaw                    (const AString & a_MessageRaw, eChatType a_Type);
	void SendChatAboveActionBar         (const AString & a_Message, eMessageType a_ChatPrefix, const AString & a_AdditionalData = "");
	void SendChatAboveActionBar         (const cCompositeChat & a_Message);
	void SendChatSystem                 (const AString & a_Message, eMessageType a_ChatPrefix, const AString & a_AdditionalData = "");
	void SendChatSystem                 (const cCompositeChat & a_Message);
	void SendChunkData                  (int a_ChunkX, int a_ChunkZ, cChunkDataSerializer & a_Serializer);
	void SendCollectEntity              (const cEntity & a_Entity, const cPlayer & a_Player, int a_Count);
	void SendDestroyEntity              (const cEntity & a_Entity);
	void SendDetachEntity               (const cEntity & a_Entity, const cEntity & a_PreviousVehicle);
	void SendDisconnect                 (const AString & a_Reason);
	void SendDisplayObjective           (const AString & a_Objective, cScoreboard::eDisplaySlot a_Display);
	void SendEditSign                   (int a_BlockX, int a_BlockY, int a_BlockZ);
	void SendEntityAnimation            (const cEntity & a_Entity, char a_Animation);  // tolua_export
	void SendEntityEffect               (const cEntity & a_Entity, int a_EffectID, int a_Amplifier, short a_Duration);
	void SendEntityEquipment            (const cEntity & a_Entity, short a_SlotNum, const cItem & a_Item);
	void SendEntityHeadLook             (const cEntity & a_Entity);
	void SendEntityLook                 (const cEntity & a_Entity);
	void SendEntityMetadata             (const cEntity & a_Entity);
	void SendEntityProperties           (const cEntity & a_Entity);
	void SendEntityRelMove              (const cEntity & a_Entity, char a_RelX, char a_RelY, char a_RelZ);
	void SendEntityRelMoveLook          (const cEntity & a_Entity, char a_RelX, char a_RelY, char a_RelZ);
	void SendEntityStatus               (const cEntity & a_Entity, char a_Status);
	void SendEntityVelocity             (const cEntity & a_Entity);
	void SendExperience                 (void);
	void SendExperienceOrb              (const cExpOrb & a_ExpOrb);
	void SendExplosion                  (double a_BlockX, double a_BlockY, double a_BlockZ, float a_Radius, const cVector3iArray & a_BlocksAffected, const Vector3d & a_PlayerMotion);
	void SendGameMode                   (eGameMode a_GameMode);
	void SendHealth                     (void);
	void SendHideTitle                  (void);   // tolua_export
	void SendInventorySlot              (char a_WindowID, short a_SlotNum, const cItem & a_Item);
	void SendLeashEntity                (const cEntity & a_Entity, const cEntity & a_EntityLeashedTo);
	void SendMapData                    (const cMap & a_Map, int a_DataStartX, int a_DataStartY);
	void SendPaintingSpawn              (const cPainting & a_Painting);
	void SendParticleEffect             (const AString & a_ParticleName, float a_SrcX, float a_SrcY, float a_SrcZ, float a_OffsetX, float a_OffsetY, float a_OffsetZ, float a_ParticleData, int a_ParticleAmount);
	void SendParticleEffect             (const AString & a_ParticleName, const Vector3f a_Src, const Vector3f a_Offset, float a_ParticleData, int a_ParticleAmount, std::array<int, 2> a_Data);
	void SendPickupSpawn                (const cPickup & a_Pickup);
	void SendPlayerAbilities            (void);
	void SendPlayerListAddPlayer        (const cPlayer & a_Player);
	void SendPlayerListRemovePlayer     (const cPlayer & a_Player);
	void SendPlayerListUpdateDisplayName(const cPlayer & a_Player, const AString & a_CustomName);
	void SendPlayerListUpdateGameMode   (const cPlayer & a_Player);
	void SendPlayerListUpdatePing       (const cPlayer & a_Player);
	void SendPlayerMaxSpeed             (void);  ///< Informs the client of the maximum player speed (1.6.1+)
	void SendPlayerMoveLook             (void);
	void SendPlayerPosition             (void);
	void SendPlayerSpawn                (const cPlayer & a_Player);
	void SendPluginMessage              (const AString & a_Channel, const AString & a_Message);  // Exported in ManualBindings.cpp
	void SendRemoveEntityEffect         (const cEntity & a_Entity, int a_EffectID);
	void SendResetTitle                 (void);  // tolua_export
	void SendRespawn                    (eDimension a_Dimension, bool a_ShouldIgnoreDimensionChecks = false);
	void SendScoreUpdate                (const AString & a_Objective, const AString & a_Player, cObjective::Score a_Score, Byte a_Mode);
	void SendScoreboardObjective        (const AString & a_Name, const AString & a_DisplayName, Byte a_Mode);
	void SendSetSubTitle                (const cCompositeChat & a_SubTitle);  // tolua_export
	void SendSetRawSubTitle             (const AString & a_SubTitle);  // tolua_export
	void SendSetTitle                   (const cCompositeChat & a_Title);  // tolua_export
	void SendSetRawTitle                (const AString & a_Title);  // tolua_export
	void SendSoundEffect                (const AString & a_SoundName, double a_X, double a_Y, double a_Z, float a_Volume, float a_Pitch);  // tolua_export
	void SendSoundEffect                (const AString & a_SoundName, Vector3d a_Position, float a_Volume, float a_Pitch);  // tolua_export
	void SendSoundParticleEffect        (const EffectID a_EffectID, int a_SrcX, int a_SrcY, int a_SrcZ, int a_Data);
	void SendSpawnFallingBlock          (const cFallingBlock & a_FallingBlock);
	void SendSpawnMob                   (const cMonster & a_Mob);
	void SendSpawnObject                (const cEntity & a_Entity, char a_ObjectType, int a_ObjectData, Byte a_Yaw, Byte a_Pitch);
	void SendSpawnVehicle               (const cEntity & a_Vehicle, char a_VehicleType, char a_VehicleSubType = 0);
	void SendStatistics                 (const cStatManager & a_Manager);
	void SendTabCompletionResults       (const AStringVector & a_Results);
	void SendTeleportEntity             (const cEntity & a_Entity);
	void SendThunderbolt                (int a_BlockX, int a_BlockY, int a_BlockZ);
	void SendTitleTimes                 (int a_FadeInTicks, int a_DisplayTicks, int a_FadeOutTicks);  // tolua_export
	void SendTimeUpdate                 (Int64 a_WorldAge, Int64 a_TimeOfDay, bool a_DoDaylightCycle);  // tolua_export
	void SendUnleashEntity              (const cEntity & a_Entity);
	void SendUnloadChunk                (int a_ChunkX, int a_ChunkZ);
	void SendUpdateBlockEntity          (cBlockEntity & a_BlockEntity);
	void SendUpdateSign                 (int a_BlockX, int a_BlockY, int a_BlockZ, const AString & a_Line1, const AString & a_Line2, const AString & a_Line3, const AString & a_Line4);
	void SendUseBed                     (const cEntity & a_Entity, int a_BlockX, int a_BlockY, int a_BlockZ);
	void SendWeather                    (eWeather a_Weather);
	void SendWholeInventory             (const cWindow & a_Window);
	void SendWindowClose                (const cWindow & a_Window);
	void SendWindowOpen                 (const cWindow & a_Window);
	void SendWindowProperty             (const cWindow & a_Window, short a_Property, short a_Value);

	// tolua_begin
	const AString & GetUsername(void) const;
	void SetUsername( const AString & a_Username);

	inline short GetPing(void) const { return static_cast<short>(std::chrono::duration_cast<std::chrono::milliseconds>(m_Ping).count()); }

	/** Sets the maximal view distance. */
	void SetViewDistance(int a_ViewDistance);

	/** Returns the view distance that the player currently have. */
	int GetViewDistance(void) const { return m_CurrentViewDistance; }

	/** Returns the view distance that the player request, not the used view distance. */
	int GetRequestedViewDistance(void) const { return m_RequestedViewDistance; }

	void SetLocale(AString & a_Locale) { m_Locale = a_Locale; }
	AString GetLocale(void) const { return m_Locale; }

	int GetUniqueID(void) const { return m_UniqueID; }

	bool HasPluginChannel(const AString & a_PluginChannel);

	/** Called by the protocol when it receives the MC|Brand plugin message. Also callable by plugins.
	Simply stores the string value. */
	void SetClientBrand(const AString & a_ClientBrand) { m_ClientBrand = a_ClientBrand; }

	/** Returns the client brand received in the MC|Brand plugin message or set by a plugin. */
	const AString & GetClientBrand(void) const { return m_ClientBrand; }

	// tolua_end

	/** Returns true if the client wants the chunk specified to be sent (in m_ChunksToSend) */
	bool WantsSendChunk(int a_ChunkX, int a_ChunkZ);

	/** Adds the chunk specified to the list of chunks wanted for sending (m_ChunksToSend) */
	void AddWantedChunk(int a_ChunkX, int a_ChunkZ);

	// Calls that cProtocol descendants use to report state:
	void PacketBufferFull(void);
	void PacketUnknown(UInt32 a_PacketType);
	void PacketError(UInt32 a_PacketType);

	// Calls that cProtocol descendants use for handling packets:
	void HandleAnimation(int a_Animation);

	/** Called when the protocol receives a MC|ItemName plugin message, indicating that the player named
	an item in the anvil UI. */
	void HandleAnvilItemName(const AString & a_ItemName);

	/** Called when the protocol receives a MC|Beacon plugin message, indicating that the player set an effect
	in the beacon UI. */
	void HandleBeaconSelection(int a_PrimaryEffect, int a_SecondaryEffect);

	/** Called when the protocol detects a chat packet. */
	void HandleChat(const AString & a_Message);

	/** Called when the protocol receives a MC|AdvCdm plugin message, indicating that the player set a new
	command in the command block UI, for a block-based commandblock. */
	void HandleCommandBlockBlockChange(int a_BlockX, int a_BlockY, int a_BlockZ, const AString & a_NewCommand);

	/** Called when the protocol receives a MC|AdvCdm plugin message, indicating that the player set a new
	command in the command block UI, for an entity-based commandblock (minecart?). */
	void HandleCommandBlockEntityChange(UInt32 a_EntityID, const AString & a_NewCommand);

	/** Called when the client clicks the creative inventory window.
	a_ClickAction specifies whether the click was inside the window or not (caLeftClick or caLeftClickOutside). */
	void HandleCreativeInventory(Int16 a_SlotNum, const cItem & a_HeldItem, eClickAction a_ClickAction);

	/** Called when the player enchants an Item in the Enchanting table UI. */
	void HandleEnchantItem(UInt8 a_WindowID, UInt8 a_Enchantment);

	void HandleEntityCrouch           (UInt32 a_EntityID, bool a_IsCrouching);
	void HandleEntityLeaveBed         (UInt32 a_EntityID);
	void HandleEntitySprinting        (UInt32 a_EntityID, bool a_IsSprinting);

	/** Kicks the client if the same username is already logged in.
	Returns false if the client has been kicked, true otherwise. */
	bool CheckMultiLogin(const AString & a_Username);

	/** Called when the protocol handshake has been received (for protocol versions that support it;
	otherwise the first instant when a username is received).
	Returns true if the player is to be let in, false if they were disconnected
	*/
	bool HandleHandshake        (const AString & a_Username);

	void HandleKeepAlive        (UInt32 a_KeepAliveID);
	void HandleLeftClick        (int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_BlockFace, UInt8 a_Status);

	/** Called when the protocol receives a MC|TrSel packet, indicating that the player used a trade in
	the NPC UI. */
	void HandleNPCTrade(int a_SlotNum);

	void HandlePing             (void);
	void HandlePlayerAbilities  (bool a_CanFly, bool a_IsFlying, float FlyingSpeed, float WalkingSpeed);
	void HandlePlayerLook       (float a_Rotation, float a_Pitch, bool a_IsOnGround);
	void HandlePlayerMoveLook   (double a_PosX, double a_PosY, double a_PosZ, double a_Stance, float a_Rotation, float a_Pitch, bool a_IsOnGround);  // While m_bPositionConfirmed (normal gameplay)

	/** Verifies and sets player position, performing relevant checks
	Calls relevant methods to process movement related statistics
	Requires state of previous position and on-ground status, so must be called when these are still intact
	*/
	void HandlePlayerPos(double a_PosX, double a_PosY, double a_PosZ, double a_Stance, bool a_IsOnGround);


	void HandlePluginMessage    (const AString & a_Channel, const AString & a_Message);
	void HandleRespawn          (void);
	void HandleRightClick       (int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_BlockFace, int a_CursorX, int a_CursorY, int a_CursorZ, const cItem & a_HeldItem);
	void HandleSlotSelected     (Int16 a_SlotNum);
	void HandleSpectate         (const AString & a_PlayerUUID);
	void HandleSteerVehicle     (float Forward, float Sideways);
	void HandleTabCompletion    (const AString & a_Text);
	void HandleUpdateSign       (
		int a_BlockX, int a_BlockY, int a_BlockZ,
		const AString & a_Line1, const AString & a_Line2,
		const AString & a_Line3, const AString & a_Line4
	);
	void HandleUnmount          (void);
	void HandleUseEntity        (UInt32 a_TargetEntityID, bool a_IsLeftClick);
	void HandleWindowClick      (UInt8 a_WindowID, Int16 a_SlotNum, eClickAction a_ClickAction, const cItem & a_HeldItem);
	void HandleWindowClose      (UInt8 a_WindowID);

	/** Called when the protocol has finished logging the user in.
	Return true to allow the user in; false to kick them.
	*/
	bool HandleLogin(const AString & a_Username);

	void SendData(const char * a_Data, size_t a_Size);

	/** Called when the player moves into a different world.
	Sends an UnloadChunk packet for each loaded chunk and resets the streamed chunks. */
	void RemoveFromWorld(void);

	/** Called by the protocol recognizer when the protocol version is known. */
	void SetProtocolVersion(UInt32 a_ProtocolVersion) { m_ProtocolVersion = a_ProtocolVersion; }

	/** Returns the protocol version number of the protocol that the client is talking. Returns zero if the protocol version is not (yet) known. */
	UInt32 GetProtocolVersion(void) const { return m_ProtocolVersion; }  // tolua_export

	void InvalidateCachedSentChunk();

	bool IsPlayerChunkSent();

private:
	/** The dimension that was last sent to a player in a Respawn or Login packet.
	Used to avoid Respawning into the same dimension, which confuses the client. */
	eDimension m_LastSentDimension;

	friend class cServer;  // Needs access to SetSelf()


	/** The type used for storing the names of registered plugin channels. */
	typedef std::set<AString> cChannels;

	/** The actual view distance used, the minimum of client's requested view distance and world's max view distance. */
	int m_CurrentViewDistance;

	/** The requested view distance from the player. It isn't clamped with 1 and the max view distance of the world. */
	int m_RequestedViewDistance;

	AString m_IPString;

	AString m_Username;
	AString m_Password;
	Json::Value m_Properties;

	cCriticalSection                                   m_CSChunkLists;
	std::unordered_set<cChunkCoords, cChunkCoordsHash> m_LoadedChunks;  // Chunks that the player belongs to
	std::unordered_set<cChunkCoords, cChunkCoordsHash> m_ChunksToSend;  // Chunks that need to be sent to the player (queued because they weren't generated yet or there's not enough time to send them)
	cChunkCoordsList                                   m_SentChunks;    // Chunks that are currently sent to the client

	std::unique_ptr<cProtocol> m_Protocol;

	/** Protects m_IncomingData against multithreaded access. */
	cCriticalSection m_CSIncomingData;

	/** Queue for the incoming data received on the link until it is processed in Tick().
	Protected by m_CSIncomingData. */
	AString m_IncomingData;

	/** Protects m_OutgoingData against multithreaded access. */
	cCriticalSection m_CSOutgoingData;

	/** Buffer for storing outgoing data from any thread; will get sent in Tick() (to prevent deadlocks).
	Protected by m_CSOutgoingData. */
	AString m_OutgoingData;

	Vector3d m_ConfirmPosition;

	cPlayer * m_Player;

	// Temporary (#3115-will-fix): maintain temporary ownership of created cPlayer objects while they are in limbo
	std::unique_ptr<cPlayer> m_PlayerPtr;

	/** This is an optimization which saves you an iteration of m_SentChunks if you just want to know
	whether or not the player is standing at a sent chunk.
	If this is equal to the coordinates of the chunk the player is currrently standing at, then this must be a sent chunk
	and a member of m_SentChunks.
	Otherwise, this contains an arbitrary value which should not be used. */
	cChunkCoords m_CachedSentChunk;

	bool m_HasSentDC;  ///< True if a Disconnect packet has been sent in either direction

	// Chunk position when the last StreamChunks() was called; used to avoid re-streaming while in the same chunk
	int m_LastStreamedChunkX;
	int m_LastStreamedChunkZ;

	/** Number of ticks since the last network packet was received (increased in Tick(), reset in OnReceivedData()) */
	std::atomic<int> m_TicksSinceLastPacket;

	/** Duration of the last completed client ping. */
	std::chrono::steady_clock::duration m_Ping;

	/** ID of the last ping request sent to the client. */
	UInt32 m_PingID;

	/** Time of the last ping request sent to the client. */
	std::chrono::steady_clock::time_point m_PingStartTime;

	// Values required for block dig animation
	int m_BlockDigAnimStage;  // Current stage of the animation; -1 if not digging
	int m_BlockDigAnimSpeed;  // Current speed of the animation (units ???)
	int m_BlockDigAnimX;
	int m_BlockDigAnimY;
	int m_BlockDigAnimZ;

	// To avoid dig / aim bug in the client, store the last position given in a DIG_START packet and compare to that when processing the DIG_FINISH packet:
	bool m_HasStartedDigging;
	int m_LastDigBlockX;
	int m_LastDigBlockY;
	int m_LastDigBlockZ;

	enum eState
	{
		csConnected,             ///< The client has just connected, waiting for their handshake / login
		csAuthenticating,        ///< The client has logged in, waiting for external authentication
		csAuthenticated,         ///< The client has been authenticated, will start streaming chunks in the next tick
		csDownloadingWorld,      ///< The client is waiting for chunks, we're waiting for the loader to provide and send them
		csConfirmingPos,         ///< The client has been sent the position packet, waiting for them to repeat the position back
		csPlaying,               ///< Normal gameplay
		csQueuedForDestruction,  ///< The client will be destroyed in the next tick (flag set when socket closed)
		csDestroying,            ///< The client is being destroyed, don't queue any more packets / don't add to chunks
		csDestroyed,             ///< The client has been destroyed, the destructor is to be called from the owner thread

		// TODO: Add Kicking here as well
	} ;

	/* Mutex protecting m_State from concurrent writes. */
	cCriticalSection m_CSState;

	/** The current (networking) state of the client.
	Protected from concurrent writes by m_CSState; but may be read by other threads concurrently.
	If a function depends on m_State or wants to change m_State, it needs to lock m_CSState.
	However, if it only uses m_State for a quick bail out, or it doesn't break if the client disconnects in the middle of it,
	it may just read m_State without locking m_CSState. */
	std::atomic<eState> m_State;

	/** If set to true during csDownloadingWorld, the tick thread calls CheckIfWorldDownloaded() */
	bool m_ShouldCheckDownloaded;

	/** Number of explosions sent this tick */
	int m_NumExplosionsThisTick;

	/** Number of place or break interactions this tick */
	int m_NumBlockChangeInteractionsThisTick;

	static int s_ClientCount;

	/** ID used for identification during authenticating. Assigned sequentially for each new instance. */
	int m_UniqueID;

	/** Contains the UUID used by Mojang to identify the player's account. Short UUID stored here (without dashes) */
	AString m_UUID;

	/** Set to true when the chunk where the player is is sent to the client. Used for spawning the player */
	bool m_HasSentPlayerChunk;

	/** Client Settings */
	AString m_Locale;

	/** The positions from the last sign that the player placed. It's needed to verify the sign text change. */
	Vector3i m_LastPlacedSign;

	/** The plugin channels that the client has registered. */
	cChannels m_PluginChannels;

	/** The brand identification of the client, as received in the MC|Brand plugin message or set from a plugin. */
	AString m_ClientBrand;

	/** The version of the protocol that the client is talking, or 0 if unknown. */
	UInt32 m_ProtocolVersion;

	/** The link that is used for network communication.
	m_CSOutgoingData is used to synchronize access for sending data. */
	cTCPLinkPtr m_Link;

	/** Shared pointer to self, so that this instance can keep itself alive when needed. */
	cClientHandlePtr m_Self;

	float m_BreakProgress;

	/** Returns true if the rate block interactions is within a reasonable limit (bot protection) */
	bool CheckBlockInteractionsRate(void);

	/** Adds a single chunk to be streamed to the client; used by StreamChunks() */
	void StreamChunk(int a_ChunkX, int a_ChunkZ, cChunkSender::eChunkPriority a_Priority);

	/** Handles the DIG_STARTED dig packet: */
	void HandleBlockDigStarted (int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_BlockFace, BLOCKTYPE a_OldBlock, NIBBLETYPE a_OldMeta);

	/** Handles the DIG_FINISHED dig packet: */
	void HandleBlockDigFinished(int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_BlockFace, BLOCKTYPE a_OldBlock, NIBBLETYPE a_OldMeta);

	/** The clients will receive a finished dig animation */
	void FinishDigAnimation();

	/** Converts the protocol-formatted channel list (NUL-separated) into a proper string vector. */
	AStringVector BreakApartPluginChannels(const AString & a_PluginChannels);

	/** Adds all of the channels to the list of current plugin channels. Handles duplicates gracefully. */
	void RegisterPluginChannels(const AStringVector & a_ChannelList);

	/** Removes all of the channels from the list of current plugin channels. Ignores channels that are not found. */
	void UnregisterPluginChannels(const AStringVector & a_ChannelList);

	/** Called when the network socket has been closed. */
	void SocketClosed(void);

	/** Called right after the instance is created to store its SharedPtr inside. */
	void SetSelf(cClientHandlePtr a_Self);

	/** Processes the data in the network input and output buffers.
	Called by both Tick() and ServerTick(). */
	void ProcessProtocolInOut(void);

	// cTCPLink::cCallbacks overrides:
	virtual void OnLinkCreated(cTCPLinkPtr a_Link) override;
	virtual void OnReceivedData(const char * a_Data, size_t a_Length) override;
	virtual void OnRemoteClosed(void) override;
	virtual void OnError(int a_ErrorCode, const AString & a_ErrorMsg) override;
};  // tolua_export





