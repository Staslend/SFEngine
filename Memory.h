#pragma once
#include <SDL2/SDL.h>
#include "Screen.h"

class MemoryBlock
{
	static SDL_Surface *shipSurface;
	static SDL_Texture *shipTexture;

	static SDL_Surface *asteroidSurface;
	static SDL_Texture *asteroidTexture;

	static SDL_Surface *bulletSurface;
	static SDL_Texture *bulletTexture;

public:
	MemoryBlock();
	SDL_Surface *ShipS();
	SDL_Texture *ShipT();
	SDL_Surface *AsteroidS();
	SDL_Texture *AsteroidT();
	SDL_Surface *BulletS();
	SDL_Texture *BulletT();
};
