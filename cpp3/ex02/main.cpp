#include "./FragTrap/FragTrap.hpp"

int main(void)
{
	FragTrap test = FragTrap("sacrePseudo");
	test.attack("un test");
	test.takeDamage(5);
	test.beRepaired(5);
	test.takeDamage(10);
	test.attack("un test");
	test.highFivesGuys();
	return (0);
}