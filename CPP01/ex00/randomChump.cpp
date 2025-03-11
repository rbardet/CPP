/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:50:22 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 18:24:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

void	randomChump( std::string name )
{
	Zombie	new_zombie(name);
	new_zombie.announce();
}
