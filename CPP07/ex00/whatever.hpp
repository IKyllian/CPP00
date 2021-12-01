#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void ft_swap(T &value1, T &value2);

template <typename T>
T ft_min(T value1, T value2);

template <typename T>
T ft_max(T value1, T value2);

// template <typename T>
// void ft_swap(T &value1, T &value2)
// {
// 	T temp;

// 	temp = value1;
// 	value1 = value2;
// 	value2 = temp;
// }

// template <typename T>
// T ft_min(T value1, T value2)
// {
// 	if (value1 < value2)
// 		return (value1);
// 	else
// 		return (value2);
// }

// template <typename T>
// T ft_max(T value1, T value2)
// {
// 	if (value1 > value2)
// 		return (value1);
// 	else
// 		return (value2);
// }

#endif