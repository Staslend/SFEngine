#pragma once
#include <vector>

#include "VectorBase.h"

#include "ScreenObject.h"
#include "Screen.h"

#include "DebugScreen.h"

#include "global.cpp"

class ScreenVector : public ScreenObject
{
	std::vector<ScreenObject*> screenVector;
	SDL_Surface *surface = NULL;
	SDL_Texture *texture = NULL;
public:
	ScreenVector();
	ScreenVector(int x, int y, int w, int h);
	~ScreenVector();
	void AddObject(ScreenObject*);
	SDL_Surface* ReturnSurface() override;
	SDL_Texture* ReturnTexture() override;
	void ShakeOff(int delay) override;
        ScreenObject* operator[](int i);
	int size();
};
