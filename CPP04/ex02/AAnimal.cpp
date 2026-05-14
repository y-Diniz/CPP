#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

AAnimal::AAnimal( ) {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src ) : type(src.type) {
	std::cout << "AAnimal copy contructor called" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& src ) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}

const std::string& AAnimal::getType() const {
	return (type);
}

Brain* AAnimal::getBrain() const {
	return NULL;
}
