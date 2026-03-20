#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "init " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
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

ClapTrap::~ClapTrap()
{
	std::cout << "destroy " << _name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_health == 0 || _energy == 0)
	{
		std::cout << _name << " dont have any hp or energy (hp: " << _health << " energy: " << _energy << ")" << std::endl;
		return;
	}
	_energy -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_health <= 0)
	{
		std::cout << _name << " Already have 0 hp" << std::endl;
		return;
	}
	if ((int)amount >= _health)
		_health = 0;
	else
		_health -= amount;
	std::cout << "ClapTrap loses " << amount << "hp" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_health == 0 || _energy == 0)
	{
		std::cout << _name << " doesn't have any hp or energy (hp: " << _health << " energy: " << _energy << ")" << std::endl;
		return;
	}
	_health += amount;
	std::cout << "ClapTrap " << _name << " be repaired, giving " << amount << "point of health" << std::endl;
}