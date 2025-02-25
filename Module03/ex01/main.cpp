#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap("boom");

    scavtrap.attack("anemy");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(8);
    scavtrap.takeDamage(65);
    scavtrap.attack("anemy");
    scavtrap.takeDamage(20);
    scavtrap.attack("anemy");
    scavtrap.takeDamage(15);
    scavtrap.attack("anemy");
    scavtrap.takeDamage(40);
    scavtrap.attack("anemy");
    scavtrap.guardGate();

	return (0);
}
