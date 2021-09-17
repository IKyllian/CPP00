#include "ClapTrap.hpp"

int main()
{
	ClapTrap zoro("Zoro");
	ClapTrap mihawk("Mihawk");

	zoro.setAttackDamage(8);
	mihawk.setAttackDamage(9);

	zoro.attack(mihawk.getName());
	mihawk.takeDamage(zoro.getAttackDamage());

	mihawk.attack(zoro.getName());
	zoro.takeDamage(mihawk.getAttackDamage());

	zoro.beRepaired(5);

	zoro.attack(mihawk.getName());
	mihawk.takeDamage(zoro.getAttackDamage());
	return (0);
}