#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat" << std::endl;
}