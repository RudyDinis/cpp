#include "./ClapTrap/ClapTrap.hpp"

int main(void)
{
	ClapTrap test = ClapTrap("sacrePseudo");
	test.attack("un test");
	test.takeDamage(5);
	test.beRepaired(5);
	test.takeDamage(10);
	test.attack("un test");
	return (0);
}