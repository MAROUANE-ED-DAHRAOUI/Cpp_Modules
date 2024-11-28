#include "Zombie.hpp"

int main()
{
    Zombie *new_Zombie = newZombie("foo");
    new_Zombie->announce();
    randomChump("marouane");
    delete new_Zombie;
    return (0);
}
