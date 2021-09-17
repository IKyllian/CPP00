#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap zoro("Zoro");
	ClapTrap mihawk("Mihawk");
	ScavTrap nakomamushi("Nekomamushi");
	ScavTrap kaido("Kaido");
	FragTrap luffy("Luffy");

	zoro.setAttackDamage(8);
	mihawk.setAttackDamage(9);

	nakomamushi.guardGate();

	zoro.attack(kaido.getName());
	kaido.takeDamage(zoro.getAttackDamage());

	nakomamushi.attack(kaido.getName());
	kaido.takeDamage(nakomamushi.getAttackDamage());

	kaido.beRepaired(15);

	nakomamushi.attack(kaido.getName());
	kaido.takeDamage(nakomamushi.getAttackDamage());
	
	zoro.attack(mihawk.getName());
	mihawk.takeDamage(zoro.getAttackDamage());

	mihawk.attack(zoro.getName());
	zoro.takeDamage(mihawk.getAttackDamage());

	zoro.beRepaired(5);

	zoro.attack(mihawk.getName());
	mihawk.takeDamage(zoro.getAttackDamage());
	return (0);
}