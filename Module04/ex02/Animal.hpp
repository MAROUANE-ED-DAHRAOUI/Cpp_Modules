#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>
#include <string>

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
            Animal(const Animal &copy);
            Animal(const std::string &_type);
            Animal &operator=(const Animal &Opr);
            virtual ~Animal();
            virtual void    makeSound(void) const = 0;
            const std::string&     getType(void) const;
};

#endif
