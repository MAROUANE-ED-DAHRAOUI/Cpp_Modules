#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& _copy);
		Cure& operator=(const Cure& _assignment);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
