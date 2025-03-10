#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << GREEN << "Animal : Default constructor Is called\n" << RESET;
}

Animal::Animal(const std::string &Type)
{
    std::cout << GREEN << "Animal : default parametres constructor is called" << RESET << std::endl;
    type = Type;
}

Animal::Animal(const Animal &copy)
{
    std::cout << GREEN << "Animal : copy constructor Animal is called \n" << RESET;
    *this = copy;
}

Animal &Animal::operator=(const Animal &Opr)
{
    std::cout << BOLD << "Animal : Copy Assigment operator overloading is called" << RESET<< std::endl;
    if(this != &Opr)
        this->type = Opr.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Default destructor Animal is called" << RESET << std::endl;
}

const std::string&     Animal::getType(void) const
{
    return (type);
}

void    Animal::makeSound(void) const
{
    std::cout << MAGENTA << "Animal : Animal make sound" << RESET << std::endl;
}
