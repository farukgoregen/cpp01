#include "Weapon.hpp"
#include "iostream"

class HumanA
{
    private:
        std::string name;
        Weapon &club;

    public:
        HumanA(std::string name, Weapon &club);
        void attack(void);
};