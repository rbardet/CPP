/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:49:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 11:11:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = raw;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = raw;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

float	Fixed::toFloat(void) const
{
	return ((this->raw));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->raw));
}

void	Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = src.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	return (this->raw);
}

void	Fixed::setRawBits(int const raw )
{
	this->raw = raw;
}

std::ostream &operator << (std::ostream &raw, Fixed const &rhs)
{
	raw << rhs.getRawBits();
	return (raw);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
