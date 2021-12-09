#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}
	
Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	for(int i = 0; i < TAB_SIZE; i++)
		_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	std::cout << "Brain Asignation Operator" << std::endl;
	if (this == &src)
		return (*this);
	for(int i = 0; i < TAB_SIZE; i++)
		_ideas[i] = src._ideas[i];
	return (*this);
}

std::string const &Brain::getIdeas(int idx)
{
	return (this->_ideas[idx]);
}

void Brain::setIdeas(std::string idea, int idx)
{
	this->_ideas[idx] = idea;
}