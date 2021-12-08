#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), energy_points(10), hit_point(10), attack_damage(0)
{
	std::cout << "Constructor of " << name << " Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of " << name << " Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return (*this);
	name = src.name;
	energy_points = src.energy_points;
	hit_point = src.hit_point;
	attack_damage = src.attack_damage;
	return *this;
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return (this->attack_damage);
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attack_damage = amount;
	std::cout << name << "'s attack damage set to " << amount << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->hit_point > 0)
		std::cout << name << " attack " <<  target << " causing " << attack_damage << " attack damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point > 0)
	{
		if (amount > hit_point)
			hit_point = 0;
		else
			hit_point -= amount;
		std::cout << name << " take " <<  amount << " damage" << std::endl;
		if (hit_point > 0)
			std::cout << name << " has " <<  hit_point << " hit points left" << std::endl;
		else
			std::cout << name << " is dead " << std::endl;
	}
	else
		std::cout << name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0)
	{
		if (amount > energy_points)
			energy_points = 0;
		else
			energy_points -= amount;
		hit_point += amount;
		std::cout << name << "'s hit points restaured to " << hit_point << std::endl;
		std::cout << name << "'s Energy point : " << energy_points << std::endl;
	}
	else
		std::cout << "Not enough energy" << std::endl;
}