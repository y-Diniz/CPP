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

Fixed::Fixed() : fixed_(0) { }

Fixed::Fixed(const Fixed& src) : fixed_(src.fixed_) { }

Fixed::~Fixed() { }

Fixed::Fixed( int const n ) {
	fixed_ = n << bits;
}

Fixed::Fixed( float const n ) {
	fixed_ = roundf(n * (1 << bits));
}

float Fixed::toFloat( void ) const {
	return (float)fixed_ / (1 << bits);
}

int Fixed::toInt( void ) const {
	return (int)fixed_ >> bits;
}


int Fixed::getRawbits( void ) const {
	return (fixed_);
}

void Fixed::setRawbits( int const raw ) {
	fixed_ = raw;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	if (this != &rhs)
		setRawbits(rhs.getRawbits());
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
	add.setRawbits(fixed_ + rhs.getRawbits());
	return add;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	Fixed sub;
	sub.setRawbits(fixed_ - rhs.getRawbits());
	return sub;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	Fixed multi;
	multi.setRawbits( (fixed_ * rhs.getRawbits()) >> bits );
	return multi;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	Fixed div;
	div.setRawbits( (fixed_ << bits) / rhs.getRawbits() );
	return div;
}

bool Fixed::operator>(const Fixed& rhs) const {
	return fixed_ > rhs.getRawbits();
}

bool Fixed::operator<(const Fixed& rhs) const {
	return fixed_ < rhs.getRawbits();
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return fixed_ >= rhs.getRawbits();
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return fixed_ <= rhs.getRawbits();
}

bool Fixed::operator==(const Fixed& rhs) const {
	return fixed_ == rhs.getRawbits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return fixed_ != rhs.getRawbits();
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