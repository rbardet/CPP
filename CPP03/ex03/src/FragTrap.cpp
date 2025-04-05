/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:46 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 07:59:21 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src.name)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = src;
}

FragTrap	FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap : Copy assignement called" << std::endl;
	return (src);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap constructor called for : " << this->name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " : has requested a positive high-fives" << std::endl;
}

std::string	FragTrap::get_name() const
{
	return(this->name);
}

int	FragTrap::get_hit_points() const
{
	return(this->hit_points);
}

unsigned int	FragTrap::get_energy_points() const
{
	return(this->energy_points);
}

unsigned int	FragTrap::get_attack_damage() const
{
	return(this->attack_damage);
}
