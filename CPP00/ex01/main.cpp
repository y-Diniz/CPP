/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:18:21 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/06 16:32:02 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 	phoneBook;
	std::string input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nEOF received. Exiting program.\n";
			break ;
		}
		if (input == "ADD")
			phoneBook.addToPhoneBook();
		else if (input == "SEARCH")
		{
			phoneBook.printPhoneBook();
			phoneBook.getChosenContact();
		}
	}
	return 0;
}
