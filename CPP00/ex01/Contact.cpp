/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:21 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/25 05:58:36 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::setContact() {
	
	getInfo(first_name, "First Name: ", false);
	getInfo(last_name, "Last Name: ", false);
	getInfo(nick_name, "Nick Name: ", false);
	getInfo(phone_number, "Phone Number: ", true);
	getInfo(dark_secret, "Dark Secret: ", false);
}

void Contact::getInfo(std::string &field, std::string text, bool phone)
{
	while (1)
	{
		std::cout << text; 
		getline(std::cin, field);
		if (phone)
		{
			size_t check = field.find_first_not_of("0123456789");
			if (check != std::string::npos)
			{
				std::cout << "Phone number must contain digits only. Please try again." << std::endl;
				continue ;
			}
			if (field.size() < 7 || field.size() > 15)
			{
				std::cout << "Phone number must be between 7 and 15 digits. Please try again." << std::endl;
				continue ;
			}
		}
		if (field.empty() == false)
			break ;
		std::cout << "This field is required. Please try again." << std::endl;
	}
	
}
void Contact::printChosenContact()
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nick Name: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Dark Secret: " << dark_secret << std::endl << std::endl;
}

void Contact::printContacts(int index)
{
	std::cout 	<< std::setw(10) << std::right << index;
	std::cout	<< '|';
	first_name.size() > 10 ? shrinkString(first_name) : printField(first_name);
	std::cout	<< '|';
	last_name.size() > 10 ? shrinkString(last_name) : printField(last_name);
	std::cout	<< '|';
	nick_name.size() > 10 ? shrinkString(nick_name) : printField(nick_name);
	std::cout	<< std::endl << std::endl;
}

void Contact::printField(std::string text)
{
	std::cout << std::right << std::setw(10) << text;
}

void Contact::shrinkString(std::string text)
{
	std::string sub;
	
	sub = text.substr(0, 9);
	sub.append(".");
	printField(sub);
}