#include "Memory.h"

SDL_Surface *MemoryBlock::shipSurface;
SDL_Surface *MemoryBlock::asteroidSurface;
SDL_Surface *MemoryBlock::bulletSurface;

SDL_Texture *MemoryBlock::shipTexture;
SDL_Texture *MemoryBlock::asteroidTexture;
SDL_Texture *MemoryBlock::bulletTexture;


MemoryBlock::MemoryBlock()
{
	DebugFunctions::DebugMes("Memory block constructor");
        if(shipSurface == NULL) shipSurface = SDL_LoadBMP("/home/tanaka/Documents/Projects/LazyAngle/ship.bmp");
        if(shipTexture == NULL) shipTexture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), shipSurface);;

        if(asteroidSurface == NULL) asteroidSurface = SDL_LoadBMP("/home/tanaka/Documents/Projects/LazyAngle/Asteroid.bmp");
        if(asteroidTexture == NULL) asteroidTexture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), asteroidSurface);

        if(bulletSurface == NULL) bulletSurface = SDL_LoadBMP("/home/tanaka/Documents/Projects/LazyAngle/bullet.bmp");
	if(bulletTexture == NULL) bulletTexture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), bulletSurface);
}

SDL_Surface* MemoryBlock::ShipS()
{
	return shipSurface;
}

SDL_Texture* MemoryBlock::ShipT()
{
	return shipTexture;
}

SDL_Surface* MemoryBlock::AsteroidS()
{
	return asteroidSurface;
}

SDL_Texture* MemoryBlock::AsteroidT()
{
	return asteroidTexture;
}

SDL_Surface* MemoryBlock::BulletS()
{
	return bulletSurface;
}

SDL_Texture* MemoryBlock::BulletT()
{
	return bulletTexture;
}

