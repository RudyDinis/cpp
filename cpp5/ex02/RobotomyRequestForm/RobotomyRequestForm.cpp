/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:40 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/15 17:11:02 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 82, 45), _target(target)
{
	
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getGradeSI())
	{
		if (this->getSigned())
		{
			std::string a = "BZZZZZZZZZZZZT...\n"
							"VRRRRRRRRRRRRRR...\n"
							"DRRRRRR DRRRRRR DRRRRRR...\n"
							"SKREEEEEEEEEEEE...\n"
							"CLANK... VRRRRRRRR...\n";
			std::cout << a << std::endl;

			srand(time(0));
			int randomNum = rand() % 2;
			if (randomNum)
			{
				std::cout << this->_target << " has been robotomized" << std::endl;
			}
			else
			{
				std::cout << this->_target << " robotomized failed" << std::endl;
			}
		}
		else
		{
			throw FormNotSignedException();
		}
	}
	else
	{
		throw GradeTooLowException();
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}