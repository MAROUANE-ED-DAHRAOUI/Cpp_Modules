#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("none"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN <<"default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << GREEN << "ClapTrap constructor parameters called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &name) 
{
    std::cout << GREEN << "ClapTrap copy constructor Is called \n" << RESET;
    *this = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "destructor is called" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& _copy)
{
	std::cout << "ClapTrap  Copy assignment operator called" << std::endl;
	if (this != &_copy)
	{
		Name = _copy.Name;
		HitPoint = _copy.HitPoint;
		EnergyPoint = _copy.EnergyPoint;
		AttackDamage = _copy.AttackDamage;
	}
	return (*this);
}

void   ClapTrap::attack(const std::string &target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
            EnergyPoint--;
            std::cout << RED <<"ClapTrap " << RESET << BOLD << Name << RESET 
                << RED << " Attacks " << RESET << BOLD << target << RESET << 
                RED << " causing " << RESET << BOLD << AttackDamage << RESET 
                    << RED <<" points of domage!" << RESET << std::endl;
        return ;
    }
    else
        std::cout << RED << " ClapTrap can’t do anything if it has no hit points or energy points left! \n" << RESET;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint > 0 && EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!" << std::endl;
		 HitPoint -= amount;
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
