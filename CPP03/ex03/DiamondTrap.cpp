#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "clap_name"), name(name)
{
	hit_point = FragTrap::hit_point;
	energy_points =  ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap constructor of " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destrcutor of " << name << " called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this == &src)
		return (*this);
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