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

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap t_1 = ClapTrap("trap 1");
	t_1.attack("Foo");
	t_1.takeDamage(5);
	t_1.takeDamage(4);
	t_1.takeDamage(4);
	t_1.takeDamage(4);
	t_1.beRepaired(10);

	ClapTrap t_2 = ClapTrap("trap 2");
	t_2.takeDamage(5);
	t_2.beRepaired(3);
	t_2.beRepaired(3);
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
	t_2.attack("foo");
}
