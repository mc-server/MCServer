
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "LootTableParser.h"

namespace LootTable
{
	enum eFunctionType eFunctionType(const AString & a_Type)
	{
		if (NoCaseCompare(a_Type, "ApplyBonus") == 0)
		{
			return eFunctionType::ApplyBonus;
		}
		else if (NoCaseCompare(a_Type, "CopyName") == 0)
		{
			return eFunctionType::CopyName;
		}
		else if (NoCaseCompare(a_Type, "CopyNbt") == 0)
		{
			return eFunctionType::CopyNbt;
		}
		else if (NoCaseCompare(a_Type, "CopyState") == 0)
		{
			return eFunctionType::CopyState;
		}
		else if (NoCaseCompare(a_Type, "EnchantRandomly") == 0)
		{
			return eFunctionType::EnchantRandomly;
		}
		else if (NoCaseCompare(a_Type, "EnchantWithLevels") == 0)
		{
			return eFunctionType::EnchantWithLevels;
		}
		else if (NoCaseCompare(a_Type, "ExplorationMap") == 0)
		{
			return eFunctionType::ExplorationMap;
		}
		else if (NoCaseCompare(a_Type, "ExplosionDecay") == 0)
		{
			return eFunctionType::ExplosionDecay;
		}
		else if (NoCaseCompare(a_Type, "FurnaceSmelt") == 0)
		{
			return eFunctionType::FurnaceSmelt;
		}
		else if (NoCaseCompare(a_Type, "FillPlayerHead") == 0)
		{
			return eFunctionType::FillPlayerHead;
		}
		else if (NoCaseCompare(a_Type, "LimitCount") == 0)
		{
			return eFunctionType::LimitCount;
		}
		else if (NoCaseCompare(a_Type, "LootingEnchant") == 0)
		{
			return eFunctionType::LootingEnchant;
		}
		else if (NoCaseCompare(a_Type, "SetAttributes") == 0)
		{
			return eFunctionType::SetAttributes;
		}
		else if (NoCaseCompare(a_Type, "SetContents") == 0)
		{
			return eFunctionType::SetContents;
		}
		else if (NoCaseCompare(a_Type, "SetCount") == 0)
		{
			return eFunctionType::SetCount;
		}
		else if (NoCaseCompare(a_Type, "SetDamage") == 0)
		{
			return eFunctionType::SetDamage;
		}
		else if (NoCaseCompare(a_Type, "SetLootTable") == 0)
		{
			return eFunctionType::SetLootTable;
		}
		else if (NoCaseCompare(a_Type, "SetLore") == 0)
		{
			return eFunctionType::SetLore;
		}
		else if (NoCaseCompare(a_Type, "SetName") == 0)
		{
			return eFunctionType::SetName;
		}
		else if (NoCaseCompare(a_Type, "SetNbt") == 0)
		{
			return eFunctionType::SetNbt;
		}
		else if (NoCaseCompare(a_Type, "SetStewEffect") == 0)
		{
			return eFunctionType::SetStewEffect;
		}
		else if (NoCaseCompare(a_Type, "None") == 0)
		{
			return eFunctionType::None;
		}
		else
		{
			LOGWARNING("Unknown loot table function provided: %s. Using empty function", a_Type);
			return eFunctionType::None;
		}
	}





	enum ePoolEntryType ePoolEntryType(const AString & a_Type)
	{
		if (NoCaseCompare(a_Type, "Item") == 0)
		{
			return ePoolEntryType::Item;
		}
		else if (NoCaseCompare(a_Type, "Tag") == 0)
		{
			return ePoolEntryType::Tag;
		}
		else if (NoCaseCompare(a_Type, "LootTable") == 0)
		{
			return ePoolEntryType::LootTable;
		}
		else if (NoCaseCompare(a_Type, "Group") == 0)
		{
			return ePoolEntryType::Group;
		}
		else if (NoCaseCompare(a_Type, "Alternatives") == 0)
		{
			return ePoolEntryType::Alternatives;
		}
		else if (NoCaseCompare(a_Type, "Sequence") == 0)
		{
			return ePoolEntryType::Sequence;
		}
		else if (NoCaseCompare(a_Type, "Dynamic") == 0)
		{
			return ePoolEntryType::Dynamic;
		}
		else if (NoCaseCompare(a_Type, "Empty") == 0)
		{
			return ePoolEntryType::Empty;
		}
		else
		{
			LOGWARNING("Unknown loot table pool entry type provided: %s. Defaulting to Empty", a_Type);
			return ePoolEntryType::Empty;
		}
	}





	template <typename T>
	void MinMaxRange(const Json::Value & a_Value, T & a_Min, T & a_Max)
	{
		if (a_Value.isNumeric())
		{
			a_Min = a_Max = a_Value.as<T>();
			return;
		}
		if (a_Value.isMember("min"))
		{
			a_Min = a_Value["min"].as<T>();
		}
		else if (a_Value.isMember("Min"))
		{
			a_Min = a_Value["Min"].as<T>();
		}

		if (a_Value.isMember("max"))
		{
			a_Max = a_Value["max"].as<T>();
		}
		else if (a_Value.isMember("Max"))
		{
			a_Max = a_Value["Max"].as<T>();
		}
		if (a_Min > a_Max)
		{
			a_Max = std::max(a_Min, a_Max);
		}
	}





	int MinMaxRand(const Json::Value & a_Value, const cNoise & a_Noise, const Vector3i & a_Pos, const int & a_Modifier)
	{
		int Min = 0, Max = 0;
		MinMaxRange<int>(a_Value, Min, Max);
		return a_Noise.IntNoise3DInt(a_Pos * a_Modifier) % (Max - Min) + Min;
	}




	float MinMaxRand(const Json::Value & a_Value, const cNoise & a_Noise, const Vector3i & a_Pos, const float & a_Modifier)
	{
		float Min = 0.0f, Max = 0.0f;
		MinMaxRange<float>(a_Value, Min, Max);
		return fmod(a_Noise.IntNoise3D(a_Pos * a_Modifier), Max - Min) + Min;
	}





	namespace Condition
	{

////////////////////////////////////////////////////////////////////////////////
// cAlternative

	cAlternative::cAlternative(const Json::Value & a_Value)
	{
		Json::Value Terms;
		if (a_Value.isMember("terms"))
		{
			Terms = a_Value["terms"];
		}
		else if (a_Value.isMember("Terms"))
		{
			Terms = a_Value["Terms"];
		}
		else
		{
			LOGWARNING("Loot table condition \"Alternative\" is missing sub - conditions. Dropping condition!");
			return;
		}
		for (unsigned int i = 0; i < Terms.size(); i++)
		{
			m_SubConditions.emplace_back(ParseCondition(Terms[i]));
		}
	}





	bool cAlternative::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		bool Success = false;
		for (const auto & SubCondition : m_SubConditions)
		{
			Success |= std::visit(VISITCONDITION, SubCondition.m_Parameter);
		}
		return Success;
	}


	////////////////////////////////////////////////////////////////////////////////
	// cBlockStateProperty

	cBlockStateProperty::cBlockStateProperty(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		for (const auto & ParameterName : a_Value.getMemberNames())
		{
			if ((NoCaseCompare(ParameterName, "block") == 0) ||
				(NoCaseCompare(ParameterName, "fluid") == 0))
			// block and fluid is accepted here to prevent duplicated code in the cLocationCheck
			{
				cItem Item;

				if (StringToItem(NamespaceConverter(a_Value[ParameterName].asString()), Item))
				{
					m_Block = Item.m_ItemType;
				}
				else
				{
					LOGWARNING("Provided unknown Block");  // Todo: better error message
				}
			}
			else if (NoCaseCompare(ParameterName, "properties"))
			{
				LOGWARNING("Block states in Loot table conditions are not yet supported.");
				// TODO: 06.09.2020 - Add when implemented - 12xx12
				/*
				Json::Value Properties = a_Value[ParameterName];
				for (const auto & Property : Properties.getMemberNames())
				{
					m_Properties[Property] = Properties[Property].asString();
				}
				*/
			}
		}
	}

	bool cBlockStateProperty::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		bool Res = true;
		// Check if block is the same
		Res &= (a_World.GetBlock(a_Pos) == m_Block);
		// Check if the properties match
		// TODO: 06.09.2020 - Add when implemented - 12xx12
		/*
		NOTE: This is just a guessed implementation Do it right
		auto BlockProperties = a_World.GetBlockProperties(a_Pos);
		for (const auto & Property : m_Properties)
		{
			Res &= (BlockProperties.at(Property.first) == Property.second);
		}
		*/
		return Res;
	}


	////////////////////////////////////////////////////////////////////////////////
	// cDamageSourceProperties

	cDamageSourceProperties::cDamageSourceProperties(
		const Json::Value & a_Value)
	{
		// TODO: 10.09.2020 - Add - 12xx12
		LOGWARNING("Loot table condition \"DamageSourceProperties\" is is not implemented. Assuming true!");
		return;
		Json::Value Predicates;
		if (a_Value.isMember("predicate"))
		{
			Predicates = a_Value["predicate"];
		}
		else if (a_Value.isMember("Predicate"))
		{
			Predicates = a_Value["Predicate"];
		}
		else
		{
			return;
		}

		for (const auto & Key : Predicates.getMemberNames())
		{
			if ((NoCaseCompare(Key, "bypasses_armor") == 0) &&
				(NoCaseCompare(Key, "BypassesArmor") == 0))
			{
				m_BypassesArmor = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "bypasses_invulnerability") == 0) &&
				(NoCaseCompare(Key, "BypassesInvulnerability") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "bypasses_magic") == 0) &&
				(NoCaseCompare(Key, "BypassesMagic") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "direct_entity") == 0) &&
				(NoCaseCompare(Key, "DirectEntity") == 0))
			{
				m_DirectEntity = cEntityProperties(Predicates[Key]);
			}
			else if (
				(NoCaseCompare(Key, "is_explosion") == 0) &&
				(NoCaseCompare(Key, "IsExplosion") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "is_fire") == 0) &&
				(NoCaseCompare(Key, "IsFire") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "is_magic") == 0) &&
				(NoCaseCompare(Key, "IsMagic") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "is_projectile") == 0) &&
				(NoCaseCompare(Key, "IsProjectile") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "is_lightning") == 0) &&
				(NoCaseCompare(Key, "IsLightning") == 0))
			{
				m_BypassesInvulnerability = Predicates[Key].asBool();
			}
			else if (
				(NoCaseCompare(Key, "source_entity") == 0) &&
				(NoCaseCompare(Key, "SourceEntity") == 0))
			{
				m_SourceEntity = cEntityProperties(Predicates[Key]);
			}
		}
	}

	bool cDamageSourceProperties::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		// TODO: 10.09.2020 - Add - 12xx12
		return true;
		bool Res = true;
		if (m_BypassesArmor)
		{
		}
		if (m_BypassesInvulnerability)
		{
		}
		if (m_BypassesMagic)
		{
		}
		if (m_IsFire)
		{
		}
		if (m_IsProjectile)
		{
		}
		if (m_IsLightning)
		{
		}
		Res &= m_DirectEntity(a_World, a_Noise, a_Pos, a_KilledID, a_KillerID);
		Res &= m_SourceEntity(a_World, a_Noise, a_Pos, a_KilledID, a_KillerID);
	}


	////////////////////////////////////////////////////////////////////////////////
	// cEntityProperties

	cEntityProperties::sEffectDesc::sEffectDesc(const Json::Value & a_Value)
	{
		if ((a_Value.empty()) || (!a_Value.isObject()))
		{
			// TODO: error message
			return;
		}
		for (const auto & Key : a_Value.getMemberNames())
		{
			if (NoCaseCompare(Key, "amplifier") == 0)
			{
				MinMaxRange<int>(a_Value[Key], m_AmplifierMin, m_AmplifierMax);
			}
			else if (NoCaseCompare(Key, "duration") == 0)
			{
				MinMaxRange<int>(a_Value[Key], m_DurationMin, m_DurationMax);
			}
		}
	}





	cEntityProperties::cEntityProperties(const Json::Value & a_Value)
	{
		if ((a_Value.empty()) || (!a_Value.isObject()))
		{
			// TODO: error message
			return;
		}
		AString DestString;
		if (a_Value.isMember("entity"))
		{
			DestString = NamespaceConverter(a_Value["entity"].asString());
		}
		else if (a_Value.isMember("Entity"))
		{
			DestString = NamespaceConverter(a_Value["Entity"].asString());
		}

		if ((DestString.empty()) || (NoCaseCompare(DestString, "This") == 0))
		{
			m_Dest = eDest::This;
		}
		else if (NoCaseCompare(DestString, "Killer") == 0)
		{
			m_Dest = eDest::Killer;
		}
		else if (NoCaseCompare(DestString, "KillerPlayer") == 0)
		{
			m_Dest = eDest::KillerPlayer;
		}
		FromJson(a_Value);
	}





	cEntityProperties::cEntityProperties(
		const Json::Value & a_Value, enum eDest a_Dest) :
		m_Dest(a_Dest)
	{
		FromJson(a_Value);
	}





	cEntityProperties::~cEntityProperties() noexcept
	{
		if (m_Vehicle != nullptr)
		{
			delete[] m_Vehicle;
		}
	}




	void cEntityProperties::FromJson(const Json::Value & a_Value)
	{
		if ((a_Value.empty()) || (!a_Value.isObject()))
		{
			// TODO: error message
			return;
		}
		m_Active = true;
		for (const auto & Key : a_Value.getMemberNames())
		{
			if (NoCaseCompare(Key, "distance") == 0)
			{
				Json::Value Distance = a_Value[Key];
				if (!Distance.isObject())
				{
					// Todo: proper error message
					continue;
				}
				for (const auto & DistanceKey : Distance.getMemberNames())
				{
					if (NoCaseCompare(DistanceKey, "absolute") == 0)
					{
						MinMaxRange<float>(Distance[DistanceKey], m_AbsoluteMin, m_AbsoluteMax);
					}
					else if (NoCaseCompare(DistanceKey, "horizontal") == 0)
					{
						MinMaxRange<float>(Distance[DistanceKey], m_HorizontalMin, m_HorizontalMax);
					}
					else if (NoCaseCompare(DistanceKey, "x") == 0)
					{
						MinMaxRange<float>(Distance[DistanceKey], m_XMin, m_XMax);
					}
					else if (NoCaseCompare(DistanceKey, "y") == 0)
					{
						MinMaxRange<float>(Distance[DistanceKey], m_YMin, m_YMax);
					}
					else if (NoCaseCompare(DistanceKey, "z") == 0)
					{
						MinMaxRange<float>(Distance[DistanceKey], m_ZMin, m_ZMax);
					}
				}
			}
			else if (NoCaseCompare(Key, "effects") == 0)
			{
				const Json::Value EffectObject = a_Value[Key];
				if (!EffectObject.isObject())
				{
					// Todo: proper error message
					continue;
				}
				for (const auto & EffectKey : EffectObject.getMemberNames())
				{
					m_Effects[cEntityEffect::GetTypeFromString(NamespaceConverter(EffectKey))] = sEffectDesc(EffectObject[EffectKey]);
				}
			}
			else if (NoCaseCompare(Key, "equipment") == 0)
			{
				Json::Value Equipment = a_Value[Key];
				if (!Equipment.isObject())
				{
					// Todo: proper error message
					continue;
				}
				for (const auto & EquipmentKey : Equipment.getMemberNames())
				{
					if (NoCaseCompare(EquipmentKey, "mainhand") == 0)
					{
						m_MainHand = cMatchTool(Equipment[EquipmentKey]);
					}
					else if (NoCaseCompare(EquipmentKey, "offhand") == 0)
					{
						m_OffHand = cMatchTool(Equipment[EquipmentKey]);
					}
					else if (NoCaseCompare(EquipmentKey, "head") == 0)
					{
						m_Head = cMatchTool(Equipment[EquipmentKey]);
					}
					else if (NoCaseCompare(EquipmentKey, "chest") == 0)
					{
						m_Chest = cMatchTool(Equipment[EquipmentKey]);
					}
					else if (NoCaseCompare(EquipmentKey, "legs") == 0)
					{
						m_Legs = cMatchTool(Equipment[EquipmentKey]);
					}
					else if (NoCaseCompare(EquipmentKey, "feet") == 0)
					{
						m_Feet = cMatchTool(Equipment[EquipmentKey]);
					}
				}
			}
			else if (NoCaseCompare(Key, "flags") == 0)
			{
				Json::Value FlagsObject = a_Value[Key];
				if (!FlagsObject.isObject())
				{
					// Todo: error message
					continue;
				}
				for (const auto & Flag : FlagsObject.getMemberNames())
				{
					if ((NoCaseCompare(Flag, "is_on_fire") == 0) ||
						(NoCaseCompare(Key, "IsOnFire") == 0))
					{
						m_IsOnFire = FlagsObject[Flag].asBool();
					}
					else if (
						(NoCaseCompare(Flag, "is_sneaking") == 0) ||
						(NoCaseCompare(Key, "IsSneaking") == 0))
					{
						m_IsSneaking = FlagsObject[Flag].asBool();
					}
					else if (
						(NoCaseCompare(Flag, "is_sprinting") == 0) ||
						(NoCaseCompare(Key, "IsSprinting") == 0))
					{
						m_IsSprinting = FlagsObject[Flag].asBool();
					}
					else if (
						(NoCaseCompare(Flag, "is_swimming") == 0) ||
						(NoCaseCompare(Key, "IsSwimming") == 0))
					{
						m_IsSwimming = FlagsObject[Flag].asBool();
					}
					else if (
						(NoCaseCompare(Flag, "is_baby") == 0) ||
						(NoCaseCompare(Key, "IsBaby") == 0))
					{
						m_IsBaby = FlagsObject[Flag].asBool();
					}
				}
			}
			else if (NoCaseCompare(Key, "location") == 0)
			{
				m_Location = cLocationCheck(a_Value[Key]);
			}
			else if (NoCaseCompare(Key, "nbt") == 0)
			{
				m_NBT = a_Value[Key].asString();
			}
			else if (NoCaseCompare(Key, "player") == 0)
			{
				Json::Value PlayerObject = a_Value[Key];
				if (!PlayerObject.isObject())
				{
					// Todo: error message
					continue;
				}
				m_Player = true;  // Flag if the player should be checked - fails if entity is not player
				for (const auto & PlayerKey : PlayerObject.getMemberNames())
				{
					if (NoCaseCompare(PlayerKey, "advancements") == 0)
					{
						// TODO: 14.09.2020 - Add when implemented - 12xx12
						// Todo: error message
					}
					else if (NoCaseCompare(PlayerKey, "gamemode") == 0)
					{
						// Allowed values: survival, adventure, creative or spectator
						AString Gamemode = PlayerObject[PlayerKey].asString();
						if (NoCaseCompare(Gamemode, "survival") == 0)
						{
							m_Gamemode = eGameMode_Survival;
						}
						else if (NoCaseCompare(Gamemode, "adventure") == 0)
						{
							m_Gamemode = eGameMode_Adventure;
						}
						else if (NoCaseCompare(Gamemode, "creative") == 0)
						{
							m_Gamemode = eGameMode_Creative;
						}
						else if (NoCaseCompare(Gamemode, "spectator") == 0)
						{
							m_Gamemode = eGameMode_Spectator;
						}
					}
					else if (NoCaseCompare(PlayerKey, "level") == 0)
					{
						MinMaxRange<int>(PlayerObject[PlayerKey], m_LevelMin, m_LevelMax);
					}
				}
			}
			else if (NoCaseCompare(Key, "team") == 0)
			{
				m_Team = a_Value[Key].asString();
			}
			else if (NoCaseCompare(Key, "type") == 0)
			{
				auto Type = a_Value[Key].asString();

				if (Type.empty())
				{
					// Todo: add error message
					continue;
				}
			}
			else if (
				(NoCaseCompare(Key, "target_entity") == 0) ||
				(NoCaseCompare(Key, "TargetEntity") == 0))
			{
				// Todo
			}
			else if (NoCaseCompare(Key, "vehicle") == 0)
			{
				// Note: this might create looooooooooooooooooooooooooong (even infinite) loops... BUT the user must write any loop depth into the json. So this is limited by the users disk space and can also be abused in vanilla. I thought about limiting the depth but if the user want's  to break the server he shall.
				m_Vehicle = new cEntityProperties(a_Value[Key], eDest::This);
			}
		}
	}

	bool cEntityProperties::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		// If the Destination entity is KillerPlayer and the killer is not player return false
		if (m_Dest == eDest::KillerPlayer)
		{
			if (!a_World.DoWithEntityByID(a_KillerID, [&](cEntity & a_Entity)
			{
				return (a_Entity.GetEntityType() == cEntity::etPlayer);
			}))
			{
				return false;
			}
		}

		bool Res = true;

		// Position check
		if (m_Dest != eDest::This)
		{
			Vector3d KilledPos;
			auto KilledCallback = [&](cEntity & a_Entity)
			{
				KilledPos = a_Entity.GetPosition();
				return true;
			};

			Vector3d KillerPos;
			auto KillerCallback = [&](cEntity & a_Entity)
			{
				KillerPos = a_Entity.GetPosition();
				return true;
			};

			if ((m_AbsoluteMin != 0) ||
				(m_AbsoluteMax != std::numeric_limits<float>::max()))
			{
				a_World.DoWithEntityByID(a_KilledID, KilledCallback);
				a_World.DoWithEntityByID(a_KillerID, KillerCallback);

				float Dist = abs(sqrt(
					(KillerPos.x - KilledPos.x) * (KillerPos.x - KilledPos.x) +
					(KillerPos.y - KilledPos.y) * (KillerPos.y - KilledPos.y) +
					(KillerPos.z - KilledPos.z) * (KillerPos.z - KilledPos.z)));
				Res &= (m_AbsoluteMin <= Dist) && (m_AbsoluteMax >= Dist);
			}
			if ((m_HorizontalMin != 0) ||
				(m_HorizontalMax != std::numeric_limits<float>::max()))
			{
				a_World.DoWithEntityByID(a_KilledID, KilledCallback);
				a_World.DoWithEntityByID(a_KillerID, KillerCallback);

				float Dist = abs(sqrt(
					(KillerPos.x - KilledPos.x) * (KillerPos.x - KilledPos.x) +
					(KillerPos.z - KilledPos.z) * (KillerPos.z - KilledPos.z)));
				Res &= (m_HorizontalMin <= Dist) && (m_HorizontalMax >= Dist);
			}
			if ((m_XMin != 0) || (m_XMax != std::numeric_limits<float>::max()))
			{
				a_World.DoWithEntityByID(a_KilledID, KilledCallback);
				a_World.DoWithEntityByID(a_KillerID, KillerCallback);

				float Dist = abs(sqrt(
					(KillerPos.x - KilledPos.x) * (KillerPos.x - KilledPos.x)));
				Res &= (m_AbsoluteMin <= Dist) && (m_AbsoluteMax >= Dist);
			}
			if ((m_YMin != 0) || (m_YMax != std::numeric_limits<float>::max()))
			{
				a_World.DoWithEntityByID(a_KilledID, KilledCallback);
				a_World.DoWithEntityByID(a_KillerID, KillerCallback);

				float Dist = abs(sqrt(
					(KillerPos.y - KilledPos.y) * (KillerPos.y - KilledPos.y)));
				Res &= (m_AbsoluteMin <= Dist) && (m_AbsoluteMax >= Dist);
			}
			if ((m_ZMin != 0) || (m_ZMax != std::numeric_limits<float>::max()))
			{
				a_World.DoWithEntityByID(a_KilledID, KilledCallback);
				a_World.DoWithEntityByID(a_KillerID, KillerCallback);

				float Dist = abs(sqrt(
					(KillerPos.z - KilledPos.z) * (KillerPos.z - KilledPos.z)));
				Res &= (m_AbsoluteMin <= Dist) && (m_AbsoluteMax >= Dist);
			}
		}
		UInt32 DestID;
		if (m_Dest == eDest::This)
		{
			DestID = a_KilledID;
		}
		else
		{
			DestID = a_KillerID;
		}

		// Effects check
		if (!m_Effects.empty())
		{
			auto EffectCheckCallback = [&](cEntity & a_Entity)
			{
				bool CallbackRes = true;
				// This is a bad workaround to prevent checking for any entity type and then casting to it.
				auto & Player = static_cast<cPlayer &>(a_Entity);
				const auto & Effects = Player.GetEntityEffects();
				for (const auto Effect : m_Effects)
				{
					auto * EffectPrt = Effects.at(Effect.first);
					CallbackRes &=
						((Effect.second.m_AmplifierMin <= EffectPrt->GetIntensity()) &&
						(Effect.second.m_AmplifierMax >= EffectPrt->GetIntensity())
					);
					CallbackRes &=
						((Effect.second.m_DurationMin <= EffectPrt->GetDuration()) &&
						(Effect.second.m_DurationMax >= EffectPrt->GetDuration())#
					);
				}
				return CallbackRes;
			};
			Res &= a_World.DoWithEntityByID(DestID, EffectCheckCallback);
		}

		// Equipment Check
		if (m_MainHand.IsActive())
		{
			cItem MainHand;
			auto Callback = [&](cEntity & a_Entity)
			{
				// MainHand = a_Entity.GetItemInMainHand();
			};
			m_MainHand(MainHand);
		}
		// TODO: continue
		return Res;
	}

	////////////////////////////////////////////////////////////////////////////////
	// cEntityScores

	cEntityScores::cEntityScores(const Json::Value & a_Value) {}




	bool cEntityScores::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		return true;
	}

	////////////////////////////////////////////////////////////////////////////////
	// cInverted

	cInverted::cInverted(const Json::Value & a_Value)
	{
		m_Conditions.emplace_back(ParseCondition(a_Value));
	}





	bool cInverted::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		return !std::visit(VISITCONDITION,
			m_Conditions[0].m_Parameter);
	}


	////////////////////////////////////////////////////////////////////////////////
	// cKilledByPlayer

	cKilledByPlayer::cKilledByPlayer(const Json::Value & a_Value)
	{
		if (a_Value.isMember("inverse"))
		{
			m_Inverse = a_Value["inverse"].asBool();
		}
		else if (a_Value.isMember("Inverse"))
		{
			m_Inverse = a_Value["Inverse"].asBool();
		}
	}





	bool cKilledByPlayer::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		auto Callback = [&](cEntity & a_Entity)
		{
			return (a_Entity.GetEntityType() == cEntity::etPlayer);
		};
		return !(m_Inverse ^ a_World.DoWithEntityByID(a_KillerID, Callback));	 // True if both are the same
	}


////////////////////////////////////////////////////////////////////////////////
// cLocationCheck

	cLocationCheck::cLocationCheck(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// TODO: error message
			return;
		}
		m_Active = true;

		for (const auto & Key : a_Value.getMemberNames())
		{
			if (NoCaseCompare(Key, "offsetX") == 0)
			{
				m_OffsetX = a_Value[Key].asInt();
			}
			else if (NoCaseCompare(Key, "offsetY") == 0)
			{
				m_OffsetY = a_Value[Key].asInt();
			}
			else if (NoCaseCompare(Key, "offsetZ") == 0)
			{
				m_OffsetZ = a_Value[Key].asInt();
			}
			else if (
				(NoCaseCompare(Key, "predicate") == 0) ||
				(NoCaseCompare(Key, "location") == 0))
			// Accepts "predicate" and "location" to prevent code duplication in cEntityProperties
			{
				Json::Value PredicateObject = a_Value[Key];

				if (!PredicateObject.isObject())
				{
					// TODO: error message;
					return;
				}

				for (const auto & PredicateKey : PredicateObject.getMemberNames())
				{
					if (NoCaseCompare(PredicateKey, "biome") == 0)
					{
						m_Biome = StringToBiome(NamespaceConverter(
							PredicateObject[PredicateKey].asString()));
						// Todo: this might fail du e to changed biome names in 1.13
					}  // "biome"
					else if (NoCaseCompare(PredicateKey, "block") == 0)
					{
						Json::Value BlockObject;

						if (!BlockObject.isObject())
						{
							// TODO: error message;
							return;
						}

						for (const auto & BlockKey : BlockObject.getMemberNames())
						{
							if (NoCaseCompare(BlockKey, "block") == 0)
							{
								m_BlockState = cBlockStateProperty(BlockObject);
							}
							else if (NoCaseCompare(BlockKey, "tag") == 0)
							{
								m_BlockTag = NamespaceConverter(BlockObject[BlockKey].asString());
							}
							else if (NoCaseCompare(BlockKey, "nbt") == 0)
							{
								m_BlockNBT = NamespaceConverter(BlockObject[BlockKey].asString());
							}
						}  // for BlockKey
					}	   // "block"
					else if (NoCaseCompare(PredicateKey, "dimension") == 0)
					{
						// Possible values: overworld, the_nether, the_end
						AString Dimension =
							PredicateObject[PredicateKey].asString();
						if (NoCaseCompare(Dimension, "overworld") == 0)
						{
							m_Dimension = eDimension::dimOverworld;
						}
						else if (
							(NoCaseCompare(Dimension, "the_nether")) ||
							NoCaseCompare(Dimension, "TheNether") == 0)
						{
							m_Dimension = eDimension::dimNether;
						}
						else if (
							(NoCaseCompare(Dimension, "the_end")) ||
							NoCaseCompare(Dimension, "TheEnd") == 0)
						{
							m_Dimension = eDimension::dimEnd;
						}
						else
						{
							// Todo: error message with string output
						}
					}  // "dimension"
					else if (NoCaseCompare(PredicateKey, "feature") == 0)
					{
						m_Feature = PredicateObject[PredicateKey].asString();
					}
					else if (NoCaseCompare(PredicateKey, "fluid"))
					{
						Json::Value FluidObject;

						if (!FluidObject.isObject())
						{
							// TODO: error message;
							return;
						}

						for (const auto & FluidKey : FluidObject.getMemberNames())
						{
							if (NoCaseCompare(FluidKey, "block") == 0)
							{
								m_FluidState = cBlockStateProperty(FluidObject);
							}
							else if (NoCaseCompare(FluidKey, "tag") == 0)
							{
								m_FluidTag = NamespaceConverter(FluidObject[FluidKey].asString());
							}
						}
					}  // "fluid"
					else if (NoCaseCompare(PredicateKey, "light") == 0)
					{
						MinMaxRange(PredicateObject[PredicateKey], m_LightMin, m_LightMax);
					}
					else if (NoCaseCompare(PredicateKey, "position") == 0)
					{
						Json::Value PositionObject;

						if (!PositionObject.isObject())
						{
							// TODO: error message;
							return;
						}

						for (const auto & PosKey : PositionObject.getMemberNames())
						{
							if (NoCaseCompare(PosKey, "x") == 0)
							{
								MinMaxRange(PositionObject[PosKey], m_XMin, m_XMax);
							}
							else if (NoCaseCompare(PosKey, "y") == 0)
							{
								MinMaxRange(PositionObject[PosKey], m_YMin, m_YMax);
							}
							else if (NoCaseCompare(PosKey, "z") == 0)
							{
								MinMaxRange(PositionObject[PosKey], m_ZMin, m_ZMax);
							}
						}
					}  // "position"
					else if (NoCaseCompare(PredicateKey, "smokey") == 0)
					{
						// TODO: add warning that there are no campfires
						m_Smokey = PredicateObject[PredicateKey].asBool();
					}
				}  // for PredicateKey : PredicateObject
			}	   // "predicate"
		}		   // for Key : a_Value
	}





	bool cLocationCheck::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		auto Pos = a_Pos;
		Pos += {m_OffsetX, m_OffsetY, m_OffsetZ};

		bool Res = true;

		if (m_Biome != EMCSBiome::biInvalidBiome)
		{
			Res &= (a_World.GetBiomeAt(Pos.x, Pos.z) == m_Biome);
		}
		Res &= m_BlockState(a_World, a_Noise, Pos, a_KilledID, a_KillerID);

		// TODO: Block Tag

		// Block NBT
		// Note: the following code is just an example this is TODO
		/*
		Res &= (a_World.GetBlockNBTAt(Pos) == m_NBT)
		*/
		if (m_Dimension != eDimension::dimNotSet)
		{
			Res &= (a_World.GetDimension() == m_Dimension);
		}

		// TODO: feature
		if (!m_Feature.empty())
		{
		}

		Res &= m_FluidState(a_World, a_Noise, Pos, a_KilledID, a_KillerID);

		// Todo: Fluid Tag
		if (!m_FluidTag.empty())
		{
		}

		if ((m_LightMin != 0) || (m_LightMax != 100))
		{
			int Light = a_World.GetBlockBlockLight(Pos);
			Res &= ((Light >= m_LightMin) && (Light <= m_LightMax));
		}

		if ((m_XMin != std::numeric_limits<double>::min()) ||
			(m_XMax != std::numeric_limits<double>::max()))
		{
			Res &= ((Pos.x >= m_XMin) && (Pos.x <= m_XMax));
		}

		if ((m_YMin != std::numeric_limits<double>::min()) ||
			(m_YMax != std::numeric_limits<double>::max()))
		{
			Res &= ((Pos.y >= m_YMin) && (Pos.y <= m_YMax));
		}

		if ((m_ZMin != std::numeric_limits<double>::min()) ||
			(m_ZMax != std::numeric_limits<double>::max()))
		{
			Res &= ((Pos.z >= m_ZMin) && (Pos.z <= m_ZMax));
		}

		// TODO: 13.09.2020 - Add when campfire is implemented - 12xx12
		/*
		if (m_Smokey)
		{

		}
		*/
		return Res;
	}


	////////////////////////////////////////////////////////////////////////////////
	// cMatchTool

	cMatchTool::cMatchTool(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		// m_Item.FromJson(a_Value) is not used because this follows the minecraft naming convention
		Json::Value Predicates;
		if (a_Value.isMember("predicate"))
		{
			Predicates = a_Value["predicate"];
		}
		else if (a_Value.isMember("Predicate"))
		{
			Predicates = a_Value["Predicate"];
		}
		if (!Predicates.isObject())
		{
			LOGWARNING(
				"Loot table condition \"cMatchTool\" is missing predicates");
			return;
		}
		for (const auto & Key : Predicates.getMemberNames())
		{
			if (NoCaseCompare(Key, "count") == 0)
			{
				MinMaxRange<int>(Predicates[Key], m_CountMin, m_CountMax);
			}
			else if (NoCaseCompare(Key, "durability") == 0)
			{
				MinMaxRange<int>(Predicates[Key], m_DurabilityMin, m_DurabilityMax);
			}
			else if (NoCaseCompare(Key, "enchantments") == 0)
			{
				Json::Value Enchantments = Predicates[Key];
				if (!Enchantments.isArray())
				{
					LOGWARNING("Unknown entry provided for enchantments in in loot table condition \"MatchTool\"");
				}
				for (unsigned int i = 0; i < Enchantments.size(); i++)
				{
					Json::Value EnchantmentObject = Enchantments[i];
					cEnchantments Enchantment;
					int EnchantmentID;
					int Min = 0, Max = 100;
					if (!EnchantmentObject.isObject())
					{
						LOGWARNING("Unknown entry provided for enchantment in in loot table condition \"MatchTool\"");
						continue;
					}
					for (const auto & EnchantmentKey : EnchantmentObject.getMemberNames())
					{
						if (NoCaseCompare(EnchantmentKey, "enchantment") == 0)
						{
							EnchantmentID = cEnchantments::StringToEnchantmentID(NamespaceConverter(EnchantmentObject[EnchantmentKey].asString()));
							Enchantment = cEnchantments(NamespaceConverter(EnchantmentObject[EnchantmentKey].asString()));
						}
						else if (NoCaseCompare(EnchantmentKey, "levels") == 0)
						{
							MinMaxRange<int>(EnchantmentObject[EnchantmentKey], Min, Max);
						}
					}
					m_EnchantmentsMin.Add(Enchantment);
					m_EnchantmentsMin.SetLevel(EnchantmentID, Min);
					m_EnchantmentsMax.Add(Enchantment);
					m_EnchantmentsMax.SetLevel(EnchantmentID, Max);
				}
			}
			else if (
				(NoCaseCompare(Key, "sorted_enchantments") == 0) ||
				(NoCaseCompare(Key, "SortedEnchantments")))
			{
				Json::Value Enchantments = Predicates[Key];
				if (!Enchantments.isArray())
				{
					LOGWARNING("Unknown entry provided for enchantments in in loot table condition \"MatchTool\"");
				}
				for (unsigned int i = 0; i < Enchantments.size(); i++)
				{
					Json::Value EnchantmentObject = Enchantments[i];
					cEnchantments Enchantment;
					int EnchantmentID;
					int Min = 0, Max = 100;
					if (!EnchantmentObject.isObject())
					{
						LOGWARNING("Unknown entry provided for enchantment in in loot table condition \"MatchTool\"");
						continue;
					}
					for (const auto & EnchantmentKey : EnchantmentObject.getMemberNames())
					{
						if (NoCaseCompare(EnchantmentKey, "enchantment") == 0)
						{
							EnchantmentID =cEnchantments::StringToEnchantmentID(NamespaceConverter(EnchantmentObject[EnchantmentKey].asString()));
							Enchantment = cEnchantments(NamespaceConverter(EnchantmentObject[EnchantmentKey].asString()));
						}
						else if (NoCaseCompare(EnchantmentKey, "levels") == 0)
						{
							MinMaxRange(EnchantmentObject[EnchantmentKey], Min, Max);
						}
					}
					m_StoredEnchantmentsMin.Add(Enchantment);
					m_StoredEnchantmentsMin.SetLevel(EnchantmentID, Min);
					m_StoredEnchantmentsMax.Add(Enchantment);
					m_StoredEnchantmentsMax.SetLevel(EnchantmentID, Max);
				}
			}
			else if (NoCaseCompare(Key, "item") == 0)
			{
				if (!StringToItem(NamespaceConverter(Predicates[Key].asString()), m_Item))
				{
					LOGWARNING("Unknown item provided in loot table condition \"MatchTool\"");
				}
			}
			else if (NoCaseCompare(Key, "nbt") == 0)
			{
				// TODO: 10.09.2020 - Add when implemented - 12xx12
				LOGWARNING("NBT for items is not yet supported!");
				continue;
				m_NBT = Predicates[Key].asString();
			}
			else if (NoCaseCompare(Key, "potion") == 0)
			{
				// TODO: 10.09.2020 - Add when implemented - 12xx12
				LOGWARNING("NBT for items is not yet supported!");
			}
			else if (NoCaseCompare(Key, "tag") == 0)
			{
				m_Tag = Predicates[Key].asString();
			}
		}
	}





	bool cMatchTool::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		cItem Item;

		auto Callback = [&](cEntity & a_Entity)
		{
			if (a_Entity.GetEntityType() != cEntity::etPlayer)
			{
				Item = a_Entity.GetOffHandEquipedItem();
			}
			else
			{
				auto & Player = static_cast<cPlayer &>(a_Entity);
				Item = Player.GetEquippedItem();
			}
			return true;
		};

		if (!a_World.DoWithEntityByID(a_KillerID, Callback))  // Callback failed
		{
			return true;
		}
		return this->operator()(Item);
	}




	bool cMatchTool::operator()(cItem & a_Item) const
	{
		bool Res = true;

		// Checks count
		if ((m_CountMin != 0) || (m_CountMax < 65))
		{
			Res &= ((a_Item.m_ItemCount >= m_CountMin) && (a_Item.m_ItemCount <= m_CountMax));
		}

		// Checks durability
		if ((m_DurabilityMin != 0) ||
			(m_DurabilityMax != std::numeric_limits<short>::max()))
		{
			int Durability = a_Item.GetMaxDamage() - a_Item.m_ItemDamage;
			Res &= ((Durability >= m_DurabilityMin) && (Durability <= m_DurabilityMax));
		}

		// Checks enchantments on item
		if ((!m_EnchantmentsMin.IsEmpty() || !m_EnchantmentsMax.IsEmpty()) &&
			(a_Item.m_ItemType != E_ITEM_ENCHANTED_BOOK))
		{
			for (const auto & Enchantment : m_EnchantmentsMin)
			{
				Res &= (a_Item.m_Enchantments.GetLevel(Enchantment.first) >= Enchantment.second);
			}

			for (const auto & Enchantment : m_EnchantmentsMax)
			{
				Res &= (a_Item.m_Enchantments.GetLevel(Enchantment.first) <= Enchantment.second);
			}
		}

		// Check enchantments on book
		if ((!m_StoredEnchantmentsMin.IsEmpty() ||
			!m_StoredEnchantmentsMax.IsEmpty()) &&
			(a_Item.m_ItemType == E_ITEM_ENCHANTED_BOOK))
		{
			for (const auto & Enchantment : m_StoredEnchantmentsMin)
			{
				Res &= (a_Item.m_Enchantments.GetLevel(Enchantment.first) >= Enchantment.second);
			}

			for (const auto & Enchantment : m_StoredEnchantmentsMax)
			{
				Res &= (a_Item.m_Enchantments.GetLevel(Enchantment.first) <= Enchantment.second);
			}
		}

		// Checks item type
		if (m_Item.m_ItemType != 0)
		{
			Res &= m_Item.IsSameType(a_Item);
		}

		// TODO: 11.09.2020 - Todo: Add when implemented - Checks NBT Tag. - 12xx12
		if (!m_NBT.empty())
		{
		}

		// Todo: Checks if item belongs to specified tag
		if (!m_Tag.empty())
		{
		}

		return Res;
	}

	////////////////////////////////////////////////////////////////////////////////
	// cRandomChance

	cRandomChance::cRandomChance(const Json::Value & a_Value)
	{
		if (a_Value.isMember("chance"))
		{
			m_Chance = a_Value["chance"].asFloat();
		}
		else if (a_Value.isMember("Chance"))
		{
			m_Chance = a_Value["Chance"].asFloat();
		}
		else
		{
			// Todo: error message
			return;
		}
		m_Active = true;
	}




	bool cRandomChance::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		return fmod(a_Noise.IntNoise1D(a_World.GetWorldAge()), 1.0f) < m_Chance;
	}

	////////////////////////////////////////////////////////////////////////////////
	// cRandomChanceWithLooting

	cRandomChanceWithLooting::cRandomChanceWithLooting(
		const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		if (a_Value.isMember("looting_multiplier"))
		{
			m_LootingMultiplier = a_Value["looting_multiplier"].asFloat();
		}
		else if (a_Value.isMember("LootingMultiplier"))
		{
			m_LootingMultiplier = a_Value["LootingMultiplier"].asFloat();
		}

		if (a_Value.isMember("chance"))
		{
			m_Chance = a_Value["chance"].asFloat();
		}
		else if (a_Value.isMember("Chance"))
		{
			m_Chance = a_Value["Chance"].asFloat();
		}

		LOGWARNING("An error occurred during random chance condition. Defaulting to true");
	}




	bool cRandomChanceWithLooting::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		float Rnd = fmod(a_Noise.IntNoise1D(a_World.GetWorldAge()), 1.0f);

		auto Callback = [&](cEntity & a_Entity)
		{
			if (a_Entity.GetEntityType() != cEntity::etPlayer)
			{
				return true;
			}
			auto & Player = static_cast<cPlayer &>(a_Entity);
			int Looting = Player.GetEquippedItem().m_Enchantments.GetLevel(
				cEnchantments::enchLooting);
			return m_Chance + Looting * m_LootingMultiplier > Rnd;
		};

		return a_World.DoWithEntityByID(a_KillerID, Callback);
	}


////////////////////////////////////////////////////////////////////////////////
// cReference
	cReference::cReference(const Json::Value & a_Value)
	{
		// TODO
		m_Active = true;
	}

	bool cReference::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		return true;
	}


////////////////////////////////////////////////////////////////////////////////
// cSurvivesExplosion

	cSurvivesExplosion::cSurvivesExplosion() { m_Active = true; }

	bool cSurvivesExplosion::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		// Todo:
		return true;
	}

////////////////////////////////////////////////////////////////////////////////
// cTableBonus
	cTableBonus::cTableBonus(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		if (a_Value.isMember("enchantment"))
		{
			m_Enchantment = cEnchantments::StringToEnchantmentID(NamespaceConverter(a_Value["enchantment"].asString()));
		}
		else if (a_Value.isMember("Enchantment"))
		{
			m_Enchantment = cEnchantments::StringToEnchantmentID(NamespaceConverter(a_Value["Enchantment"].asString()));
		}

		Json::Value Chances;
		if (a_Value.isMember("chances"))
		{
			Chances = a_Value["chances"];
		}
		else if (a_Value.isMember("Chances"))
		{
			Chances = a_Value["Chances"];
		}
		if (!Chances.isArray())
		{
			// Todo: error message
			return;
		}
		else
		{
			for (unsigned int i = 0; i < Chances.size(); i++)
			{
				m_Chances[i] = Chances[i].asFloat();
			}
		}
	}





	bool cTableBonus::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		auto Callback = [&](cEntity & a_Entity)
		{
			if (a_Entity.GetEntityType() != cEntity::etPlayer)
			{
				return true;
			}
			auto & Player = static_cast<cPlayer &>(a_Entity);
			unsigned long long Level = Player.GetEquippedItem().m_Enchantments.GetLevel(m_Enchantment);

			Level = std::min({Level, m_Chances.size()});

			return GetRandomProvider().RandReal(0.0f, 1.0f) < m_Chances.at(Level);
		};
		return a_World.DoWithEntityByID(a_KillerID, Callback);
	}


////////////////////////////////////////////////////////////////////////////////
// cTimeCheck
	cTimeCheck::cTimeCheck(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		if (a_Value.isMember("period"))
		{
			m_Period = a_Value["period"].asInt();
		}
		if (a_Value.isMember("Period"))
		{
			m_Period = a_Value["Period"].asInt();
		}
		Json::Value Value;
		if (a_Value.isMember("value"))
		{
			Value = a_Value["value"];
		}
		else if (a_Value.isMember("Value"))
		{
			Value = a_Value["Value"];
		}
		MinMaxRange(Value, m_Min, m_Max);
	}





	bool cTimeCheck::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		return ((a_World.GetTimeOfDay() % m_Period) >= m_Min) &&
			((a_World.GetTimeOfDay() % m_Period) <= m_Max);
	}

////////////////////////////////////////////////////////////////////////////////
// cWeatherCheck

	cWeatherCheck::cWeatherCheck(const Json::Value & a_Value)
	{
		if (!a_Value.isObject())
		{
			// Todo: error message
			return;
		}
		m_Active = true;
		if (a_Value.isMember("raining"))
		{
			m_Raining = a_Value["raining"].asBool();
		}
		else if (a_Value.isMember("Raining"))
		{
			m_Raining = a_Value["raining"].asBool();
		}
		else if (a_Value.isMember("thundering"))
		{
			m_Thundering = a_Value["thundering"].asBool();
		}
		else if (a_Value.isMember("Thundering"))
		{
			m_Thundering = a_Value["Thundering"].asBool();
		}
	}




	bool cWeatherCheck::operator()(
		cWorld & a_World, const cNoise & a_Noise, const Vector3i & a_Pos,
		UInt32 a_KilledID, UInt32 a_KillerID) const
	{
		auto Weather = a_World.GetWeather();
		bool Res = true;
		if (m_Raining)
		{
			Res &= (Weather == eWeather_Rain);
		}
		if (m_Thundering)
		{
			Res &= (Weather == eWeather_ThunderStorm);
		}
		return Res;
	}
	}  // Namespace Condition


	cLootTablePool ParsePool(const Json::Value & a_Value)
	{
		cLootTablePoolRolls PoolRolls;
		cLootTablePoolRolls PoolBonusRolls;
		cLootTablePoolEntries PoolEntries;
		cLootTableFunctions Functions;
		cLootTableConditions Conditions;
		for (auto & PoolElement : a_Value.getMemberNames())
		{
			if (NoCaseCompare(PoolElement, "rolls") == 0)
			{
				auto Rolls = a_Value[PoolElement];
				PoolRolls = ParseRolls(Rolls);
			}
			else if (
				(NoCaseCompare(PoolElement, "bonus_rolls") == 0) ||
				(NoCaseCompare(PoolElement, "BonusRolls") == 0))
			{
				auto Rolls = a_Value[PoolElement];
				PoolBonusRolls = ParseRolls(Rolls);
			}
			else if (NoCaseCompare(PoolElement, "entries") == 0)
			{
				auto Entries = a_Value[PoolElement];
				for (unsigned int EntryIndex = 0; EntryIndex < Entries.size(); EntryIndex++)
				{
					PoolEntries.push_back(ParsePoolEntry(Entries[EntryIndex]));
				}
			}
			else if (NoCaseCompare(PoolElement, "functions") == 0)
			{
				auto FunctionsObject = a_Value[PoolElement];
				for (unsigned int FunctionIndex = 0; FunctionIndex < FunctionsObject.size(); FunctionIndex++)
				{
					Functions.push_back(ParseFunction(FunctionsObject[FunctionIndex]));
				}
			}
			else if (NoCaseCompare(PoolElement, "conditions") == 0)
			{
				auto ConditionsObject = a_Value[PoolElement];
				for (unsigned int ConditionId = 0; ConditionId < ConditionsObject.size(); ConditionId++)
				{
					Conditions.emplace_back(ParseCondition(ConditionsObject[ConditionId]));
				}
			}
		}
		return cLootTablePool(PoolRolls, PoolEntries, Conditions);
	}





	cLootTableFunction ParseFunction(const Json::Value & a_Value)
	{
		enum eFunctionType Type;
		cLootTableConditions Conditions;
		Json::Value Parameter = a_Value;
		for (auto & FunctionInfo : a_Value.getMemberNames())
		{
			if (NoCaseCompare(FunctionInfo, "function") == 0)
			{
				Type = eFunctionType(NamespaceConverter(a_Value[FunctionInfo].asString()));
			}
			else if (NoCaseCompare(FunctionInfo, "conditions") == 0)
			{
				auto ConditionsObject = a_Value[FunctionInfo];
				for (unsigned int ConditionId = 0; ConditionId < ConditionsObject.size(); ConditionId++)
				{
					Conditions.push_back(ParseCondition(ConditionsObject[ConditionId]));
				}
				Parameter.removeMember(FunctionInfo);  // Removes the conditions so the json is a bit smaller
			}
		}
		return cLootTableFunction(Type, Parameter, Conditions);
	}





	cLootTableCondition ParseCondition(const Json::Value & a_Value)
	{
		AString Type;

		// Type has to be known beforehand
		if (a_Value.isMember("condition"))
		{
			Type = NamespaceConverter(a_Value["condition"].asString());
		}
		else if (a_Value.isMember("Condition"))
		{
			Type = NamespaceConverter(a_Value["Condition"].asString());
		}
		else
		{
			LOGWARNING("Loot table is missing condition type. Dropping condition!");
			return cLootTableCondition(Condition::cNone());
		}

		if (NoCaseCompare(Type, "Alternative") == 0)
		{
			return cLootTableCondition(Condition::cAlternative(a_Value));
		}
		else if (NoCaseCompare(Type, "BlockStateProperty") == 0)
		{
			return cLootTableCondition(Condition::cBlockStateProperty(a_Value));
		}
		else if (NoCaseCompare(Type, "DamageSourceProperties") == 0)
		{
			return cLootTableCondition(Condition::cDamageSourceProperties(a_Value));
		}
		else if (NoCaseCompare(Type, "EntityProperties") == 0)
		{
			return cLootTableCondition(Condition::cEntityProperties(a_Value));
		}
		else if (NoCaseCompare(Type, "EntityScores") == 0)
		{
			return cLootTableCondition(Condition::cEntityScores(a_Value));
		}
		else if (NoCaseCompare(Type, "Inverted") == 0)
		{
			return cLootTableCondition(Condition::cInverted(a_Value));
		}
		else if (NoCaseCompare(Type, "KilledByPlayer") == 0)
		{
			return cLootTableCondition(Condition::cKilledByPlayer(a_Value));
		}
		else if (NoCaseCompare(Type, "LocationCheck") == 0)
		{
			return cLootTableCondition(Condition::cLocationCheck(a_Value));
		}
		else if (NoCaseCompare(Type, "MatchTool") == 0)
		{
			return cLootTableCondition(Condition::cMatchTool(a_Value));
		}
		else if (NoCaseCompare(Type, "RandomChance") == 0)
		{
			return cLootTableCondition(Condition::cRandomChance(a_Value));
		}
		else if (NoCaseCompare(Type, "RandomChanceWithLooting") == 0)
		{
			return cLootTableCondition(Condition::cRandomChanceWithLooting(a_Value));
		}
		else if (NoCaseCompare(Type, "Reference") == 0)
		{
			return cLootTableCondition(Condition::cReference(a_Value));
		}
		else if (NoCaseCompare(Type, "SurvivesExplosion") == 0)
		{
			return cLootTableCondition(Condition::cSurvivesExplosion());
		}
		else if (NoCaseCompare(Type, "TableBonus") == 0)
		{
			return cLootTableCondition(Condition::cTableBonus(a_Value));
		}
		else if (NoCaseCompare(Type, "TimeCheck") == 0)
		{
			return cLootTableCondition(Condition::cTimeCheck(a_Value));
		}
		else if (NoCaseCompare(Type, "WeatherCheck") == 0)
		{
			return cLootTableCondition(Condition::cWeatherCheck(a_Value));
		}
		else
		{
			LOGWARNING("Unknown loot table condition provided: %s. Using no condition", Type);
			return cLootTableCondition(Condition::cNone());
		}
	}





	cLootTablePoolEntry ParsePoolEntry(const Json::Value & a_Value)
	{
		cLootTableConditions Conditions;
		cLootTableFunctions Functions;
		enum ePoolEntryType Type;

		cItem Item;
		AString Name;
		cLootTablePoolEntries Children;

		bool Expand = true;
		int Weight = 1;
		int Quality = 0;

		// The type has to be known beforehand
		if (a_Value.isMember("type"))
		{
			Type = ePoolEntryType(NamespaceConverter(a_Value["type"].asString()));
		}
		else if (a_Value.isMember("Type"))
		{
			Type = ePoolEntryType(NamespaceConverter(a_Value["Type"].asString()));
		}
		else
		{
			LOGWARNING("No loot table poll entry type provided - dropping entry");
			return cLootTablePoolEntry();
		}

		for (auto & EntryParameter : a_Value.getMemberNames())
		{
			if (NoCaseCompare(EntryParameter, "weight") == 0)
			{
				Weight = a_Value[EntryParameter].asInt();
			}
			else if (NoCaseCompare(EntryParameter, "name") == 0)
			{
				switch (Type)
				{
					case ePoolEntryType::Item:
					{
						StringToItem(NamespaceConverter(a_Value[EntryParameter].asString()), Item);
						break;
					}
					case ePoolEntryType::Tag:
					case ePoolEntryType::LootTable:
					case ePoolEntryType::Dynamic:
					{
						Name = NamespaceConverter(a_Value[EntryParameter].asString());
						break;
					}
					default: break;
				}
			}
			else if (NoCaseCompare(EntryParameter, "functions") == 0)
			{
				auto FunctionsObject = a_Value[EntryParameter];
				for (unsigned int FunctionIndex = 0; FunctionIndex < FunctionsObject.size(); FunctionIndex++)
				{
					Functions.push_back(ParseFunction(FunctionsObject[FunctionIndex]));
				}
			}
			else if (NoCaseCompare(EntryParameter, "conditions") == 0)
			{
				auto ConditionsObject = a_Value[EntryParameter];
				for (unsigned int ConditionId = 0; ConditionId < ConditionsObject.size(); ConditionId++)
				{
					Conditions.push_back(ParseCondition(ConditionsObject[ConditionId]));
				}
			}
			else if (NoCaseCompare(EntryParameter, "children") == 0)
			{
				switch (Type)
				{
					case ePoolEntryType::Group:
					case ePoolEntryType::Alternatives:
					case ePoolEntryType::Sequence:
					{
						auto ChildrenObject = a_Value[EntryParameter];
						for (unsigned int ChildrenObjectId = 0; ChildrenObjectId < ChildrenObject.size(); ++ChildrenObjectId)
						{
							Children.push_back(ParsePoolEntry(ChildrenObject[ChildrenObjectId]));
						}
						break;
					}
					default: break;
				}
			}
			else if (NoCaseCompare(EntryParameter, "expand") == 0)
			{
				Expand = a_Value[EntryParameter].asBool();
			}
			else if (NoCaseCompare(EntryParameter, "quality") == 0)
			{
				Quality = a_Value[EntryParameter].asInt();
			}
		}
		switch (Type)
		{
			case ePoolEntryType::Item:
			{
				return cLootTablePoolEntry(Conditions, Functions, Type, Item, Weight, Quality);
			}

			case ePoolEntryType::Tag:
			case ePoolEntryType::LootTable:
			case ePoolEntryType::Dynamic:
			{
				return cLootTablePoolEntry(Conditions, Functions, Type, Name, Expand, Weight, Quality);
			}

			case ePoolEntryType::Group:
			case ePoolEntryType::Alternatives:
			case ePoolEntryType::Sequence:
			{
				return cLootTablePoolEntry(Conditions, Functions, Type, Children, Weight, Quality);
			}

			case ePoolEntryType::Empty: return cLootTablePoolEntry();
			default:                               return cLootTablePoolEntry();
		}
	}





	cLootTablePoolRolls ParseRolls(const Json::Value & a_Value)
	{
		if (a_Value.isInt())
		{
			return cLootTablePoolRolls(a_Value.asInt(), a_Value.asInt());
		}
		else
		{
			int Min = 0, Max = -1;
			for (auto & RollEntry: a_Value.getMemberNames())
			{
				if (NoCaseCompare(RollEntry, "min") == 0)
				{
					Min = a_Value[RollEntry].asInt();
				}
				else if (NoCaseCompare(RollEntry, "max") == 0)
				{
					Max = a_Value[RollEntry].asInt();
				}
			}
			if (Max == -1)
			{
				LOGWARNING("Missing maximum value in loot table pool - assuming steady roll");
				Max = Min;
			}
			return cLootTablePoolRolls(Min, Max);
		}
	}
}




