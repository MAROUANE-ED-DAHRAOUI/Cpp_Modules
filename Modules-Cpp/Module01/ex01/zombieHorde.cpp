#include "Zombie.hpp"

void    Zombie::SetName(std::string name)
{
    _name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *ObZombie = new Zombie[N];

    if(N > 0)
    {
        for (int i = 0; i < N; ++i) 
            ObZombie[i].SetName(name);
        return (ObZombie);
    }
    return (NULL);
}
