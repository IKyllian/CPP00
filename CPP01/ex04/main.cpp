#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string.h>
#include <cerrno>

int main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream new_file; 
	std::string str;
	std::string file_name;
	int index;

	if (argc == 4)
	{
		file.open(argv[1], std::ios::in);
		if (file)
		{
			file_name = argv[1];
			file_name.insert(file_name.length(), ".replace");
			new_file.open(file_name, std::ios::out);
			if (new_file)
			{
				while (getline(file, str))
				{
					index = 0;
					for (std::string::size_type ret = 1; (ret = str.find(argv[2], index)) != std::string::npos;)
					{
						str.erase(ret, strlen(argv[2]));
						str.insert(ret, argv[3]);
						index = ret + strlen(argv[2]);
					}
					new_file << str << std::endl;
				}
				file.close();
				new_file.close();
				return (0);		
			}
			else
				std::cout << "Error : " << strerror(errno) << std::endl;
		}
		else
			std::cout << "Error : " << strerror(errno) << std::endl;
	}
	else
		std::cout << "Error: Arguments" << std::endl;
	return (1);
}