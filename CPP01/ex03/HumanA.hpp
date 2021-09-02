#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();

	private :
	std::string name;
	Weapon &weapon; //Utilise reference car l'arme est directement initialisé avec le constructeur
};

#endif