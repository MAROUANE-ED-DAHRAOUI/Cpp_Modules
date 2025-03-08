#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << GREEN << "WrongAnimal : Default constructor is call\n" << RESET;
}

WrongAnimal::WrongAnimal(const std::string &_type)
{
    std::cout << "WrongAnimal Constructor param Is called" << std::endl;
    type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &_Copy)
{
    std::cout << GREEN << "WrongAnimal : copy constructor is called\n" << RESET;
    *this = _Copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &OpOv)
{
    std::cout << BOLD << "WrongAnimal : Copy Issigment Operator is called\n" << RESET;
    if(this != &OpOv)
        this->type = OpOv.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal : Destructor Is called" << RESET << std::endl;
}


void WrongAnimal::makeSound(void) const
{
    std::cout << MAGENTA << "WrongAnimal Make Sound" << RESET << std::endl;
}

const std::string    WrongAnimal::getType(void) const
{
    return (type);
}
