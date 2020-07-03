#include "SDL_Pixel.h"
#include <SDL2/SDL.h>
#include <vector>
#include <string>

class Animation
{
	std::vector<SDL_Surface*> animation;
	int counter = 0;
public:
	Animation(std::string path, int size);
	Animation();
	~Animation();
	SDL_Surface* ReturnSurface();
	SDL_Surface* ReturnSurfaceMirrored();
	void LoadSurface(std::string path, int size);
	void SetCounter(int x);
	int ReturnCounter();
	void IncCounter();
};
