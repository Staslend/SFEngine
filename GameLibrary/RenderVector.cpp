#include "RenderVector.h"

RenderVector::RenderVector()
{

}

RenderVector::~RenderVector()
{
	for(int x = 0; x < renderVector.size(); x++)
	{
		free(renderVector[x]);
	}
}

void RenderVector::AddObject(Object *object)
{
	renderVector.push_back(object);
}

void RenderVector::Check(int delay)
{
	for(int i = 0; i < renderVector.size(); i++)
	{
		if(renderVector[i]->DecreaseTime(delay))
		{
			renderVector[i]->~Object();
			renderVector.erase(renderVector.begin() + i);
		}
	}
}
