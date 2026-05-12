#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog( const Dog& src ) {
	std::cout << "Dog copy contructor called" << std::endl;
	type = src.type;
}

Dog& Dog::operator=( const Dog& src ) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << type << " says au au" << std::endl;
}
