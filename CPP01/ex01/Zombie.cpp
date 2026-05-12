/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:21:49 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:43:09 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << name << ": was created" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << name << ": was destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}