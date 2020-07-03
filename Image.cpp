#include "Image.h"

Image::Image()
{

}

Image::Image(std::string path, int x, int y)
{
	image = SDL_LoadBMP(path.c_str());
	texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), image);
	position.x = x;
	position.y = y;
}

Image::~Image()
{
	SDL_FreeSurface(image);
}

void Image::LoadImage(std::string path)
{
	image = SDL_LoadBMP(path.c_str());
}

SDL_Surface * Image::ReturnSurface()
{
	return image;
}

bool Image::DecreaseTime(int time)
{
	return false;
}

SDL_Texture *Image::ReturnTexture()
{
	return texture;
}
