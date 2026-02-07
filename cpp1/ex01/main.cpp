#include "Zombie.hpp"

int main(void)
{
	int N = 42;
	int i = 0;
	Zombie *zombie = zombieHorde(N, "test");
	while (i < N)
	{
		zombie[i].annonce();
		i++;
	}
	delete[] zombie;
	return 0;
}