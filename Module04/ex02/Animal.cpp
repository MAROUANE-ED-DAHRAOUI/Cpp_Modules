#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << GREEN << "Animal : Default constructor Is called\n" << RESET << std::endl;
}

Animal::Animal(const std::string &Type)
{
    std::cout << GREEN << "Animal : constructor param is called" << RESET << std::endl;
    type = Type;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << GREEN << "Animal : copy constructor is called \n" << std::endl;
}

Animal &Animal::operator=(const Animal &Opr)
{
    std::cout << GREEN << "Animal : Copy Assigment operator is called" << RESET << std::endl;
    if(this != &Opr)
        this->type = Opr.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Default destructor is called" << RESET << std::endl;
}

const std::string&     Animal::getType(void) const
{
    return (type);
}
