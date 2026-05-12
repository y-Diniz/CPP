/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:21:47 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:46:16 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int N = 4;
	Zombie* zombies = zombieHorde( N, "Aelin" );
	delete[] zombies;
	return 0;
}