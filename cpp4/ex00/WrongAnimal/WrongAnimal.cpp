#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "init WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy instructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
	
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroy WrongAnimal" << std::endl;
}