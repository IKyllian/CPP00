#include "Fixed.hpp"

int main()
{
	Fixed a;
	
	Fixed b(a);
	Fixed c;
	
	// b.setRawBits(2);
	c = b;
	// a.setRawBits(10);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}