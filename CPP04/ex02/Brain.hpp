#ifndef BRAIN_HPP
#define BRAIN_HPP

#define TAB_SIZE 100

#include <iostream>

class Brain
{
	public :

		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain& operator=(const Brain &src);

		std::string const &getIdeas(int idx);
		void setIdeas(std::string idea, int idx);

	private : 
		std::string _ideas[TAB_SIZE];
};

#endif