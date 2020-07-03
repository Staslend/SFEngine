#pragma once
#include "Object.h"
#include "ScreenObject.h"
#include <SDL2/SDL.h>

class Image : public Object
{
protected:
	SDL_Surface *image;
	SDL_Texture *texture
public:
	Image(std::string path, int x, int y);
	Image();
	~Image();
	void LoadImage(std::string path);
	SDL_Surface * ReturnSurface() override;
	SDL_Surface *ReturnTexture() override;
	bool DecreaseTime(int time) override;
};
