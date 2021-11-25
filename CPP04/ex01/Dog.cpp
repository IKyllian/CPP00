#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	_type = src._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}