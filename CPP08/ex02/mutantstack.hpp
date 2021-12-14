#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

		MutantStack<T>() {}
		MutantStack<T>(const MutantStack<T> &src) {
			*this = src;
		}
		~MutantStack<T>() {}

		MutantStack<T>	&operator=(const MutantStack<T> &rhs) {
			(void)rhs;
			return *this;
		}

		std::stack<T>::iterator 	begin(void)
		std::stack<T>::iterator 	end(void)
};

#endif