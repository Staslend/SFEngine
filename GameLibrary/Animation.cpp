#include "Animation.h"

Animation::Animation(std::string path, int size)
{
        SDL_Surface *bufSurf = SDL_LoadBMP(path.c_str());
        animation = std::vector<SDL_Surface*> (bufSurf->w/size);

        for(int x = 0; x < bufSurf->w/size; x++)
        {
                animation[x] = SDL_CreateRGBSurface(0,
                                                    size, bufSurf->h,
                                                    32,0,0,0,0);
                SDL_Rect bufRect = {x * size, 0, size, bufSurf->h};
                SDL_BlitSurface(bufSurf,
                                &bufRect,
                                animation[x],
                                NULL);
        }
        SDL_FreeSurface(bufSurf);
}

Animation::Animation()
{
}


Animation::~Animation()
{
	for(int x = 0; x < animation.size(); x++) SDL_FreeSurface(animation[x]);
}

void Animation::IncCounter()
{
	counter++;
	if(counter >= animation.size()) counter = 0;
}

void Animation::LoadSurface(std::string path, int size)
{
        SDL_Surface *bufSurf = SDL_LoadBMP(path.c_str());
	animation = std::vector<SDL_Surface*> (bufSurf->w/size);

        for(int x = 0; x < bufSurf->w/size; x++)
        {
                animation[x] = SDL_CreateRGBSurface(0,
                                                    size, bufSurf->h,
                                                    32,0,0,0,0);
                SDL_Rect bufRect = {x * size, 0, size, bufSurf->h};
                SDL_BlitSurface(bufSurf,
                                &bufRect,
                                animation[x],
                                NULL);
        }
	SDL_FreeSurface(bufSurf);
}

void Animation::SetCounter(int x)
{
	counter = x;
}

int Animation::ReturnCounter()
{
	return counter;
}

SDL_Surface* Animation::ReturnSurface()
{
	return animation[counter];
}

SDL_Surface* Animation::ReturnSurfaceMirrored()
{
	return SDL_Pixel::ReturnMirrored(animation[counter]);
}
