#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "init Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woaf !" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy instructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
	}
	return (*this);
}

std::string Dog::getType() const
{
	return (type);
}


Dog::~Dog()
{
	delete brain;
	std::cout << "destroy Dog" << std::endl;
}