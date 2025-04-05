/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 06:29:40 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 07:59:01 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Constructor called for DiamondTrap" << std::endl;
	this->name = name;
	this->hit_points = FragTrap::get_hit_points();
	this->energy_points = ScavTrap::get_energy_points();
	this->attack_damage = FragTrap::get_attack_damage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.name)
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

void	DiamondTrap::whoAmI()
{
	std::cout << "Member function whoAmI called" << std::endl;
	std::cout << "DiamondTrap name : " << this->name << std::endl;
	std::cout << "DiamonTrap clap's name : " << this->get_name() << std::endl;
}

void	DiamondTrap::set_name(std::string const name)
{
	this->name = name;
}

void	DiamondTrap::set_hit_points(int amount)
{
	this->hit_points = amount;
}

void	DiamondTrap::set_attack_damage(int amount)
{
	this->attack_damage = amount;
}

void	DiamondTrap::set_energy_points(int amount)
{
	this->energy_points = amount;
}

std::string	DiamondTrap::get_name() const
{
	return(this->name);
}

int	DiamondTrap::get_hit_points() const
{
	return(this->hit_points);
}

unsigned int	DiamondTrap::get_energy_points() const
{
	return(this->energy_points);
}

unsigned int	DiamondTrap::get_attack_damage() const
{
	return(this->attack_damage);
}

void	DiamondTrap::attack(const std::string target)
{
	ScavTrap::attack(target);
}
