#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream file;
	std::string str;
	std::string file_name;
	int j;
	int y;

	if (argc == 4)
	{
		file.open(argv[1], std::ios::in);
		if (file)
		{
			file_name = argv[1];
			file_name.insert(file_name.length(), ".replace");
			std::ofstream new_file(file_name);
			if (new_file)
			{
				while (getline(file, str))
				{
					for (unsigned int i = 0; i < str.length(); i++)
					{
						j = 0;
						if (str[i] == argv[2][j])
						{
							y = i;
							while (str[y] == argv[2][j])
							{
								if (argv[2][j + 1] == '\0')
								{
									str.erase(i, y - i + 1);
									str.insert(i, argv[3]);
									break;
								}
								y++;
								j++;
							}
							i = y;
						}
					}
					new_file << str << std::endl;
				}
				file.close();
				new_file.close();
				return (0);		
			}
			else
				std::cout << "Error with file" << std::endl;
		}
		else
			std::cout << "Error with file" << std::endl;
	}
	else
		std::cout << "Error: Arguments" << std::endl;
	return (1);
}