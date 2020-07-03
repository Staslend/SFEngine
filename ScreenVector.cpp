#include "ScreenVector.h"


ScreenVector::ScreenVector()
{
	DebugFunctions::DebugMes("Screen vector const");
        surface = SDL_CreateRGBSurface(0, SIZE_W, SIZE_H, 32, 0xff, 0xff00, 0xff0000, 0xff000000);

	isVector = true;
}

ScreenVector::ScreenVector(int x, int y, int w, int h)
{
        DebugFunctions::DebugMes("Screen vector const");
	position = {x,y,w,h};
	if(surface != NULL) SDL_FreeSurface(surface);
	surface = SDL_CreateRGBSurface(0, w, h, 32, 0xff, 0xff00, 0xff0000, 0xff000000);

	isVector = true;
}

ScreenVector::~ScreenVector()
{

}

void ScreenVector::AddObject(ScreenObject* ob)
{
        DebugFunctions::DebugMes("ScreenVectorAddObject");

	screenVector.push_back(ob);
}

SDL_Surface* ScreenVector::ReturnSurface()
{
        DebugFunctions::DebugMes("Screen vector returnSurface");

        if(surface != NULL) SDL_FreeSurface(surface);

	for(int x = 0; x < screenVector.size(); x++)
	{
		SDL_BlitSurface(surface,
			NULL,
			screenVector[x]->ReturnSurface(),
			screenVector[x]->ReturnRect());
	}
	return surface;
}

void ScreenVector::ShakeOff(int delay)
{
        DebugFunctions::DebugMes("Screen vector shake off");

	timeOfLife += delay;


        DebugFunctions::DebugMes("Screen vector shake off starting");
        DebugFunctions::DebugMes("Size of vector:" + std::to_string(screenVector.size()));

        for(int x = 0; x < screenVector.size(); x++)
	{
		if(screenVector[x]->ShouldBeDeleted())
		{
			screenVector.erase(screenVector.begin() + x);
		}
	}
	timeOfLife = 0;
        DebugFunctions::DebugMes("Size of vector:" + std::to_string(screenVector.size()));
}

SDL_Texture* ScreenVector::ReturnTexture()
{
        DebugFunctions::DebugMes("Screen vector Return texture");

     //   DebugFunctions::DebugMes("Screen Vector show iden " + std::to_string(idenVector.size()));

	SDL_FreeSurface(surface);
        surface = SDL_CreateRGBSurface(0, position.w, position.h, 32, 0xff, 0xff00, 0xff0000, 0xff000000);

	if(texture != NULL) SDL_DestroyTexture(texture);

        for(int x = 0; x < screenVector.size(); x++)
     	{
               	SDL_BlitSurface(screenVector[x]->ReturnSurface(),
                        NULL,
			surface,
			screenVector[x]->ReturnRect());
        }

	texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), surface);
        return texture;
}

ScreenObject* ScreenVector::operator[](int i)
{
        if(i > screenVector.size() || i < screenVector.size()) return NULL;
        else return screenVector[i];
}

int ScreenVector::size()
{
	return screenVector.size();
}
