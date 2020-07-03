#pragma once

#include "Object.h"
#include "ScreenObject.h"
#include "EventObject.h"
#include "RenderVector.h"
#include "ScreenVector.h"
#include "EventVectro.h"

class Part
{
	ScreenVector screenVector;
	RenderVector renderVector;
	EventVector eventVector;

	bool sVectorUsed = false;
	bool rVectorUsed = false;
	bool eVectorUsed = false;

public:
	Part();
	~Part();
	ScreenVector* ReturnSVector();
	RenderVector* ReturnRVector();
	EventVector* ReturnEVector();
	bool SVectorUsed();
	bool RVectorUsed();
	bool EVectorUsed();

};

