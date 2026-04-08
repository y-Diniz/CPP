/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 23:28:38 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/09 19:35:40 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main( void )
{
	randomChump("(random)Aedion");
	Zombie* aelin = newZombie("(new)Aelin");
	aelin->announce();
	randomChump("(random)Dorian");
	Zombie* rowan = newZombie("(new)Rowan");
	rowan->announce();
	delete rowan;
	delete aelin;
	return 0;
}