#include "./FragTrap.hpp"
#include "../ClapTrap/ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap init " << name << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_health = obj._health;
		_attack = obj._attack;
		_energy = obj._energy;
		_name = obj._name;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroy " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " request a high-fives" << std::endl;
}