/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:20:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 06:36:33 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class ClapTrap
{
protected:
	std::string		name;
	int				hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap	operator=(const ClapTrap &src);
	~ClapTrap();

	ClapTrap(std::string name);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	set_name(const std::string name);
	void	set_hit_points(int amount);
	void	set_energy_points(int amount);
	void	set_attack_damage(int amount);

	std::string		get_name() const;
	int				get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;
};


