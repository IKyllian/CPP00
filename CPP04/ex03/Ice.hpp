#ifndef ICE_HPP
#define ICE_HPP

#include  <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		Ice(std::string const & type);
		virtual ~Ice() {};

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif