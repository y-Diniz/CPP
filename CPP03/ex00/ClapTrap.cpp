/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:21:41 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/03 19:02:33 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( ) : name_(""), hit_points_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& src ) : name_(src.name_), hit_points_(src.hit_points_), energy_points_(src.energy_points_), attack_damage_(src.attack_damage_){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& ct ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ct)
	{
		name_ = ct.name_;
		hit_points_ = ct.hit_points_;
        energy_points_ = ct.energy_points_;
        attack_damage_ = ct.attack_damage_;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (energy_points_ && hit_points_)
	{
		std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage! Well, I don't think " << target << " even got a scratch."<< std::endl;
		energy_points_ -= 1;
	}
	else if (!hit_points_)
		std::cout << "ClapTrap " << name_ << " can't attack because it's dead ):" << std::endl;
	else
		std::cout << "ClapTrap " << name_ << " can't attack because it's too tired ):" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (hit_points_)
	{
		std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage!" << std::endl;
		if (hit_points_ >= amount)
			hit_points_ -= amount;
		else
			hit_points_ = 0;
	}
	else
		std::cout << "ClapTrap " << name_ << " it's already dead ):" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (energy_points_ && hit_points_)
	{
		std::cout << "ClapTrap " << name_ << " repaired " << amount << " points of damage!" << std::endl;
		hit_points_ += amount;
		energy_points_ -= 1;
	}
	else if (!hit_points_)
		std::cout << "ClapTrap " << name_ << " can't repaired because it's dead ):" << std::endl;
	else
		std::cout << "ClapTrap " << name_ << " can't repaired because it's too tired ):" << std::endl;
}

std::string ClapTrap::getName( ) const {
	return name_;
}