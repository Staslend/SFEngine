#pragma once
#include "Text.h"
#include "DebugScreen.h"
#include "Image.h"
#include <iostream>

class NovelText : public Text
{
	SDL_Surface *letterSurface = NULL;
	SDL_Rect letterRect;

	int letterToWrite = 0;
	int globalDelay = 0;
	int delay;

public:
	NovelText(int w, int h, std::string text, std::string path, SDL_Color color, int delay);
	NovelText();
	~NovelText();
	void SetDelay(int delay);
	bool Render(int delay) override;
};
