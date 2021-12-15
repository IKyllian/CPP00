#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

typedef std::vector<int>::iterator iterator;
class Span 
{
	public :
		Span() {};
		Span(unsigned int size);
		Span(unsigned int size, int min, int max);
		Span(const Span &src);
		~Span() {};

		Span &operator=(const Span &src);

		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

		void printTab();
		int getSize() const;

	private :
		unsigned int _size;
		std::vector<int> _tab;
};

#endif