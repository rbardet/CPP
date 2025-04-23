/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:56:40 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:20:48 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
	std::cout << "Default Constructor called for Cure" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const &src)
{
	std::cout << "Copy Constructor called for Cure" << std::endl;
	*this = src;
}

void	Cure::operator=(Cure const &src)
{
	std::cout << "Operator assignement called for Cure" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Destructor called for Cure" << std::endl;
}

AMateria	*Cure::clone() const
{
	return(new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
