#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyfind(T container, int nbr)
{
    typename T::iterator it;

    for (it = container.begin(); it != container.end(); ++it)
    {
        if (*it == nbr)
        {
            std::cout << *it << std::endl;
            return ;
        }
    }
    throw std::exception();
    // std::cout << "No occurrence found" << std::endl;
}

#endif