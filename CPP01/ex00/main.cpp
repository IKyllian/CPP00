#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Alfred");
	zombie1.announce();
	
	Zombie *zombie2;
	zombie2 = newZombie("Jack");

	randomChump("Henry");

	delete zombie2;

	return (0);
}