#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound() const
{

}