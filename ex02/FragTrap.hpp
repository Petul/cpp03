/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:04:37 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 14:06:41 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
   public:
	FragTrap();
	FragTrap(std::string name_);
	FragTrap(const FragTrap& s);
	FragTrap& operator=(const FragTrap& s);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys();
};

#endif
