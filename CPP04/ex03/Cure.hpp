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
		Cure(const Cure& src);
		virtual ~Cure(){};

		Cure& operator=(const Cure& src);

		std::string const & getType() const;

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif