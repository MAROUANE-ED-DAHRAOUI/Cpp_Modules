#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _Weapon(weapon)
{
}

void    HumanA::attack(void)const
{
    std::cout << _name << " : " << "attacks with their " <<  _Weapon.getType() << std::endl;
}
