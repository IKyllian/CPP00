#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value_fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	value_fixe = src.getRawBits();
	return *this;
}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (value_fixe);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value_fixe = raw;
}