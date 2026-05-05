/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:09:22 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/04 18:37:29 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( ) : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor called" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
}

ScavTrap::~ScavTrap( ) {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src ) : ClapTrap(src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& src ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=( src );
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	if (energy_points_ && hit_points_)
	{
		std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
		energy_points_ -= 1;
	}
	else if (!hit_points_)
		std::cout << "ScavTrap " << name_ << " can't attack because it's dead ):" << std::endl;
	else
		std::cout << "ScavTrap " << name_ << " can't attack because it's too tired ):" << std::endl;
}

void ScavTrap::guardGate() {
	if (hit_points_)
		std::cout << "ScavTrap is now in gatekeeper mode" << std::endl;
	else
		std::cout << "ScavTrap can't be in gatekeeper mode because it's already dead ):" << std::endl;
}