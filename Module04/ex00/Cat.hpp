#ifndef _CAT_H
#define _CAT_H


#include "Animal.hpp"


class Cat : public Animal
{
    public:
            Cat();
            Cat(const Cat &copy);
            ~Cat();
            Cat &operator=(const Cat &opov);
            void    makeSound() const;
};

#endif