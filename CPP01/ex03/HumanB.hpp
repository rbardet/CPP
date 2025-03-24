/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:06 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 13:46:56 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

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
