#include <iostream>
#include <math.h>
#include <limits>
#include <float.h>


int main(int argc, char **argv)
{
	double nbr;

	if (argc == 2)
	{
		nbr = atof(argv[1]);

		if (isinf(nbr) || isnan(nbr) || nbr > CHAR_MAX || nbr < CHAR_MIN)
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(static_cast<char>(nbr)))
			std::cout << "char: " << static_cast<char>(nbr) << std::endl;
		else
			std::cout << "char: Non Displayable" << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > INT_MAX || nbr < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nbr) << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > FLT_MAX || nbr < FLT_MIN)
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;

		if (isinf(nbr) || isnan(nbr) || nbr > DBL_MAX || nbr < DBL_MIN)
			std::cout << "double: impossible" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(nbr) << std::endl;
	}
	else
		std::cout << "Error : Argument" << std::endl;
	return (0);
}