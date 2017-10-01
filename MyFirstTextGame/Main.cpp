#include <iostream>
#include <cstdio>
#include <string>

int main(int argc, char* args[])
{
	std::cout << "TEST\n";
	std::string input;
	do
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		std::cout << input << "\n";
	} while (input != "exit");

	return 0;
}