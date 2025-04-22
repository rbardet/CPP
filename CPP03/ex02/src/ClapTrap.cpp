/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:20:41 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 06:52:23 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called for ClapTrap" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap : Copy assignement called" << std::endl;
	return (src);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap : Name constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap doesn't have enough energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target
			<< " causing " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points -= 1;
	std::cout << "New amount of energy points : " << this->get_energy_points() << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
	std::cout << this->name << " take " << amount << " points of damage" << std::endl;
	this->hit_points -= amount;
	if (hit_points < 0)
		this->hit_points = 0;
	std::cout << this->name << " has now " << this->hit_points << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energy_points <= 0)
	{
		std::cout << this->name << " doesn't have enough energy points" << std::endl;
		return ;
	}
	std::cout << this->name << " repaired " << amount << " points of damage" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
	std::cout << "New amount of hit points : " << this->hit_points << std::endl;
	std::cout << "New amount of energy points : " << this->energy_points << std::endl;

}

void	ClapTrap::set_name(const std::string name)
{
	this->name = name;
}

void	ClapTrap::set_hit_points(int amount)
{
	this->hit_points = amount;
}

void	ClapTrap::set_attack_damage(int amount)
{
	this->attack_damage = amount;
}

void	ClapTrap::set_energy_points(int amount)
{
	this->energy_points = amount;
}

std::string	ClapTrap::get_name() const
{
	return(this->name);
}

int	ClapTrap::get_hit_points() const
{
	return(this->hit_points);
}

unsigned int	ClapTrap::get_energy_points() const
{
	return(this->energy_points);
}

unsigned int	ClapTrap::get_attack_damage() const
{
	return(this->attack_damage);
}
