/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:04:36 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 08:23:19 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Constructor called for Animal" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy Constructor called for Animal" << std::endl;
	*this = src;
}

Animal	Animal::operator=(Animal const &src)
{
	std::cout << "Operator assignement called for Animal" << std::endl;
	return (src);
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animal" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

std::string	Animal::setType(std::string const type)
{
	this->type = type;
}
