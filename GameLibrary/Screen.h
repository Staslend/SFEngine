#pragma once
#include "Object.h"
#include "ScreenObject.h"
#include "DebugFunctions.h"
#include <vector>

class Screen
{
	SDL_Window *window;
	static SDL_Renderer *renderer;
	std::vector<ScreenObject *> scene;
public:
	Screen();
	~Screen();
	void CreateWindow(std::string name,int w, int h);
	void Delete(ScreenObject *);
	void AddObject(ScreenObject *);
	void Render();
	void Show();
	static SDL_Renderer *ReturnRenderer();
};

//SDL_Renderer* Screen::renderer = NULL;
