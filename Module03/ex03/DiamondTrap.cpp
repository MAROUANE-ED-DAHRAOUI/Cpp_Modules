#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    Name = "nothing";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "Default constructor DiamondTrap is calling !\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &DmTrap)
{
    this->Name = DmTrap.Name;
    this->HitPoint = DmTrap.HitPoint;
    this->EnergyPoint = DmTrap.EnergyPoint;
    this->AttackDamage = DmTrap.AttackDamage;
    std::cout << "Constructor DiamondTrap" << Name << "Is call\n";
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
