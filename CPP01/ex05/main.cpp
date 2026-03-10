/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:14:41 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/09 20:42:14 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void testLevel(Harl &harl, const std::string& test);

int main( void )
{
	Harl harl;
	testLevel(harl, "DEBUG");
	testLevel(harl, "INFO");
	testLevel(harl, "WARNING");
	testLevel(harl, "ERROR");

	return 0;
}

void testLevel(Harl &harl, const std::string& test)
{
	std::cout << std::endl;
	std::cout << "------ Testing " << test << " ------" << std::endl;
	harl.complain(test);
}