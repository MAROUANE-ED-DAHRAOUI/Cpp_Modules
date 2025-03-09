#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << GREEN << "WrongCat : default constructor Is Called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &Copy) : WrongAnimal(Copy)
{
    std::cout << GREEN << "WrongCat : Copy constructor Is called" << RESET << std::endl;
    *this = Copy;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat : default Destructor Is called\n" << RESET;
}

WrongCat &WrongCat::operator=(const WrongCat &Opr)
{
    std::cout << BOLD << "WrongCat : Operator overload Is called" << RESET << std::endl;
    if(this != &Opr)
        this->type = Opr.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << RED << "WrongCat Is Make Sound Meao Meao" << RESET << std::endl;
}
