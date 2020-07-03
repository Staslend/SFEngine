#include "Part.h"

Part::Part()
{
}

Part::~Part()
{
}

std::vector<ScreenObject*>* Part::ReturnSVector()
{
	sVectorUsed = true;
	return &screenVector;
}

std::vector<RenderObject*>* Part::ReturnRVector()
{
	rVectorUsed = true;
	return &renderVector;
}

std::vector<EventVector*>* Part::ReturnEVector()
{
	eVectorUsed = true;
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
