#include "Globals.h"
#include "Protocol_1_20.h"
#include "Packetizer.h"
#include <ClientHandle.h>





////////////////////////////////////////////////////////////////////////////////
//  cProtocol_1_20:

cProtocol::Version cProtocol_1_20::GetProtocolVersion() const
{
	return Version::v1_20;
}




void cProtocol_1_20::SendLogin(const cPlayer & a_Player, const cWorld & a_World)
{
	// Send the Join Game packet:
	{
		cServer * Server = cRoot::Get()->GetServer();
		cPacketizer Pkt(*this, pktJoinGame);
		Pkt.WriteBEUInt32(a_Player.GetUniqueID());
		Pkt.WriteBool(Server->IsHardcore());
		Pkt.WriteBEUInt8(static_cast<UInt8>(a_Player.GetEffectiveGameMode()));  // current game mode
		Pkt.WriteBEUInt8(static_cast<UInt8>(a_Player.GetEffectiveGameMode()));  // previous game mode
		Pkt.WriteVarInt32(1);  // Number of dimensions
		Pkt.WriteString("overworld");
		AString dmgsrc[] = {"in_fire","lightning_bolt", "on_fire","lava","hot_floor", "in_wall","cramming", "drown","starve",	"cactus", "fall","fly_into_wall","out_of_world","generic","magic","wither","dragon_breath","dry_out","sweet_berry_bush","freeze","stalagmite","outside_border","generic_kill"};
		int dmgids[] =     {18       ,22             ,27        ,21     ,17        ,19        ,3           ,5     ,33          ,2       ,8      ,14             ,28            ,16       ,23     ,40      ,4              ,6        ,35                ,15      ,32          ,5              ,7};
		{
			cFastNBTWriter Writer;
			Writer.BeginCompound("minecraft:damage_type");
				Writer.AddString("type", "minecraft:damage_type");
				Writer.BeginList("value", eTagType::TAG_Compound);
				int id = 0;
					for each (auto ds in dmgsrc)
					{
						Writer.BeginCompound("");
							Writer.BeginCompound("element");
								Writer.AddString("effects", "burning");
								Writer.AddFloat("exhaustion", 0.1);
								Writer.AddString("message_id", "inFire");
								Writer.AddString("scaling", "when_caused_by_living_non_player");
							Writer.EndCompound();
						Writer.AddInt("id", dmgids[id]);
						Writer.AddString("name", "minecraft:"+ds);
						Writer.EndCompound();
						id++;
					}

				Writer.EndList();
			Writer.EndCompound();
			Writer.BeginCompound("minecraft:chat_type");
				Writer.AddString("type", "minecraft:chat_type");
				Writer.BeginList("value", eTagType::TAG_Compound);
					Writer.BeginCompound("");
						Writer.BeginCompound("element");
							Writer.BeginCompound("chat");
									Writer.BeginList("parameters", eTagType::TAG_String);
										Writer.AddString("", "sender");
										Writer.AddString("", "content");
									Writer.EndList();
										Writer.BeginCompound("style");
										Writer.EndCompound();
									Writer.AddString("translation_key", "chat.type.text");
							Writer.EndCompound();

							Writer.BeginCompound("narration");
									Writer.BeginList("parameters", eTagType::TAG_String);
										Writer.AddString("", "sender");
										Writer.AddString("", "content");
									Writer.EndList();
										Writer.BeginCompound("style");
										Writer.EndCompound();
									Writer.AddString("translation_key", "chat.type.narrate");
							Writer.EndCompound();
						Writer.EndCompound();
					Writer.AddInt("id",0);
					Writer.AddString("name", "minecraft:chat");
					Writer.EndCompound();
				Writer.EndList();
			Writer.EndCompound();
			Writer.BeginCompound("minecraft:dimension_type");
				Writer.AddString("type", "minecraft:dimension_type");
				Writer.BeginList("value", eTagType::TAG_Compound);
					Writer.BeginCompound("");

						Writer.BeginCompound("element");

						Writer.AddByte("piglin_safe", 1);
						Writer.AddByte("natural", 1);
						Writer.AddFloat("ambient_light", 1.0);
						Writer.AddInt("monster_spawn_block_light_limit", 0);
						Writer.AddString("infiniburn", "#infiniburn_overworld");
						Writer.AddByte("respawn_anchor_works", 1);
						Writer.AddByte("has_skylight", 1);
						Writer.AddByte("bed_works", 1);
						Writer.AddString("effects", "minecraft:overworld");
						Writer.AddByte("has_raids", 1);
						Writer.AddInt("logical_height", 256);
						Writer.AddDouble("coordinate_scale", 1.0);
						Writer.AddByte("ultrawarm", 0);
						Writer.AddByte("has_ceiling", 0);
						Writer.AddInt("min_y", 0);
						Writer.AddInt("height", 256);
							Writer.BeginCompound("monster_spawn_light_level");

							Writer.AddString("type", "minecraft:uniform");
								Writer.BeginCompound("value");

								Writer.AddInt("min_inclusive", 0);
								Writer.AddInt("max_inclusive", 7);

								Writer.EndCompound();

							Writer.EndCompound();

						Writer.EndCompound();

						Writer.AddInt("id",0);
						Writer.AddString("name", "minecraft:overworld");
					Writer.EndCompound();
				Writer.EndList();
			Writer.EndCompound();
			Writer.BeginCompound("minecraft:worldgen/biome");
				Writer.AddString("type", "minecraft:worldgen/biome");
				Writer.BeginList("value", eTagType::TAG_Compound);
					Writer.BeginCompound("");
					Writer.AddString("name", "minecraft:plains");
					Writer.AddInt("id",0);
						Writer.BeginCompound("element");
							Writer.AddString("precipitation", "rain");
								Writer.BeginCompound("effects");
								Writer.AddInt("sky_color", 7907327);
								Writer.AddInt("water_fog_color", 329011);
								Writer.AddInt("fog_color" ,12638463);
								Writer.AddInt("water_color", 4159204);
									Writer.BeginCompound("mood_sound");
									Writer.AddInt("tick_delay", 6000);
									Writer.AddDouble("offset", 2.0);
									Writer.AddString("sound", "minecraft:ambient.cave");
									Writer.AddInt("block_search_extent", 8);
									Writer.EndCompound();
								Writer.EndCompound();
							Writer.AddFloat("depth", -1.0f);
							Writer.AddFloat("temperature", 0.5f);
							Writer.AddFloat("scale", 0.1f);
							Writer.AddFloat("downfall", 0.5f);
							Writer.AddByte("has_precipitation",1);
							Writer.AddString("category", "plains");
						Writer.EndCompound();
					Writer.AddString("name", "minecraft:plains");
					Writer.AddInt("id",0);
					Writer.EndCompound();
				Writer.EndList();
			Writer.EndCompound();
			Writer.Finish();
			Pkt.WriteBuf(Writer.GetResult());
		}

		Pkt.WriteString("minecraft:overworld"); // dimension type
		Pkt.WriteString("minecraft:overworld"); // dimension id

		Pkt.WriteBEInt64(0);  // Seed
		Pkt.WriteVarInt32(static_cast<UInt32>(Server->GetMaxPlayers()));
		Pkt.WriteVarInt32(ToUnsigned(a_World.GetMaxViewDistance()));  
		Pkt.WriteVarInt32(ToUnsigned(a_World.GetMaxViewDistance()));  // simulation distance
		Pkt.WriteBool(false);  // Reduced debug info
		Pkt.WriteBool(true);   // Show deaths screen
		Pkt.WriteBool(false);  // Debug world
		Pkt.WriteBool(false);  // Flat World
		Pkt.WriteBool(false);  // optional last death loc
		Pkt.WriteVarInt32(0);  // Portal Cooldown
	}

	// Send the spawn position:
	{
		cPacketizer Pkt(*this, pktSpawnPosition);
		Pkt.WriteXZYPosition64(a_World.GetSpawnX(), a_World.GetSpawnY(), a_World.GetSpawnZ());
		Pkt.WriteBEFloat(0);  // Angle
	}
	// Send the server difficulty:
	{
		cPacketizer Pkt(*this, pktDifficulty);
		Pkt.WriteBEInt8(1);
		Pkt.WriteBool(false);  // Difficulty locked?
	}
}




void cProtocol_1_20::SendBlockChanges(int a_ChunkX, int a_ChunkZ, const sSetBlockVector & a_Changes)
{
	ASSERT(m_State == 3);  // In game mode?

	cPacketizer Pkt(*this, pktBlockChanges);
	Pkt.WriteBEInt32(a_ChunkX);
	Pkt.WriteBEInt32(a_ChunkZ);
	Pkt.WriteVarInt32(static_cast<UInt32>(a_Changes.size()));

	for (const auto & Change : a_Changes)
	{
		Int16 Coords = static_cast<Int16>(Change.m_RelY | (Change.m_RelZ << 8) | (Change.m_RelX << 12));
		UInt64 packed = Coords | (Change.m_BlockIdNew << 12);
		Pkt.WriteVarInt64(packed);
	}
}






////////////////////////////////////////////////////////////////////////////////
//  cProtocol_1_20_2:

cProtocol::Version cProtocol_1_20_2::GetProtocolVersion() const
{
	return Version::v1_20_2;
}





UInt32 cProtocol_1_20_2::GetPacketID(ePacketType a_PacketType) const
{
	switch (a_PacketType)
	{
		/// Status packets
		case cProtocol::pktStatusResponse:       return 0x00;
		case cProtocol::pktPingResponse:         return 0x01;

		//  Login Packets
		case cProtocol::pktDisconnectDuringLogin:return 0x00;
		case cProtocol::pktEncryptionRequest:    return 0x01;
		case cProtocol::pktLoginSuccess:         return 0x02;
		case cProtocol::pktStartCompression:     return 0x03;

		// Configuration
		case cProtocol::pktConfigurationCustomPayload:return 0x00;
			//  Disconnect 0x01
		case cProtocol::pktConfigurationReady:   return 0x02;
			//  KeepAlive 0x03
			//  CommonPing 0x04
		case cProtocol::pktConfigurationDynamicRegistries: return 0x05;
			//  ResourcePackSend  0x06
			//  Features 0x07
			//  SynchronizeTags 0x08

		//  Game packets
		case cProtocol::pktSpawnObject:          return 0x01;
		case cProtocol::pktSpawnMob:             return 0x01;
		case cProtocol::pktSpawnPainting:        return 0x01;
		case cProtocol::pktSpawnOtherPlayer:     return 0x01;
		case cProtocol::pktSpawnExperienceOrb:   return 0x02;
		case cProtocol::pktEntityAnimation:      return 0x03;
		case cProtocol::pktStatistics:           return 0x04;
		case cProtocol::pktPlayerActionResponse: return 0x05;
		//  case cProtocol::pktBlockbreakingprogress:   return 0x06;
		case cProtocol::pktUpdateBlockEntity:    return 0x07;
		case cProtocol::pktBlockAction:          return 0x08;
		case cProtocol::pktBlockChange:          return 0x09;
		case cProtocol::pktBossBar:              return 0x0A;
		case cProtocol::pktDifficulty:           return 0x0B;
				//  ChunkSentS2CPacket 0x0C
				//  StartChunkSendS2CPacket 0xD
				//  ChunkBiomeDataS2CPacket 0x0E
				//  clear title 0x0F
				//  command suggestions here 0x10
				//  command tree 0x11
		case cProtocol::pktWindowClose:          return 0x12;
		case cProtocol::pktWindowItems:          return 0x13;  //  Inventory packet
		case cProtocol::pktWindowProperty:       return 0x14;  //  ScreenHandlerPropertyUpdateS2CPacket
		case cProtocol::pktInventorySlot:        return 0x15;  //  ScreenHandlerSlotUpdateS2CPacket
				//  cooldown update 0x16
				//  chat suggestions 0x17
		case cProtocol::pktCustomPayload:        return 0x18;
		case cProtocol::pktPluginMessage:        return 0x18;
				// EntityDamageS2CPacket 0x19
				// RemoveMessageS2CPacket 0x1A
				//case cProtocol::pktSoundEffect:          return 0x1B;
		case cProtocol::pktDisconnectDuringGame: return 0x1B;
				//  ProfilelessChatMessageS2CPacket 0x1C
		case cProtocol::pktEntityStatus:         return 0x1D;
		case cProtocol::pktExplosion:            return 0x1E;
		case cProtocol::pktUnloadChunk:          return 0x1F;
		case cProtocol::pktGameMode:             return 0x20;
		case cProtocol::pktWeather:              return 0x20;
		case cProtocol::pktHorseWindowOpen:      return 0x21;
				// DamageTiltS2CPacket 0x22
				// wolrld border initalize 0x23
		case cProtocol::pktKeepAlive:            return 0x24;
				// chunk data packet 0x25
		case cProtocol::pktSoundParticleEffect:  return 0x26;  // world event
		case cProtocol::pktParticleEffect:       return 0x27;
		case cProtocol::pktLightUpdate:          return 0x28;
		case cProtocol::pktJoinGame:             return 0x29;
				//  map update 0x2A
				//  set trade offers 0x2B
		case cProtocol::pktEntityRelMove:        return 0x2C;
		case cProtocol::pktEntityRelMoveLook:    return 0x2D;
		case cProtocol::pktEntityLook:           return 0x2E;
				//  vehicle move 0x2F
				//  open written book 0x30
		case cProtocol::pktWindowOpen:           return 0x31;
		case cProtocol::pktUpdateSign:           return 0x32;
				//  CommonPingS2CPacket 0x33
				//  PingResultS2CPacket 0x34
				//  craft failed response 0x35
		case cProtocol::pktPlayerAbilities:      return 0x36;
				//  ChatMessageS2CPacket 0x37
				//  combat exit 0x38
				//  comabt enter 0x39
				//  death msg 0x3A
		case cProtocol::pktPlayerLstRemove:      return 0x3B;
		case cProtocol::pktPlayerList:           return 0x3C;
				//  look at 0x3D
		case cProtocol::pktPlayerMoveLook:       return 0x3E;
		case cProtocol::pktUnlockRecipe:         return 0x3F;
		case cProtocol::pktDestroyEntity:        return 0x40;
		case cProtocol::pktRemoveEntityEffect:   return 0x41;
		case cProtocol::pktResourcePack:         return 0x42;
		case cProtocol::pktRespawn:              return 0x43;
		case cProtocol::pktEntityHeadLook:       return 0x44;
		case cProtocol::pktBlockChanges:         return 0x45;
				// select advancment tab 0x46
				// ServerMetadataS2CPacket 0x47
				// overlay msg 0x48
				// wb -- worldborder wb center changed 0x49
				// wb interpolate size 0x4A
				// wb size changed 0x4B
				// wb warning time changed 0x4C
				// wb warning blocks changed 0x4D
		case cProtocol::pktCameraSetTo:          return 0x4E;
		case cProtocol::pktHeldItemChange:       return 0x4F;
		case cProtocol::pktRenderDistanceCenter: return 0x50;
				//  chunk load distance 0x51
		case cProtocol::pktSpawnPosition:        return 0x52;
				//  scoreboard display 0x53
		case cProtocol::pktEntityMeta:           return 0x54;
				// entity attach 0x55
		case cProtocol::pktEntityVelocity:       return 0x56;
		case cProtocol::pktEntityEquipment:      return 0x57;
		case cProtocol::pktExperience:           return 0x58;
		case cProtocol::pktUpdateHealth:         return 0x59;
		case cProtocol::pktScoreboardObjective:  return 0x5A;
		case cProtocol::pktAttachEntity:         return 0x5B;
				// Teams 0x5C
		case cProtocol::pktUpdateScore:          return 0x5D;
				// simulation distance 0x5E
				// subtitle 0x5F
		case cProtocol::pktTimeUpdate:           return 0x60;
		case cProtocol::pktTitle:                return 0x61;
				//  title fade 0x62
				//  play sound from entity 0x63
				//  play sound 0x64
				//  EnterReconfigurationS2CPacket 0x65
				//  stop sound 0x66
		case cProtocol::pktChatRaw:              return 0x67; //  Gamemessage
				//  player list header 0x68
				//  NbtQueryResponseS2CPacket 0x69
		case cProtocol::pktCollectEntity:        return 0x6A;
		case cProtocol::pktTeleportEntity:       return 0x6B;
				//  advancment update 0x6C
		case cProtocol::pktEntityProperties:     return 0x6D;
		case cProtocol::pktEntityEffect:         return 0x6E;
				//  sync recepies 0x6F
				//  sync tags 0x70
		default: UNREACHABLE("unhandeled packet");
	}
}




void cProtocol_1_20_2::SendLoginSuccess(void)
{
	ASSERT(m_State == 2);  // State: login?

	// Enable compression:
	{
		cPacketizer Pkt(*this, pktStartCompression);
		Pkt.WriteVarInt32(CompressionThreshold);
	}

	m_CompressionEnabled = true;
	// m_State = State::Game;

	{
		cPacketizer Pkt(*this, pktLoginSuccess);
		Pkt.WriteUUID(m_Client->GetUUID());
		Pkt.WriteString(m_Client->GetUsername());
		Pkt.WriteVarInt32(0);  // number of Profile Properites
	}
}




bool cProtocol_1_20_2::HandlePacket(cByteBuffer & a_ByteBuffer, UInt32 a_PacketType)
{
	switch (m_State)
	{
		case State::Status:
		{
			switch (a_PacketType)
			{
				case 0x00: HandlePacketStatusRequest(a_ByteBuffer); return true;
				case 0x01: HandlePacketStatusPing(a_ByteBuffer); return true;
			}
			break;
		}

		case State::Login:
		{
			switch (a_PacketType)
			{
				case 0x00: HandlePacketLoginStart(a_ByteBuffer); return true;
				case 0x01: HandlePacketLoginEncryptionResponse(a_ByteBuffer); return true;
				case 0x02: /*LoginQueryResponseC2SPacket*/ return false;
				case 0x03: HandlePacketEnterConfiguration(a_ByteBuffer); return true;
			}
			break;
		}

		case State::Configuration:
		{
			switch (a_PacketType)
			{
				case 0x00: HandlePacketClientSettings(a_ByteBuffer); return true;
				case 0x01: HandlePacketPluginMessage(a_ByteBuffer); return true;
				case 0x02: HandlePacketReady(a_ByteBuffer); return true;
				case 0x03: HandlePacketKeepAlive(a_ByteBuffer); return true;
				case 0x04: /*CommonPongC2SPacket*/ return false;
				case 0x05: HandlePacketResourcePackStatus(a_ByteBuffer); return true;
			}
			break;
		}

		case State::Game:
		{
			switch (a_PacketType)
			{
				case 0x00: HandleConfirmTeleport(a_ByteBuffer); return true;
				case 0x01: /* query nbt packet */ return false;
				case 0x02: /* update difficulty */ return false;
				case 0x03: /* MessageAcknowledgmentC2SPacket */ return false;
				case 0x04: HandlePacketCommandExecution(a_ByteBuffer); return true;
				case 0x05: HandlePacketChatMessage(a_ByteBuffer); return true;
				case 0x06: /* PlayerSessionC2SPacket */ return false;
				case 0x07: /* AcknowledgeChunksC2SPacket */ return false;
				case 0x08: HandlePacketClientStatus(a_ByteBuffer); return true;
				case 0x09: HandlePacketClientSettings(a_ByteBuffer); return true;
				case 0x0A: HandlePacketTabComplete(a_ByteBuffer); return true;
				case 0x0B: /* AcknowledgeReconfigurationC2SPacket*/ return false;
				case 0x0C: /* ButtonClickC2SPacket */ return false;
				case 0x0D: HandlePacketWindowClick(a_ByteBuffer); return true;
				case 0x0E: HandlePacketWindowClose(a_ByteBuffer); return true;
				case 0x0F: HandlePacketPluginMessage(a_ByteBuffer); return true;
				case 0x10: HandlePacketBookUpdate(a_ByteBuffer); return true;  // not fully implemented
				case 0x11: /* QueryEntityNbtC2SPacket */ return false;
				case 0x12: HandlePacketUseEntity(a_ByteBuffer); return true;
				case 0x13: /* Jigsaw generating */ return false;
				case 0x14: HandlePacketKeepAlive(a_ByteBuffer); return true;
				case 0x15: /* Update difficulty lock */ return false;  // only used in single player
				case 0x16: HandlePacketPlayerPos(a_ByteBuffer); return true;  // PositionAndOnGround
				case 0x17: HandlePacketPlayerPosLook(a_ByteBuffer); return true; // full
				case 0x18: HandlePacketPlayerLook(a_ByteBuffer); return true; // LookAndOnGround
				case 0x19: HandlePacketPlayer(a_ByteBuffer); return true;
				case 0x1A: HandlePacketVehicleMove(a_ByteBuffer); return true;
				case 0x1B: HandlePacketBoatSteer(a_ByteBuffer); return true;
				case 0x1C: /* pick from inventory */ return false;
				case 0x1D: /*QueryPingC2SPacket*/ return false;
				case 0x1E: HandleCraftRecipe(a_ByteBuffer); return true;
				case 0x1F: HandlePacketPlayerAbilities(a_ByteBuffer); return true;
				case 0x20: HandlePacketBlockDig(a_ByteBuffer); return true;
				case 0x21: /* client command packet */ return false;
				case 0x22: HandlePacketSteerVehicle(a_ByteBuffer); return true;  // player input packet
				case 0x23: /* PlayPongC2SPacket */ return false;
				case 0x24: /* Recipe Category Options */ return false;
				case 0x25: HandlePacketCraftingBookData(a_ByteBuffer); return true;
				case 0x26: HandlePacketNameItem(a_ByteBuffer); return true;
				case 0x27: HandlePacketResourcePackStatus(a_ByteBuffer); return true;
				case 0x28: HandlePacketAdvancementTab(a_ByteBuffer); return true;
				case 0x29: /* select villager trade */ return false;
				case 0x2A: HandlePacketSetBeaconEffect(a_ByteBuffer); return true;
				case 0x2B: HandlePacketSlotSelect(a_ByteBuffer); return true;
				case 0x2C: /* update command block */ return false;
				case 0x2D: /* update minecart command block*/ return false;
				case 0x2E: HandlePacketCreativeInventoryAction(a_ByteBuffer); return true;
				case 0x2F: /* Update jigsaw block */ return false;
				case 0x30: /* Update structure block */ return false;
				case 0x31: HandlePacketUpdateSign(a_ByteBuffer); return true;
				case 0x32: /* Update hand swing */ return false;
				case 0x33: /* Spectator teleport */ return false;
				case 0x34: HandlePacketBlockPlace(a_ByteBuffer); return true;
				case 0x35: HandlePacketUseItem(a_ByteBuffer); return true;
				default: break;
			}
		}
	}
}





void cProtocol_1_20_2::HandlePacketEnterConfiguration(cByteBuffer & a_ByteBuffer)
{
	m_State = State::Configuration;
}





void cProtocol_1_20_2::HandlePacketLoginStart(cByteBuffer & a_ByteBuffer)
{
	AString Username;
	if (!a_ByteBuffer.ReadVarUTF8String(Username))
	{
		m_Client->Kick("Bad username");
		return;
	}
	HANDLE_READ(a_ByteBuffer,ReadUUID,cUUID,ProfileID);
	if (!m_Client->HandleHandshake(Username))
	{
		// The client is not welcome here, they have been sent a Kick packet already
		return;
	}

	m_Client->SetUsername(std::move(Username));

	// If auth is required, then send the encryption request:
	if (const auto Server = cRoot::Get()->GetServer(); Server->ShouldAuthenticate())
	{
		cPacketizer Pkt(*this, pktEncryptionRequest);
		Pkt.WriteString(Server->GetServerID());
		const auto PubKeyDer = Server->GetPublicKeyDER();
		Pkt.WriteVarInt32(static_cast<UInt32>(PubKeyDer.size()));
		Pkt.WriteBuf(PubKeyDer);
		Pkt.WriteVarInt32(4);
		Pkt.WriteBEInt32(static_cast<int>(reinterpret_cast<intptr_t>(this)));  // Using 'this' as the cryptographic nonce, so that we don't have to generate one each time :)
		return;
	}

	m_Client->HandleLogin();
}





void cProtocol_1_20_2::SendLogin(const cPlayer & a_Player, const cWorld & a_World)
{
	// Send the Join Game packet:
	{
		cServer * Server = cRoot::Get()->GetServer();
		cPacketizer Pkt(*this, pktJoinGame);
		Pkt.WriteBEUInt32(a_Player.GetUniqueID());
		Pkt.WriteBool(Server->IsHardcore());
		Pkt.WriteVarInt32(1);  // Number of dimensions
		Pkt.WriteString("overworld");
		Pkt.WriteVarInt32(static_cast<UInt32>(Server->GetMaxPlayers()));
		Pkt.WriteVarInt32(ToUnsigned(a_World.GetMaxViewDistance()));  
		Pkt.WriteVarInt32(ToUnsigned(a_World.GetMaxViewDistance()));  // simulation distance
		Pkt.WriteBool(false);  // Reduced debug info
		Pkt.WriteBool(true);   // Show deaths screen
		Pkt.WriteBool(false);  // Do Limited Crafting

		Pkt.WriteString("minecraft:overworld"); // dimension type
		Pkt.WriteString("minecraft:overworld"); // dimension id
		Pkt.WriteBEInt64(0);  // Seed

		Pkt.WriteBEUInt8(static_cast<UInt8>(a_Player.GetEffectiveGameMode()));  // current game mode
		Pkt.WriteBEUInt8(static_cast<UInt8>(a_Player.GetEffectiveGameMode()));  // previous game mode

		Pkt.WriteBool(false);  // Debug world
		Pkt.WriteBool(false);  // Flat World

		Pkt.WriteBool(false);  // optional last death loc
		Pkt.WriteVarInt32(0);  // Portal Cooldown
	}

	// Send the spawn position:
	{
		cPacketizer Pkt(*this, pktSpawnPosition);
		Pkt.WriteXZYPosition64(a_World.GetSpawnX(), a_World.GetSpawnY(), a_World.GetSpawnZ());
		Pkt.WriteBEFloat(0);  // Angle
	}
	// Send the server difficulty:
	{
		cPacketizer Pkt(*this, pktDifficulty);
		Pkt.WriteBEInt8(1);
		Pkt.WriteBool(false);  // Difficulty locked?
	}
}





void cProtocol_1_20_2::HandlePacketReady(cByteBuffer & a_ByteBuffer)
{
	m_State = State::Game;
	m_Client->FinishAuthenticate();
}





void cProtocol_1_20_2::SendPluginMessage(const AString & a_Channel, const ContiguousByteBufferView a_Message)
{
	ASSERT(m_State == 3 || m_State == 4);  // In game mode?

	if (m_State == cProtocol::State::Configuration)
	{
		{
			cPacketizer Pkt(*this, pktConfigurationCustomPayload);
			Pkt.WriteString(a_Channel);
			Pkt.WriteBuf(a_Message);
		}
		{
			cPacketizer Pkt(*this, pktConfigurationReady);
		}
	}
	else
	{
		cPacketizer Pkt(*this, pktPluginMessage);
		Pkt.WriteString(a_Channel);
		Pkt.WriteBuf(a_Message);
	}
}





////////////////////////////////////////////////////////////////////////////////
//  cProtocol_1_20_3:

cProtocol::Version cProtocol_1_20_3::GetProtocolVersion() const
{
	return Version::v1_20_3;
}





////////////////////////////////////////////////////////////////////////////////
//  cProtocol_1_20_5:

cProtocol::Version cProtocol_1_20_5::GetProtocolVersion() const
{
	return Version::v1_20_5;
}
