#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
	Zombie(std::string name); //Constructeur
	~Zombie(); //Destructeur

	void	announce(void);
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	
	std::string getName() const;
	void setName(std::string name);
	
	private :
	std::string name;
};

#endif