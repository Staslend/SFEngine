#include "Text.h"

Text::Text()
{
}

Text::Text(int x, int y, int w, int h, std::string str, std::string path, SDL_Color color)
{
	if(!TTF_WasInit()) std::cout << "Depression" << std::endl;
	position.x = x;
	position.y = y;
	position.w = w;
	position.h = h;
	text = str;
	this->color = color;
	font = TTF_OpenFont(path.c_str(), 64);
	if(!font) std::cout << TTF_GetError() << std::endl;
	type = 3;
	wasChanged = true;
}

Text::~Text()
{
}

void Text::LoadColor(SDL_Color color)
{
	this->color = color;
}

void Text::LoadFont(std::string path)
{
	font = TTF_OpenFont(path.c_str(), 64);
}

SDL_Surface *Text::ReturnSurface()
{
	return textSurface;
}

void Text::LoadString(std::string str)
{
	text = str;
	wasChanged = true;
}

bool Text::DecreaseTime(int delay)
{
	if(wasChanged)
	{
		textSurface = TTF_RenderText_Blended(font, text.c_str(), color);
		wasChanged = false;
	}
	return false;
}
