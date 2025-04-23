/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:45:47 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:19:39 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default Constructor called for AMateria" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy Constructor called for AMateria" << std::endl;
}

void	AMateria::operator=(AMateria const &src)
{
	std::cout << "Operator assignement called for AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called for AMateria" << std::endl;
}

void use(ICharacter& target)
{

}

std::string const &AMateria::getType() const
{
	return(this->type);
}
