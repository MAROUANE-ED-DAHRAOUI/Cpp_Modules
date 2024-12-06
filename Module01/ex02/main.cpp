#include <string>
#include <iostream>

#define GREEN       "\033[32m"
#define MAGENTA     "\033[35m"
#define YELLOW      "\033[33m"
#define RESET       "\033[0m"


void    Print_result(std::string ObStr, std::string *stringPTR, std::string &stringREF)
{

    std::cout << MAGENTA << "The memory address of the string variable : " << RESET 
        << GREEN << &ObStr << RESET << std::endl;
    std::cout << MAGENTA << "The memory address held by stringPTR : " << RESET 
        << GREEN << stringPTR << RESET << std::endl;
    std::cout << MAGENTA << "The memory address held by stringREF : " << RESET 
        << GREEN << &stringREF << RESET << std::endl;
    std::cout << YELLOW << "The value of the string variable : " << RESET <<
         GREEN << ObStr << RESET <<std::endl;
    std::cout << YELLOW <<"The value pointed to by stringPTR : " << RESET << GREEN
         << *stringPTR << RESET << std::endl;
    std::cout << YELLOW <<"The value pointed to by stringREF: " << RESET << GREEN
         << stringREF << RESET << std::endl;
}

int main()
{
    std::string ObStr = "HI THIS IS BRAIN";
    std::string *stringPTR = &ObStr;
    std::string &stringREF = ObStr;
    Print_result(ObStr, stringPTR, stringREF);
    return 0;
}