#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public :

		Dog();
		Dog(const Dog &src);
		virtual ~Dog();

		Dog& operator=(const Dog &src);

		std::string getType(void) const;
		virtual void makeSound() const;
};

#endif