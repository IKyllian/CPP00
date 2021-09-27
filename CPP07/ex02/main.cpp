#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_array = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(Array const &array)
{
	*this = array;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array != NULL)
		delete [] this->_array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &array)
{
	if (this == &array)
		return (*this);
	if (this->_size != array._size)
	{
		if (this->_array != NULL)
			delete [] this->_array;
		this->_array = new T[array._size];
		this->_size = array._size;
	}
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = array._array[i];
	return (*this);
}

template <typename T>
int Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
T &Array<T>::operator[](size_t i)
{
	if (!this->_array || i < 0 || i > this->_size)
		throw std::exception();
	else
		return (this->_array[i]);
}

// template <typename T>
// Array<T>::IndexException::IndexException (const exception& e)
// {
// 	*this = e;
// }

// template <typename T>
// Array<T>::IndexException& Array<T>::IndexException::operator=(const exception &e)
// {
// 	(void)e;
// 	return (*this);
// }

// template <typename T>
// const char* Array<T>::IndexException::what() const throw()
// {
// 	return ("This index does not exist");
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}