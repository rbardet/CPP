/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:06:45 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:20:52 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	std::cout << "Default Constructor called for Character" << std::endl;
}

Character::Character(Character const &src)
{
	std::cout << "Copy Constructor called for Character" << std::endl;
	this->name = src.name;
	for (size_t i = 0; i < 4; i++)
		if (src.inv[i])
			this->inv[i] = src.inv[i];
}

void	Character::operator=(Character const &src)
{
	std::cout << "Operator assignement called for Character" << std::endl;
	this->name = src.name;
	for (size_t i = 0; i < 4; i++)
		if (src.inv[i])
			this->inv[i] = src.inv[i];
}

Character::~Character()
{
	std::cout << "Destructor called for Character" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (this->inv[i])
			delete inv[i];
}

Character::Character(std::string name)
{
	std::cout << "Name Constructor called for Character" << std::endl;
	this->name = name;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *to_equip)
{
	for (size_t i = 0; i < 4; i++)
		if (!this->inv[i])
			this->inv[i] = to_equip;
	else
		std::cout << "This slot is already equiped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Inventory of " << this->getName() << " Only has 4 slot (0-3)" << std::endl;
	return;
}

void Character::unequip(int idx)
{
	if (this->inv[idx])
	{
		std::cout << "Materia at slot " << idx << " unequped" << std::endl;
		this->inv[idx] = NULL;
	}
	else
		std::cout << "This slot is empty" << std::endl;
}
