#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const & type) : AMateria(type) {}

Ice::Ice(const Ice& src)
{
	*this = src;
}

Ice& Ice::operator=(const Ice& src)
{
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

std::string const & Ice::getType() const
{
	return (this->_type);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}