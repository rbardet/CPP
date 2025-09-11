/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:12 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 08:50:06 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	int				_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
public:
	FragTrap();
	FragTrap(const FragTrap &src);
	FragTrap	operator=(const FragTrap &src);
	~FragTrap();

	std::string		get_name() const;
	int				get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;
	int				_get_hit_points() const;
	unsigned int	_get_energy_points() const;
	unsigned int	_get_attack_damage() const;
	FragTrap(std::string const name);
	void			highFivesGuys(void);
};



