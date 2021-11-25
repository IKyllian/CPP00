#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}
	
Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	(void)src;
	// ideas = src.ideas;
	return (*this);
}