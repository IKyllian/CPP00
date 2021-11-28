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
		Ice(const Ice& src);
		virtual ~Ice() {};

		Ice& operator=(const Ice& src);

		std::string const & getType() const;

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif