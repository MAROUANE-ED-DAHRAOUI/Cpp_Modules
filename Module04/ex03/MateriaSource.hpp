#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* TheireStok[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource& Copy);
    const MateriaSource& operator=(const MateriaSource& Opr);
    void	learnMateria(AMateria* Arg);
	AMateria*	createMateria(std::string const& Type);
};

#endif  