#pragma once
#include "Object.h"
#include "ScreenObject.h"
#include "DebugFunctions.h"
#include <vector>
#include <typeinfo>

class Screen
{
protected:
	SDL_Window *window;
	static SDL_Renderer *renderer;
private:
	std::vector<ScreenObject *> scene;

	int timeOfLife = 0;
public:
	Screen();
	~Screen();
	void CreateWindow(std::string name,int w, int h);
	void Delete(ScreenObject *);
	void AddObject(ScreenObject *);
	void Render(int delay);
	void Show();
	static SDL_Renderer *ReturnRenderer();
};

