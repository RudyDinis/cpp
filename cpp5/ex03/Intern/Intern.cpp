/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:23:55 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/18 17:44:35 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "../AForm/AForm.hpp"

Intern::Intern(/* args */)
{
}

Intern::Intern(const Intern &obj)
{
	(void)obj;
	// std::cout << "Intern copy instructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
	// std::cout << "Intern copy assignment operator called" << std::endl;
	(void)obj;
	return (*this);
}

static AForm *makeShrubbery(std::string t) { return new ShrubberyCreationForm(t); }
static AForm *makeRobotomy(std::string t) { return new RobotomyRequestForm(t); }
static AForm *makePresidential(std::string t) { return new PresidentialPardonForm(t); }

AForm *Intern::makeForm(std::string name, std::string target)
{
	static AForm *(*forms[])(std::string) = {
		&makeShrubbery,
		&makeRobotomy,
		&makePresidential};

	std::string list[] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
		if (!name.compare(list[i]))
			return forms[i](target);
	throw std::invalid_argument("Form not found: " + name);
}

Intern::~Intern()
{
}