#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->energy_points = 100;
	this->hit_point = 100;
	this->attack_damage = 30;

	std::cout << "FragTrap Constructor of " << name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor of " << name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this == &src)
		return (*this);
	name = src.name;
	energy_points = src.energy_points;
	hit_point = src.hit_point;
	attack_damage = src.attack_damage;
	return *this;
}

void highFivesGuys(void)
{
	std::cout << "High Five" << std::endl;
}

