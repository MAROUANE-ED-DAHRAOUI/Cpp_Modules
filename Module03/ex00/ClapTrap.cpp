#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("ClapTrap"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN <<"default constructor call" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN << "constructor parameters call" << RESET << std::endl;
    Name = name;
}

ClapTrap::ClapTrap(ClapTrap &name) 
{
    std::cout << GREEN << "copy constructor Is call \n" << RESET;
    *this = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& name)
{
    if(this != &name)
    {
        Name = name.Name;
        HitPoint = name.HitPoint;
        EnergyPoint = name.EnergyPoint;
        AttackDamage = name.AttackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "destructor is call" << RESET << std::endl;
}

void   ClapTrap::attack(const std::string &target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
            std::cout << RED <<"ClapTrap " << RESET << BOLD << Name << RESET 
                << RED << " Attacks " << RESET << BOLD << target << RESET << 
                RED << " causing " << RESET << BOLD << AttackDamage << RESET 
                    << RED <<" points of domage!" << RESET << std::endl;
            EnergyPoint--;
    }
    else
        std::cout << RED << " ClapTrap can’t do anything if it has no hit pointsor energy points left! \n" << RESET;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint > 0 && EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!" << std::endl;
		AttackDamage -= amount;
	}
	else
		std::cout << "ClapTrap can't do anything if it has no hit points or energy points lef" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoint > 0 && EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << Name << " Repaired " << amount << " points!" << std::endl;
		HitPoint += amount;
		EnergyPoint--;
	}
	else
		std::cout << "ClapTrap can't do anything if it has no hit points or energy points lef" << std::endl;
}
