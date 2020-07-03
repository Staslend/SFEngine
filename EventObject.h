/*
	Object that recive events and do something with them
	In my ogame this class worked good and I do not remember that i changed something
	there
*/

#pragma once
#include <SDL2/SDL.h>
#include "EventObject.h"
#include "DebugFunctions.h"

class EventObject
{
protected:
	bool pressable = false;

	int toDeleteE;
public:
	EventObject(bool mousePres);
	EventObject();
	~EventObject();
	void MakePressable();
        bool PressableObject();

	virtual bool HandleEvent(SDL_Event *e);
	virtual void HandlePress(int x, int y);

	void SetEIden(int i);
	int ReturnEIden();
};
