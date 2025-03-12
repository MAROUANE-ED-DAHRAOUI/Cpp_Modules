#include "Character.hpp"

Character::Character() : name("ByDefault")
{
    std::cout << GREEN << "Character : Default constructor Is Called" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
    {
        TheirStock[i] = NULL;
        Floor[i] = NULL;
    }
}

Character::Character(const std::string& _name) : name(_name)
{
    std::cout << GREEN << "Character : Constructor param Is Called" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
    {
        TheirStock[i] = NULL;
        Floor[i] = NULL;
    }
}

Character::Character(const Character &_Copy)
{
    std::cout << MAGENTA << "Character Copy Constructor Is Called " << RESET << std::endl;
    for(int i = 0; i < 4; i++)
    {
        TheirStock[i] = NULL;
        Floor[i] = NULL;
    }
}

const Character& Character::operator=(const Character& Opr)
{
    std::cout << MAGENTA << "Character Copy Assigment operator overloading" << RESET << std::endl;
    if (this != &Opr)
	{
		this->name = Opr.name;
		while (++i < 4)
		{
			if (inventory[i] != NULL)
				delete TheirStock[i];
			if (Floor[i] != NULL)
				delete Floor[i];
			
			if (Opr.iTheirStock[i])
				inventory[i] = Opr.TheirStock[i]->clone();
			else
			   TheirStock[i] = NULL;
			   Floor[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void    freeFloor(AMateria **ThereStook, AMateria **AmtrFloor)
{
    for(int j = 0; j < 4; i++)
    {
        if(CheckStok(ThereStook, AmtrFloor))
        {
            delete AmtrFloor[i];
            AmtrFloor = NULL;
        }
    }
}

void Character::equip(AMateria* Amater)
{
    int i = 0;
    if(Amater != NULL)
    {
        while(i < 4 && TheirStock[i] != NULL)
            i++;
        if(i < 4)
        {
            if(CheckStok(TheirStock, Amater) == false)
                TheirStock[i] = Amater->clone();
            else
                TheirStock[i] = Amater;
        }
        else{
            std::cout << GREEN << "Character Can't create , TheirStock Is full :-(" << RESET << std::endl;
            if(CheckStok(TheirStock, Amater) == true)
            {
                std::cout << RED << "Delete Amater" << RESET << std:: endl;
                delete Amater;
            }
        }
    }
    freeFloor(&TheirStock, &Floor);
}

void Character::unequip(int i)
{
    if(i > -1 && i < 4 && TheirStock[i])
    {
        if (CheckStok(TheirStock[i], Floor))
        {
            Floor[i] = TheirStock[i]->clone();
        }
        else
        {
            Floor[i] = TheirStock[i];
        }
        TheirStock[i] = NULL;
    }
}

void Character::use(int i, ICharacter& target)
{
    if(TheirStock[i])
        TheirStock[i]->use(target);
}
