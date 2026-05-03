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

int Fixed::getRawbits( void ) const {
	std::cout << "getRawbits member function called" << std::endl;
	return (this->fixed_);
}

void Fixed::setRawbits( int const raw ) {
	this->fixed_ = raw;
}
