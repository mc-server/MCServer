
#pragma once

#include "Vector3.h"

namespace Redstone
{
	class ComponentFactory;
	enum RedstoneType;

	class Component
	{
	public:
		const Vector3i Location;
		const bool IsFullBlock;
		const RedstoneType Type;

		Component(Vector3i location, RedstoneType type, bool isSolidBlock = false) : 
			Location(location), IsFullBlock(isSolidBlock), Type(type) {}

		virtual int CanStrongPower(Vector3i location) = 0;
		virtual int CanWeakPower(Vector3i location) = 0;
		virtual cVector3iArray Update(ComponentFactory & factory, BLOCKTYPE & block, NIBBLETYPE & meta) = 0;

		~Component() {}

	protected:
		Vector3i Up()
		{
			return Vector3i(Location.x, Location.y + 1, Location.z);
		}

		Vector3i Down()
		{
			return Vector3i(Location.x, Location.y - 1, Location.z);
		}

		bool IsAdjacent(Vector3i location)
		{
			double len = (location - Location).SqrLength();
			return len == -1 || len == 1;
		}

		cVector3iArray GetAdjacent()
		{
			return 
			{ 
				{ Location.x+1, Location.y, Location.z },
				{ Location.x-1, Location.y, Location.z },
				{ Location.x, Location.y+1, Location.z },
				{ Location.x, Location.y-1, Location.z },
				{ Location.x, Location.y, Location.z+1 },
				{ Location.x, Location.y, Location.z-1 },
			};
		}
	};

	typedef std::shared_ptr<Component> ComponentPtr;
	
	enum RedstoneType : int
	{
		UNKNOWN,
		SOLIDBLOCK,
		TORCH,
	};
}