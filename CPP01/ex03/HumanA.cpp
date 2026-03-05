/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:04 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 01:36:16 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
