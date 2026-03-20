#include "./ScavTrap.hpp"
#include "../ClapTrap/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap init " << name << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroy " << _name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_health == 0 || _energy == 0)
	{
		std::cout << _name << " dont have any hp or energy (hp: " << _health << " energy: " << _energy << ")" << std::endl;
		return;
	}
	_energy -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
