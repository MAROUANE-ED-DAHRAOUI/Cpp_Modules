#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
            std::string _Name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap &name);
        DiamondTrap& operator=(const DiamondTrap& _copy);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();
};

#endif