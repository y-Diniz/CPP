/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:13 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 01:42:50 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string& type )
{
	this->type = type;
}

const	std::string& Weapon::getType() const
{
	return (type);
}

void	Weapon::setType( const std::string& type )
{
	this->type = type;
}
