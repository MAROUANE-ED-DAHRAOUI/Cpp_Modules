#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class WrongAnimal{

    protected:
                std::string type;
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &_Copy);
            WrongAnimal(const std::string &_type);
            virtual ~WrongAnimal();
            WrongAnimal &operator=(const WrongAnimal &Opr);
            void makeSound(void) const;
            const std::string    getType(void) const;
};

#endif
