#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor is call\n";
}

WrongAnimal::operator=(WrongAnimal &OpOv)
{
    std::cout << "Operator overloading is call\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "copy constructor is call\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor constructor is call" << std::endl;
}


