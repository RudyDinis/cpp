#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main()
{
	try
	{
		Bureaucrat a = Bureaucrat("test", 16);
		Bureaucrat b = Bureaucrat("test1", 15);
		Form test = Form("28c", 15, 2);
		std::cout << test << std::endl;
		a.signForm(test);
		b.signForm(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}