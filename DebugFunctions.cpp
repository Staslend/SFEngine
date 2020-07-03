#include "DebugFunctions.h"

void DebugFunctions::CheckPointer(void *pointer, std::string name)
{
#if DEBUG_INFO == 1
        if(pointer == NULL) std::cout << name << " : " << SDL_GetError() << std::endl;
        else std::cout << name << " : Object was loaded" << std::endl;
#endif
}

void DebugFunctions::DebugMes(std::string mes)
{
#if DEBUG_INFO == 1
       	std::cout << mes << std::endl;
#endif

}
