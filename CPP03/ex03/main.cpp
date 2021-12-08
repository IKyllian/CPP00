#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap bob("Bob");
	DiamondTrap zoro("Zoro");

	bob.attack(zoro.getName());
	zoro.takeDamage(bob.getAttackDamage());

	zoro.beRepaired(20);
	bob.whoAmI();


	return (0);
}