#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string.h>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSI;
	const  int _gradeEI;
	
public:
	Form(std::string name, int gradeSI, int gradeEI);
	~Form();

	std::string getName() const;
	bool getSigned() const;
	int getGradeSI() const;
	int getGradeEI() const;
	virtual void beSigned(Bureaucrat bureaucrat) = 0;

	friend std::ostream &operator<<(std::ostream &os, const Form &form);

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
};


#endif