#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria*	inventory[4];
		AMateria*	trachInventory[4];
	public:
		Character();
		~Character();
		Character(const std::string& _name);
		Character(const Character& _copy);
		const Character& operator=(const Character& _assignment);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
