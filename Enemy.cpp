#include "Enemy.h"

Enemy::Enemy(int x)
{
	position = {x, -100, 50,50};

	surface = this->AsteroidS();
	texture = this->AsteroidT();
	this->id = 2;
}

Enemy::~Enemy()
{
}

bool Enemy::Render(int delay)
{
//        DebugFunctions::DebugMes("Asteroid Render ---------------------------------------------------");

	Object::timeOfLife += delay;

	if(toDelete == 1) return true;

	if(Object::timeOfLife > 10)
	{
		this->position.y += 20;
		Object::timeOfLife = 0;


		if(position.y > 830)
		{
//			DebugFunctions::DebugMes("Asteroid Render It's time to be deleted");
			this->ScreenObject::toDeleteS = 1;
			return true;
		}
	}
	return false;
}

SDL_Surface* Enemy::ReturnSurface()
{
	return surface;
}

SDL_Texture* Enemy::ReturnTexture()
{
	return texture;
}
