#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	_type = src._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}