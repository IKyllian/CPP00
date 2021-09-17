#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name)
{
	std::cout << "DiamondTrap constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destrcutor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm" << name << std::endl;
}