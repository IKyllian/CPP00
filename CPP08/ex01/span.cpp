#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{
	_tab.reserve(size);
}

Span::Span(unsigned int size, int min, int max) : _size(size)
{
	_tab.reserve(size);
	srand(time(NULL));
	for (unsigned int i = 0; i < size; i++)
		this->_tab.push_back(min + (std::rand() % (max - min + 1)));
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
		this->_tab.push_back(number);
	else
		throw std::exception();
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

void Span::printTab()
{
	for (iterator it = this->_tab.begin(); it != this->_tab.end(); ++it)
		std::cout << *it << std::endl;
}