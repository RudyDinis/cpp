/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:40 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/15 12:53:06 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreation", 145, 137), _target(target)
{
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