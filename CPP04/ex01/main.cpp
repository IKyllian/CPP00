#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog basic;

	{
		Dog tmp = basic;
	}
	std::cout << "End of scope" << std::endl;
    // Animal* tab[10];

	// for (int i = 0; i < 10; i++)
	// {
	// 	if (i % 2 == 0)
	// 		tab[i] = new Dog();
	// 	else
	// 		tab[i] = new Cat();
	// 	tab[i]->getType();
	// 	tab[i]->makeSound();
	// }
	// for (int i = 0; i < 10; i++)
	// 	delete tab[i];
}