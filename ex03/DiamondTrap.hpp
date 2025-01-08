/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:29:30 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 15:55:46 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap
{
   public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& s);
	DiamondTrap& operator=(const DiamondTrap s);
	~DiamondTrap();
	using ScavTrap::attack;
	void whoAmI();

   private:
	std::string name_;
};

#endif
