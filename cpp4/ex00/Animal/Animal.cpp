#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "init Animal" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy instructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	
}

std::string Animal::getType() const
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Destroy Animal" << std::endl;
}