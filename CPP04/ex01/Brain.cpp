#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& src ) {
	std::cout << "Brain copy contructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
}

Brain& Brain::operator=( const Brain& src ) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	return *this;
}

void Brain::setIdea( int i, const std::string& idea ) {
	ideas[i] = idea;
}

const std::string& Brain::getIdea( int i ) const {
	return ideas[i];
}