#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#define ARRAY_SIZE 4

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public :

		Character(std::string name);
		Character(const Character& src);
		virtual ~Character();

		Character& operator=(const Character& src);

		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private :

		AMateria *_inventory[ARRAY_SIZE];
		std::string _name;
};

#endif