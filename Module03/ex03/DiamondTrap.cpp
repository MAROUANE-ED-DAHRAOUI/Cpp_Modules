#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->Name = "nothing";
    ClapTrap::Name = this->Name + "claptrap";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "Default constructor DiamondTrap is calling !\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &_copy)
{
    this->Name = _copy.Name;
    this->HitPoint = _copy.HitPoint;
    this->EnergyPoint = _copy.EnergyPoint;
    this->AttackDamage = _copy.AttackDamage;
    std::cout << "Constructor DiamondTrap" << Name << "Is called \n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "Constuctor diamondTrap Is call" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap Is call" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamodTrap Name Is " << this->Name << std::endl;
    std::cout << "ClapTrap Name Is " << ClapTrap::Name << std::endl;
}
