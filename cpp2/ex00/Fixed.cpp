#include "Fixed.hpp"

Fixed::Fixed()
	: _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_fixed_point = obj.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
	std::cout << "setRawBits member function called" << std::endl;
}