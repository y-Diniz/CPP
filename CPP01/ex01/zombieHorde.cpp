/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:21:53 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 00:45:49 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	
	Zombie* zombie_horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].setName(name);
		zombie_horde[i].announce();
	}
	return (zombie_horde);
}