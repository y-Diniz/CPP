/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:48 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/02 13:26:18 by rafaoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>

# include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook();
		void addToPhoneBook( void );
		void printPhoneBook( void );
		void getChosenContact( void );

	private:
		Contact contactArray[8];
		int		count;
		int		index;
};

#endif