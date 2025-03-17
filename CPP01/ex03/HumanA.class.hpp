/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:03 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 22:06:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.class.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		*type;
public:
	HumanA(std::string name, Weapon &type);
	void attack(void);
	~HumanA(void);
};

#endif
