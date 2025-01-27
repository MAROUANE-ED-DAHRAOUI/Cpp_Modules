#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("boom");

    scav.attack("anemy");
    scav.takeDamage(15);
    scav.beRepaired(8);
    scav.takeDamage(65);
    scav.attack("anemy");
    scav.takeDamage(20);
    scav.attack("anemy");
    scav.takeDamage(15);
    scav.attack("anemy");
    scav.takeDamage(40);
    scav.attack("anemy");
    scav.guardGate();
	return (0);
    


    return (0);
}
