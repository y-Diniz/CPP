/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:51:52 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:59:45 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(  ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 30;
}

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name ) {
	std::cout << "DiamondTrap Constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 30;
}

DiamondTrap::~DiamondTrap(  ) {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& dt ) : ClapTrap( dt ), ScavTrap( dt ), FragTrap( dt ) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	name_ = dt.name_;
	hit_points_ = dt.hit_points_;
	energy_points_ = dt.energy_points_;
	attack_damage_ = dt.attack_damage_;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& src ) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=( src );
	name_ = src.name_;
	return *this;
}

void DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack( target );
}

void DiamondTrap::whoAmI() {
	if (hit_points_)
		std::cout << "My DiamondTrap name is " << name_ << " and my ClapTrap name is " << ClapTrap::name_ << std::endl;
	else
		std::cout << "My DiamondTrap name is " << name_ << " and my ClapTrap name is " << ClapTrap::name_ << " but I'm dead ):" << std::endl;
}

std::string DiamondTrap::getName( ) const {
	return name_;
}

int DiamondTrap::getEnergyPoints() const {
	return energy_points_;
}