/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:46 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 06:52:29 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap : Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
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
	std::cout << "FragTrap Destructor called for : " << this->name << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " : has requested a positive high-fives" << std::endl;
}
