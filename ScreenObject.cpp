
#include "ScreenObject.h"

ScreenObject::ScreenObject()
{
}

ScreenObject::ScreenObject(int x, int y, int w, int h)
{
	position = {x,y,w,h};
}

SDL_Surface* ScreenObject::ReturnSurface()
{
}

SDL_Texture* ScreenObject::ReturnTexture()
{
}

SDL_Rect* ScreenObject::ReturnRect()
{
	return &position;
}


void ScreenObject::SetPos(int x, int y)
{
	position.x = x;
	position.y = y;
}

void ScreenObject::SetSize(int w, int h)
{
	position.w = w;
	position.h = h;
}

int ScreenObject::ReturnX()
{
	return position.x;
}

int ScreenObject::ReturnY()
{
	return position.y;
}

int ScreenObject::ReturnW()
{
	return position.w;
}

int ScreenObject::ReturnH()
{
	return position.h;
}
