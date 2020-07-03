#include "DebugScreen.h"

SDL_Renderer* DebugScreen::renderer;

DebugScreen::DebugScreen()
{

}

DebugScreen::DebugScreen(int w, int h)
{
#if DEBUG_WINDOW == 1
        DebugFunctions::DebugMes("Screen Create window");

	if(!wasCreated)
	{

		window = SDL_CreateWindow("Debug window",
                	                  0,
                        	          0,
                                	  w,
	                                  h,
        	                          SDL_WINDOW_SHOWN);

        renderer = SDL_CreateRenderer(window, -1, 0);
//	renderer = Screen::ReturnRenderer();
      	SDL_RenderClear(renderer);
       	SDL_RenderPresent(renderer);

	}
#endif
}

void DebugScreen::SetSurface(SDL_Surface *surf, SDL_Rect r)
{
#if DEBUG_WINDOW == 1
	SDL_RenderClear(renderer);
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surf);
	SDL_RenderCopy(renderer, texture, NULL, &r);
	SDL_DestroyTexture(texture);
	SDL_RenderPresent(renderer);
#endif
}

void DebugScreen::SetTexture(SDL_Texture *texture, SDL_Rect r)
{
#if DEBUG_WINDOW == 1
	SDL_RenderClear(renderer);
      SDL_RenderCopy(renderer, texture, NULL, &r);
	SDL_RenderPresent(renderer);
#endif
}

SDL_Renderer* DebugScreen::ReturnDebugRenderer()
{
	return renderer;
}
