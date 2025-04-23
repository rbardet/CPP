/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:56:02 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 22:31:25 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "Default Constructor called for ICharacter" << std::endl;
}

ICharacter::ICharacter(ICharacter const &src)
{
	std::cout << "Copy Constructor called for ICharacter" << std::endl;
}

void	ICharacter::operator=(ICharacter const &src)
{
	std::cout << "Operator assignement called for ICharacter" << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor called for ICharacter" << std::endl;
}
