#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor parameters called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &name) : ClapTrap(name)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = name;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &assig)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &assig)
    {
        Name = assig.Name;
        HitPoint = assig.HitPoint;
        EnergyPoint = assig.EnergyPoint;
        AttackDamage = assig.AttackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " high fives guys !! 🤚 🤚 🤚" << std::endl;
}
