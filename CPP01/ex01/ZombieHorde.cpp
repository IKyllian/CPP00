#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < SIZE; i++)
        zombie[i].set_name(name);
    return (zombie);
}