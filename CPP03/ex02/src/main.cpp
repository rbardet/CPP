/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:18:19 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 06:32:28 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

// int	main(void)
// {
// 	FragTrap	frag("Shrek");

// 	std::cout << "-------------- frag -----------------" << std::endl;
// 	std::cout << "Name : " << frag.get_name() << std::endl;
// 	std::cout << "Hit points : " << frag.get_hit_points() << std::endl;
// 	std::cout << "Energy points : " << frag.get_energy_points() << std::endl;
// 	std::cout << "Attack damage : " << frag.get_attack_damage() << std::endl;
// 	std::cout << "-------------------------------------" << std::endl;

// 	frag.highFivesGuys();
// 	return (0);
// }

int	main(void)
{
	FragTrap	frag("Shrek");

	std::cout << "-------------- frag -----------------" << std::endl;
	std::cout << "Name : " << frag.get_name() << std::endl;
	std::cout << "Hit points : " << frag.get_hit_points() << std::endl;
	std::cout << "Energy points : " << frag.get_energy_points() << std::endl;
	std::cout << "Attack damage : " << frag.get_attack_damage() << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	frag.attack("lsellier");
	frag.beRepaired(4);
	frag.takeDamage(16);
	frag.highFivesGuys();

	return (0);
}

