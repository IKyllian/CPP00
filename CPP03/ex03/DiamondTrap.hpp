#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap
{
	public :
		DiamondTrap() {};	
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap& src);

		void whoAmI();

	private :
		std::string name;
};

#endif