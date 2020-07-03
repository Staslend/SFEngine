#pragma once
#include "ScreenObject.h"
#include "EventObject.h"
#include "Object.h"
#include "Animation.h"
#include "Image.h"
#include "DebugScreen.h"
#include "Memory.h"

class Character : public ScreenObject, public EventObject, public Object, public MemoryBlock
{
	SDL_Surface* surface;
	SDL_Texture* texture;

	int right = 0;
	int left = 0;

	int shooted = 0;
	int pressed = 0;

	bool dead;
public:
	Character(int x, int y, int w, int h);
	Character();
	void Dead();
	bool Render(int delay);
	SDL_Surface* ReturnSurface() override;
	SDL_Texture* ReturnTexture() override;
	bool HandleEvent(SDL_Event *e);
	bool ReadyToShoot();
};
