/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:09:19 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:12:05 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap {
	
	public:
		FragTrap( );
		FragTrap( const std::string& name );
		~FragTrap( );
		FragTrap( const FragTrap& src );
		FragTrap& operator=( const FragTrap& src );
		void attack( const std::string& target );
		void highFivesGuys(void);
};

#endif