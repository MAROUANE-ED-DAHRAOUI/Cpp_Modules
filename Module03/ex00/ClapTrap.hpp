#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>


#define RED         "\033[31m"      // Red text
#define GREEN       "\033[32m"      // Green text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class ClapTrap
{
    private:
        std::string Name;
        int         HitPoint;
        int         EnergyPoint;
        int         AttackDamage;
    public:
        ClapTrap();
        ClapTrap(ClapTrap &claptrap);
        ClapTrap(const std::string _Name);
        ClapTrap&  operator=(const ClapTrap &name);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif