/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:51:53 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:55:54 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	
	public:
		DiamondTrap(  );
		DiamondTrap( const std::string& name );
		~DiamondTrap(  );
		DiamondTrap( const DiamondTrap& dt );
		DiamondTrap& operator=( const DiamondTrap& src );
		void attack( const std::string& target );
		void whoAmI();
		std::string getName( ) const;
		int getEnergyPoints() const;
	
	private:
		std::string name_;

};

#endif