#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyFind(T container, int nbr)
{
    if (std::find(container.begin(), container.end(), nbr) == container.end())
        throw std::exception();
    else
        std::cout << "Occurrence found -> " << nbr << std::endl;
}

#endif