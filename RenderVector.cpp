#include "RenderVector.h"

RenderVector::RenderVector()
{

}

RenderVector::~RenderVector()
{
}

void RenderVector::AddObject(Object *object)
{
	renderVector.push_back(object);
}

int RenderVector::size()
{
	return renderVector.size();
}

bool RenderVector::Render(int delay)
{
	for(int i = 0; i < renderVector.size(); i++)
	{
		if(renderVector[i]->Render(delay))
		{
			renderVector.erase(renderVector.begin() + i);
		}
	}
}

Object* RenderVector::operator[](int i)
{
//	if(i > renderVector.size() || i < renderVector.size()) return NULL;
	return renderVector[i];
}
