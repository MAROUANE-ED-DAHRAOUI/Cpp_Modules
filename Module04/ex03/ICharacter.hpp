#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"
#define RESET       "\033[0m"

#include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif

