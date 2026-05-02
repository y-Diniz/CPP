/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:45:22 by rafaoliv          #+#    #+#             */
/*   Updated: 2026/05/02 18:08:08 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::endl;
	std::cout << "OPERADORES DE INCREMENTO" << std::endl;
	std::cout << "valor inicial de A: ";
	std::cout << a << std::endl;
	std::cout << "A pré-incrementado: ";
	std::cout << ++a << std::endl;
	std::cout << "Valor de A atual: ";
	std::cout << a << std::endl;
	std::cout << "A pós-incrementado: ";
	std::cout << a++ << std::endl;
	std::cout << "Valor de A atual: ";
	std::cout << a << std::endl;	
	std::cout << "A pré-decrementado: ";
	std::cout << --a << std::endl;
	std::cout << "Valor de A atual: ";
	std::cout << a << std::endl;
	std::cout << "A pós-decrementado: ";
	std::cout << a-- << std::endl;
	std::cout << "Valor de A atual: ";
	std::cout << a << std::endl;
	std::cout << "Valor de B: ";
	std::cout << b << std::endl;
	std::cout << std::endl;
	std::cout << "FUNÇÕES MEMBRO" << std::endl;
	std::cout << "Maior valor entre A e B: ";
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Menor valor entre A e B: ";
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "OPERADORES DE COMPARAÇÃO" << std::endl;
	std::cout << "A > B: ";
	std::cout << (a > b) << std::endl;
	std::cout << "A < B: ";
	std::cout << (a < b) << std::endl;
	std::cout << "A >= B: ";
	std::cout << (a >= b) << std::endl;
	std::cout << "A / B: ";
	std::cout << (a <= b) << std::endl;
	std::cout << "A == B: ";
	std::cout << (a == b) << std::endl;
	std::cout << "A != B: ";
	std::cout << (a != b) << std::endl;
	std::cout << std::endl;
	std::cout << "OPERADORES ARITMÉTICOS" << std::endl;
	std::cout << "A + B: ";
	std::cout << (a + b) << std::endl;
	std::cout << "A - B: ";
	std::cout << (a - b) << std::endl;
	std::cout << "A * B: ";
	std::cout << (a * b) << std::endl;
	std::cout << "A / B: ";
	std::cout << (a / b) << std::endl;
	
	return 0;
}