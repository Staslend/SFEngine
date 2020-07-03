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

public:
	ScreenVector* ReturnSVector();
	RenderVector* ReturnRVector();
	EventVector* ReturnEVector();

};

