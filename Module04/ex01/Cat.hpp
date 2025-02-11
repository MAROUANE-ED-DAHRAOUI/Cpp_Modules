#ifndef _CAT_H
#define _CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
            Brain *Cat;
    public:
            Cat();
            Cat(const Cat &copy);
            ~Cat();
            Cat &operator=(const Cat &opov);
            void    makeSound();
};

#endif
