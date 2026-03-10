/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:11 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 02:21:27 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void ) {
	
	std::cout << "*** HUMAN A ATTACKS ***" << std::endl;
	{
		Weapon club = Weapon("phantom");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("operator");
		bob.attack();
	}
	std::cout << std::endl << "*** HUMAN B ATTACKS WITH WEAPON ***" << std::endl;
	{
		Weapon club = Weapon("vandal");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("bulldog");
		jim.attack();
	}
	std::cout << std::endl << "*** HUMAN B ATTACKS WITHOUT WEAPON ***" << std::endl;
	{
		Weapon club = Weapon("sheriff");

		HumanB jim("Jim");
		jim.attack();
	}
	return 0;
}