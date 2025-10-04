#include "Zombie.hpp"
int main ()
{
    Zombie *hz = newZombie("hp");
    hz->announce();
    delete hz;

    randomChump("stck");
}