#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	ClapTrap zoro("zoro");
	ClapTrap copy("BobJr");

	bob.setAttackDamage(8);
	zoro.setAttackDamage(9);

	copy = bob;
	bob.attack(zoro.getName());
	zoro.takeDamage(bob.getAttackDamage());

	zoro.attack(bob.getName());
	bob.takeDamage(zoro.getAttackDamage());

	bob.beRepaired(5);

	bob.attack(zoro.getName());
	zoro.takeDamage(bob.getAttackDamage());

	copy.attack(zoro.getName());
	zoro.takeDamage(copy.getAttackDamage());
	return (0);
}