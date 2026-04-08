/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:21 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/02 15:21:36 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::SetContact() {
	
	GetInfo(FirstName, "First Name: ", false);
	GetInfo(LastName, "Last Name: ", false);
	GetInfo(NickName, "Nick Name: ", false);
	GetInfo(PhoneNumber, "Phone Number: ", true);
	GetInfo(DarkSecret, "Dark Secret: ", false);
}

void Contact::GetInfo(std::string &Field, std::string Text, bool Phone)
{
	while (1)
	{
		std::cout << Text; 
		getline(std::cin, Field);
		if (Phone)
		{
			size_t Check = Field.find_first_not_of("0123456789");
			if (Check != std::string::npos)
			{
				std::cout << "Phone number must contain digits only. Please try again." << std::endl;
				continue ;
			}
			if (Field.size() < 7 || Field.size() > 15)
			{
				std::cout << "Phone number must be between 7 and 15 digits. Please try again." << std::endl;
				continue ;
			}
		}
		if (Field.empty() == false)
			break ;
		std::cout << "This field is required. Please try again." << std::endl;
	}
	
}
void Contact::PrintChosenContact()
{
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nick Name: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Dark Secret: " << DarkSecret << std::endl << std::endl;
}

void Contact::PrintContacts(int Index)
{
	std::cout 	<< std::setw(10) << std::right << Index;
	std::cout	<< '|';
	FirstName.size() > 10 ? ShrinkString(FirstName) : PrintField(FirstName);
	std::cout	<< '|';
	LastName.size() > 10 ? ShrinkString(LastName) : PrintField(LastName);
	std::cout	<< '|';
	NickName.size() > 10 ? ShrinkString(NickName) : PrintField(NickName);
	std::cout	<< std::endl << std::endl;
}

void Contact::PrintField(std::string Text)
{
	std::cout << std::right << std::setw(10) << Text;
}

void Contact::ShrinkString(std::string Text)
{
	std::string Sub;
	
	Sub = Text.substr(0, 9);
	Sub.append(".");
	PrintField(Sub);
}