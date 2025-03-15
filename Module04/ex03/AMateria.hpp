#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &Copy);
        AMateria &operator=(const AMateria &Opr);
        std::string const & getType() const; // MAteria
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
