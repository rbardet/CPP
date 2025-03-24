/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:40:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:12:33 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void Zombie::announce(void)
{
	std::cout << name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string _name)
{
	name =_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " Destructed" << std::endl;
}
