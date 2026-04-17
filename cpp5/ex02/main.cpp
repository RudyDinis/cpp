#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat("test", 10);
		/*ShrubberyCreationForm a = ShrubberyCreationForm("home");
		b.signForm(a);
		b.executeForm(a);*/
		//RobotomyRequestForm c = RobotomyRequestForm("home");
		//b.signForm(c);
		//b.executeForm(c);
		PresidentialPardonForm d = PresidentialPardonForm("home");
		b.signForm(d);
		b.executeForm(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}