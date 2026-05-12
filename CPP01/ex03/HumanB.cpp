/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:08 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:49:04 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL) {}

void	HumanB::attack( void ) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks unarmed" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->weapon = &weapon;
}