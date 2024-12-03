#include "Harl.hpp"

int main(int ac, char *av[])
{
    (void)av;
    if(ac > 1)
    {
        std::cerr << RED << "Syntax error, just name program : ./halm " << RESET << std::endl;
        return (0);
    }
    clsHarl harl;
    harl.complain("debug");
    return 0;
}
