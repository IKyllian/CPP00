#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->energy_points = 50;
	this->hit_point = 100;
	this->attack_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if (this == &src)
		return (*this);
	name = src.name;
	energy_points = src.energy_points;
	hit_point = src.hit_point;
	attack_damage = src.attack_damage;
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	if (this->hit_point > 0)
		std::cout << "ScavTrap " << name << " attack " <<  target << " causing " << attack_damage << " attack damage" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->hit_point > 0)
		std::cout << name << " begin the guard gate" << std::endl;
}