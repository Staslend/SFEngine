/*
Partly every string of code was commented when I opened it so I am not shure
about how good this class working
*/

#pragma once
#include "Screen.h"

#define DEBUG_WINDOW 1

class DebugScreen
{
	SDL_Window *window;
	static SDL_Renderer *renderer;
	bool wasCreated = false;
	public:
	DebugScreen();
	DebugScreen(int w, int h);
	void SetSurface(SDL_Surface *, SDL_Rect r);
	void SetTexture(SDL_Texture *, SDL_Rect r);
	static SDL_Renderer* ReturnDebugRenderer();
};
