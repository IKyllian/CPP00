#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

	Fixed();
	Fixed(const Fixed &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed& operator=(const Fixed &src);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	

	private:
	
	int value_fixe;
	static const int bits;


};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
	
#endif