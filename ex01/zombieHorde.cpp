#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *hrde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        hrde[i].initZombie(name);
    }
    return hrde;
}