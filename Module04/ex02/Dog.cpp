#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog: Default Constructor Is Called" << std::endl;
    type = "Dog";
    Dog = new Brain();
    for(int i = 0; i < 100; i++)
        Dog->Ideas[i] = "Dog Idea";
}

Dog::Dog(const Dog& _Copy) : Animal(_Copy)
{
    std::cout << "Dog: Copy constructor Is Called" << std::endl;
    Dog = new Brain(*_Copy.Dog);
    *this = _Copy;
}

Dog::~Dog()
{
    std::cout << "Dog: Default Destructor Is Called" << std::endl;
    delete (Dog);
}

Dog::operator=(const Dog &_OpOv)
{
    std::cout << "Dog Copy Issigment Operator Is Called" << std::endl;
    if(this != &_OpOv)
    {
        delete (Dog);
        Dog = new Brain(_OpOv.Dog);
        this->type = _OpOv.type;
    }
    return (*this);
}

void Dog::makeSound(void)
{
    std::cout << "Dog Make Sound HawHawHaw" << std::endl;
}
