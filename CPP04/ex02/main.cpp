#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal animal = new Animal();
    {
		Animal* tab[4];

		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
			tab[i]->getType();
			tab[i]->makeSound();
		}
		for (int i = 0; i < 4; i++)
			delete tab[i];
	}
	{
		std::cout << std::endl << "------------ Brain Test -----------" << std::endl;
		Brain brain;
		Brain brain2;

		brain.setIdeas("Ceci", 0);
		brain.setIdeas("est", 1);
		brain.setIdeas("un", 2);
		brain.setIdeas("test", 3);

		brain2 = brain;
		for (int i = 0; i < 4; i++)
			std::cout << brain2.getIdeas(i) << std::endl;
	}
	{
		std::cout << std::endl << "------------ Deep Copy -----------" << std::endl;
		Dog dog;
		dog.putStrings();
		Dog dogCpy;
		dogCpy = dog;
		dogCpy.printStrings();
	}
}