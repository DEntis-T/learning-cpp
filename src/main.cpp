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
	str cmd;
	using namespace sampctl;

	print("Insert a command\n");
	std::cout << "$ ";
	std::getline(std::cin >> std::ws, cmd);

	std::cout << "Debug: \"" << cmd << "\"" << std::endl;

	if(utils::strcomp(cmd, "exit"))
	{
		return 0;
	}
	else processCommand(cmd);

	return main();
}