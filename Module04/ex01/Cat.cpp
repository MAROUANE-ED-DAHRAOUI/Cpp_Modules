#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "Cat : default constructor Is called" << RESET << std::endl;
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->Ideas[i] = "Use Brain";
}

Cat::~Cat()
{
    std::cout << RED << "Cat : Default Destructor Is called" << RESET << std::endl;
    delete brain;
}

Cat::Cat(const Cat &Copy) : Animal(Copy)
{
        std::cout << GREEN << "Cat : Copy Consructor Is Called" << RESET << std::endl;
        brain = new Brain(*Copy.brain);
        *this = Copy;
}

Cat &Cat::operator=(const Cat &Opr)
{
    std::cout << BOLD << "Cat : Copy Assigment Operator Overload Is Called" << RESET << std::endl;
    if(this != &Opr)
    {
        delete brain;
        brain = new Brain(*Opr.brain);
        this->type = Opr.type;
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << MAGENTA << "Cat: Meow Meow Meow Meow" << RESET << std::endl;
}
