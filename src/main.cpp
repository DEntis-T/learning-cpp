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
	str input;
	echo("Test");
	echorectangle(4,4,'i');
	std::cout << strcomp("lj3", "hi");
	return 0;
}