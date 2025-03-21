/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:49:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/19 23:30:00 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(/* args */)
{
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{

}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
