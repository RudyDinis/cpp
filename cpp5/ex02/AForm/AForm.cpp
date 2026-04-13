#include "./AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

Form::Form(std::string name, int gradeSI, int gradeEI)
	: _name(name), _isSigned(false), _gradeSI(gradeSI), _gradeEI(gradeEI)
{
	//std::cout << "Init Form" << std::endl;

	(void)_isSigned;

	if (_gradeEI < 1 || _gradeSI < 1)
		throw GradeTooHighException();
	if (_gradeEI > 150 || _gradeSI > 150)
		throw GradeTooLowException();
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_isSigned);
}

int Form::getGradeSI() const
{
	return (_gradeSI);
}

int Form::getGradeEI() const
{
	return (_gradeEI);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "name : " << form.getName() << std::endl << "isSigned : " << (form.getSigned() ? "true" : "false") << std::endl
		<< "grade required to sign it : " << form.getGradeSI() << std::endl
		<< "grade required to execute it : " << form.getGradeEI() << std::endl;
	return (os);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeSI())
	{
		throw GradeTooLowException();
	}
	else
	{
		this->_isSigned = 1;
	}
}

Form::~Form()
{
	//std::cout << "Destroy Form" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}