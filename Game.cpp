#include "Game.h"

Game::Game()
{
        DebugFunctions::DebugMes("Old game const");
}

Game::~Game()
{
        DebugFunctions::DebugMes("Old game dest");
}

void Game::CreateScreen(std::string name, int w, int h)
{
	screen.CreateWindow(name.c_str(), w, h);

//	renderVector.AddObject(&screen);
}

void Game::Start()
{
        DebugFunctions::DebugMes("Old game start");

        for(int x = 0; x < parts.size(); x++)
        {
                if(parts[x]->RVectorUsed()) renderVector.AddObject(parts[x]->ReturnRVector());
                if(parts[x]->EVectorUsed()) eventVector.AddObject(parts[x]->ReturnEVector());
                if(parts[x]->SVectorUsed()) screen.AddObject(parts[x]->ReturnSVector());
        }

	while(!quit)
	{
		DebugFunctions::DebugMes("Main loop started");

		time = SDL_GetTicks();
		while(SDL_PollEvent(&event))
		{
			DebugFunctions::DebugMes("Main event part");
			if(event.type == SDL_QUIT || event.key.keysym.sym == SDLK_ESCAPE) return;
//			else if(event.type == SDL_KEYDOWN)
//			{
				DebugFunctions::DebugMes("Main KETDOWN");
				eventVector.HandleEvent(&event);
//			}
		}

		renderVector.Render(delay);
		screen.Render(delay);

		DebugFunctions::DebugMes(std::to_string(SDL_GetTicks()-time));

		SDL_Delay(delay - (SDL_GetTicks() - time));

		timeOfGame += delay;
//		if(timeOfGame >= 50000)
//		{
//		}
	}
}

void Game::AddPart(Part *p)
{
	parts.push_back(p);
}
