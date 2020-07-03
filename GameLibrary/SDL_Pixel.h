#include <SDL2/SDL.h>

class SDL_Pixel
{
	public:
	static int* GetPixel(SDL_Surface *surf, int x, int y);
	static void SetPixel(SDL_Surface *surf, int x, int y, int* pix);
	static SDL_Surface *ReturnMirrored(SDL_Surface * surf);
};
