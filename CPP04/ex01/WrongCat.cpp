#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "GRRRrrrRRRR GRrrrRRRRRRR" << std::endl;
}