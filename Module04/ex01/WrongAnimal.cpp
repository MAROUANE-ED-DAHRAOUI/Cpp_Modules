#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Default constructor is call\n";
}


WrongAnimal::WrongAnimal(const WrongAnimal &_Copy)
{
    std::cout << "WrongAnimal copy constructor is called\n";
    *this = _Copy;
}

WrongAnimal::WrongAnimal(const std::string _type)
{
    std::cout << "WrongAnimal Constructor param Is called" << std::endl;
    type = _type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Is called" << std::endl;
}

WrongAnimal::operator=(WrongAnimal &OpOv)
{
    std::cout << "WrongAnimal Copy Issigment Operator is called\n";
    if(this != &OpOv)
        this->type = OpOv.type;
    return (*this);
}

void WrongAnimal::makeSound(void)
{
    std::cout << "WrongAnimal Make Sound" << std::endl;
}

void    WrongAnimal::getType(void) const
{
    return (type);
}
