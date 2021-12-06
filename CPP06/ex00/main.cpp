#include <iostream>
#include <math.h>
#include <limits>
#include <float.h>


int main(int argc, char **argv)
{
	bool is_inf;
	std::string str;
	double nbr;

	if (argc == 2)
	{
		str = argv[1];
		is_inf = (str.compare("+inf") == 0 || str.compare("-inf") == 0
					|| str.compare("+inff") == 0 || str.compare("-inff") == 0
					|| str.compare("nan") == 0 || str.compare("nanf") == 0);
		std::cout << is_inf << std::endl;

		nbr = atof(argv[1]);

		if (isinf(nbr) || isnan(nbr) || nbr > CHAR_MAX || nbr < CHAR_MIN)
			std::cout << "impossible" << std::endl;
		else if (std::isprint(static_cast<char>(nbr)))
			std::cout << "char: " << static_cast<char>(nbr) << std::endl;
		else
			std::cout << "Non Displayable" << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > INT_MAX || nbr < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nbr) << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > FLT_MAX || nbr < FLT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > DBL_MAX || nbr < DBL_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(nbr) << std::endl;

		
	}
	else
		std::cout << "Error : Argument" << std::endl;
	return (0);
}