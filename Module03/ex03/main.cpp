#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ScavTrap scavTrap("kiloa");
	FragTrap fragTrap("dahraoui");

	scavTrap.attack("onahi");
	scavTrap.takeDamage(12);
	scavTrap.guardGate();

	fragTrap.attack("lmalik");
	fragTrap.takeDamage(12);
	fragTrap.highFivesGuys();

    ClapTrap *ct1 = new ScavTrap("korama");
    ClapTrap *ct2 = new FragTrap("nano");

    ct1->attack("sasuke");
    ct2->attack("madara");

    delete(ct1);
    delete(ct2);
    
	ScavTrap scav("hanter");

    scav.attack("anemy");
    scav.takeDamage(15);
    scav.beRepaired(8);
    scav.guardGate();

	return (0);
}