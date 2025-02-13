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
            Animal(const std::string &_type);
            Animal &operator=(const Animal &OpOv);
            virtual ~Animal();
            virtual void    makeSound(void) const = 0;
            const std::string&     getType(void) const;
};

#endif
