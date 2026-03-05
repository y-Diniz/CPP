/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:08 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 01:59:18 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : weapon(NULL)
{
	this->name = name;
}

void	HumanB::attack( void )
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their hands" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}