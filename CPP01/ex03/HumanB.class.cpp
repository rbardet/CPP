/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 22:22:56 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

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
