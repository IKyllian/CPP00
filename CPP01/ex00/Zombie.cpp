#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie *zombie = this->newZombie(name);
	
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


