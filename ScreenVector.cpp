#include "ScreenVector.h"


ScreenVector::ScreenVector()
{

}

ScreenVectro::ScreenVector(int x, int y, int w, int h)
{
	position = {x,y,w,h};
	surface = SDL_CreateRGBSurface(0, w, h, 32, 0xff, 0xff00, 0xff0000, 0xff000000);
}

ScreenVector::~ScreenVector()
{

}

void ScreenVector::AddObject(ScreenObject* ob)
{
	screenVector.push_back(ob);
}

SDL_Surface* ScreenVector::ReturnSurface()
{
        if(surface != NULL) SDL_FreeSurface(surface);

	for(int x = 0; x < screenVector.size(); x++)
	{
		SDL_BlitSurface(surface,
				NULL,
				sceneVector[x].ReturnTexture(),
				sceneVector[x].ReturnRect());
	}
	return surface;
}

SDL_Texture* ScreenVector::ReturnTexture()
{
	if(texture != NULL) SDL_DestroyTexture(texture);
	if(surface != NULL) SDL_FreeSurface(surface); //????

        for(int x = 0; x < screenVector.size(); x++)
        {
                SDL_BlitSurface(surface,
                                NULL,
                                sceneVector[x].ReturnTexture(),
                                sceneVector[x].ReturnRect());
        }
	texture = SDL_CreateTextureFromSurface(Screen::ReturnRenderer(), surface);
        return surface;
}

