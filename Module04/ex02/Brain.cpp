#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN << "Brain : default constructor is called" << RESET << std::endl;
    for(int i = 0; i < 100; i++)
        this->Ideas[i] = "default";
}

Brain::~Brain()
{
    std::cout << RED << "Brain : default destructor is called" << RESET << std::endl;
}

Brain::Brain(const Brain &Copy)
{
    std::cout << MAGENTA << "Brain : copy constructor Is called" << RESET << std::endl;
    *this = Copy;
}

Brain &Brain::operator=(const Brain &Opr)
{
    std::cout << MAGENTA << "Brain : Copy Issigment operator is called" << RESET << std::endl;
    if(this != &Opr)
    {
        for(int i = 0; i < 100; i++)
            Ideas[i] = Opr.Ideas[i];
    }
    return (*this);
}
