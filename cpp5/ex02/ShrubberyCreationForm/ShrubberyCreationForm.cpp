/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:40 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/17 18:55:29 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
	: AForm("PresidentialPardonForm", 25, 5), _target(obj._target)
{
	//std::cout << "ShrubberyCreationForm copy instructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	//std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_target = obj._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string tree =
		"        *\n"
		"       ***\n"
		"      *****\n"
		"     *******\n"
		"    *********\n"
		"   ***********\n"
		"      *****\n"
		"     *******\n"
		"    *********\n"
		"   ***********\n"
		"  *************\n"
		" ***************\n"
		"    *********\n"
		"   ***********\n"
		"  *************\n"
		" ***************\n"
		"*****************\n"
		"      |||\n"
		"      |||\n"
		"  ___/|||\\___\n";

	if (executor.getGrade() <= this->getGradeSI())
	{
		if (this->getSigned())
		{
			std::ofstream outfile((_target + "_shrubbery").c_str());
			outfile << tree << std::endl;
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}