/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:53:16 by rafaoliv          #+#    #+#             */
/*   Updated: 2026/05/02 17:48:35 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed() : fixed_(0) { }

Fixed::Fixed(const Fixed& src) : fixed_(src.fixed_) { }

Fixed::~Fixed() { }

Fixed::Fixed( int const n ) {
	fixed_ = n << BITS;
}

Fixed::Fixed( float const n ) {
	fixed_ = roundf(n * (1 << BITS));
}

float Fixed::toFloat( void ) const {
	return (float)fixed_ / (1 << BITS);
}

int Fixed::toInt( void ) const {
	return (int)fixed_ >> BITS;
}


int Fixed::getRawBits( void ) const {
	return (fixed_);
}

void Fixed::setRawBits( int const raw ) {
	fixed_ = raw;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	if (this != &rhs)
		setRawBits(rhs.getRawBits());
	return *this;
}

Fixed& Fixed::operator++() {
	fixed_ += 1;
	return *this;
}

Fixed& Fixed::operator--() {
	fixed_ -= 1;
	return *this;
}

Fixed  Fixed::operator++(int) {
	Fixed temp = *this;
	fixed_ +=1;
	return temp;
}

Fixed  Fixed::operator--(int) {
	Fixed temp = *this;
	fixed_ -=1;
	return temp;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
	Fixed add;
	add.setRawBits(fixed_ + rhs.getRawBits());
	return add;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	
	Fixed sub;
	sub.setRawBits(fixed_ - rhs.getRawBits());
	return sub;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	
	Fixed multi;
	multi.setRawBits( (fixed_ * rhs.getRawBits()) >> BITS );
	return multi;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	
	Fixed div;
	div.setRawBits( (fixed_ << BITS) / rhs.getRawBits() );
	return div;
}

bool Fixed::operator>(const Fixed& rhs) const {
	return fixed_ > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const {
	return fixed_ < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return fixed_ >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return fixed_ <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const {
	return fixed_ == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return fixed_ != rhs.getRawBits();
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixed) {
    output << fixed.toFloat();
    return output;
}