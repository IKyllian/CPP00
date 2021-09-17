#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public :

		Character(std::string name);
		virtual ~Character() {};

		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private :

		AMateria	*_inventory[4];
		int			_index;
		std::string _name;
};

#endif