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

#pragma once

#include "ItemHandler.h"
#include "Entities/ItemFrame.h"
#include "../Entities/Player.h"





class cItemItemFrameHandler :
	public cItemHandler
{
public:
	cItemItemFrameHandler(int a_ItemType)
		: cItemHandler(a_ItemType)
	{

	}

	virtual bool OnItemUse(cWorld *a_World, cPlayer *a_Player, const cItem & a_Item, int a_BlockX, int a_BlockY, int a_BlockZ, eBlockFace a_Dir) override
	{
		if ((a_Dir == BLOCK_FACE_NONE) || (a_Dir == BLOCK_FACE_YP) || (a_Dir == BLOCK_FACE_YM))
		{
			// Client sends this if clicked on top or bottom face
			return false;
		}

		AddFaceDirection(a_BlockX, a_BlockY, a_BlockZ, a_Dir); // Make sure block that will be occupied is free
		BLOCKTYPE Block = a_World->GetBlock(a_BlockX, a_BlockY, a_BlockZ);
		AddFaceDirection(a_BlockX, a_BlockY, a_BlockZ, a_Dir, true); // We want the clicked block, so go back again

		if (Block == E_BLOCK_AIR)
		{
			cItemFrame * ItemFrame = new cItemFrame(a_Dir, a_BlockX, a_BlockY, a_BlockZ);
			if (!ItemFrame->Initialize(a_World))
			{
				delete ItemFrame;
				return false;
			}

			if (!a_Player->IsGameModeCreative())
			{
				a_Player->GetInventory().RemoveOneEquippedItem();
			}

			return true;

		}
		return false;
	}
};




