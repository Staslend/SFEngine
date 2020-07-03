/*
Class is simple and I do not changed it for a long time so I think that everything will be ok
*/

#pragma once
#include "EventObject.h"
#include "VectorBase.h"
#include <vector>

class EventVector : public EventObject
{
	std::vector<EventObject*> eventVector;
public:
	EventVector();
	~EventVector();
	void AddObject(EventObject*);
	bool HandleEvent(SDL_Event*);
};
