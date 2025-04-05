/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 06:29:06 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 07:50:53 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual FragTrap , ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap(std::string const name);
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap	operator=(const DiamondTrap &src);
	~DiamondTrap();

	void	whoAmI();

	void	set_name(const std::string name);
	void	set_hit_points(int amount);
	void	set_energy_points(int amount);
	void	set_attack_damage(int amount);

	std::string		get_name() const;
	int				get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;

	void		attack(const std::string target);
};


