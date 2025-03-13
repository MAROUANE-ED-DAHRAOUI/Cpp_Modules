#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout <<  GREEN << "MateriaSource : Default Constructor Is Called\n" << RESET;
    for(int i = 0; i < 4; i++)
        TheireStok[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& Copy)
{
    std::cout << MAGENTA << "MateriaSource : Copy Constructor Is Called\n" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
        TheireStok[i] = NULL;
    *this = Copy;
}

MateriaSource::~MateriaSource()
{
    std::cout << RED << "MateriaSource Destructor Is Called\n" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
        delete TheireStok[i];
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& Opr)
{
    std::cout << MAGENTA << "MateriaSource Copy Issigment operator Is Called" << RESET << std::endl;
    
    if(this != &Opr)
    {
        for(int i = 0; i < 4; i++)
         {
            if(TheirStock[i] != NULL)
                delete TheirStock[i];
            if(Opr.TheireStok[i])
                TheirStock[i] = Opr.TheireStok[i]->clone();
            else
                TheirStock[i] = NULL;
         }  
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* Arg)
{
    if(Arg != NULL)
    {
        for(int i = 0; i < 4; i++)
        {
            if(TheireStok[i] == NULL)
                break;
        }
        if(i < 4)
            TrueCondition(TheireStok, Arg);
        else
            FalseCondition(TheireStok, Arg);
    }
}

AMateria*	createMateria(std::string const& Type)
{
    for(int i = 0; i < 4; i++)
    {
        if(TheireStok[i] != NULL && TheirStok[i]->getType() == Type)
        {
            std::cout << BOLD << "return the env...\n" << RESET << std::endl;
            return (TheirStok[i]->clone());
        }
    }
    return (NULL);
}
