#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span 
{
	public :
		Span() {};
		Span(unsigned int size);
		Span(const Span &src);
		~Span() {};

		Span &operator=(const Span &src);

		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

	private :
		unsigned int _size;
		std::vector<int> _tab;
};

#endif