#include "DebugFunctions.h"

int DebugFunctions::time;
int DebugFunctions::DebugInfo = 0;

void DebugFunctions::CheckPointer(void *pointer, std::string name)
{
	if(DebugInfo == 1)
	{
        	if(pointer == NULL) std::cout << name << " : " << SDL_GetError() << std::endl;
        	else std::cout << name << " : Object was loaded" << std::endl;
	}
}

void DebugFunctions::DebugMes(std::string mes)
{
        if(DebugInfo == 1)
        {
       		std::cout << mes << std::endl;
	}
}

void DebugFunctions::StartDebugTimer()
{
	if(DebugInfo == 1)
	{
		time = SDL_GetTicks();
	}
}

void DebugFunctions::SetFuncInfo()
{
	DebugInfo = 1;
}

void DebugFunctions::StopDebugTimer()
{
	if(DebugInfo == 1)
	{
		std::cout << "Time was taken:" << SDL_GetTicks() - time << std::endl;
	}
}
