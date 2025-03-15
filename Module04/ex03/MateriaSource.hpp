#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* inventory[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& _copy);
		const MateriaSource& operator=(const MateriaSource& _assignment);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
