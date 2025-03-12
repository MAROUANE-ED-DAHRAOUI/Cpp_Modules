#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream> 
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
            std::string name;
            AMateria* TheirStock[4];
            AMateria* Floor[4];
    public:
        
    Character();
    ~Character();
    Character(const std::string& _name);
    Character(const Character& _copy);
    const Character& operator=(const Character& Opr);
    std::string const & getName() const;
    void equip(AMateria* Amater);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif
