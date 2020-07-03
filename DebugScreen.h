#include "Screen.h"

class DebugScreen
{
	SDL_Window *window;
	SDL_Renderer *renderer;

	public:
	DebugScreen();
	DebugScreen(int w, int h);
	void SetSurface(SDL_Surface *, SDL_Rect r);
	void SetTexture(SDL_Texture *, SDL_Rect r);
};
