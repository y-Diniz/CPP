/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:00 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/02 13:17:15 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), index(0) {}

void PhoneBook::addToPhoneBook(void)
{
	if (index >= 8)
		index = 0;
	contactArray[index].setContact();
	index++;
	if (count < 8)
		count++;
}

void PhoneBook::printPhoneBook(void)
{
	int    index;

    index = 0;
    while (index < count)
	{
		contactArray[index].printContacts(index);
		index++;
	}
}

void PhoneBook::getChosenContact()
{
	std::string input;
	int index;
	int	i;
	
	i = 3;
	while (i >= 0)
	{
		std::cout << "Enter the index of the contact you wish to view:" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		size_t check = input.find_first_not_of("01234567");
		if (check == std::string::npos)
			break;
		std::cout << "Invalid index. Please enter a number. You have " << i << " tries left" << std::endl;
		i--;
	}
	
	if (i < 0)
		return ;
	
	std::stringstream ss(input);
	ss >> index;
	if (index < count)
		contactArray[index].printChosenContact();
	else
		std::cout << "index out of range. No contact found at this position." << std::endl;
}