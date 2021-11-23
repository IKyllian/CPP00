#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :

		ClapTrap() {};
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap &src);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void);
		unsigned int getAttackDamage(void);
		void setAttackDamage(unsigned int amount);

	private :

		std::string name;
		unsigned int energy_points;
		unsigned int hit_point;
		unsigned int attack_damage;
};

#endif