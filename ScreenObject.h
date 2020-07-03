#pragma once
#include <SDL2/SDL.h>

class ScreenObject
{
protected:
	SDL_Rect position;
public:
	ScreenObject();
	ScreenObject(int x, int y, int w, int h);
	virtual SDL_Surface* ReturnSurface();
	virtual SDL_Texture* ReturnTexture();
	SDL_Rect* ReturnRect();
	void SetPos(int x, int y);
	void SetSize(int w, int h);
	int ReturnX();
	int ReturnY();
	int ReturnW();
	int ReturnH();
};
