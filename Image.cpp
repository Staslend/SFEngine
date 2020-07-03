#include "Image.h"

Image::Image()
{

}

Image::Image(std::string path, int x, int y)
{
        DebugFunctions::DebugMes("Image const");

	image = SDL_LoadBMP(path.c_str());
	texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), image);
	position.x = x;
	position.y = y;
}

Image::~Image()
{
        DebugFunctions::DebugMes("Image dest");

	SDL_FreeSurface(image);
}

void Image::LoadImage(std::string path)
{
        DebugFunctions::DebugMes("Image Load Image");

	image = SDL_LoadBMP(path.c_str());
}

SDL_Surface * Image::ReturnSurface()
{
        DebugFunctions::DebugMes("Image ReturnSurface");

	return image;
}

bool Image::Render(int time)
{
        DebugFunctions::DebugMes("Image Render");

	return false;
}

SDL_Texture *Image::ReturnTexture()
{
        DebugFunctions::DebugMes("Image Return Texture");

	return texture;
}

void Image::Scale()
{
        DebugFunctions::DebugMes("Image Scale");

	SDL_Rect r = {position.x ,position.y, SIZE_W, SIZE_H};
	SDL_BlitScaled(image, NULL, image, &r);
        texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), image);
}
