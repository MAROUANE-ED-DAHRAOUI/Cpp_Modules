#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal{

    protected:
                std::string type;

    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &copy);
            virtual ~WrongAnimal();
            WrongAnimal &operator=(WrongAnimal &OpOv);

            virtual void makeSound(void);
            void    getType(void);
};

#endif
