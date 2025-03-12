#include "Ice.hpp"

Ice::Ice() : AMateria("Ice"){
    std::cout << GREEN << "Ice : Default constructor Is called\n" << RESET;
}

Ice::Ice(const Ice& Copy) : AMateria(Copy)
{
    std::cout << MAGENTA << "Ice Constructor with parame Is called\n" << RESET << std::endl;
}

Ice::~Ice ()
{
    std::cout << RED << "Ice : Destructor Is called\n" << RESET;
}

Ice* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << GREEN << "* shoots an ice bolt at " << MAGENTA << target.getName() << " *\n" << RESET; 
}
