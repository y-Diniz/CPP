/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:13 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 02:17:27 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string& type ) : type(type) {}

const	std::string& Weapon::getType() const {
	
	return (type);
}

void	Weapon::setType( const std::string& type ) {
	
	this->type = type;
}
