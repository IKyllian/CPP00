#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
	for (int i = 0; i < TAB_SIZE; i++)
		this->_brain->setIdeas(src._brain->getIdeas(i), i);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog Asignation Operator" << std::endl;
	if (this == &src)
		return (*this);
	_type = src._type;
	delete _brain;
	_brain = new Brain();
	for (int i = 0; i < TAB_SIZE; i++)
		_brain->setIdeas(src._brain->getIdeas(i), i);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}

void Dog::putStrings()
{
	this->_brain->setIdeas("Ceci", 0);
	this->_brain->setIdeas("est", 1);
	this->_brain->setIdeas("un", 2);
	this->_brain->setIdeas("test", 3);
}

void Dog::printStrings()
{
	for (int i = 0; i < 4; i++)
		std::cout << this->_brain->getIdeas(i) << std::endl;
}