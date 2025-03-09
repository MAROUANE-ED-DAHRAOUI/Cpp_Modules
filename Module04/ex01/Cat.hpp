#ifndef _CAT_H
#define _CAT_H


#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
        private:
                Brain *brain;
    public:
            Cat();
            Cat(const Cat &copy);
            Cat &operator=(const Cat &Opr);
            ~Cat();
            void    makeSound() const;
};

#endif