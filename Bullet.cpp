#include "Bullet.h"

Bullet::Bullet(int x)
{
        DebugFunctions::DebugMes("Bullet constructor");

	position = {x, 500, 20, 20};
	surface = this->BulletS();
	texture = this->BulletT();

	this->id = 1;
}

Bullet::~Bullet()
{
        DebugFunctions::DebugMes("Bullet destructor");
}

bool Bullet::Render(int delay)
{
        DebugFunctions::DebugMes("Bullet render");

	if(toDelete == 1) return true;

	Object::timeOfLife += delay;

	if(Object::timeOfLife > 5)
	{
		int x = position.x + 10;
		int y = position.y + 10;

		this->position.y -= 20;
		if(position.y < -40)
		{
			toDeleteS = 1;
			return true;
		}
	}
	return false;
}

SDL_Surface* Bullet::ReturnSurface()
{
        DebugFunctions::DebugMes("Bullet Return Surface");

	return surface;
}

SDL_Texture* Bullet::ReturnTexture()
{
	DebugFunctions::DebugMes("Bullet Return Texture");
	return texture;
}

