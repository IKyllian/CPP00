#include "span.hpp"

int main()
{
	std::cout << "FIRST" << std::endl;
	{
		Span span(5);

		try {
			span.addNumber(3);
			span.addNumber(5);
			span.addNumber(1);
			span.addNumber(20);
			span.addNumber(30);
			span.addNumber(40);
		} catch (std::exception &what) {
			std::cout << "Taille du tableau trop petit" << std::endl;
		}

		try {
			std::cout << "Shortest " << span.shortestSpan() << std::endl;
			std::cout << "Longest " << span.longestSpan() << std::endl;
		} catch (std::exception &what) {
			std::cout << "Pas assez de nombre dans le tableau" << std::endl;
		}
	}
	std::cout << std::endl << "SECOND" << std::endl;
	{
		Span span(5);

		try {
			std::cout << span.shortestSpan() << std::endl;
		} catch (std::exception &what) {
			std::cout << "Pas assez de nombre dans le tableau" << std::endl;
		}

		try {
			span.addNumber(3);
		} catch (std::exception &what) {
			std::cout << "Taille du tableau trop petit" << std::endl;
		}

		try {
			std::cout << span.shortestSpan() << std::endl;
		} catch (std::exception &what) {
			std::cout << "Pas assez de nombre dans le tableau" << std::endl;
		}

		try {
			span.addNumber(-2);
		} catch (std::exception &what) {
			std::cout << "Taille du tableau trop petit" << std::endl;
		}

		try {
			std::cout << "Shortest " << span.shortestSpan() << std::endl;
		} catch (std::exception &what) {
			std::cout << "Pas assez de nombre dans le tableau" << std::endl;
		}
	}
	std::cout << std::endl << "THIRD" << std::endl;
	{
		Span span(15, -30, 30);

		span.printTab();

		try {
			std::cout << "Shortest " << span.shortestSpan() << std::endl;
			std::cout << "Longest " << span.longestSpan() << std::endl;
		} catch (std::exception &what) {
			std::cout << "-Taille du tableau trop petit" << std::endl;
		}

		Span span2(span);

		try {
			span2.addNumber(3);
		} catch (std::exception &what) {
			std::cout << "Taille du tableau trop petit" << std::endl;
		}
	}

	return (0);
}