#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
    else
    {
        int i, j;

        i = 1;
        while(av[i])
        {
            j = -1;
            while(av[i][++j])
            {
                av[i][j] = (char)std::toupper(av[i][j]);
                std::cout << av[i][j];
            }
            i++;
        }  
        std::cout << "\n";
    }
    return (0);
}
