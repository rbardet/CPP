/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:08 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 13:50:54 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(const char *type)
{
	if (!type)
		this->type = "bare hands";
	else
		this->type = type;
}

std::string	Weapon::getType() const
{
	return(type);
}

void Weapon::setType(const char* type)
{
	if (!type)
		this->type = "bare hands";
	else
		this->type = type;
}


Weapon::~Weapon(void)
{
}
