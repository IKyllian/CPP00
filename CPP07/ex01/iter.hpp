#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void ft_iter(T *array, int length, void (*function)(T arg))
{
	for (int i = 0; i < length; i++)
		(*function)(array[i]);
}

template <typename T>
void ft_print(T arg)
{
	std::cout << "arg = " << arg <<  std::endl;
}

#endif