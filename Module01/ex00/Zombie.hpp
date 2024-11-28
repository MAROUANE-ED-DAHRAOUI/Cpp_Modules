#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BOLD        "\033[1m"  
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

#include <string>
#include <iostream>

class Zombie{

    private:
            std::string  _Zombie;
    
    public:
            Zombie(std::string _Zombie);
            ~Zombie();
            void    announce(void);
};

Zombie*         newZombie( std::string name );
void            randomChump( std::string name );

#endif
