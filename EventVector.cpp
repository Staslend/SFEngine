#include "EventVector.h"

EventVector::EventVector()
{

}

EventVector::~EventVector()
{
	DebugFunctions::DebugMes("Event vector destructor");
}

void EventVector::AddObject(EventObject* point)
{
	eventVector.push_back(point);
}

bool EventVector::HandleEvent(SDL_Event *e)
{
	for(int x = 0; x < eventVector.size(); x++)
	{
		eventVector[x]->HandleEvent(e);
	}
}
