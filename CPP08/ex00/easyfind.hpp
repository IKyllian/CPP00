#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyfind(T container, int nbr)
{
    T<int>::iterator it;

    for (it = container.begin(); it != container.end(); ++it)
    {
        if (*it == nbr)
        {
            std::cout << *it << std::endl;
            return ;
        }
    }
    std::cout << "No occurrence found" << std::endl;
}

#endif