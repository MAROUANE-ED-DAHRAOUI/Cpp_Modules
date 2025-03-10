#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* a = new WrongCat();
	
	std::cout << a->getType() << " " << std::endl;
	a->makeSound();
	delete a;

	Cat* c = new Cat();
	Cat* d = new Cat(*c);
	d->makeSound();

	delete c;
	delete d;
	return 0;
}
