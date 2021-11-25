#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	const WrongAnimal* wrongAnimal = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete wrongCat;
	delete meta;
	delete wrongAnimal;
}