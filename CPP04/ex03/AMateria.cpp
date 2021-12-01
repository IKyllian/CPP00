#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}