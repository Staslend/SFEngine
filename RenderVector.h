#pragma once
#include "Object.h"
#include <vector>

#include "VectorBase.h"

using namespace std;

class RenderVector : public Object
{
	std::vector<Object *> renderVector;
	public:
	RenderVector();
	~RenderVector();
	void AddObject(Object*);
	bool Render(int delay) override;
	int size();
	Object* operator[](int i);

};


