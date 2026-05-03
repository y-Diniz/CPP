/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:18:03 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/03 20:10:21 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main () {
	ClapTrap a( "Maeve" );
	ClapTrap b( "Mala" );
	ClapTrap c = a;
	
	std::cout << "A name: " << a.getName() << std::endl;
	std::cout << "B name: " << b.getName() << std::endl;
	std::cout << "C name: " << c.getName() << std::endl;

	b = a;
	std::cout << "B name: " << b.getName() << std::endl;
	
	std::cout << std::endl;
	std::cout << "------------------------------------------ THE FINAL BATTLE ------------------------------------------" << std::endl;
	std::cout << std::endl;
	
	a.attack( "Aelin" );
	a.takeDamage( 9 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.beRepaired( 1 );
	a.attack( "Aelin" );
	a.takeDamage( 5 );
	a.beRepaired( 1 );
	a.takeDamage( 5 );
	a.beRepaired( 1 );
	a.takeDamage( 5 );
	a.attack( "Aelin" );
	return 0;
}