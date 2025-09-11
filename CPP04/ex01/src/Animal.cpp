/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:04:36 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 18:21:14 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor called for Animal" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const &src) : type(src.type)
{
	std::cout << "Copy Constructor called for Animal" << std::endl;
}

void	Animal::operator=(Animal const &src)
{
	std::cout << "Operator assignement called for Animal" << std::endl;
	this->type = src.getType();
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animal" << std::endl;
}

const std::string	&Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string const type)
{
	this->type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal doesn't have a specific sound" << std::endl;
}
