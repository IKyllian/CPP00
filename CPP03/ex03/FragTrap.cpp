#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Constructor" << std::endl;
	this->energy_points = 100;
	this->hit_point = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

void highFivesGuys(void)
{
	std::cout << "High Five" << std::endl;
}

