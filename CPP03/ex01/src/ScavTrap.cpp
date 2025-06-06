/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:46:22 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/22 16:46:30 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << "Copy constructor called for ScavTrap" << std::endl;
	*this = src;
}

ScavTrap	ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Copy assignement called" << std::endl;
	return (src);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap : " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Name Constructor called for ScavTrap" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->get_hit_points() <= 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->get_energy_points() <= 0)
	{
		std::cout << "ScavTrap doesn't have enough energy points" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target
			<< " causing " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points -= 1;
	std::cout << "New amount of energy points : " << this->energy_points << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is now in guard mode" << std::endl;
}
