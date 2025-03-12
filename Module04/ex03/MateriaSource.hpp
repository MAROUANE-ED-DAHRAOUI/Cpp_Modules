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
    void	learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const& type);
};

#endif