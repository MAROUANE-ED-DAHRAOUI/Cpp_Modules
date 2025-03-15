#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& _copy) : AMateria(_copy)
{
	std::cout << "Cure Constructor with param called" << std::endl;
}

Cure& Cure::operator=(const Cure& _assignment)
{
	(void)_assignment;
	std::cout << "Cure Copy assignment operator called" << std::endl;
	return (*this);	
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
