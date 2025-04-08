/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 06:29:40 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 09:02:23 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor called for DiamondTrap" << std::endl;
	this->hit_points = FragTrap::_get_hit_points();
	this->energy_points = ScavTrap::_get_energy_points();
	this->attack_damage = FragTrap::_get_attack_damage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap	DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap : Copy assignement called" << std::endl;
	return (src);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called for : " << this->name << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Name Constructor called for DiamondTrap" << std::endl;
	this->name = name;
	this->hit_points = FragTrap::_get_hit_points();
	this->energy_points = ScavTrap::_get_energy_points();
	this->attack_damage = FragTrap::_get_attack_damage();
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "Member function whoAmI called" << std::endl;
	std::cout << "DiamondTrap name : " << this->name << std::endl;
	std::cout << "DiamonTrap clap's name : " << ClapTrap::get_name() << std::endl;
}

void	DiamondTrap::attack(const std::string target)
{
	ScavTrap::attack(target);
}

const std::string	&DiamondTrap::get_name() const
{
	return(this->name);
}

const int	&DiamondTrap::get_hit_points() const
{
	return(this->hit_points);
}

const unsigned int	&DiamondTrap::get_energy_points() const
{
	return(this->energy_points);
}

const unsigned int	&DiamondTrap::get_attack_damage() const
{
	return(this->attack_damage);
}

