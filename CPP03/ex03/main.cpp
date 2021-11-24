#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap kaido("Kaido");
	DiamondTrap luffy("Luffy");

	luffy.attack(kaido.getName());
	kaido.takeDamage(luffy.getAttackDamage());

	luffy.guardGate();
	kaido.beRepaired(20);
	// kaido.attack(luffy.getName());
	// luffy.takeDamage(kaido.getAttackDamage());

	// luffy.beRepaired(15);

	// luffy.attack(kaido.getName());
	// kaido.takeDamage(luffy.getAttackDamage());
	
	return (0);
}