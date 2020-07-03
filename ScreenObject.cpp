
#include "ScreenObject.h"

ScreenObject::ScreenObject()
{
}

ScreenObject::ScreenObject(int x, int y, int w, int h)
{
	position = {x,y,w,h};
}

ScreenObject::~ScreenObject()
{
	DebugFunctions::DebugMes("Screen Object destructor");
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
	this->position.x = x;
	this->position.y = y;
}

void ScreenObject::SetX(int x)
{
        position.x = x;
}

void ScreenObject::SetY(int y)
{
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

bool ScreenObject::IsVector()
{
	return isVector;
}

void ScreenObject::ShakeOff(int delay)
{

}

bool ScreenObject::ShouldBeDeleted()
{
//	DebugFunctions::DebugMes("Screen object should be deleted:" + std::to_string(toDeleteS));
	return toDeleteS;
}
