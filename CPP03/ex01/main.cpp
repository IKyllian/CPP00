#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap nekomamushi("Nekomamushi");
	ScavTrap kaido("Kaido");

	nekomamushi.guardGate();


	nekomamushi.attack(kaido.getName());
	kaido.takeDamage(nekomamushi.getAttackDamage());

	kaido.beRepaired(15);

	nekomamushi.attack(kaido.getName());
	kaido.takeDamage(nekomamushi.getAttackDamage());
	
	return (0);
}