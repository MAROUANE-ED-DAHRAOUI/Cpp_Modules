#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << GREEN << "Cure : default constructor is called" << RESET << std::endl;
}

Cure::Cure(const Cure& CopyCure) : AMateria(CopyCure)
{
    std::cout << MAGENTA << "Cure param Constructor Is called\n" << RESET << std::endl;
}

Cure::~Cure ()
{
    std::cout << RED << "Cure Destructor Is Called" << RESET << std::endl;
}

Cure* Cure::clone() const
{
    return (new Cure())
}

void Cure::use(ICharacter &target)
{
    std::cout << GREEN << "* heals "<< BOLD << target.getName() << GREEN <<" ’s wounds *" << << RESET << std::endl;
}
