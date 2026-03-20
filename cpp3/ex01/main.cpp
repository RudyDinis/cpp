#include "./ScavTrap/ScavTrap.hpp"

int main(void)
{
	ScavTrap test = ScavTrap("sacrePseudo");
	test.attack("un test");
	test.takeDamage(5);
	test.beRepaired(5);
	test.takeDamage(10);
	test.attack("un test");
	test.guardGate();
	return (0);
}