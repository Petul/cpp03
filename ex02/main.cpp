/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:05:48 by pleander          #+#    #+#             */
/*   Updated: 2025/01/08 14:12:44 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap foo = FragTrap("Foo");
	foo.attack("blaa");
	foo.highFivesGuys();
	foo.takeDamage(100);
	foo.highFivesGuys();
}
