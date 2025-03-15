#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& _copy) : AMateria(_copy)
{
	std::cout << "Ice Constructor with param called" << std::endl;
}

Ice& Ice::operator=(const Ice& _assignment)
{
	(void)_assignment;
	std::cout << "Ice Copy assignment operator called" << std::endl;
	return (*this);	
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
