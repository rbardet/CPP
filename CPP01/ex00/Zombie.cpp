/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:40:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 13:42:36 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Destructed" << std::endl;
}
