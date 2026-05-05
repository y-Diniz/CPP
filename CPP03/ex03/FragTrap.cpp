/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:09:22 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 19:20:05 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( ) : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name ) {
	std::cout << "FragTrap Constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
}

FragTrap::~FragTrap( ) {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& src ) : ClapTrap( src ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& src ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=( src );
	return *this;
}

void FragTrap::attack( const std::string& target ) {
	if (energy_points_ && hit_points_)
	{
		std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
		energy_points_ -= 1;
	}
	else if (!hit_points_)
		std::cout << "FragTrap " << name_ << " can't attack because it's dead ):" << std::endl;
	else
		std::cout << "FragTrap " << name_ << " can't attack because it's too tired ):" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (hit_points_)
		std::cout << "FragTrap " << name_ << " is requesting a high five!" << std::endl;
	else
		std::cout << "FragTrap " << name_ << " can't request a high five because it's dead ):" << std::endl;
}