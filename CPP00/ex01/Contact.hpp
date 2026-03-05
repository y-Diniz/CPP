/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:43 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/25 05:58:52 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact {
	
	public:
		void setContact( void );
		void printContacts( int index );
		void printChosenContact();
		
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string dark_secret;
		std::string phone_number;

		void printField( std::string Text );
		void shrinkString( std::string Text );
		void getInfo( std::string &Field, std::string Text, bool Phone );
};

#endif