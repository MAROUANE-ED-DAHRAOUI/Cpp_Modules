#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    Cat = new Brain();
    std::cout << "Cat default constructor Is called" << std::endl;
    for(int i = 0; i < 100; i++)
        Cat->Brain[i] = "Cat idea";
}

Cat::~Cat()
{
    std::cout << "Cat Default constructor Is called" << std::endl;
    delete (Cat);
}

Cat::Cat(const Cat &Copy) : Animal(Copy)
{
        std::cout << "Cat Copy Consructor Is Called" << std::endl;
        Cat = new Brain(*Copy.Cat);
        *this = Copy;
}

Cat &Cat::operator=(const Cat &OpOv)
{
    std::cout << "Cat Copy Assigment Operator Overload Is Called" << std::endl;
    if(this != &OpOv)
    {
        delete (Cat);
        Cat = new Brain(&OpOv.Cat);
        this->type = OpOv.type;
    }
    return (*this);
}

void    Cat::makeSound(void)
{
    std::cout << "Cat: Meow Meow Meow Meow" << std::endl;
}
