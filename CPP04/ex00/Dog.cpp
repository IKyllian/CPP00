#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}