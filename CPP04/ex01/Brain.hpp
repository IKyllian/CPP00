#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :

		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain& operator=(const Brain &src);

	protected :

		std::string _ideas[100];
};

#endif