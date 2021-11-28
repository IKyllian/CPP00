#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Asignation Operator" << std::endl;
	_type = src._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal" << std::endl;
}