#pragma once
#include <vector>

#include "ScreenObject.h"
#include "Screen.h"

class ScreenVector : public ScreenObject
{
	std::vector<ScreenObject*> screenVector;
	SDL_Surface *surface = NULL;
	SDL_Texture *texture = NULL;
public:
	ScreenVector();
	~ScreenVector();
	void AddObject(ScreenObject*);
	SDL_Surface* ReturnSurface() override;
	SDL_Texture* ReturnTexture() override;
};
