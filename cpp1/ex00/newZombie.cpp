#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *test = new Zombie(name);
	return test;
}