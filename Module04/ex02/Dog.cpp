#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "Dog : Default Constructor Is Called" << RESET << std::endl;
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->Ideas[i] = "Dog Idea";
}

Dog::Dog(const Dog& _Copy) : Animal(_Copy)
{
    std::cout << MAGENTA << "Dog : Copy constructor Is Called" << RESET << std::endl;
    brain = new Brain(*_Copy.brain);
    *this = _Copy;
}

Dog::~Dog()
{
    std::cout << RED << "Dog: Default Destructor Is Called" << RESET << std::endl;
    delete (brain);
}

Dog Dog::operator=(const Dog &_Opr)
{
    std::cout << MAGENTA << "Dog Copy Issigment Operator Is Called" << RESET << std::endl;
    if(this != &_Opr)
    {
        delete (brain);
        brain = new Brain(*_Opr.brain);
        this->type = _Opr.type;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << GREEN << "Dog:" << RESET << MAGENTA << " Make Sound HawHawHaw" << RESET << std::endl;
}
