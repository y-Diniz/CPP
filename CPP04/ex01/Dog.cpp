#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}
Dog::Dog( const Dog& src ) {
	std::cout << "Dog copy contructor called" << std::endl;
	type = src.type;
	brain = new Brain;
	*brain = *src.brain;
}

Dog& Dog::operator=( const Dog& src ) {
	std::cout << "Dog copy assignment operator called" << std::endl;
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

void Dog::makeSound() const {
	std::cout << type << " says au au" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}