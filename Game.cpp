#include "Game.h"

Game::Game()
{
        DebugFunctions::DebugMes("Old game const");
/*
        screen.CreateWindow("Window",1280,720);

	background = new Image("/home/tanaka/Documents/Projects/Game/image.bmp",0,0);
	background->SetSize(1280, 720);
	background->SetPos(0,0);

	text = new NovelText(1000, 700,
			     "Cute loli is my pashion but it's imposible to me to speak with them cause I am 3D boy...", "/home/tanaka/Documents/Projects/Game/font.TTF",
			     {255,255,255}, 50);
	text->SetSize(1000,700);
	text->SetPos(140,40);
*/
	for(int x = 0; x < parts.size(); x++)
	{
		if(parts[x].RVectorUsed()) renderVector.push_back(parts[x].ReturnRVector());
                if(parts[x].EVectorUsed()) eventVector.push_back(parts[x].ReturnEVector());
                if(parts[x].SVectorUsed()) screenVector.push_back(parts[x].ReturnSVector());
	}
}

Game::~Game()
{
        DebugFunctions::DebugMes("Old game dest");
}

void Game::CreateScreen(std::string name, int w, int h)
{
	screen.CreateWindow(name.c_str(), w, h);
}

void Game::Start()
{
        DebugFunctions::DebugMes("Old game start");

	while(!quit)
	{
		time = SDL_GetTicks();
		while(SDL_PollEvent(&event))
		{
			eventVector.Check(&event);
			if(event.type == SDL_QUIT) return;
			if(event.key.keysym.sym == SDLK_ESCAPE) return;
		}

		renderVector.Check(delay);
		screen.Render();

		SDL_Delay(delay - (SDL_GetTicks() - time));

		timeOfGame += delay;
		if(timeOfGame >= 50000)
		{
		}
	}
}
