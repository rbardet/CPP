/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:38:30 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 21:16:08 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(50, "Shrek");
	for (int i = 0; i < 50; i++)
		horde[i].announce();
	delete[]	horde;
	return (0);
}
