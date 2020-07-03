#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
	DebugFunctions::DebugMes("Object destructor");
}

void Object::Delete()
{
	toDelete = 1;
}

Object::Object(int time)
{
	timeOfLife = time;
}

int Object::ReturnTime()
{
	return timeOfLife;
}

int Object::Deleted()
{
	return toDelete;
}

bool Object::Render(int time)
{
}

int Object::Type()
{
	return id;
}
