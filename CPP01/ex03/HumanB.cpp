/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:14:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->type = NULL;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->type = &new_weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attack with " << this->type->getType() << std::endl;
}


HumanB::~HumanB(void)
{
}
