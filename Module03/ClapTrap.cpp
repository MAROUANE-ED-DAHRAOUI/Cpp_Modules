#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit(10), Energy(10), AttackDamage(0)
{

}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "constructor parameters call";
    Name = name;
}

ClapTrap::ClapTrap(ClapTrap &name) : Hit(10), Energy(10), AttackDamage(0)
{
    std::cout << "copy constructor Is call \n";
    if(this != &name)
    {
        Name = name.Name;
        Hit = name.Hit;
        Energy = name.Energy;
        AttackDamage = name.AttackDamage;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor is call" << std::endl;
}

void   ClapTrap::attack(const std::string &target)
{
    std::cout << "";
}
