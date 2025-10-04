#include "HumanA.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *club;

    public:
        HumanB(std::string name);
        void setWeapon(Weapon& club);
        void attack(void);
};