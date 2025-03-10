#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{
    std::cout << GREEN << "AMateria : default constructor Is called"  << RESET << std::endl;
}

AMateria::AMateria(const std::string &_Type)
{
    std::cout << GREEN << "AMateria default Param constructor Is called\n" << RESET << std::endl;
    type = _Type;
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
    std::cout << MAGENTA << "Assigment operator Is called"
}