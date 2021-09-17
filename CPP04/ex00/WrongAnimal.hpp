#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :

	WrongAnimal();
	virtual ~WrongAnimal();

	std::string getType(void) const;
	virtual void makeSound() const;

	protected :

	std::string _type;
};

#endif