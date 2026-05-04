/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:23:49 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/18 17:45:52 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Intern/Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat("test", 0);
		/*ShrubberyCreationForm a = ShrubberyCreationForm("home");
		b.signForm(a);
		b.executeForm(a);*/

		//RobotomyRequestForm c = RobotomyRequestForm("home");
		//b.signForm(c);
		//b.executeForm(c);
		
		//PresidentialPardonForm d = PresidentialPardonForm("home");
		//b.signForm(d);
		//b.executeForm(d);
	
		Intern z = Intern();

		AForm *t = z.makeForm("PresidentialPardonForm", "ygyhfhf");
		b.signForm(*t);
		b.executeForm(*t);
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}