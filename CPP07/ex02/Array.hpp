#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public :

		// class IndexException : public std::exception
		// {
		// 	public :

		// 	IndexException () {};
		// 	IndexException (const exception&);

		// 	IndexException& operator= (const exception&);

		// 	virtual ~IndexException() throw() {};
		// 	virtual const char* what() const throw();
		// };

		Array();
		Array(Array const &array);
		Array(unsigned int n);
		~Array();

		Array &operator=(Array const &array);
		T &operator[](size_t i);

		int size(void) const;

	private :

		T		*_array;
		size_t	_size;
};

#endif