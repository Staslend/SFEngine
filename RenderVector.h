#pragma once
#include "Object.h"
#include <vector>

using namespace std;

class RenderVector : public Object
{
	std::vector<Object *> renderVector;
	public:
	RenderVector();
	~RenderVector();
	void AddObject(Object*);
	void Check(int delay);
};


