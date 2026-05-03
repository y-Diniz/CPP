/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:53:16 by rafaoliv          #+#    #+#             */
/*   Updated: 2026/05/03 19:24:11 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed() : fixed_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) : fixed_(src.fixed_) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		setRawbits(src.getRawbits());
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const n ) {
	std::cout << "Int constructor called" << std::endl;
	fixed_ = n << bits;
}

Fixed::Fixed( float const n ) {
	std::cout << "Float constructor called" << std::endl;
	fixed_ = roundf(n * (1 << bits));
}

float Fixed::toFloat( ) const {
	return (float)fixed_ / (1 << bits);
}

int Fixed::toInt( ) const {
	return (int)fixed_ >> bits;
}


int Fixed::getRawbits( ) const {
	std::cout << "getRawbits member function called" << std::endl;
	return fixed_;
}

void Fixed::setRawbits( int const raw ) {
	fixed_ = raw;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed) {
    output << fixed.toFloat();
    return output;
}