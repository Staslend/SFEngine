#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include "DebugFunctions.h"

class Object
{
protected:
	int timeOfLife = 0;
	int toDelete = 0;

	int id = 0;
public:
	Object();
	~Object();
	Object(int timeOfLife);
	int ReturnTime();
	void Delete();
	int Deleted();
	virtual bool Render(int time);
	int Type();
	void SetRIden(int i);
	int ReturnRIden();
};
