#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define RESET       "\033[0m"

class clsHarl
{
    private:
            void (clsHarl::*actions[4])();
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
    public:
            clsHarl();
            ~clsHarl();
            void complain( std::string level );
};

# endif