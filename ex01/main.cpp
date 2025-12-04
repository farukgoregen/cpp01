#include "Zombie.hpp"

int main()
{
    size_t N = 4;
    Zombie *zh = zombieHorde(N, "omer");

    for (size_t i = 0; i < N; i++)
    {
       zh[i].announce();
    }
    
    delete[] zh;
}