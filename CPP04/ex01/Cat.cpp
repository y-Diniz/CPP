#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat::Cat( const Cat& src ) {
	std::cout << "Cat copy contructor called" << std::endl;
	type = src.type;
	brain = new Brain;
	*brain = *src.brain;
}

Cat& Cat::operator=( const Cat& src ) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
	{
		if (brain)
			delete brain;
		type = src.type;
		brain = new Brain;
		*brain = *src.brain;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << type << " says meow" << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}