#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
Cat::Cat( const Cat& src ) {
	std::cout << "Cat copy contructor called" << std::endl;
	type = src.type;
}

Cat& Cat::operator=( const Cat& src ) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << type << " says meow" << std::endl;
}
