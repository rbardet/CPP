/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:18:19 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/22 16:52:49 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond("Shrek");

	std::cout << "-------------- Diamond -----------------" << std::endl;
	std::cout << "Name : " << diamond.get_name() << std::endl;
	std::cout << "Hit points : " << diamond.get_hit_points() << std::endl;
	std::cout << "Energy points : " << diamond.get_energy_points() << std::endl;
	std::cout << "Attack damage : " << diamond.get_attack_damage() << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	diamond.attack("Macron");
	diamond.beRepaired(20);
	diamond.takeDamage(40);
	diamond.whoAmI();
	return (0);
}

