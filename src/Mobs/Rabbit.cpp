
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "Rabbit.h"
#include "../Entities/Player.h"
#include "../World.h"





cRabbit::cRabbit(void) :
	cRabbit(static_cast<eRabbitType>(GetRandomProvider().RandInt<UInt8>(
		static_cast<UInt8>(eRabbitType::SaltAndPepper)  // Max possible Rabbit-Type
	)), 0)
{
}





cRabbit::cRabbit(eRabbitType Type, int MoreCarrotTicks) :
	Super("Rabbit", mtRabbit, "entity.rabbit.hurt", "entity.rabbit.death", "entity.rabbit.ambient", 0.4f, 0.5f),
	m_Type(Type),
	m_MoreCarrotTicks(MoreCarrotTicks)
{
}





void cRabbit::GetDrops(cItems & a_Drops, cEntity * a_Killer)
{
	if (IsBaby())
	{
		return;  // Babies don't drop items
	}

	unsigned int LootingLevel = 0;
	if (a_Killer != nullptr)
	{
		auto Enchantments = a_Killer->GetEquippedWeapon().get<cEnchantments>();
		if (Enchantments.has_value())
		{
			LootingLevel = Enchantments.value().GetLevel(cEnchantments::enchLooting);
		}
	}
	AddRandomDropItem(a_Drops, 0, 1 + LootingLevel, IsOnFire() ? E_ITEM_COOKED_RABBIT : E_ITEM_RAW_RABBIT);
	AddRandomDropItem(a_Drops, 0, 1 + LootingLevel, E_ITEM_RABBIT_HIDE);
	cItems RareDrops;
	RareDrops.Add(cItem(E_ITEM_RABBITS_FOOT));
	AddRandomRareDropItem(a_Drops, RareDrops, LootingLevel);
}

