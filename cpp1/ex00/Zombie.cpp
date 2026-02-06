#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::name = name;
}

Zombie::~Zombie()
{
	std::cout << name << ":" << " is dead(free)" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}