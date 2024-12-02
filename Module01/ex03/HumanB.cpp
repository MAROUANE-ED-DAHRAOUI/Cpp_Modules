#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name) : _name(name)
{

}

void       HumanB::setWeapon(Weapon& _weapon)
{
    _Weapon = &_weapon;
}

void       HumanB::attack()
{
    if(_Weapon)
        std::cout << _name << " : attacks with their " << _Weapon->getType() << std::endl;
    else
        std::cout << _name << " : attacks with their \n";
}            

HumanB::~HumanB()
{

}
