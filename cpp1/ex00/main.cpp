#include "Zombie.hpp"

int main(void)
{
	Zombie *test = newZombie("test");
	test->annonce();
	Zombie *test1 = newZombie("zombie");
	test1->annonce();
	delete test;
	delete test1;

	randomChump("Chump");
}