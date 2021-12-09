#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:

		AMateria() {};
		AMateria(std::string const & type);
		AMateria(const AMateria& src);
		virtual ~AMateria() {};

		AMateria& operator=(const AMateria& src);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:
	
		std::string _type;
};

#endif