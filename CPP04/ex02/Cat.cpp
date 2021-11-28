#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	std::cout << "Cat Asignation Operator" << std::endl;
	_type = src._type;
	_brain = new Brain();
	*_brain = *(src._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}