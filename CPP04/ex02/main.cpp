#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void print(const std::string& s)
{
	std::cout << s << std::endl;
}

int main()
{
	// AAnimal test;

	std::cout << std::endl;
	print("---- Create AAnimal: Dog ----");
	std::cout << std::endl;
	const AAnimal* d = new Dog();
	std::cout << std::endl;
	print("---- Create AAnimal: Cat ----");
	std::cout << std::endl;
	const AAnimal* c = new Cat();
	std::cout << std::endl;
	print("---- Destroy AAnimal: Dog ----");
	std::cout << std::endl;
	delete d;
	std::cout << std::endl;
	print("---- Destroy AAnimal: Cat ----");
	std::cout << std::endl;
	delete c;
	std::cout << std::endl;

	return 0;
}