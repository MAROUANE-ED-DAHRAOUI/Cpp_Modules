#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    
	ScavTrap scavTrap("marouane");
	FragTrap fragTrap("kiloa");

	scavTrap.attack("ninja");
	scavTrap.takeDamage(12);
	scavTrap.guardGate();
	fragTrap.attack("lwalid");
	fragTrap.takeDamage(12);
	fragTrap.highFivesGuys();
	return (0);
}