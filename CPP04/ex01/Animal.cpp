#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Animal::Animal( ) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& src ) : type(src.type) {
	std::cout << "Animal copy contructor called" << std::endl;
}

Animal& Animal::operator=( const Animal& src ) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "..." << std::endl;
}

const std::string& Animal::getType() const {
	return (type);
}

Brain* Animal::getBrain() const {
	return NULL;
}
