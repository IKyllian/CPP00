#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat Asignation Operator" << std::endl;
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat" << std::endl;
}