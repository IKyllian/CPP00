#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}