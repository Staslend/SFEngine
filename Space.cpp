#include "Space.h"

Space::Space()
{
}

bool Space::Render(int delay)
{
	Object::timeOfLife += delay;
	DebugFunctions::DebugMes("Space position: " + std::to_string(position.y));

	if(Object::timeOfLife > 20)
	{
		this->position.y = pos;
		pos += 2;
		Object::timeOfLife = 0;
	}
	return false;
}
