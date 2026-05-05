/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:09:19 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:12:08 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap {
	
	public:
		ScavTrap( );
		ScavTrap( const std::string& name );
		~ScavTrap( );
		ScavTrap( const ScavTrap& src );
		ScavTrap& operator=( const ScavTrap& src );
		void attack( const std::string& target );
		void guardGate();

};

#endif