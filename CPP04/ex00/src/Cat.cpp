/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:19:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 09:11:28 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor called for Cat" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const &src)
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
