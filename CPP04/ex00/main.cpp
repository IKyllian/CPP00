#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
	const WrongAnimal* beta = new WrongAnimal();
    const Animal* j = new Dog();
	const WrongAnimal* h = new WrongCat();
    const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;

	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	h->makeSound();
	meta->makeSound();
	beta->makeSound();

	delete i;
	delete j;
	delete h;
	delete meta;
	delete beta;
}