/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:56:47 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:20:31 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
	std::cout << "Default Constructor called for Ice" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const &src)
{
	std::cout << "Copy Constructor called for Ice" << std::endl;
	*this = src;
}

void	Ice::operator=(Ice const &src)
{
	std::cout << "Operator assignement called for Ice" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Destructor called for Ice" << std::endl;
}

AMateria	*Ice::clone() const
{
	return(new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
