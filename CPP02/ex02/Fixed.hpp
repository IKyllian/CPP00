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

		bool operator<(const Fixed& fx) const;
		bool operator>(const Fixed& fx) const;
		bool operator<=(const Fixed& fx) const;
		bool operator>=(const Fixed& fx) const;
		
		bool operator==(const Fixed& fx) const;
		bool operator!=(const Fixed& fx) const;

		Fixed operator+(const Fixed& fx);
		Fixed operator-(const Fixed& fx);
		Fixed operator*(const Fixed& fx);
		Fixed operator/(const Fixed& fx);

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed &fx1, Fixed &fx2);
		static Fixed& max(Fixed &fx1, Fixed &fx2);
		static const Fixed& min(Fixed const &fx1, Fixed const &fx2);
		static const Fixed& max(Fixed const &fx1, Fixed const &fx2);

		Fixed& operator=(const Fixed &src);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
	
		int _value;
		static const int bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
	
#endif