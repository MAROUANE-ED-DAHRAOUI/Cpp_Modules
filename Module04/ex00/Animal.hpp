#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>

#define RED         "\033[31m"      // Red text
#define GREEN       "\033[32m"      // Green text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class Animal{

    protected:
            std::string type;
    public:
            Animal();
            Animal(const std::string &_type);
            Animal(const Animal &copy);
            Animal &operator=(const Animal &Opr);
            virtual ~Animal();
            const std::string&     getType(void) const;
            virtual void    makeSound(void) const;
};

#endif
