/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:01 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 14:01:24 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon): type(new_weapon)
{
	this->name = name;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attack with " << this->type.getType() << std::endl;
}

HumanA::~HumanA(void)
{
}
