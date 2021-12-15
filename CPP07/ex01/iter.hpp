#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void ft_iter(T *array, int length, void (*function)(T const &arg))
{
	if (length > 0)
	{
		for (int i = 0; i < length; i++)
			(*function)(array[i]);
	}
}

template <typename T>
void ft_print(T const &arg)
{
	std::cout << "arg = " << arg <<  std::endl;
}

#endif