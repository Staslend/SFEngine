#include "DebugScreen.h"

DebugScreen::DebugScreen()
{

}

DebugScreen::DebugScreen(int w, int h)
{
        DebugFunctions::DebugMes("Screen Create window");

        window = SDL_CreateWindow("Debug window",
                                  0,
                                  0,
                                  w,
                                  h,
                                  SDL_WINDOW_SHOWN);

        renderer = SDL_CreateRenderer(window, -1, 0);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
}

void DebugScreen::SetSurface(SDL_Surface *surf, SDL_Rect r)
{
	SDL_RenderClear(renderer);
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surf);
	SDL_RenderCopy(renderer, texture, NULL, &r);
	SDL_DestroyTexture(texture);
	SDL_RenderPresent(renderer);
}

void DebugScreen::SetTexture(SDL_Texture *texture, SDL_Rect r)
{
	SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, &r);
	SDL_RenderPresent(renderer);
}
