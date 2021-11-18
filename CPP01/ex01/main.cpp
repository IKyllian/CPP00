#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Alfred");
	zombie1.announce();

	Zombie *zombie2;
	zombie2 = zombieHorde(SIZE, "Jack");

	for (int i = 0; i < SIZE; i++)
		zombie2->announce();

	delete [] zombie2;

	return (0);
}