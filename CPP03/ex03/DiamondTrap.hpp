#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap
{
	public :
	DiamondTrap(std::string name);
	~DiamondTrap();
	void whoAmI();

	private :


};

#endif