/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:05:48 by pleander          #+#    #+#             */
/*   Updated: 2025/01/07 14:15:49 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap foo = ScavTrap("Foo");
	foo.guardGate();
	foo.takeDamage(100);
	foo.takeDamage(100);
	foo.guardGate();

	std::cout << std::endl;
	ScavTrap bar = ScavTrap("Bar");
	bar.beRepaired(10);
	bar.attack("Baz");
	bar.takeDamage(10);
	bar.takeDamage(-10);
}
