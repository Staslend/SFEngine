#include "Screen.h"

SDL_Renderer* Screen::renderer;

Screen::Screen()
{
        DebugFunctions::DebugMes("Screen const");

}

Screen::~Screen()
{
        DebugFunctions::DebugMes("Screen dest");

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}

void Screen::CreateWindow(std::string name, int w, int h)
{
        DebugFunctions::DebugMes("Screen Create window");

        window = SDL_CreateWindow(name.c_str(),
                                  0,
                                  0,
                                  w,
                                  h,
                                  SDL_WINDOW_FULLSCREEN);

	DebugFunctions::CheckPointer(window, "Window");

        renderer = SDL_CreateRenderer(window, -1, 0);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
}


void Screen::AddObject(ScreenObject *ob)
{
        DebugFunctions::DebugMes("Screen Add Object");

	scene.push_back(ob);
}

SDL_Renderer* Screen::ReturnRenderer()
{
	return renderer;
}

void Screen::Show()
{
        DebugFunctions::DebugMes("Screen Show");

	SDL_RenderPresent(renderer);
}

void Screen::Delete(ScreenObject *ob)
{
        DebugFunctions::DebugMes("Screen Delete");

	for(int x = 0; x < scene.size(); x++)
	{
		if(ob == scene[x]) scene.erase(scene.begin() + x);
	}
	free(ob);
}

void Screen::Render(int delay)
{
        DebugFunctions::DebugMes("Screen Render");

	timeOfLife += delay;
	if(timeOfLife > 50)
	{
        	for(int x = 0; x < scene.size(); x++)
       		{
        	        scene[x]->ShakeOff(delay);
	        }

		timeOfLife = 0;
	}

	SDL_RenderClear(renderer);
	for(int x = 0; x < scene.size(); x++)
	{
                SDL_RenderCopy(renderer,
                               scene[x]->ReturnTexture(),
                               NULL,
                               scene[x]->ReturnRect());

	}
	SDL_RenderPresent(renderer);
}


