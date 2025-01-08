/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:03:29 by pleander          #+#    #+#             */
/*   Updated: 2025/01/07 14:50:27 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
    : name_("Default ClapTrap"),
      hit_points_(10),
      energy_points_(10),
      attack_damage_(0)

{
	std::cout << "Default constructor of ClapTrap " << this->name_
	          << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0)
{
	std::cout << "Name constructor of ClapTrap " << this->name_
	          << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name, int hit_points, int energy_points,
                   int attack_damage)
    : name_(name),
      hit_points_(hit_points),
      energy_points_(energy_points),
      attack_damage_(attack_damage)
{
	std::cout << "Name constructor of ClapTrap " << this->name_
	          << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
    : name_(c.name_),
      hit_points_(c.hit_points_),
      energy_points_(c.energy_points_),
      attack_damage_(c.attack_damage_)
{
	std::cout << "Copy constructor of ClapTrap " << this->name_
	          << " has been called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	std::cout << "Copy assignment constructor of ClapTrap " << this->name_
	          << " has been called" << std::endl;

	if (this == &c)  // Self assignment guard
	{
		return (*this);
	}
	this->name_ = c.name_;
	this->hit_points_ = c.hit_points_;
	this->energy_points_ = c.energy_points_;
	this->attack_damage_ = c.attack_damage_;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name_
	          << " has been deleted by the destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		this->energy_points_ -= 1;
		std::cout << "ClapTrap " << this->name_ << " attacks " << target
		          << ", causing " << this->attack_damage_
		          << " points of damage!" << std::endl;
	}
	else
	{
		std::cout
		    << "ClapTrap " << this->name_
		    << " does not have enough energy points or hit points to attack"
		    << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points_ > 0)
	{
		if (amount > static_cast<unsigned int>(this->hit_points_))
			this->hit_points_ = 0;
		else
		{
			this->hit_points_ = this->hit_points_ - amount;
		}
		std::cout << "ClapTrap " << this->name_ << " takes " << amount
		          << ", hitpoints of damage. " << "Total hitpoints are now "
		          << this->hit_points_ << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name_ << " is already destroyed."
		          << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points_ > 0 && this->energy_points_ > 0)
	{
		this->energy_points_ -= 1;
		this->hit_points_ += amount;
		std::cout << "ClapTrap " << this->name_ << " repairs itself by "
		          << amount << ", hitpoints. " << "Total hitpoints are now "
		          << this->hit_points_ << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name_
		          << " does not have enough energy points or hit points to "
		             "repair itself"
		          << std::endl;
	}
}
