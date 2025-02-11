#ifndef _DOG_H
#define _DOG_H


#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    private:
            Brain *Dog;
    public :
            Dog();
            Dog(const Dog &_Copy);
            ~Dog();
            Dog operator=(Dog &_Dog);
            void    makeSound();
};

#endif