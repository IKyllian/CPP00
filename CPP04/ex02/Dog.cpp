#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog Asignation Operator" << std::endl;
	_type = src._type;
	_brain = new Brain();
	*_brain = *(src._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}