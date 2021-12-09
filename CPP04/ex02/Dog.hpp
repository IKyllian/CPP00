#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :

		Dog();
		Dog(const Dog &src);
		virtual ~Dog();

		Dog& operator=(const Dog &src);

		virtual void makeSound() const;

		// *** Functions to test deep copy (not in subject) ***
		void putStrings();
		void printStrings();

	private :

		Brain *_brain;
};

#endif