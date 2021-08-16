#include <iostream>

char ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;
		int j;

		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << ft_toupper(argv[i][j++]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}