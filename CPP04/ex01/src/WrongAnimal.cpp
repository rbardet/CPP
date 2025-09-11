/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 08:13:24 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 18:21:03 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor called for WrongAnimal" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy Constructor called for WrongAnimal" << std::endl;
	*this = src;
}

WrongAnimal	WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "Operator assignement called for WrongAnimal" << std::endl;
	return (src);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for WrongAnimal" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string const type)
{
	this->type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal doesn't have a specific sound" << std::endl;
}
