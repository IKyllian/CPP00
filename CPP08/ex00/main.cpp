#include "easyfind.hpp"

int main()
{
    std::vector<int> tab;
	for (int i = 10; i >= 0; i--)
		tab.push_back(i);
	easyfind(tab, 0);
	easyfind(tab, 2);
	easyfind(tab, 5);
	easyfind(tab, 10);
	easyfind(tab, 11);
	easyfind(tab, -1);
    return (0);
}