/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:49:20 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/15 13:01:02 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name), _grade(grade)
{
	//std::cout << "init Bureaucrat" << std::endl;

	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Destory Bureaucrat" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	//std::cout << "Bureaucrat copy instructor called" << std::endl;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	//std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_grade = obj._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}


void Bureaucrat::signForm(AForm &form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat &Bureaucrat::operator++()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
	return (*this);
}

Bureaucrat &Bureaucrat::operator--()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
	return (*this);
}
Bureaucrat Bureaucrat::operator++(int)
{
	if (_grade == 1)
		throw GradeTooHighException();
	Bureaucrat tmp = *this;
	_grade--;
	return (tmp);
}

Bureaucrat Bureaucrat::operator--(int)
{
	if (_grade == 150)
		throw GradeTooLowException();
	Bureaucrat tmp = *this;
	_grade++;
	return (tmp);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}