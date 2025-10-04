#include "Zombie.hpp"
Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << this->name << "Destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::initZombie(std::string name1)
{
    this->name = name1;
}