#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

#define RED         "\033[31m"      // Red text
#define GREEN       "\033[32m"      // Green text
#define BOLD        "\033[1m"       // Bold text
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

class AMateria {
protected:
    std::string type;
public:
    AMateria();
    virtual ~AMateria();
    AMateria(std::string const &_Type);
    AMateria(const AMateria &Copy);
    AMateria &operator=(const AMateria &Opr);
    std::string const & getType() const; // materia type
    virtual AMateria* clone() const = 0; //pure
    virtual void use(ICharacter& target); // function override
};

#endif
