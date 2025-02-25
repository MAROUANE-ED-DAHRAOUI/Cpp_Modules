#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>


#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class ClapTrap
{
    protected:
        std::string Name;
        int         HitPoint;
        int         EnergyPoint;
        int         AttackDamage;

    public:
        ClapTrap();
        ClapTrap(const ClapTrap &name);
        ClapTrap(const std::string &_Name);
        virtual ~ClapTrap();

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
