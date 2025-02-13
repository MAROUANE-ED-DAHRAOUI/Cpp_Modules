#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat default constructor Is Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Copy) : WrongAnimal(Copy)
{
    std::cout << "WrongCat Copy constructor Is called" << std::endl;
    *this = Copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default Destructor Is called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &OpOv)
{
    std::cout << "WrongCat Operator overload Is called" << std::endl;
    if(this != OpOv)
        this->type = OpOv.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Is Make Sound Meao Meao" << std::endl;
}
