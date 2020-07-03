#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include "DebugFunctions.h"

class ScreenObject
{
protected:
	SDL_Rect position;

	int toDeleteS = 0;

	bool isVector = false;
	int timeOfLife = 0;
public:
	ScreenObject();
	ScreenObject(int x, int y, int w, int h);
	~ScreenObject();
	virtual SDL_Surface* ReturnSurface();
	virtual SDL_Texture* ReturnTexture();
	SDL_Rect* ReturnRect();
	void SetPos(int x, int y);
	void SetX(int x);
	void SetY(int y);
	void SetSize(int w, int h);
	int ReturnX();
	int ReturnY();
	int ReturnW();
	int ReturnH();

	bool IsVector();
	virtual void ShakeOff(int delay);
	bool ShouldBeDeleted();
};
