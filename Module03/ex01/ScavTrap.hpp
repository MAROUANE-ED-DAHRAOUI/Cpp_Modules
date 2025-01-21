#ifndef SCAVTRAP_H
#define SCAVTRAP_H


#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &name);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        void guardGate() const;
};


#endif