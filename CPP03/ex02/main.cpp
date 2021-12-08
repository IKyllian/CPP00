#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap bob("Bob");
	FragTrap zoro("Zoro");
	FragTrap copy("BobJr");

	zoro.attack(bob.getName());
	bob.takeDamage(zoro.getAttackDamage());

	bob.attack(zoro.getName());
	zoro.takeDamage(bob.getAttackDamage());

	zoro.beRepaired(15);

	bob.setAttackDamage(100);
	copy = bob;

	copy.attack(zoro.getName());
	zoro.takeDamage(copy.getAttackDamage());
	
	return (0);
}