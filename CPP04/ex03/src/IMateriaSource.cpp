/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:56:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 21:50:34 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Default Constructor called for IMateriaSource" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src)
{
	std::cout << "Copy Constructor called for IMateriaSource" << std::endl;
	*this = src;
}

void	IMateriaSource::operator=(IMateriaSource const &src)
{
	std::cout << "Operator assignement called for IMateriaSource" << std::endl;
	*this = src;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "Destructor called for IMateriaSource" << std::endl;
}
