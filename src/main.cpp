/*
*
*	 SAMPCTL in C++
*
*	DEntisT (c) 2023
*
*/

#include <iostream>
#include <cstring>

#include "utils.cpp"

int main()
{
	using namespace utils;
	
	echo("Test");
	echorectangle(4,4,'i',false);
	std::cout << strcomp("ee", "hi");
	return 0;
}