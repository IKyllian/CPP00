#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public :
		Array() : _array(NULL), _size(0) {};
		Array(Array const &array) {
			if (array.size() > 0)
			{
				this->_array = new T[array.size()];
				for (size_t i = 0; i < array.size(); i++)
					this->_array[i] = array._array[i];		
				this->_size = array.size();
			}
			else
			{
				this->_array = NULL;
				this->_size = 0;
			}
		};
		Array(unsigned int n) {
			if (n > 0)
			{
				_array = new T[n];
				_size = n;
			}
			else
			{
				_array = NULL;
				_size = 0;
			}
		};
		~Array() {
			if (this->_array != NULL)
				delete [] this->_array;
		};

		Array &operator=(Array const &array) {
			if (this == &array)
				return (*this);
			if (array.size() > 0)
			{
				if (this->_size != array.size())
				{
					if (this->_array != NULL)
						delete [] this->_array;
					this->_array = new T[array._size];
					this->_size = array._size;
				}
				for (int i = 0; i < this->_size; i++)
					this->_array[i] = array._array[i];
			}
			else
			{
				this->_array = NULL;
				this->_size = 0;
			}
			return (*this);
		};

		const T& operator[](size_t i) const {
			try
			{
				if (!this->_array || i < 0 || i >= this->size())
					throw(std::exception());
				return (this->_array[i]);
			}
			catch(const std::exception& e)
			{
				std::cout << "Invalid Index" << std::endl;
				return (*this->_array);
			}
		}
		T &operator[](size_t i) {
			try
			{
				if (!this->_array || i < 0 || i >= this->size())
					throw(std::exception());
				return (this->_array[i]);
			}
			catch(const std::exception& e)
			{
				std::cout << "Invalid Index" << std::endl;
				return (*this->_array);
			}
		}

		size_t size(void) const { return (this->_size); };

	private :

		T		*_array;
		size_t	_size;
};

#endif