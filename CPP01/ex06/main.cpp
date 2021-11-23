#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	
	if (argc == 2)
	{
		karen.complain(argv[1]);
		return (0);
	}
	else
		std::cout << "Error : Arguments" << std::endl;
	return (1);
}