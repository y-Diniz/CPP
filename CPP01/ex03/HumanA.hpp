/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:04:06 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/05 01:48:13 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA( std::string name, Weapon& weapon );
		void	attack( void );

	private:
		std::string	name;
		Weapon&		weapon;

};

#endif