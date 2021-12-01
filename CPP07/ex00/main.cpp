#include "whatever.hpp"

// template <typename T>
// void ft_swap(T &value1, T &value2)
// {
// 	T temp;

// 	temp = value1;
// 	value1 = value2;
// 	value2 = temp;
// }

// template <typename T>
// T ft_min(T value1, T value2)
// {
// 	if (value1 < value2)
// 		return (value1);
// 	else
// 		return (value2);
// }

// template <typename T>
// T ft_max(T value1, T value2)
// {
// 	if (value1 > value2)
// 		return (value1);
// 	else
// 		return (value2);
// }

int main(void)
{
	int a = 1;
	int b = 2;
	int b2 = 2;
	float z = 42.6;
	float y = 100.2;
	char c1 = 'a';
	char c2 = 'b';

	ft_swap(a, b);
	std::cout << "a = " << a << " | b = " << b << std::endl;
	ft_swap(c1, c2);
	std::cout << "c1 = " << c1 << " | c2 = " << c2 << std::endl;

	ft_swap(z, y);
	std::cout << "z = " << z << " | y = " << y << std::endl;

	a = 1;
	b = 2;
	b2 = 2;
	c1 = 'a';
	c2 = 'b';

	std::cout << "values : 1 and 2. Min -> " << ft_min(a, b) << std::endl;
	std::cout << "values : 2 and 2. Min -> " << ft_min(b2, b) << std::endl;
	std::cout << "values : a and b. Min -> " << ft_min(c1, c2) << std::endl;

	std::cout << "values : 1 and 2. Max -> " << ft_max(a, b) << std::endl;
	std::cout << "values : 2 and 2. Max -> " << ft_max(b2, b) << std::endl;
	std::cout << "values : a and b. Max -> " << ft_max(c1, c2) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	ft_swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ft_min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ft_max( c, d ) << std::endl;

	return (0);
}