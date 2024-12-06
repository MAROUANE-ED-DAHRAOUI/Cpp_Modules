#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BOLD        "\033[1m"  
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class Weapon{

    private :
            std::string _str;
    public :
            Weapon();
            Weapon(std::string str);
            void               setType(std::string str);
            const std::string& getType(void);
} ;

#endif