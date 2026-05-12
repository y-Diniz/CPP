/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:18:03 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/09 15:02:44 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main () {
	DiamondTrap a( "Maeve" );
	DiamondTrap b( "Mala" );
	DiamondTrap c = a;
	
	std::cout << "A name: " << a.getName() << std::endl;
	std::cout << "B name: " << b.getName() << std::endl;
	std::cout << "C name: " << c.getName() << std::endl;

	b = a;
	std::cout << "B name: " << b.getName() << std::endl;
	
	std::cout << std::endl;
	std::cout << "------------------------------------------ THE FINAL BATTLE ------------------------------------------" << std::endl;
	std::cout << std::endl;
	
	a.whoAmI();
	a.highFivesGuys( );
	for (int i = 0; i < 40; i++)
	{
		std::cout << "#" << i << " ";
		a.attack( "Aelin" );
	}
	std::cout << "ENERGY LEFT: " << a.getEnergyPoints() << std::endl;
	a.takeDamage( 90 );
	a.beRepaired( 10 );
	for (int i = 0; i < 10; i++)
	{
		std::cout << "#" << i << " ";
		a.attack( "Aelin" );
	}
	std::cout << "ENERGY LEFT: " << a.getEnergyPoints() << std::endl;
	a.guardGate();
	a.beRepaired( 90 );
	a.takeDamage( 50 );
	a.highFivesGuys( );
	a.guardGate();
	a.whoAmI();
	a.takeDamage( 50 );
	a.attack( "Aelin" );
	
	return 0;
}