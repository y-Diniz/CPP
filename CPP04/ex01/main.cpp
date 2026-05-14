#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void print(const std::string& s)
{
	std::cout << s << std::endl;
}

int main()
{
	std::cout << std::endl;
	print("---- Create animal: Dog ----");
	std::cout << std::endl;
	const Animal* d = new Dog();
	std::cout << std::endl;
	print("---- Create animal: Cat ----");
	std::cout << std::endl;
	const Animal* c = new Cat();
	std::cout << std::endl;
	print("---- Destroy animal: Dog ----");
	std::cout << std::endl;
	delete d;
	std::cout << std::endl;
	print("---- Destroy animal: Cat ----");
	std::cout << std::endl;
	delete c;
	std::cout << std::endl;
	print("---- Create array of animals ----");
	std::cout << std::endl;
	Animal* array[4];

	array[0] = new Cat();
	std::cout << std::endl;
	array[1] = new Dog();
	std::cout << std::endl;
	array[2] = new Cat();
	std::cout << std::endl;
	array[3] = new Dog();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << array[i]->getType() << ": ";
		array[i]->makeSound();
		delete array[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	print("---- Deep copy test ----");
	std::cout << std::endl;

	Cat cat1;
	cat1.getBrain()->setIdea( 0, "I love being a cat" );
	Cat cat2 = cat1;
	std::cout << std::endl;
	std::cout << "cat1 idea: ";
	print(cat1.getBrain()->getIdea( 0 ));
	std::cout << "cat2 idea: ";
	print(cat2.getBrain()->getIdea( 0 ));
	cat2.getBrain()->setIdea( 0, "I'm hungry" );
	std::cout << "cat1 idea: ";
	print(cat1.getBrain()->getIdea( 0 ));
	std::cout << "cat2 idea: ";
	print(cat2.getBrain()->getIdea( 0 ));
	std::cout << std::endl;
	Cat cat3;
	cat3 = cat2;
	std::cout << std::endl;
	std::cout << "cat3 idea: ";
	print(cat3.getBrain()->getIdea( 0 ));
	std::cout << std::endl;

	return 0;
}