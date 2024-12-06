#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    _str = type;
}

void    Weapon::setType(std::string str)
{
    _str = str;
}

const std::string&    Weapon::getType(void)
{
    return (_str);
}
