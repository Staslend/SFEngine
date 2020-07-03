#include "EventObject.h"

EventObject::EventObject(bool pressable)
{
	this->pressable = pressable;
}

EventObject::EventObject()
{

}

EventObject::~EventObject()
{
	DebugFunctions::DebugMes("Event object destructor");
}

void EventObject::MakePressable()
{
	pressable = true;
}

bool EventObject::PressableObject()
{
	return pressable;
}

bool EventObject::HandleEvent(SDL_Event *e)
{

}

void EventObject::HandlePress(int x, int y)
{

}
