/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:09 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 01:50:30 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>

#include "Weapon.hpp"

class HumanB {
	
	public:
		HumanB( std::string name );
		void	attack( void );
		void	setWeapon( Weapon& weapon );

	private:
		std::string	name;
		Weapon*		weapon;

};

#endif