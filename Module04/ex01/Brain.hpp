#ifndef BRAIN_H
#define BRAIN_H

#include "string"

class Brain{
    private:
            std::string Brain[100];
    public:
        Brain();
        ~Brain();

        Brain(const Brain &Copy);
        Brain &operator=(const Brain &OpOv);
};

#endif
