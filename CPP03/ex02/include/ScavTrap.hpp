/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:45:59 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 04:47:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string const name);
	ScavTrap(const ScavTrap &src);
	ScavTrap	operator=(const ScavTrap &src);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};



