#include "Harl.hpp"

int main(int ac, char *av[])
{
    if(ac != 2)
    {
        std::cerr << RED << "Syntax error : enter one argument from this's : " << RESET << 
        MAGENTA << "\n\t\t./halm\n\t " << RESET << YELLOW << "\t\t\"DEBUG\"\t\"INFO\"\t\"WARNING\"  \"ERROR\"" << RESET << std::endl;
        return (1);
    }
    clsHarl harl;
    harl.complain(av[1]);
    return 0;
}
