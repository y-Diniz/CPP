/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 23:28:38 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:40:31 by rafaoliv         ###   ########.fr       */
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
	delete aelin;
	delete rowan;
	return 0;
}