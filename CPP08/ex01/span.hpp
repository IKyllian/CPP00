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
		Span(const Span &src);
		~Span() {};

		Span &operator=(const Span &src);

		void addNumber(int number);
		void addMultipleNumbers(iterator it, iterator it2, int min, int max);
		int shortestSpan() const;
		int longestSpan() const;
		
		std::vector<int> _tab;
	private :
		unsigned int _size;
		// std::vector<int> _tab;
};

#endif