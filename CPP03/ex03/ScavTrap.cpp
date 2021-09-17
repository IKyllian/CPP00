#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->energy_points = 50;
	this->hit_point = 100;
	this->attack_damage = 20;
	std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attack " <<  target << " causing " << attack_damage << " attack damage" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << name << " begin the guard gate" << std::endl;
}