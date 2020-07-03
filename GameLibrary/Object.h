#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Object
{
protected:
	int timeOfLife = 0;

public:
	Object();
	Object(int timeOfLife);
	int ReturnTime();
	virtual bool DecreaseTime(int time);
};
