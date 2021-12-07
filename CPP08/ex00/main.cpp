#include "easyfind.hpp"

int main()
{
    std::vector<int> tab;
	for (int i = 10; i >= 0; i--)
		tab.push_back(i);
	try {
		easyfind(tab, 0);
		easyfind(tab, 11);
	} catch (std::exception &what){
		std::cout << "No occurrence found" << std::endl;
	}
	try {
		easyfind(tab, 10);
		easyfind(tab, -1);
	} catch (std::exception &what){
		std::cout << "No occurrence found" << std::endl;
	}
    return (0);
}