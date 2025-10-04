#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->club = NULL;
}

void HumanB::setWeapon(Weapon& club)
{
    this->club = &club;
}

void HumanB::attack(void)
{
    if(this->club)
        std::cout << this->name << " attacks with their" <<  this->club->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon" << std::endl;
}