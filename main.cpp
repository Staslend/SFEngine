#include "Game.h"
#include "Toho.h"
#include "DebugFunctions.h"
#include "global.cpp"

int main(int argc, char *argv[])
{
	if(argc > 1) DebugFunctions::SetFuncInfo();
	srand(time(NULL));
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

	Toho as;

	Game game;
	game.AddPart(&as);
	game.CreateScreen("Game", 800 , 600);
	game.Start();

	SDL_Quit();
	TTF_Quit();
}
