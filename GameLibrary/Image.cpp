#include "Image.h"

Image::Image()
{

}

Image::Image(std::string path, int x, int y)
{
	image = SDL_LoadBMP(path.c_str());
	position.x = x;
	position.y = y;
	type = 1;
}

Image::~Image()
{
	SDL_FreeSurface(image);
}

void Image::LoadImage(std::string path)
{
	image = SDL_LoadBMP(path.c_str());
}

SDL_Surface * Image::ReturnImage()
{
	return image;
}

bool Image::DecreaseTime(int time)
{
	if(immortal) return false;

	timeOfLife -= time;

	if(timeOfLife <= 0) timeOfLife = 10000;
	return false;
}

SDL_Rect * Image::ReturnRect()
{
	return &position;
}
