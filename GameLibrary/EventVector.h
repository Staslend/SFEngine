#include "EventObject.h"

#include <vector>

class EventVector
{
	std::vector<EventObject*> eventVector;
public:
	EventVector();
	~EventVector();
	void AddObject(EventObject*);
	void Check(SDL_Event*);
};
