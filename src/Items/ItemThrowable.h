/**
 * Copyright 2014 MCServer Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// ItemThrowable.h

// Declares the itemhandlers for throwable items: eggs, snowballs and ender pearls





#pragma once





class cItemThrowableHandler :
	public cItemHandler
{
	typedef cItemHandler super;
public:
	cItemThrowableHandler(int a_ItemType, cProjectileEntity::eKind a_ProjectileKind, double a_SpeedCoeff) :
		super(a_ItemType),
		m_ProjectileKind(a_ProjectileKind),
		m_SpeedCoeff(a_SpeedCoeff)
	{
	}
	

	virtual bool OnItemUse(cWorld * a_World, cPlayer * a_Player, const cItem & a_Item, int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_Dir) override
	{
		if (!a_Player->IsGameModeCreative())
		{
			a_Player->GetInventory().RemoveOneEquippedItem();
		}

		Vector3d Pos = a_Player->GetThrowStartPos();
		Vector3d Speed = a_Player->GetLookVector() * m_SpeedCoeff;
		a_World->CreateProjectile(Pos.x, Pos.y, Pos.z, m_ProjectileKind, a_Player, a_Player->GetEquippedItem(), &Speed);

		return true;
	}
	
protected:
	cProjectileEntity::eKind m_ProjectileKind;
	double m_SpeedCoeff;
} ;





class cItemEggHandler :
	public cItemThrowableHandler
{
	typedef cItemThrowableHandler super;
public:
	cItemEggHandler(void) :
		super(E_ITEM_EGG, cProjectileEntity::pkEgg, 30)
	{
	}
} ;




class cItemSnowballHandler :
	public cItemThrowableHandler
{
	typedef cItemThrowableHandler super;
	
public:
	cItemSnowballHandler(void) :
		super(E_ITEM_SNOWBALL, cProjectileEntity::pkSnowball, 30)
	{
	}
} ;





class cItemEnderPearlHandler :
	public cItemThrowableHandler
{
	typedef cItemThrowableHandler super;
	
public:
	cItemEnderPearlHandler(void) :
		super(E_ITEM_ENDER_PEARL, cProjectileEntity::pkEnderPearl, 30)
	{
	}
} ;





class cItemBottleOEnchantingHandler :
	public cItemThrowableHandler
{
	typedef cItemThrowableHandler super;
public:
	cItemBottleOEnchantingHandler(void) :
		super(E_ITEM_BOTTLE_O_ENCHANTING, cProjectileEntity::pkExpBottle, 10)
	{
	}
};





class cItemFireworkHandler :
	public cItemThrowableHandler
{
	typedef cItemThrowableHandler super;
public:
	cItemFireworkHandler(void) :
		super(E_ITEM_FIREWORK_ROCKET, cProjectileEntity::pkFirework, 0)
	{
	}

	virtual bool OnItemUse(cWorld * a_World, cPlayer * a_Player, const cItem & a_Item, int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_Dir) override
	{
		if (a_World->GetBlock(a_BlockX, a_BlockY, a_BlockZ) == E_BLOCK_AIR)
		{
			return false;
		}

		a_World->CreateProjectile(a_BlockX + 0.5, a_BlockY + 1, a_BlockZ + 0.5, m_ProjectileKind, a_Player, a_Player->GetEquippedItem());

		if (!a_Player->IsGameModeCreative())
		{
			a_Player->GetInventory().RemoveOneEquippedItem();
		}

		return true;
	}

};
