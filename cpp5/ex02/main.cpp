#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat("test", 120);
		ShrubberyCreationForm a = ShrubberyCreationForm("home");
		a.execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}