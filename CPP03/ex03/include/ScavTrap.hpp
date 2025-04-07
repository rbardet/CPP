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

public:
	ScavTrap();
	ScavTrap(const ScavTrap &src);
	ScavTrap	operator=(const ScavTrap &src);
	~ScavTrap();

	ScavTrap(std::string const name);
	void			guardGate() const;
	void			attack(const std::string& target);
};



