#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>
#include <string>

class Animal{

    protected:
            std::string type;
    public:
            Animal();
            Animal(const Animal &copy);
            Animal &operator=(const Animal &Frr);
            virtual ~Animal();
            virtual void    makeSound();
            std::string     getType(void);
};

#endif