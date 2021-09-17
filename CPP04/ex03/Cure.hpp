#ifndef CURE_HPP
#define CURE_HPP

#include  <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		Cure(std::string const & type);
		virtual ~Cure(){};

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif