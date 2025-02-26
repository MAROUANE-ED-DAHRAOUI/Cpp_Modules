#include "ScavTrap.hpp"


// default constructor call
ClapTrap::ClapTrap() : Name("ClapTrap"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN <<"ClapTrap default constructor called" << RESET << std::endl;
}

// constructor parameters call
ClapTrap::ClapTrap(const std::string &claptrap) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN << "ClapTrap constructor parameters called" << RESET << std::endl;
    Name = claptrap;
}

// copy constructor Is called
ClapTrap::ClapTrap(const ClapTrap &name) 
{
    std::cout << GREEN << "ClapTrap Copy constructor Is called\n" << RESET;
    *this = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    if(this != &src)
    {
        Name = src.Name;
        HitPoint = src.HitPoint;
        EnergyPoint = src.EnergyPoint;
        AttackDamage = src.AttackDamage;
    }
    return (*this);
}

// destructor is called
ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "ClapTrap destructor is called" << RESET << std::endl;
}

void   ClapTrap::attack(const std::string &target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
            std::cout << RED << "ClapTrap " << RESET << BOLD << Name << RESET 
                << RED << " Attacks " << RESET << BOLD << target << RESET << 
                RED << " causing " << RESET << BOLD << AttackDamage << RESET 
                    << RED <<" points of domage!" << RESET << std::endl;
            EnergyPoint--;
    }
    else
        std::cout << RED << "ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        std::cout << RED <<"ClapTrap " << RESET << BOLD << Name 
        << RESET << RED << " take points of damage " << RESET << BOLD << amount 
            << RESET << std::endl;
        HitPoint -= amount;

        return ;
    }
    else
        std::cout << RED << "ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        HitPoint += amount;
        std::cout << RED << "ClapTrap " <<  RESET << Name << RED << " repairs itself, restoring " <<  RESET << BOLD << amount << RESET 
            << RED << " points of damage" RESET << std::endl;
            EnergyPoint--;
    }
    else
        std::cout << RED << " ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}
