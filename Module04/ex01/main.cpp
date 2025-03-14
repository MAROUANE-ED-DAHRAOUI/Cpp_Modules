#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
        std::cout << "\n---------------------------------------\n";

        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        delete dog;
        delete cat;

        std::cout << "\n---------------------------------------\n";

        Cat* cat1 = new Cat();
	Cat* cat2 = new Cat();

	*cat1 = *cat2;

	delete cat1;
	delete cat2;

        std::cout << "\n---------------------------------------\n";

        Dog* dog1 = new Dog(); 
	Dog* dog2 = new Dog();

	*dog1 = *dog2;

	delete dog1;
	delete dog2;

        std::cout << "\n---------------------------------------\n";

        return 0;
}
