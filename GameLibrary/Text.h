#pragma once
#include <SDL_ttf.h>
#include "Object.h"
#include "ScreenObject.h"
class Text : public Object, public ScreenObject
{
	bool wasChanged;
protected:
	std::string text;
	TTF_Font *font;
	SDL_Surface *textSurface;
	SDL_Color color;
public:
	Text();
	Text(int x, int y, int w, int h, std::string string, std::string path, SDL_Color color);
	~Text();
	void LoadFont(std::string path);
	void LoadColor(SDL_Color color);
	SDL_Surface *ReturnSurface() override;
	void LoadString(std::string);
	bool DecreaseTime(int delay) override;
};
