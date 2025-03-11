/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:40:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 18:26:02 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void Zombie::announce(void)
{
	std::cout << name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " Destructed" << std::endl;
}
