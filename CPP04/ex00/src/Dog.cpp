/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:14:57 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 08:06:05 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Constructor called for Dog" << std::endl;
	this->setType("Dog");
	this->setSound("Ouaf Ouaf");
}

Dog::Dog(Dog const &src)
{
	std::cout << "Copy Constructor called for Dog" << std::endl;
	*this = src;
}

Dog	Dog::operator=(Dog const &src)
{
	std::cout << "Operator assignement called for Dog" << std::endl;
	return (src);
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
}
