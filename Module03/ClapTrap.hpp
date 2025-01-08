#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        int         Hit;
        int         Energy;
        int         AttackDamage;
    public:
        ClapTrap();
        ClapTrap(ClapTrap &claptrap);
        ClapTrap(const std::string _Name);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif