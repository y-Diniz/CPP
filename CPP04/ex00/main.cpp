#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "ANIMAL" << std::endl;
		
		const Animal* meta = new Animal();
		const Animal* d = new Dog();
		const Animal* c = new Cat();

		std::cout << d->getType() << " : Dog type " << std::endl;
		std::cout << c->getType() << " : Cat type" << std::endl;

		c->makeSound(); // will output the cat sound!
		d->makeSound();
		meta->makeSound();

		delete meta;
		delete d;
		delete c;
	}
	{
		std::cout << std::endl;
		std::cout << "WRONG ANIMAL" << std::endl;

		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* wc = new WrongCat();

		std::cout << wc->getType() << " " << std::endl;

		wc->makeSound(); // will output the WrongAnimal sound!
		meta->makeSound();

		delete meta;
		delete wc;
	}

	return 0;
}