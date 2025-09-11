/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 06:29:06 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 08:58:36 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap	operator=(const DiamondTrap &src);
	~DiamondTrap();

	DiamondTrap(std::string const name);
	void			whoAmI() const;
	void			attack(const std::string target);

	const std::string	&get_name() const;
	const int			&get_hit_points() const;
	const unsigned int	&get_energy_points() const;
	const unsigned int	&get_attack_damage() const;
};


