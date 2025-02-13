#include "Animal.hpp"

Animal::Animal()
{
    type = "nothing";
    std::cout << "Default constructor Is call\n";
}

Animal::Animal(const std::string &Type)
{
    std::cout << "default constructor param is called" << std::endl;
    type = Type;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "copy constructor is called \n";
}

Animal &Animal::operator=(const Animal &OpOv)
{
    std::cout << "Animal Copy Assigment operator is called" << std::endl;
    if(this != &OpOv)
        this->type = OpOv.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Default destructor is called" << std::endl;
}

const std::string&     Animal::getType(void) const
{
    return (type);
}

