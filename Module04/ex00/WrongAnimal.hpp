#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

#define RED         "\033[31m"      // Red text
#define GREEN       "\033[32m"      // Green text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class WrongAnimal{

    protected:
                std::string type;
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &_Copy);
            WrongAnimal(const std::string &_type);
            ~WrongAnimal();
            WrongAnimal &operator=(const WrongAnimal &OpOv);
            void        makeSound(void) const;
            const std::string   getType(void) const;
};

#endif
