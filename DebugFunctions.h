#pragma once
#include <string>
#include <iostream>
#include <SDL2/SDL.h>

#define DEBUG_INFO 0

class DebugFunctions
{
public:
	static void CheckPointer(void* pointer, std::string name);
	static void DebugMes(std::string);
};
