#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	: _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
	: _fixed_point(number << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
	: _fixed_point(roundf(number * (1 << 8)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)_fixed_point / (1 << 8));
}

int Fixed::toInt( void ) const 
{
	return (_fixed_point >> 8);
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
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
		_fixed_point = obj._fixed_point;
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