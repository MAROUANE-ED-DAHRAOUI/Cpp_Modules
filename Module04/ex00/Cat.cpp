#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor Is called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Default constructor Is called" << std::endl;
}

Cat::Cat(const Cat &Copy) : Animal(Copy)
{
        std::cout << "Cat Copy Consructor Is Called" << std::endl;
        *this = Copy;
}

Cat &Cat::operator=(const Cat &OpOv)
{
    std::cout << "Cat Copy Assigment Operator Overload Is Called" << std::endl;
    if(this != &OpOv)
        this->type = OpOv.type;
    return (*this);
}

void    Cat::makeSound(void)
{
    std::cout << "Cat: Meow Meow Meow Meow" << std::endl;
}
