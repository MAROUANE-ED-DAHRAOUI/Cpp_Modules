#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
    std::cout << GREEN << "AMateria : default constructor Is called"  << RESET << std::endl;
}

AMateria::AMateria(const std::string &type)
{
    std::cout << GREEN << "AMateria default Param constructor Is called\n" << RESET << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &Copy)
{
    std::cout << MAGENTA << "AMateria : Copy constructor Is called \n" << RESET << std::endl;
    *this = Copy;
}

AMateria::~AMateria()
{
    std::cout << RED << "Destructor Is called\n" << RESET;
}

AMateria &AMateria::operator=(const AMateria &Opr)
{
    std::cout << MAGENTA << "Assigment operator Is called" << RESET << std::endl;
    while(this != &Opr)
    {
        this->type = Opr.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << GREEN << target.getName() << RESET << std::endl;
}
