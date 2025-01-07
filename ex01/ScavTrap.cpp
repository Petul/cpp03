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

ScavTrap::ScavTrap()
{
	ScavTrap("Default ScavTrap");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
}
