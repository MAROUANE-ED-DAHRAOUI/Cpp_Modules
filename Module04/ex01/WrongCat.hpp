#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

        public:
                WrongCat();
                WrongCat(const WrongCat &copy);
                ~WrongCat();
                WrongCat &operator=(WrongCat &OpOv);
                void      makeSound(void);
};

#endif
