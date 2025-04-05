/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:20:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 13:13:13 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class ClapTrap
{
private:
	std::string		name;
	int				hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap	operator=(const ClapTrap &src);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


