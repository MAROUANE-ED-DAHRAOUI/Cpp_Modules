#ifndef _DOG_H
#define _DOG_H


#include "Animal.hpp"

class Dog : public Animal
{
    public :
            Dog();
            Dog(const Dog &_Copy);
            ~Dog();
            Dog &operator=(const Dog &_Dog);
            void    makeSound() const;
};

#endif
