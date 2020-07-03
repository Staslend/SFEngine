#include "Part.h"

Part::Part()
{
	screenVector.SetPos(0,0);
	screenVector.SetSize(SIZE_W, SIZE_H);
}

Part::~Part()
{
}

ScreenVector* Part::ReturnSVector()
{
	return &screenVector;
}

RenderVector* Part::ReturnRVector()
{
	return &renderVector;
}

EventVector* Part::ReturnEVector()
{
	return &eventVector;
}

bool Part::RVectorUsed()
{
	return rVectorUsed;
}

bool Part::EVectorUsed()
{
	return eVectorUsed;
}

bool Part::SVectorUsed()
{
	return sVectorUsed;
}
