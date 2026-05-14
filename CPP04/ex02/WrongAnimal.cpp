#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( ) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src ) : type(src.type) {
	std::cout << "WrongAnimal copy contructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src ) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (type);
}
