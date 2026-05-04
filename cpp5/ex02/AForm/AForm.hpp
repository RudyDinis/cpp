/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:39:56 by rdinis            #+#    #+#             */
/*   Updated: 2026/04/17 18:45:18 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string.h>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSI;
	const  int _gradeEI;
	
public:
	AForm(std::string name, int gradeSI, int gradeEI);
	~AForm();
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	
	std::string getName() const;
	bool getSigned() const;
	int getGradeSI() const;
	int getGradeEI() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat bureaucrat);

	friend std::ostream &operator<<(std::ostream &os, const AForm &form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};


#endif