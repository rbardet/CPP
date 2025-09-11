/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:46 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 08:49:54 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : _hit_points(100) , _energy_points(100) , _attack_damage(30)
{
	std::cout << "FragTrap : Default constructor called" << std::endl;
	this->hit_points = this->_hit_points;
	this->energy_points = this->_energy_points;
	this->attack_damage = this->_attack_damage;
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

FragTrap::FragTrap(std::string const name) : ClapTrap(name), _hit_points(100) , _energy_points(100) , _attack_damage(30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->hit_points = this->_hit_points;
	this->energy_points = this->_energy_points;
	this->attack_damage = this->_attack_damage;
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

int	FragTrap::_get_hit_points() const
{
	return(this->_hit_points);
}

unsigned int	FragTrap::_get_energy_points() const
{
	return(this->_energy_points);
}

unsigned int	FragTrap::_get_attack_damage() const
{
	return(this->_attack_damage);
}