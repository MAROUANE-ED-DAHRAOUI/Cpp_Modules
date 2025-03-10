#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << GREEN << "WrongAnimal : Default constructor is call\n" << RESET;
}


WrongAnimal::WrongAnimal(const WrongAnimal &_Copy)
{
    std::cout << MAGENTA << "WrongAnimal copy constructor is called\n" << RESET;
    *this = _Copy;
}

WrongAnimal::WrongAnimal(const std::string& _type)
{
    std::cout << MAGENTA << "WrongAnimal Constructor param Is called" << RESET << std::endl;
    type = _type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal Destructor Is called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &Opr)
{
    std::cout << MAGENTA << "WrongAnimal Copy Issigment Operator is called\n" << RESET;
    if(this != &Opr)
        this->type = Opr.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << MAGENTA << "WrongAnimal " << RESET << GREEN << "Make Sound" << std::endl;
}

const std::string    WrongAnimal::getType(void) const
{
    return (type);
}
