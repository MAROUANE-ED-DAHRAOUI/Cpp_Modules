#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "Dog : Default Constructor Is Called" << RESET << std::endl;
}

Dog::Dog(const Dog& _Copy) : Animal(_Copy)
{
    std::cout << GREEN << "Dog : Copy constructor Is Called" << RESET << std::endl;
    *this = _Copy;
}

Dog::~Dog()
{
    std::cout << RED << "Dog : Default Destructor Is Called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog &_Opr)
{
    std::cout << BOLD << "Dog : Copy Issigment Operator Is Called" << RESET << std::endl;
    if(this != &_Opr)
        this->type = _Opr.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << MAGENTA << "Dog : Make Sound HawHawHaw" << RESET << std::endl;
}
