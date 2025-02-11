#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog: Default Constructor Is Called" << std::endl;
}

Dog::Dog(const Dog& _Copy) : Animal(_Copy)
{
    std::cout << "Dog: Copy constructor Is Called" << std::endl;
    *this = _Copy;
}

Dog::~Dog()
{
    std::cout << "Dog: Default Destructor Is Called" << std::endl;
}

Dog::operator=(const Dog &_OpOv)
{
    std::cout << "Dog Copy Issigment Operator Is Called" << std::endl;
    if(*this != _OpOv)
        this->type = _OpOv.type;
    return (*this);
}

void Dog::makeSound(void)
{
    std::cout << "Dog Make Sound HawHawHaw" << std::endl;
}
