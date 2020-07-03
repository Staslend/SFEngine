#include "NovelText.h"

NovelText::NovelText(int w, int h, std::string str, std::string path, SDL_Color color, int delay)
{
	if(!TTF_WasInit()) std::cout << "Depression" << std::endl;

	position.w = w;
	position.h = h;

	letterRect.y = 0;
	letterRect.x = 0;
	letterRect.w = 0;
	letterRect.h = 0;

	textSurface = SDL_CreateRGBSurface(0, w, h, 32, 0xff, 0xff00, 0xff0000, 0xff000000);

	text = str;

	this->color = color;

	font = TTF_OpenFont(path.c_str(), 62);
	if(!font) std::cout << TTF_GetError() << std::endl;

	letterToWrite = 0;
	this->delay = delay;
}

void NovelText::SetDelay(int delay)
{
	this->delay = delay;
}

NovelText::~NovelText()
{
	SDL_FreeSurface(textSurface);
	SDL_FreeSurface(letterSurface);
}

bool NovelText::DecreaseTime(int delay)
{
	globalDelay += delay;


	if(globalDelay >= this->delay)
	{
		if(letterToWrite < text.size())
		{
			char charToWrite = text[letterToWrite];

			if(charToWrite == ' ')
			{
				bool q = true;
				int num = 1, w = 0, h = 0;
				std::string bufString;
				while(q)
				{
					if(text[letterToWrite + num] != ' ' && letterToWrite + num != text.size())
					{
						bufString.push_back(text[letterToWrite + num]);
					}
					else q = false;
					num++;
				}

				TTF_SizeText(font, bufString.c_str(), &w, &h);

				if(w >= position.w - letterRect.x)
				{
	                                letterRect.y += letterRect.h;
	                                letterRect.x = 0;
				}
			}

			globalDelay = 0;

			letterSurface = TTF_RenderText_Blended(font,
							     &charToWrite,
							     color);

			letterRect.w = letterSurface->w;
			letterRect.h = letterSurface->h;

			SDL_BlitSurface(letterSurface,
					NULL,
					textSurface,
					&letterRect);

			SDL_FreeSurface(letterSurface);

			textTexture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), textSurface);

			letterRect.x += letterRect.w;
			letterToWrite++;
		}
	}
	return false;
}
