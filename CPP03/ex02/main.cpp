#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap kaido("Kaido");
	FragTrap luffy("Luffy");

	luffy.attack(kaido.getName());
	kaido.takeDamage(luffy.getAttackDamage());

	kaido.attack(luffy.getName());
	luffy.takeDamage(kaido.getAttackDamage());

	luffy.beRepaired(15);

	luffy.attack(kaido.getName());
	kaido.takeDamage(luffy.getAttackDamage());
	
	return (0);
}