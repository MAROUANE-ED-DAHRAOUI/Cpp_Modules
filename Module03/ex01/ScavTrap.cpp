#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << GREEN << "ScavTrap default constructor called" << RESET << std::endl;
    Name = "D";
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << GREEN << "ScavTrap constructor parameters called" << RESET << std::endl;
    HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << GREEN << "ScavTrap copy constructor is called" << RESET << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << GREEN << "ScavTrap destructor is called" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << GREEN << "ScavTrap Copy assignment operator called" << RESET << std::endl;
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
		std::cout << GREEN << "ScavTrap " <<  MAGENTA << Name 
			<< RED << " attacks " << RESET <<  BOLD << target << RESET << RED <<
			 ", causing " << RESET << BOLD << AttackDamage << RESET << RED <<
			 	 " points of damage!" << RESET << std::endl;
		EnergyPoint--;
	}
	else
		std::cout << MAGENTA << "ScavTrap can't do anything if it has no hit points or energy points lef" << RESET << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << GREEN << "ScavTrap " << MAGENTA << Name  << RED << 
		" is now in Gate keeper mode" << RESET << std::endl;
}
