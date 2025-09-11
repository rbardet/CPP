/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:19:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 18:21:41 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor called for Cat" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &src): Animal()
{
	std::cout << "Copy Constructor called for Cat" << std::endl;
	*this = src;
}

Cat	Cat::operator=(Cat const &src)
{
	std::cout << "Operator assignement called for Cat" << std::endl;
	return (src);
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}
