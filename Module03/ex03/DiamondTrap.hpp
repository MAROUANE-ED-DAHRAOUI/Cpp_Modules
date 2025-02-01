#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap &name);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void whoAmI();
};

#endif