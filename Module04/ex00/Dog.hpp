#ifndef _DOG_H
#define _DOG_H


#include "Animal.hpp"

class Dog : public Animal
{
    public :
            Dog();
            Dog(const Dog &copy);
            ~Dog();
            Dog operator=(Dog &dog);
            void    makeSound();
};

#endif