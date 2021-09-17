#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}