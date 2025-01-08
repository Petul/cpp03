/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:31:35 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 16:00:47 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap{"Default DiamondTrap_clap_name"}, name_{"Default DiamondTrap"}
{
	this->hit_points_ = FragTrap::hit_points_;
	this->energy_points_ = ScavTrap::energy_points_;
	this->attack_damage_ = FragTrap::attack_damage_;
	std::cout << "Name constructor of DiamondTrap " << this->name_
	          << " has been called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap{name + "_clap_name"}, name_{name}
{
	this->hit_points_ = FragTrap::hit_points_;
	this->energy_points_ = ScavTrap::energy_points_;
	this->attack_damage_ = FragTrap::attack_damage_;
	std::cout << "Name constructor of DiamondTrap " << this->name_
	          << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& d)
    : ClapTrap{d.ClapTrap::name_, d.hit_points_, d.energy_points_,
               d.attack_damage_},
      name_{d.name_}
{
	std::cout << "Copy constructor of DiamondTrap " << this->name_
	          << " has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap s)
{
	std::cout << "Copy assignment constructor of DiamondTrap" << this->name_
	          << " has been called" << std::endl;

	if (this == &s)  // Self assignment guard
	{
		return (*this);
	}
	ClapTrap::name_ = s.ClapTrap::name_;
	this->name_ = s.name_;
	this->hit_points_ = s.hit_points_;
	this->energy_points_ = s.energy_points_;
	this->attack_damage_ = s.attack_damage_;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name_
	          << " has been deleted by the destructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name_
	          << " and ClapTrap name: " << ClapTrap::name_ << std::endl;
}
