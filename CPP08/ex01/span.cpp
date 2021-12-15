#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{
	_tab.reserve(size);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	this->_size = src._size;
	this->_tab.resize(src._size);
	this->_tab = src._tab;
	return (*this);
}

void Span::addNumber(int number)
{
	if (this->_tab.size() < this->_size)
		this->_tab.insert(this->_tab.end(), number);
	else
		throw std::exception();
}

void Span::addMultipleNumbers(iterator begin, iterator end, int min, int max)
{
	std::vector<int> vect = _tab;
	iterator it = vect.begin();
	int nbr;
	for (; it != vect.end(); ++it)
	{
		std::cout << "Test" << std::endl;
		if (*it == *begin)
			break;
	}
	for (; it != end; it++)
	{
		nbr = min + ( std::rand() % ( max - min + 1 ) );
		this->_tab.insert(it, nbr);
	}
}

int Span::shortestSpan() const
{
	iterator shortest;
	std::vector<int> vect = _tab;
	
	if (this->_tab.size() > 1)
	{
		for (iterator it = vect.begin(); it != vect.end(); ++it)
		{	
			if (it == vect.begin())
				shortest = it;
			if (*it < *shortest)
				shortest = it;
		}
		return (*shortest);
	}
	else
		throw std::exception();
}
	
int Span::longestSpan() const
{
	iterator longuest;
	std::vector<int> vect = _tab;
	
	if (this->_tab.size() > 1)
	{
		for (iterator it = vect.begin(); it != vect.end(); ++it)
		{
			if (it == vect.begin())
				longuest = it;
			if (*it > *longuest)
				longuest = it;
		}
		return (*longuest);
	}
	else
		throw std::exception();
}