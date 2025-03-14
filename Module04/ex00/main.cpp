#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "\n---------------------------------------------\n"; 
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl; // Expected: "Dog"
	std::cout << cat->getType() << std::endl; // Expected: "Cat"

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n---------------------------------------------\n"; 

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	std::cout << "\n---------------------------------------------\n"; 
	Dog* dog1 = new Dog();
	Dog* dog2 = new Dog(*dog1); // Copy constructor
	*dog2 = *dog1;             // Assignment operator

	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat(*cat1); // Copy constructor
	*cat2 = *cat1;             // Assignment operator

	delete dog1;
	delete dog2;
	delete cat1;
	delete cat2;
	return 0;
}
