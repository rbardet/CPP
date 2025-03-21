/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:23:21 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 20:49:54 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	*zombie1;

	zombie1 = newZombie("Robin");
	zombie1->announce();
	randomChump("Shrek");
	zombie1->announce();
	randomChump("Homer");
	zombie1->announce();
	delete	zombie1;
	return (0);
}
