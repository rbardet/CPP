/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:01 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:15:46 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type)
{
	this->name = name;
	this->type = &type;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attack with " << this->type->getType() << std::endl;
}

HumanA::~HumanA(void)
{
}
