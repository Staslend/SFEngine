#include "Character.h"

Character::Character(int x, int y, int w, int h)
{
        DebugFunctions::DebugMes("Character constructor");

	this->position = {x,y,w,h};
	surface = this->ShipS();
	texture = this->ShipT();

	this->id = 0;
}

Character::Character()
{/*
        surface = SDL_LoadBMP("/home/tanaka/Documents/Projects/LazyAngle/ship.bmp");
        texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), surface);
*/}

bool Character::Render(int delay)
{
        DebugFunctions::DebugMes("Character Render");
	DebugFunctions::DebugMes("Position: " + std::to_string(position.x) + "  " + std::to_string(position.y) + "   " + std::to_string(position.w) + "  " + std::to_string(position.h));
	Object::timeOfLife += delay;
	if(Object::timeOfLife > 10)
	{
		if(left == 1 && position.x > 20) this->position.x -= 30;
		if(right== 1 && position.x < 700) this->position.x += 30;
		Object::timeOfLife = 0;
	}

	return false;
}

void Character::Dead()
{
	surface = SDL_CreateRGBSurface(0, 80, 80, 32, 0,0,0,0);
        texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), surface);
}

SDL_Surface* Character::ReturnSurface()
{
	DebugFunctions::DebugMes("Character Return Surface");
	return surface;
}

SDL_Texture* Character::ReturnTexture()
{
      DebugFunctions::DebugMes("Character Return Texture");
      return texture;
}


bool Character::HandleEvent(SDL_Event *e)
{
        DebugFunctions::DebugMes("Character Handle Event");

	if(e->type == SDL_KEYDOWN)
	{
		switch(e->key.keysym.sym)
		{
			case SDLK_UP:
				{
					pressed = 1;
					break;
				}
			case SDLK_LEFT:
				{
					left = 1;
					break;
				}
			case SDLK_RIGHT:
				{
					right = 1;
					break;
				}
		}
	}
	if(e->type == SDL_KEYUP)
	{
		switch(e->key.keysym.sym)
		{
			case SDLK_UP:
				{
					shooted = 0;
					pressed = 0;
					break;
				}
			case SDLK_LEFT:
				{
					left = 0;
					break;
				}
			case SDLK_RIGHT:
				{
					right = 0;
					break;
				}
		}
	}
}

bool Character::ReadyToShoot()
{
	if(pressed == 1 & shooted == 0)
	{
		shooted = 1;
		return true;
	}
	return false;
}
