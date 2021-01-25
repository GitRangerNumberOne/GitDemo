#pragma once
#include <iostream>
template<typename T>
void Log(const T& objToLog)
{
	std::cout << objToLog << std::endl;
}