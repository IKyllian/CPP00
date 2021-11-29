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
	
	return (0);
}