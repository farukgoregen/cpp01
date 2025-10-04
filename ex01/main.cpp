#include "Zombie.hpp"

int main()
{
    int N = 4;
    Zombie *zh = zombieHorde(N, "omer");

    for (size_t i = 0; i < 4; i++)
    {
       zh[i].announce();
    }
    
    delete[] zh;
}