#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(2);
	Fixed d(5);

	Fixed e = c + d;
	std::cout << e << std::endl;

	e = d - c;
	std::cout << e << std::endl;

	e = c * d;
	std::cout << e << std::endl;

	e = d / c;
	std::cout << e << std::endl;

	return 0;
}