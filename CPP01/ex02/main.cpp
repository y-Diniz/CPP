/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 00:45:07 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 00:58:46 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "Endereço string: " << &string << std::endl;
	std::cout << "Endereço stringPTR: " << stringPTR << std::endl;
	std::cout << "Endereço stringREF: " << &stringREF << std::endl;

	std::cout << "Valor string: " << string << std::endl;
	std::cout << "Valor stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valor stringREF: " << stringREF << std::endl;
}