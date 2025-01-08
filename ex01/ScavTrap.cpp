/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:29:12 by pleander          #+#    #+#             */
/*   Updated: 2025/01/07 14:47:21 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap{"Default ScavTrap", 100, 50, 20}
{
	std::cout << "Default constructor of ScavTrap " << this->name_
	          << " has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap{name, 100, 50, 20}
{
	std::cout << "Name constructor of ScavTrap " << this->name_
	          << " has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s)
    : ClapTrap{s.name_, s.hit_points_, s.energy_points_, s.attack_damage_}
{
	std::cout << "Copy constructor of ScavTrap " << this->name_
	          << " has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name_
	          << " has been deleted by the destructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
	std::cout << "Copy assignment constructor of ScavTrap " << this->name_
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

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		this->energy_points_ -= 1;
		std::cout << "ScavTrap " << this->name_ << " attacks " << target
		          << ", causing " << this->attack_damage_
		          << " points of damage!" << std::endl;
	}
	else
	{
		std::cout
		    << "ScavTrap " << this->name_
		    << " does not have enough energy points or hit points to attack"
		    << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		std::cout << "ScavTrap " << this->name_
		          << " is not in Gate keeper mode." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name_
		          << " does not have enough energy points or hit points to "
		             "Guard gate."
		          << std::endl;
	}
}
