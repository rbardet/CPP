/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:38:30 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 14:11:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(12, "Shrek");
	for (int i = 0; i < 12; i++)
		horde[i].announce();
	delete[]	horde;
	return (0);
}
