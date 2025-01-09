/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:04:34 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 14:10:50 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

const int FragTrap::default_hit_points_ = 100;
const int FragTrap::default_energy_points_ = 100;
const int FragTrap::default_attack_damage_ = 30;

FragTrap::FragTrap()
    : ClapTrap{"Default FragTrap", FragTrap::default_hit_points_,
               FragTrap::default_energy_points_,
               FragTrap::default_attack_damage_}
{
	std::cout << "Default constructor of FragTrap " << this->name_
	          << " has been called" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap{name, FragTrap::default_hit_points_,
               FragTrap::default_energy_points_,
               FragTrap::default_attack_damage_}
{
	std::cout << "Name constructor of FragTrap " << this->name_
	          << " has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& s)
    : ClapTrap{s.name_, s.hit_points_, s.energy_points_, s.attack_damage_}
{
	std::cout << "Copy constructor of FragTrap " << this->name_
	          << " has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name_
	          << " has been deleted by the destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& s)
{
	std::cout << "Copy assignment constructor of FragTrap " << this->name_
	          << " has been called" << std::endl;

	if (this == &s)  // Self assignment guard
	{
		return (*this);
	}
	this->name_ = s.name_;
	this->hit_points_ = s.hit_points_;
	this->energy_points_ = s.energy_points_;
	this->attack_damage_ = s.attack_damage_;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		this->energy_points_ -= 1;
		std::cout << "FragTrap " << this->name_ << " attacks " << target
		          << ", causing " << this->attack_damage_
		          << " points of damage!" << std::endl;
	}
	else
	{
		std::cout
		    << "FragTrap " << this->name_
		    << " does not have enough energy points or hit points to attack"
		    << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		std::cout << "Hey, FragTrap " << this->name_
		          << " thinks we should do a high five.. " << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name_
		          << " does not have enough energy points or hit points to "
		             "suggest a high five."
		          << std::endl;
	}
}
