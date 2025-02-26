#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->_Name = "nothing";   
    ClapTrap::Name = this->_Name + "_clap_name";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "Default constructor DiamondTrap is calling !\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &_copy) : ClapTrap(_copy), ScavTrap(_copy), FragTrap(_copy)
{
    std::cout << "copy Constructor DiamondTrap" << _Name << "Is called \n";
    *this = _copy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "ClapTrap"), ScavTrap(name), FragTrap(name)
{
    std::cout << "Parametre Constuctor diamondTrap Is called" << std::endl;
    this->_Name = name;
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap Is call" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& OpOv)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &OpOv)
	{
		_Name = OpOv.Name;
		ClapTrap::Name = OpOv.ClapTrap::Name;
		HitPoint = OpOv.HitPoint;
		EnergyPoint = OpOv.EnergyPoint;
		AttackDamage = OpOv.AttackDamage;
	}
	return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamodTrap Name Is " << this->_Name << std::endl;
    std::cout << "ClapTrap Name Is " << ClapTrap::Name << std::endl;
}
