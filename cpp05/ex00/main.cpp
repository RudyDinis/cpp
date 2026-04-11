#include "Bureaucrat/Bureaucrat.hpp"

int main()
{
	try
	{

		Bureaucrat a = Bureaucrat("test", 1);
		std::cout << a-- << std::endl;
		std::cout << a++ << std::endl;
		std::cout << --a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << ++a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}