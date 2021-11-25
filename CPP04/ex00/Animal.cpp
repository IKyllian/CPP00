#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	_type = src._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}