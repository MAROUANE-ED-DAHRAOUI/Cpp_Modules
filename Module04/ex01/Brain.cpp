#include "Brain.hpp"

Brain::Brain()
{
    std::cout << GREEN <<"Brain : default constructor is called" << RESET << std::endl;
    for(int i = 0; i < 100; i++)
        Ideas[i] = "Use It brain";
}

Brain::~Brain()
{
    std::cout << RED << "Brain default destructor is called" << std::endl;
}

Brain::Brain(const Brain &Copy)
{
    std::cout << GREEN << "Brain copy constructor Is called" << RESET << std::endl;
    *this = Copy;
}

Brain &Brain::operator=(const Brain &Opr)
{
    std::cout << "Brain Copy Issigment operator is called" << std::endl;
    if(this != &Opr)
    {
        for(int i = 0; i < 100; i++)
            Ideas[i] = Opr.Ideas[i];
    }
    return (*this);
}
