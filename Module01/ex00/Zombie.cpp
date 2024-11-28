
#include "Zombie.cpp"

Zombie::Zombie(std::string name)
{
    _Zombie = name
}

Zombie::~Zombie()
{
    std::cout << _Zombie << ": Destroy Zombie\n";
}

void    Zombie::announce(void)
{
        std::cout << YELLOW << _Zombie << ":" << RESET
            << GREEN << "Foo: BraiiiiiiinnnzzzZ..." << RESET << "\n";
}