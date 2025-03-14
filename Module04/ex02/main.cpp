#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
            
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete (j);
    delete (i);

	std::cout << "\n----------------------------------------\n";
   
	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat();

	*cat1 = *cat2;

	delete cat1;
	delete cat2;

	std::cout << "\n----------------------------------------\n";

	int len = 10, index = -1;

    Animal** animal= new Animal*[len];

	while (++index < len)
	{
		if (index < len / 2)
			animal[index] = new Cat();
		else
			animal[index] = new Dog();
	}
	index = -1;
	while (++index < len)
		delete animal[index];
	delete [] animal;

	std::cout << "\n----------------------------------------\n";

    return 0;
}
