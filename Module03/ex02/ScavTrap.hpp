#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
            ScavTrap();
            ScavTrap(const std::string name);
            ScavTrap(const ScavTrap &name);
            ScavTrap& operator=(const ScavTrap& copy);
            ~ScavTrap();
            void guardGate() const;
            void attack(const std::string& target);
};

#endif