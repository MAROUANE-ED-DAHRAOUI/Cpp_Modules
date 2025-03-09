#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class Brain{
    public:
        std::string Ideas[100];
        Brain();
        ~Brain();

        Brain(const Brain &Copy);
        Brain &operator=(const Brain &Opr);
};

#endif
