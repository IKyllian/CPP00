#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

// template <typename T>
// class Array
// {
// 	public :

// 		// class IndexException : public std::exception
// 		// {
// 		// 	public :

// 		// 	IndexException () {};
// 		// 	IndexException (const exception&);

// 		// 	IndexException& operator= (const exception&);

// 		// 	virtual ~IndexException() throw() {};
// 		// 	virtual const char* what() const throw();
// 		// };

// 		Array();
// 		Array(Array const &array);
// 		Array(unsigned int n);
// 		~Array();

// 		Array &operator=(Array const &array);
// 		T &operator[](size_t i);

// 		int size(void) const;

// 	private :

// 		T		*_array;
// 		size_t	_size;
// };


template <typename T>
class Array
{
	public :
		Array() : _array(NULL), _size(0) {};
		Array(Array const &array) { *this = array ;};
		Array(unsigned int n) {
			_array = new T[n];
			_size = n;
		};
		~Array() {
			if (this->_array != NULL)
				delete [] this->_array;
		};

		Array &operator=(Array const &array) {
			if (this == &array)
				return (*this);
			if (this->_size != array._size)
			{
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new T[array._size];
				this->_size = array._size;
			}
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = array._array[i];
			return (*this);
		};
		T &operator[](size_t i) {
			if (!this->_array || i < 0 || i > this->_size)
				throw std::exception();
			else
				return (this->_array[i]);
		}

		int size(void) const { return (_size); };

	private :

		T		*_array;
		size_t	_size;
};

#endif