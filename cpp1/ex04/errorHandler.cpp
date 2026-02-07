#include "main.hpp"

void errorHandler(int status)
{
	if (status == 0)
		std::cout << RED "Error : Missing or too much args" RESET << std::endl;
	else if (status == 1)
		std::cout << RED "Error : Cannot open the file" RESET << std::endl;
}