#include "easyfind.hpp"

int main()
{
    std::vector<int> tab;
	for (int i = 10; i >= 0; i--)
		tab.push_back(i);
	try {
		easyFind(tab, 0);
		easyFind(tab, 11);
	} catch (std::exception &what){
		std::cout << "No occurrence found" << std::endl;
	}
	try {
		easyFind(tab, 10);
		easyFind(tab, -1);
	} catch (std::exception &what){
		std::cout << "No occurrence found" << std::endl;
	}
    return (0);
}