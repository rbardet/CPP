/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:18:19 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 13:45:40 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap1("Shrek");

	clap1.beRepaired(5);
	clap1.beRepaired(5);
	clap1.beRepaired(0);
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.attack("Homer");
	clap1.takeDamage(10);
	clap1.takeDamage(11);
	clap1.takeDamage(2);
	return (0);
}
