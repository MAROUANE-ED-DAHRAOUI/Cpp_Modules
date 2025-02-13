#ifndef BRAIN_H
#define BRAIN_H

#include <new>
#include <string>
#include <iostream>

class Brain{
    private:
            std::string Ideas[100];
    public:
        Brain();
        ~Brain();

        Brain(const Brain &Copy);
        Brain &operator=(const Brain &OpOv);
};

#endif
