/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:59 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 08:50:03 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	int				_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
public:
	ScavTrap();
	ScavTrap(const ScavTrap &src);
	ScavTrap	operator=(const ScavTrap &src);
	~ScavTrap();

	std::string		get_name() const;
	int				get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;
	int				_get_hit_points() const;
	unsigned int	_get_energy_points() const;
	unsigned int	_get_attack_damage() const;
	ScavTrap(std::string const name);
	void			guardGate() const;
	void			attack(const std::string& target);
};



