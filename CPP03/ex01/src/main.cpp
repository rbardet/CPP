/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:18:19 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/22 16:45:54 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"


// int	main(void)
// {
// 	ScavTrap	scav("Shrek");

// 	std::cout << "-------------- Scav -----------------" << std::endl;
// 	std::cout << "Name : " << scav.get_name() << std::endl;
// 	std::cout << "Hit points : " << scav.get_hit_points() << std::endl;
// 	std::cout << "Energy points : " << scav.get_energy_points() << std::endl;
// 	std::cout << "Attack damage : " << scav.get_attack_damage() << std::endl;
// 	std::cout << "-------------------------------------" << std::endl;
// 	scav.takeDamage(30);
// 	scav.takeDamage(30);
// 	scav.attack("minhpham");
// 	scav.takeDamage(45);
// 	scav.takeDamage(30);
// 	scav.beRepaired(12);
// 	return (0);
// }

int	main(void)
{
	ScavTrap	scav("Shrek");
	ClapTrap	clap("Mobutu");

	std::cout << "-------------- Scav -----------------" << std::endl;
	std::cout << "Name : " << scav.get_name() << std::endl;
	std::cout << "Hit points : " << scav.get_hit_points() << std::endl;
	std::cout << "Energy points : " << scav.get_energy_points() << std::endl;
	std::cout << "Attack damage : " << scav.get_attack_damage() << std::endl;

	std::cout << "-------------- Clap -----------------" << std::endl;
	std::cout << "Name : " << clap.get_name() << std::endl;
	std::cout << "Hit points : " << clap.get_hit_points() << std::endl;
	std::cout << "Energy points : " << clap.get_energy_points() << std::endl;
	std::cout << "Attack damage : " << clap.get_attack_damage() << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	scav.guardGate();
	scav.attack("Homer");
	scav.beRepaired(4);
	scav.takeDamage(16);

	clap.attack("lsellier");
	clap.beRepaired(4);
	clap.takeDamage(16);
	return (0);
}
