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

class testClass
{
public:
	int var = 23;
	
};

int main()
{
	using namespace utils;

	echo("Test");
	echorectangle(4,4,'i',false);
	std::cout << strcomp("ee", "hi");

	testClass variables;
	std::cout << variables.var;
	return 0;
}