#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << GREEN << "ScavTrap default constructor call" << RESET << std::endl;
    Name = "default";
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << GREEN << "ScavTrap constructor parameters call" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &name) : ClapTrap(name)
{
    std::cout << GREEN << "ScavTrap copy constructor Is call \n" << RESET;
    *this = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << GREEN << "ScavTrap destructor is call" << RESET << std::endl;
}