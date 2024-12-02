#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private :
            std::string _name;
            Weapon *_Weapon;
    public :
            HumanB();
            HumanB(std::string name);
            void        setWeapon(Weapon &_weapon);
            void        attack();   
            ~HumanB();         
};

#endif