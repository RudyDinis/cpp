#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"

int main()
{
	try
	{
		Bureaucrat a = Bureaucrat("test", 16);
		Bureaucrat b = Bureaucrat("test1", 15);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}