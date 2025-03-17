/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:06 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 22:06:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
#define HUMANB_CLASS_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.class.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*type;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &new_weapon);
	void attack(void);
	~HumanB(void);
};

#endif
