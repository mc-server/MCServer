
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "TraitBreeder.h"
#include "../PassiveMonster.h"
#include "../../World.h"
#include "../Monster.h"
#include "../../Entities/Player.h"
#include "../../Item.h"
#include "../../BoundingBox.h"

iTraitBreeder::~iTraitBreeder()
{

}





cTraitBreeder::cTraitBreeder(iTraitBreeder * a_ParentInterface) :
	m_ParentInterface(a_ParentInterface),
	m_LovePartner(nullptr),
	m_LoveTimer(0),
	m_LoveCooldown(0),
	m_MatingTimer(0)
{
	m_Parent = dynamic_cast<cMonster *>(m_ParentInterface);
	ASSERT(m_Parent != nullptr);
}





bool cTraitBreeder::ActiveTick()
{
	cWorld * World = m_Parent->GetWorld();
	// if we have a partner, mate
	if (m_LovePartner != nullptr)
	{
		if (m_MatingTimer > 0)
		{
			// If we should still mate, keep bumping into them until baby is made
			Vector3d Pos = m_LovePartner->GetPosition();
			m_Parent->MoveToPosition(Pos);
		}
		else
		{
			// Mating finished. Spawn baby
			Vector3f Pos = (m_Parent->GetPosition() + m_LovePartner->GetPosition()) * 0.5;
			UInt32 BabyID = World->SpawnMob(Pos.x, Pos.y, Pos.z, m_Parent->GetMobType(), true);

			class cBabyInheritCallback :
				public cEntityCallback
			{
			public:
				cMonster * Baby;
				cBabyInheritCallback() : Baby(nullptr) { }
				virtual bool Item(cEntity * a_Entity) override
				{
					Baby = static_cast<cMonster *>(a_Entity);
					return true;
				}
			} Callback;

			m_Parent->GetWorld()->DoWithEntityByID(BabyID, Callback);
			if (Callback.Baby != nullptr)
			{
				auto BabyInterface = ToInterface(Callback.Baby);
				BabyInterface->InheritFromParents(m_Parent, m_LovePartner);
			}

			cFastRandom Random;
			World->SpawnExperienceOrb(Pos.x, Pos.y, Pos.z, 1 + Random.NextInt(6));

			auto PartnerInterface =  ToInterface(m_LovePartner);
			cTraitBreeder & PartnerBreedingTrait = PartnerInterface->GetTraitBreeder();
			PartnerBreedingTrait.ResetLoveMode();
			ResetLoveMode();
		}
		return true;
	}

	// If we are in love mode and we have no partner
	if (m_LoveTimer > 0)
	{
		class LookForLover : public cEntityCallback
		{
		public:
			cMonster * m_Me;
			LookForLover(cMonster * a_Me) :
				m_Me(a_Me)
			{
			}

			virtual bool Item(cEntity * a_Entity) override
			{
				// If the entity is not a monster, don't breed with it
				// Also, do not self-breed
				if ((a_Entity->GetEntityType() != cEntity::eEntityType::etMonster) || (a_Entity == m_Me))
				{
					return false;
				}

				auto PotentialPartner = static_cast<cMonster*>(a_Entity);

				// If the potential partner is not of the same species, don't breed with it
				if (PotentialPartner->GetMobType() != m_Me->GetMobType())
				{
					return false;
				}

				auto PartnerBreedingTrait = ToTrait(PotentialPartner);
				auto MyBreedingTrait = ToTrait(m_Me);

				// If the potential partner is not in love
				// Or they already have a mate, do not breed with them

				if ((!PartnerBreedingTrait->IsInLove()) || (PartnerBreedingTrait->GetPartner() != nullptr))
				{
					return false;
				}

				// All conditions met, let's breed!
				PartnerBreedingTrait->EngageLoveMode(m_Me);
				MyBreedingTrait->EngageLoveMode(PotentialPartner);
				return true;
			}
		} Callback(m_Parent);

		World->ForEachEntityInBox(cBoundingBox(m_Parent->GetPosition(), 8, 8), Callback);
		if (m_LovePartner != nullptr)
		{
			return true;  // We found love and took control of the monster, prevent other traits from doing so
		}
	}

	return false;
}





void cTraitBreeder::Tick()
{
	if (m_MatingTimer > 0)
	{
		m_MatingTimer--;
	}
	if (m_LoveCooldown > 0)
	{
		m_LoveCooldown--;
	}
	if (m_LoveTimer > 0)
	{
		m_LoveTimer--;
	}
}





void cTraitBreeder::Destroyed()
{
	UNUSED(m_ParentInterface);
	if (m_LovePartner != nullptr)
	{
		ToTrait(m_LovePartner)->ResetLoveMode();
	}
}





void cTraitBreeder::OnRightClicked(cPlayer & a_Player)
{
	// If a player holding breeding items right-clicked me, go into love mode
	if ((m_LoveCooldown == 0) && !IsInLove() && !m_Parent->IsBaby())
	{
		cItems BreedingItems;
		m_ParentInterface->GetBreedingItems(BreedingItems);
		short HeldItem = a_Player.GetEquippedItem().m_ItemType;
		if (BreedingItems.ContainsType(HeldItem))
		{
			if (!a_Player.IsGameModeCreative())
			{
				a_Player.GetInventory().RemoveOneEquippedItem();
			}
			m_LoveTimer = 20 * 30;  // half a minute
			m_Parent->GetWorld()->BroadcastEntityStatus(*m_Parent, cEntity::eEntityStatus::esMobInLove);
		}
	}
}



void cTraitBreeder::EngageLoveMode(cMonster * a_Partner)
{
	m_LovePartner = a_Partner;
	m_MatingTimer = 50;  // about 3 seconds of mating
}





void cTraitBreeder::ResetLoveMode()
{
	m_LovePartner = nullptr;
	m_LoveTimer = 0;
	m_MatingTimer = 0;
	m_LoveCooldown = 20 * 60 * 5;  // 5 minutes

	// when an animal is in love mode, the client only stops sending the hearts if we let them know it's in cooldown, which is done with the "age" metadata
	m_Parent->GetWorld()->BroadcastEntityMetadata(*m_Parent);
}





bool cTraitBreeder::IsInLove() const
{
	return m_LoveTimer > 0;
}





bool cTraitBreeder::IsInLoveCooldown() const
{
	return (m_LoveCooldown > 0);
}





iTraitBreeder * cTraitBreeder::ToInterface(cMonster * a_Monster)
{
	auto ptr = dynamic_cast<iTraitBreeder *>(a_Monster);
	ASSERT(ptr != nullptr);
	return ptr;
}





cTraitBreeder * cTraitBreeder::ToTrait(cMonster * a_Monster)
{
	return &ToInterface(a_Monster)->GetTraitBreeder();
}
