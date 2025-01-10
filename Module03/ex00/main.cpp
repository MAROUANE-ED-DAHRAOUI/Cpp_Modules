#include "ClapTrap.hpp"

int main()
{
    ClapTrap Ob1("marouane");
    ClapTrap Ob2("dahraoui");

    Ob1.attack("dahraoui");
    Ob1.takeDamage(1);
    Ob1.beRepaired(2);

    return (0);
}
