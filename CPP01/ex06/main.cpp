/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:03:54 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/09 21:26:42 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Usage: " << av[0] << " <complain>" << std::endl;
		return 1;
	}
	
	Harl harl;
	std::string complain = av[1];
	
	harl.complain(complain);

	return 0;
}