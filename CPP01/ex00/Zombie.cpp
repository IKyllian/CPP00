#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ" << std::endl;
}

std::string Zombie::getName() const
{
	return (name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}


