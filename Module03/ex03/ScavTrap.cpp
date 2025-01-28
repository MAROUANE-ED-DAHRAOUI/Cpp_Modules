#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    Name = "nothing";
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << GREEN << "ScavTrap default constructor call" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
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

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		Name = src.Name;
		HitPoint = src.HitPoint;
		EnergyPoint = src.EnergyPoint;
		AttackDamage = src.AttackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (HitPoint > 0 && EnergyPoint > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoint--;
	}
	else
		std::cout << "ScavTrap can't do anything if it has no hit points or energy points lef" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}
