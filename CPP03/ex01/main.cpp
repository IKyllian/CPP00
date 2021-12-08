#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap bob("Bob");
	ScavTrap zoro("Zoro");
	ScavTrap copy("BobJr");

	bob.guardGate();

	bob.attack(zoro.getName());
	zoro.takeDamage(bob.getAttackDamage());

	zoro.beRepaired(15);

	bob.setAttackDamage(100);
	copy = bob;
	
	copy.attack(zoro.getName());
	zoro.takeDamage(copy.getAttackDamage());
	
	return (0);
}