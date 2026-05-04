/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:40 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/17 18:54:16 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	: AForm("PresidentialPardonForm", 25, 5), _target(obj._target)
{
	//std::cout << "PresidentialPardonForm copy instructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	//std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_target = obj._target;
	}
	return (*this);
}



void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getGradeSI())
	{
		if (this->getSigned())
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
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

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}