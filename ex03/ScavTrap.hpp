/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:26:29 by pleander          #+#    #+#             */
/*   Updated: 2025/01/07 14:46:37 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap
{
   public:
	ScavTrap();
	ScavTrap(std::string name_);
	ScavTrap(const ScavTrap& s);
	ScavTrap& operator=(const ScavTrap& s);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif
