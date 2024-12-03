#include "Harl.hpp"

clsHarl::clsHarl() 
{
    actions[0] = &clsHarl::debug;
    actions[1] = &clsHarl::info;
    actions[2] = &clsHarl::warning;
    actions[3] = &clsHarl::error;
}

clsHarl::~clsHarl()
{

}

void    clsHarl::debug (void)
{
    std::cout << GREEN << " love having extra bacon for my 7XL-double-cheese-" <<
                 "triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void    clsHarl::info (void)
{
    std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn’t put"
            "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << RESET;
}

void    clsHarl::warning (void)
{
    std::cout << GREEN << "I think I deserve to have some extra bacon for free. I’ve been coming for"
            "years whereas you started working here since last month.\n" << RESET;
}

void    clsHarl::error (void)
{
    std::cout << GREEN << "This is unacceptable!"
            "I want to speak to the manager now.\n" << RESET;
}

void    clsHarl::complain(std::string level)
{
    std::string str[4] = {"debug", "info", "warning", "error"};
    
    for(int i = 0; i < 4; i++)
    {
        if(str[i] == level)
        {
            (this->*actions[i])();
            return;
        }
    }
    std::cout << RED << "Unknown level\n" << RESET;
}
