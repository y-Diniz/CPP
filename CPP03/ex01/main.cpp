/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:18:03 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/03 20:19:20 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main () {
	ScavTrap a( "Maeve" );
	ScavTrap b( "Mala" );
	ScavTrap c = a;
	
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
	a.attack( "Aelin" );
	a.takeDamage( 90 );
	a.guardGate( );
	a.beRepaired( 90 );
	a.attack( "Aelin" );
	a.takeDamage( 50 );
	a.guardGate( );
	a.takeDamage( 50 );
	a.attack( "Aelin" );
	
	return 0;
}