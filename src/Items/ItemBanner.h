

#pragma once

#include "ItemHandler.h"
#include "../World.h"
#include "../BlockEntities/BannerEntity.h"
#include "../Blocks/ChunkInterface.h"
#include "../Blocks/BlockHandler.h"
#include "../Blocks/BlockBanner.h"





class cItemBannerHandler:
	public cItemHandler
{
	using Super = cItemHandler;

public:

	cItemBannerHandler(int a_ItemType):
		Super(a_ItemType)
	{
	}

private:

	virtual bool CommitPlacement(cPlayer & a_Player, const cItem & a_HeldItem, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace, const Vector3i a_CursorPosition) override
	{
		// Cannot place a banner at "no face" and from the bottom:
		if ((a_ClickedBlockFace == BLOCK_FACE_NONE) || (a_ClickedBlockFace == BLOCK_FACE_BOTTOM))
		{
			return false;
		}

		if (!TryPlaceBanner(a_Player, a_PlacePosition, a_ClickedBlockFace))
		{
			return false;
		}

		a_Player.GetWorld()->DoWithBlockEntityAt(a_PlacePosition, [&a_HeldItem](cBlockEntity & a_BlockEntity)
		{
			ASSERT((a_BlockEntity.GetBlockType() == E_BLOCK_STANDING_BANNER) || (a_BlockEntity.GetBlockType() == E_BLOCK_WALL_BANNER));

			static_cast<cBannerEntity &>(a_BlockEntity).SetBaseColor(static_cast<NIBBLETYPE>(a_HeldItem.m_ItemDamage));
			return false;
		});

		return true;
	}





	virtual bool IsPlaceable(void) override
	{
		return true;
	}





	virtual bool GetPlacementBlockTypeMeta(
		cWorld * a_World, cPlayer * a_Player,
		const Vector3i a_PlacedBlockPos,
		eBlockFace a_ClickedBlockFace,
		const Vector3i a_CursorPos,
		BlockState & a_Block
	) override
	{
		using namespace Block;

		switch (a_ClickedBlockFace)
		{
			// Placing on the floor
			case BLOCK_FACE_YP:
			{
				auto Rotation = RotationToBlockFace(a_Player->GetYaw());
				switch (a_Player->GetEquippedItem().m_ItemDamage)
				{
					case E_META_BANNER_BLACK:      a_Block = BlackBanner::BlackBanner(Rotation);         break;
					case E_META_BANNER_RED:        a_Block = RedBanner::RedBanner(Rotation);             break;
					case E_META_BANNER_GREEN:      a_Block = GreenBanner::GreenBanner(Rotation);         break;
					case E_META_BANNER_BROWN:      a_Block = BrownBanner::BrownBanner(Rotation);         break;
					case E_META_BANNER_BLUE:       a_Block = BlueBanner::BlueBanner(Rotation);           break;
					case E_META_BANNER_PURPLE:     a_Block = PurpleBanner::PurpleBanner(Rotation);       break;
					case E_META_BANNER_CYAN:       a_Block = CyanBanner::CyanBanner(Rotation);           break;
					case E_META_BANNER_LIGHTGRAY:  a_Block = LightGrayBanner::LightGrayBanner(Rotation); break;
					case E_META_BANNER_GRAY:       a_Block = GrayBanner::GrayBanner(Rotation);           break;
					case E_META_BANNER_PINK:       a_Block = PinkBanner::PinkBanner(Rotation);           break;
					case E_META_BANNER_LIGHTGREEN: a_Block = LimeBanner::LimeBanner(Rotation);           break;
					case E_META_BANNER_YELLOW:     a_Block = YellowBanner::YellowBanner(Rotation);       break;
					case E_META_BANNER_LIGHTBLUE:  a_Block = LightBlueBanner::LightBlueBanner(Rotation); break;
					case E_META_BANNER_MAGENTA:    a_Block = MagentaBanner::MagentaBanner(Rotation);     break;
					case E_META_BANNER_ORANGE:     a_Block = OrangeBanner::OrangeBanner(Rotation);       break;
					case E_META_BANNER_WHITE:      a_Block = WhiteBanner::WhiteBanner(Rotation);         break;
				}
				break;
			}
			case BLOCK_FACE_XM:
			case BLOCK_FACE_XP:
			case BLOCK_FACE_ZM:
			case BLOCK_FACE_ZP:
			{
				// placing on the sides
				auto Facing = RotationToBlockFace(a_Player->GetYaw());
				switch (a_Player->GetEquippedItem().m_ItemDamage)
				{
					case E_META_BANNER_BLACK:      a_Block = BlackWallBanner::BlackWallBanner(Facing);         break;
					case E_META_BANNER_RED:        a_Block = RedWallBanner::RedWallBanner(Facing);             break;
					case E_META_BANNER_GREEN:      a_Block = GreenWallBanner::GreenWallBanner(Facing);         break;
					case E_META_BANNER_BROWN:      a_Block = BrownWallBanner::BrownWallBanner(Facing);         break;
					case E_META_BANNER_BLUE:       a_Block = BlueWallBanner::BlueWallBanner(Facing);           break;
					case E_META_BANNER_PURPLE:     a_Block = PurpleWallBanner::PurpleWallBanner(Facing);       break;
					case E_META_BANNER_CYAN:       a_Block = CyanWallBanner::CyanWallBanner(Facing);           break;
					case E_META_BANNER_LIGHTGRAY:  a_Block = LightGrayWallBanner::LightGrayWallBanner(Facing); break;
					case E_META_BANNER_GRAY:       a_Block = GrayWallBanner::GrayWallBanner(Facing);           break;
					case E_META_BANNER_PINK:       a_Block = PinkWallBanner::PinkWallBanner(Facing);           break;
					case E_META_BANNER_LIGHTGREEN: a_Block = LimeWallBanner::LimeWallBanner(Facing);           break;
					case E_META_BANNER_YELLOW:     a_Block = YellowWallBanner::YellowWallBanner(Facing);       break;
					case E_META_BANNER_LIGHTBLUE:  a_Block = LightBlueWallBanner::LightBlueWallBanner(Facing); break;
					case E_META_BANNER_MAGENTA:    a_Block = MagentaWallBanner::MagentaWallBanner(Facing);     break;
					case E_META_BANNER_ORANGE:     a_Block = OrangeWallBanner::OrangeWallBanner(Facing);       break;
					case E_META_BANNER_WHITE:      a_Block = WhiteWallBanner::WhiteWallBanner(Facing);         break;
				}
				break;
			}
			default: return false;
		}
		return true;
	}





	virtual bool OnPlayerPlace(
		cWorld & a_World,
		cPlayer & a_Player,
		const cItem & a_EquippedItem,
		const Vector3i a_ClickedBlockPos,
		eBlockFace a_ClickedBlockFace,
		const Vector3i a_CursorPos
	) override
	{
		// Cannot place a banner at "no face" and from the bottom:
		if ((a_ClickedBlockFace == BLOCK_FACE_NONE) || (a_ClickedBlockFace == BLOCK_FACE_BOTTOM))
		{
			return true;
		}

		// Checks if the banner replaced the block
		auto Self = a_World.GetBlock(a_ClickedBlockPos);
		cChunkInterface ChunkInterface(a_World.GetChunkMap());
		bool IsReplacingClickedBlock = cBlockHandler::For(Self.Type()).DoesIgnoreBuildCollision(ChunkInterface, a_ClickedBlockPos, a_Player, Self);
		if (IsReplacingClickedBlock)
		{
			// TODO: There is a bug in the network which prevents the client from receiving the new block entity on placement
			// For now the replaced blocks are disabled
			return false;
		}

		// saving the color of the banner in case it's the players last one
		unsigned char Color = static_cast<unsigned char>(a_EquippedItem.m_ItemDamage);

		if (!Super::OnPlayerPlace(a_World, a_Player, a_EquippedItem, a_ClickedBlockPos, a_ClickedBlockFace, a_ClickedBlockPos))
		{
			return false;
		}

		const auto BannerPos = AddFaceDirection(a_ClickedBlockPos, a_ClickedBlockFace);
		a_World.DoWithBlockEntityAt(BannerPos, [Color](cBlockEntity & a_BlockEntity)
		{
			ASSERT(cBlockBannerHandler::IsBlockBanner(a_BlockEntity.GetBlock()));
			auto & Banner = static_cast<cBannerEntity &>(a_BlockEntity);
			Banner.SetBaseColor(Color);
			return false;
		});

		return true;
	}
	/*
	static bool TryPlaceBanner(cPlayer & a_Player, const Vector3i a_PlacePosition, const eBlockFace a_ClickedBlockFace)
	{
		const auto Rotation = a_Player.GetYaw();

		// Placing on the floor:
		if (a_ClickedBlockFace == BLOCK_FACE_TOP)
		{
			NIBBLETYPE Meta;

			if ((Rotation >= -11.25f) && (Rotation < 11.25f))
			{
				// South
				Meta = 0x08;
			}
			else if ((Rotation >= 11.25f) && (Rotation < 33.75f))
			{
				// SouthSouthWest
				Meta = 0x09;
			}
			else if ((Rotation >= 23.75f) && (Rotation < 56.25f))
			{
				// SouthWest
				Meta = 0x0a;
			}
			else if ((Rotation >= 56.25f) && (Rotation < 78.75f))
			{
				// WestSouthWest
				Meta = 0x0b;
			}
			else if ((Rotation >= 78.75f) && (Rotation < 101.25f))
			{
				// West
				Meta = 0x0c;
			}
			else if ((Rotation >= 101.25f) && (Rotation < 123.75f))
			{
				// WestNorthWest
				Meta = 0x0d;
			}
			else if ((Rotation >= 123.75f) && (Rotation < 146.25f))
			{
				// NorthWest
				Meta = 0x0e;
			}
			else if ((Rotation >= 146.25f) && (Rotation < 168.75f))
			{
				// NorthNorthWest
				Meta = 0x0f;
			}
			else if ((Rotation >= -168.75f) && (Rotation < -146.25f))
			{
				// NorthNorthEast
				Meta = 0x01;
			}
			else if ((Rotation >= -146.25f) && (Rotation < -123.75f))
			{
				// NorthEast
				Meta = 0x02;
			}
			else if ((Rotation >= -123.75f) && (Rotation < -101.25f))
			{
				// EastNorthEast
				Meta = 0x03;
			}
			else if ((Rotation >= -101.25) && (Rotation < -78.75f))
			{
				// East
				Meta = 0x04;
			}
			else if ((Rotation >= -78.75) && (Rotation < -56.25f))
			{
				// EastSouthEast
				Meta = 0x05;
			}
			else if ((Rotation >= -56.25f) && (Rotation < -33.75f))
			{
				// SouthEast
				Meta = 0x06;
			}
			else if ((Rotation >= -33.75f) && (Rotation < -11.25f))
			{
				// SouthSouthEast
				Meta = 0x07;
			}
			else  // degrees jumping from 180 to -180
			{
				// North
				Meta = 0x00;
			}

			return a_Player.PlaceBlock(a_PlacePosition, E_BLOCK_STANDING_BANNER, Meta);
		}

		// We must be placing on the side of a block.

		NIBBLETYPE Meta;

		if (a_ClickedBlockFace == BLOCK_FACE_EAST)
		{
			Meta = 0x05;
		}
		else if (a_ClickedBlockFace == BLOCK_FACE_WEST)
		{
			Meta = 0x04;
		}
		else if (a_ClickedBlockFace == BLOCK_FACE_NORTH)
		{
			Meta = 0x02;
		}
		else  // degrees jumping from 180 to -180
		{
			Meta = 0x03;
		}

		return a_Player.PlaceBlock(a_PlacePosition, E_BLOCK_WALL_BANNER, Meta);
	}
	*/
};
