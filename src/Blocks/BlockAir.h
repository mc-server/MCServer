
#pragma once





class cBlockAirHandler final :
	public cBlockHandler
{
public:

	using cBlockHandler::cBlockHandler;

private:

	virtual cItems ConvertToPickups(BlockState a_Block, const cEntity * a_Digger, const cItem * a_Tool) const override
	{
		// Don't drop anything:
		return {};
	}
};
