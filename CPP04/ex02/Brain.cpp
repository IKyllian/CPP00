#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}
	
Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	std::cout << "Brain Asignation Operator" << std::endl;
	(void)src;
	// ideas = src.ideas;
	return (*this);
}