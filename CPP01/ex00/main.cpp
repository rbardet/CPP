/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:23:21 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 18:29:25 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie	*zombie1;

	zombie1 = newZombie("Robin");
	zombie1->announce();
	randomChump("Shrek");
	randomChump("Homer");
	delete	zombie1;
	return (0);
}
