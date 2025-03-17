/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/17 22:17:26 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
	const char	*type;
public:
	Weapon(const char *type);
	std::string	getType() const;
	void setType(const char* type);
	~Weapon(void);
};

#endif
