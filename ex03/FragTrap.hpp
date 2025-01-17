/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:04:37 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 15:28:15 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
   public:
	FragTrap();
	FragTrap(std::string name_);
	FragTrap(const FragTrap& s);
	FragTrap& operator=(const FragTrap& s);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys();

   protected:
	static const int default_hit_points_;
	static const int default_energy_points_;
	static const int default_attack_damage_;
};

#endif
