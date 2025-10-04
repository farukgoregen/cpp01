#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();

    void initZombie(std::string name1);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);