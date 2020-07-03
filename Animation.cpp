#include "Animation.h"

Animation::Animation(std::string path, int size)
{
	DebugFunctions::DebugMes("Animation constructor");

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

	for(int x = 0; x < animation.size(); x++)
	{
		animationTex.push_back(SDL_CreateTextureFromSurface(Screen::ReturnRenderer(),
								    animation[x]));
	}

        SDL_FreeSurface(bufSurf);
}

Animation::Animation()
{
        DebugFunctions::DebugMes("Animation constructor");
	ds = DebugScreen(800,600);
}


Animation::~Animation()
{
        DebugFunctions::DebugMes("Animation destructor");

	for(int x = 0; x < animation.size(); x++) SDL_FreeSurface(animation[x]);
}

void Animation::IncCounter()
{
        DebugFunctions::DebugMes("Animation counter");

	counter++;
	if(counter >= animation.size()) counter = 0;
}

void Animation::LoadSurface(std::string path, int size)
{

        DebugFunctions::DebugMes("Animation LoadSurface");

        SDL_Surface *bufSurf = SDL_LoadBMP(path.c_str());

	if(bufSurf == NULL) DebugFunctions::DebugMes("Animatinon do not loaded image");

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

        for(int x = 0; x < animation.size(); x++)
        {
                animationTex.push_back(SDL_CreateTextureFromSurface(Screen::ReturnRenderer(),
                                                                    animation[x]));
        }
	SDL_FreeSurface(bufSurf);
}

void Animation::SetCounter(int x)
{
        DebugFunctions::DebugMes("Animation Set counter");


	counter = x;
}

int Animation::ReturnCounter()
{
        DebugFunctions::DebugMes("Animation ReturnCounter");

	return counter;
}

SDL_Surface* Animation::ReturnSurface()
{
        DebugFunctions::DebugMes("Animation Return Surface");

	ds.SetSurface(animation[0], {0,0,200,200});

	return animation[counter];
}

SDL_Texture* Animation::ReturnTexture()
{
        DebugFunctions::DebugMes("Animation Return Texture");

	return animationTex[counter];
}

SDL_Surface* Animation::ReturnSurfaceMirrored()
{
        DebugFunctions::DebugMes("Animation Return surface Mirrored");

	return SDL_Pixel::ReturnMirrored(animation[counter]);
}
