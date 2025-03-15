#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice& _copy);
		Ice& operator=(const Ice& _assignment);
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
