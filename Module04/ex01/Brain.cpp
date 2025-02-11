#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor is called";
    for(int i = 0; i < 100; i++)
        Ideas[i] = "default";
}

Brain::~Brain()
{
    std::cout << "Brain default destructor is called" << std::endl;
}

Brain::Brain(Brain &Copy)
{
    std::cout << "Brain copy constructor Is called" << std::endl;
    *this = Copy;
}

Brain &Brain::operator=(Brain &OpOv)
{
    std::cout << "Brain Copy Issigment operator is called" << std::endl;
    if(this != &OpOv)
    {
        for(int i = 0; i < 100; i++)
            Ideas[i] = OpOv.Idea[i];
    }
    return (*this);
}
