#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :

		Animal();
		Animal(const Animal &src);
		virtual ~Animal();

		Animal& operator=(const Animal &src);
		std::string getType(void) const;
		virtual void makeSound() const {};

	protected :

		std::string _type;
};

#endif