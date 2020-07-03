#include "EventVector.h"

EventVector::EventVector()
{

}

EventVector::~EventVector()
{

}

void EventVector::AddObject(EventObject* point)
{
	eventVector.push_back(point);
}

void EventVector::Check(SDL_Event *e)
{
	for(int x = 0; x < eventVector.size(); x++)
	{
		if(eventVector[x]->HandleEvent(e)) eventVector.erase(eventVector.begin() + x);
	}
}
