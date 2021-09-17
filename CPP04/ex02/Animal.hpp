#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :

	Animal();
	virtual ~Animal();

	std::string getType(void) const;
	virtual void makeSound() const = 0;

	protected :

	std::string _type;
};

#endif