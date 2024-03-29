#pragma once
#include "RenderVector.h"
#include "Screen.h"
#include "EventVector.h"
#include "Part.h"
#include "Image.h"


class Game
{
	//Engine elements
	Screen screen;
	EventVector eventVector;
	RenderVector renderVector;
	//Loop elements
	Uint16 time;
	int timeOfGame = 0;
	int delay = 43;
	SDL_Event event;
	bool quit = false;
	bool stop = false;
	//Game elements
	std::vector<Part*> parts;
public:
	Game();
	~Game();
	void Start();
	void AddPart(Part*);
	void CreateScreen(std::string name, int w, int h);
};
