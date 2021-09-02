#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &weapon);

	private :
	std::string name;
	Weapon *weapon; //Utilise pointeur car HumanB peut ne pas avoir d'arme au debut et on ne peut pas utilisé une reference sans initialisation
};

#endif