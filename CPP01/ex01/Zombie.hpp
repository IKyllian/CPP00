#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define SIZE 5

#include <iostream>

class Zombie
{
	public :
		Zombie(){};
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	set_name(std::string name);
	
	private :
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif