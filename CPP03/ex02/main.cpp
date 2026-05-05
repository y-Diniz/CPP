/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:18:03 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:30:45 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main () {
	FragTrap a( "Maeve" );
	FragTrap b( "Mala" );
	FragTrap c = a;
	
	std::cout << "A name: " << a.getName() << std::endl;
	std::cout << "B name: " << b.getName() << std::endl;
	std::cout << "C name: " << c.getName() << std::endl;

	b = a;
	std::cout << "B name: " << b.getName() << std::endl;
	
	std::cout << std::endl;
	std::cout << "------------------------------------------ THE FINAL BATTLE ------------------------------------------" << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 50; i++)
		a.attack( "Aelin" );
	a.takeDamage( 90 );
	a.beRepaired( 10 );
	for (int i = 0; i < 50; i++)
		a.attack( "Aelin" );
	a.highFivesGuys( );
	a.beRepaired( 90 );
	a.takeDamage( 50 );
	a.highFivesGuys( );
	a.takeDamage( 50 );
	a.attack( "Aelin" );
	
	return 0;
}