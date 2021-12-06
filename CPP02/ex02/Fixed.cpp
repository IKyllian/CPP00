#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	this->_value = value << bits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << bits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	_value = src.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

float Fixed::toFloat(void) const
{
	return (((float)(this->_value)) / (1 << bits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> bits);
}


int Fixed::getRawBits(void) const
{
	// std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

bool Fixed::operator<(const Fixed& fx) const
{
	return (this->_value < fx._value);
}

bool Fixed::operator>(const Fixed& fx) const
{
	return (this->_value > fx._value);
}

bool Fixed::operator<=(const Fixed& fx) const
{
	return (this->_value <= fx._value);
}

bool Fixed::operator>=(const Fixed& fx) const
{
	return (this->_value >= fx._value);
}

bool Fixed::operator==(const Fixed& fx) const
{
	return (this->_value == fx._value);
}

bool Fixed::operator!=(const Fixed& fx) const
{
	return (this->_value != fx._value);
}

Fixed Fixed::operator+(const Fixed& fx)
{
	Fixed fixed;

	fixed.setRawBits(this->_value + fx.getRawBits());
	return (fixed);
}

Fixed Fixed::operator-(const Fixed& fx) 
{
	Fixed fixed;

	fixed.setRawBits(this->_value - fx.getRawBits());
	return (fixed);
}

Fixed Fixed::operator*(const Fixed& fx)
{
	Fixed fixed;

	fixed.setRawBits(this->_value * fx.toFloat());
	return (fixed);
}

Fixed Fixed::operator/(const Fixed& fx)
{
	Fixed fixed;

	fixed.setRawBits(this->_value / fx.toFloat());
	return (fixed);
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed fixed = *this;

	++(*this);
	return (fixed);
}
		
Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed fixed = *this;

	--(*this);
	return (fixed);
}

Fixed& Fixed::min(Fixed &fx1, Fixed &fx2)
{
	if (fx1 < fx2)
		return (fx1);
	return (fx2);
}

Fixed& Fixed::max(Fixed &fx1, Fixed &fx2)
{
	if (fx1 > fx2)
		return (fx1);
	return (fx2);
}

const Fixed& Fixed::min(Fixed const &fx1, Fixed const &fx2)
{
	if (fx1 < fx2)
		return (fx1);
	return (fx2);
}
	
const Fixed& Fixed::max(Fixed const &fx1, Fixed const &fx2)
{
	if (fx1 > fx2)
		return (fx1);
	return (fx2);
}