#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat::WrongCat( const WrongCat& src ) {
	std::cout << "WrongCat copy contructor called" << std::endl;
	type = src.type;
}

WrongCat& WrongCat::operator=( const WrongCat& src ) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &src)
		type = src.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << type << " says meow" << std::endl;
}
