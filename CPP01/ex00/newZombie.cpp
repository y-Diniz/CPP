/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 23:30:29 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 00:10:12 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <memory>

Zombie*	newZombie( std::string name )
{
	Zombie* zombie = new Zombie(name);
	return (zombie);
}