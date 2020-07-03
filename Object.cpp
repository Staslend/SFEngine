#include "Object.h"

Object::Object()
{
}

Object::Object(int time)
{
	timeOfLife = time;
}

int Object::ReturnTime()
{
	return timeOfLife;
}

bool Object::DecreaseTime(int time)
{
}
