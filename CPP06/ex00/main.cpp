#include <iostream>
#include <math.h>
#include <limits>
#include <float.h>


int main(int argc, char **argv)
{
	double nbr;
	std::string str;

	if (argc == 2)
	{
		
		str = argv[1];
		// is_inf = ((str == "inf" == 0) || str == "inff" == 0) || str == "+inff" == 0) || str == "inf" == 0) || str == "inf" == 0) || );
		// if (str.length() != 1 && !(str[0] >= 48 && str[0] <= 57))
		// {
		// 	std::cout << "Syntax Error" << std::endl;
		// 	return (1);
		// }
		// if (str.length() == 1 && !((str[0] >= 0 && str[0] <= 32) || (str[0] >= 48 && str[0] <= 57)))
		// 	nbr = static_cast<double>(argv[1][0]);
		// else
			nbr = atof(argv[1]);

		// ********* To char *********
		if (isinf(nbr) || isnan(nbr) || nbr > CHAR_MAX || nbr < CHAR_MIN)
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(static_cast<char>(nbr)))
			std::cout << "char: " << static_cast<char>(nbr) << std::endl;
		else
			std::cout << "char: Non Displayable" << std::endl;

		// ********* To int *********
		int i_nb = static_cast<int>(nbr);
		if (isinf(nbr) || isnan(nbr) || nbr > INT_MAX || nbr < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i_nb << std::endl;

		// ********* To float *********
		float f_nb = static_cast<float>(nbr);
		if (nbr - f_nb == 0)
			std::cout << "float: " << f_nb << ".0f" << std::endl;
		else
			std::cout << "float: " << f_nb << "f" << std::endl;

		// ********* To double *********
		double d_nb = static_cast<double>(nbr);
		if (nbr - f_nb == 0)
			std::cout << "double: " << d_nb << ".0" << std::endl;
		else
			std::cout << "double: " << d_nb << std::endl;
	}
	else
		std::cout << "Error : Argument" << std::endl;
	return (0);
}