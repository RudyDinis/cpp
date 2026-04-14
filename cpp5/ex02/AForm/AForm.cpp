#include "./AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeSI, int gradeEI)
	: _name(name), _isSigned(false), _gradeSI(gradeSI), _gradeEI(gradeEI)
{
	//std::cout << "Init Form" << std::endl;

	(void)_isSigned;

	if (_gradeEI < 1 || _gradeSI < 1)
		throw GradeTooHighException();
	if (_gradeEI > 150 || _gradeSI > 150)
		throw GradeTooLowException();
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_isSigned);
}

int AForm::getGradeSI() const
{
	return (_gradeSI);
}

int AForm::getGradeEI() const
{
	return (_gradeEI);
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "name : " << form.getName() << std::endl << "isSigned : " << (form.getSigned() ? "true" : "false") << std::endl
		<< "grade required to sign it : " << form.getGradeSI() << std::endl
		<< "grade required to execute it : " << form.getGradeEI() << std::endl;
	return (os);
}

void AForm::beSigned(Bureaucrat bureaucrat)
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

AForm::~AForm()
{
	//std::cout << "Destroy Form" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}