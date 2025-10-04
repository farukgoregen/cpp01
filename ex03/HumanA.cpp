#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club): club(club) 
{
    this->name = name;
    this->club = club;
}

void HumanA::attack(void)
{
    std::cout << this->name << "attacks with their" <<  this->club.getType() << std::endl;
}