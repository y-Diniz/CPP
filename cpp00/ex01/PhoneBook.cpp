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

PhoneBook::PhoneBook() : Count(0), Index(0) {}

void PhoneBook::AddToPhoneBook(void)
{
	if (Index >= 8)
		Index = 0;
	ContactArray[Index].SetContact();
	Index++;
	if (Count < 8)
		Count++;
}

void PhoneBook::PrintPhoneBook(void)
{
	int    Index;

    Index = 0;
    while (Index < Count)
	{
		ContactArray[Index].PrintContacts(Index);
		Index++;
	}
}

void PhoneBook::GetChosenContact()
{
	std::string Input;
	int Index;
	int	i;
	
	i = 3;
	while (i >= 0)
	{
		std::cout << "Enter the index of the contact you wish to view:" << std::endl;
		std::cout << "> ";
		getline(std::cin, Input);
		size_t Check = Input.find_first_not_of("01234567");
		if (Check == std::string::npos)
			break;
		std::cout << "Invalid index. Please enter a number. You have " << i << " tries left" << std::endl;
		i--;
	}
	
	if (i < 0)
		return ;
	
	std::stringstream ss(Input);
	ss >> Index;
	if (Index < Count)
		ContactArray[Index].PrintChosenContact();
	else
		std::cout << "Index out of range. No contact found at this position." << std::endl;
}