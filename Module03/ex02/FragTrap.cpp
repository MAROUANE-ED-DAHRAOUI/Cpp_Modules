#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << GREEN << "FragTrap default constructor called" << RESET << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << GREEN << "FragTrap constructor parameters called" << RESET << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &name) : ClapTrap(name)
{
    std::cout << GREEN << "FragTrap copy constructor called" << RESET << std::endl;
    *this = name;
}

FragTrap::~FragTrap()
{
    std::cout << GREEN << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &_copy)
{
    std::cout << GREEN << "FragTrap copy assignment operator called" << RESET << std::endl;
    if (this != &_copy)
    {
        Name = _copy.Name;
        HitPoint = _copy.HitPoint;
        EnergyPoint = _copy.EnergyPoint;
        AttackDamage = _copy.AttackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << GREEN << "FragTrap " << RESET << BOLD << this->Name << RESET
         << GREEN << " high fives guys !! 🤚 🤚 🤚" << RESET << std::endl;
}
