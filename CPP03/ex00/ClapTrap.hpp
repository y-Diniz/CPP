/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:21:43 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/03 18:51:21 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap {
	
	public:
		ClapTrap( );
		ClapTrap(  const std::string& name  );
		~ClapTrap();
		ClapTrap( const ClapTrap& ct );
		ClapTrap& operator=( const ClapTrap& ct );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		std::string getName( ) const;

	private:
		std::string name_;
		unsigned int hit_points_;
		unsigned int energy_points_;
		unsigned int attack_damage_;
	
};

#endif