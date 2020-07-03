#pragma once
#include "Object.h"
#include "ScreenObject.h"
#include "Screen.h"
#include "global.cpp"

class Image : public Object, public ScreenObject
{
protected:
	SDL_Surface *image = NULL;
	SDL_Texture *texture = NULL;
public:
	Image(std::string path, int x, int y);
	Image();
	~Image();
	void LoadImage(std::string path);
	void Scale();
	SDL_Surface * ReturnSurface() override;
	SDL_Texture *ReturnTexture() override;
	bool Render(int time) override;
};
