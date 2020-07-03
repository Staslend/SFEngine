#include "Asteroids.h"


Asteroids::Asteroids()
{
	ship = Ship(100,100,100,100, false);

	screenVector.AddObject(&ship);
	renderVector.AddObject(&ship);
	eventVector.AddObject(&ship);
}
