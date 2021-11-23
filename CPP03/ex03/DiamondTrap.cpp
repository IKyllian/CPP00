#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), name(name)
{
	std::cout << "DiamondTrap constructor of " name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destrcutor of " << name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	name = src.name;
	energy_points = src.energy_points;
	hit_point = src.hit_point;
	attack_damage = src.attack_damage;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm" << name << std::endl;
}