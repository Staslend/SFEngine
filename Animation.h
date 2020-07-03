/*
Animation of sprite. As I know, this files worked pretty good
*/


#include "SDL_Pixel.h"
#include "Screen.h"
#include "DebugFunctions.h"
#include "DebugScreen.h"
#include <SDL2/SDL.h>
#include <vector>
#include <string>

class Animation
{
	std::vector<SDL_Surface*> animation;
	std::vector<SDL_Texture*> animationTex;
	int counter = 0;
	DebugScreen ds;
public:
	Animation(std::string path, int size);
	Animation();
	~Animation();
	SDL_Surface* ReturnSurface();
	SDL_Texture* ReturnTexture();
	SDL_Surface* ReturnSurfaceMirrored();
	void LoadSurface(std::string path, int size);
	void SetCounter(int x);
	int ReturnCounter();
	void IncCounter();
};
