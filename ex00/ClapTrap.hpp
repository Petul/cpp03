/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:46:24 by pleander          #+#    #+#             */
/*   Updated: 2025/01/07 11:04:13 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
   public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap&);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

   private:
	std::string name_;
	int hit_points_;
	int energy_points_;
	int attack_damage_;
};

#endif
