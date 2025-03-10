#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << GREEN << "WrongCat default constructor Is Called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &Copy) : WrongAnimal(Copy)
{
    std::cout << MAGENTA << "WrongCat Copy constructor Is called" << RESET << std::endl;
    *this = Copy;
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat default Destructor Is called\n" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &Opr)
{
    std::cout << MAGENTA << "WrongCat Operator overload Is called" << RESET << std::endl;
    if(this != &Opr)
        this->type = Opr.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << GREEN << "WrongCat " << RESET << MAGENTA <<"Is Make Sound Meao Meao" << RESET << std::endl;
}
