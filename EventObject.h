#pragma once
#include <SDL2/SDL.h>

class EventObject
{
protected:
	bool pressable = false;
public:
	EventObject(bool mousePres);
	EventObject();
	void MakePressable();
        bool PressableObject();

	virtual bool HandleEvent(SDL_Event *e);
	virtual void HandlePress(int x, int y);
};
