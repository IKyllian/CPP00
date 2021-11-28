#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const & type) : AMateria(type) {}

Cure::Cure(const Cure& src)
{
	*this = src;
}

Cure& Cure::operator=(const Cure& src)
{
	this->_type = src.getType();
	return (*this);
}

std::string const & Cure::getType() const
{
	return (this->_type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}