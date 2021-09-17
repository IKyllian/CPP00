#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const & type) : AMateria(type)
{

}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}