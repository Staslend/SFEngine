#include "Game.h"

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

	Game game;
	game.Start();
}
