#pragma once
#include "Part.h"
#include "Character.h"
#include "Bullet.h"
#include "DebugFunctions.h"
#include "Enemy.h"
#include "Text.h"
#include "Space.h"
#include <cmath>

class Toho : public Part,  public Object
{
	Character ch;

	std::vector<Bullet*> bulletVector;
	std::vector<Enemy*> asteroidVector;

	Text end;
	Space space;

	int globalIden = 0;
	int endOfGame = 0;
	int ended = 0;
public:
	Toho();
	bool Render(int delay) override;
};
