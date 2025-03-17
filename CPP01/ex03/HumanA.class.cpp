/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:01 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 22:07:26 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

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
