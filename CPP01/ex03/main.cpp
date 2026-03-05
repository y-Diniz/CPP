/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:11 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 02:03:02 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void )
{
	{
		Weapon club = Weapon("phantom");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("operator");
		bob.attack();
	}
	{
		Weapon club = Weapon("vandal");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("bulldog");
		jim.attack();
	}
	{
		Weapon club = Weapon("sheriff");

		HumanB jim("Jim");
		jim.attack();
	}
	return 0;
}