/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:12 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 07:47:05 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(const FragTrap &src);
	FragTrap	operator=(const FragTrap &src);
	~FragTrap();

	void			highFivesGuys(void);
	std::string		get_name() const;
	int				get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;
};



