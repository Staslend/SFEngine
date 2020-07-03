/*
Class with debug functions. I think that I will make it bigger in future
*/

#pragma once
#include <string>
#include <iostream>
#include <SDL2/SDL.h>

#include "global.cpp"

#define TIME_INFO 0

class DebugFunctions
{
	static int DebugInfo;
	static int time;
public:
	static void CheckPointer(void* pointer, std::string name);
	static void DebugMes(std::string);
	static void StartDebugTimer();
	static void SetFuncInfo();
	static void StopDebugTimer();
};
