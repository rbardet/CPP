/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:49:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/26 16:31:01 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int raw)
{
	// std::cout << "Int constructor called" << std::endl;
	this->raw = raw << this->nb_bits;
}

Fixed::Fixed(const float raw)
{
	// std::cout << "Float constructor called" << std::endl;
	this->raw = roundf(raw * (1 << nb_bits));
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const Fixed nb1, const Fixed nb2)
{
	this->raw = nb1.raw * nb2.raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->raw / (1 << this->nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->raw / (1 << this->nb_bits));
}

int		Fixed::operator>(Fixed const &src)
{
	return(this->raw >= src.raw);
}

int		Fixed::operator<(Fixed const &src)
{
	return(this->raw < src.raw);
}

int		Fixed::operator>=(Fixed const &src)
{
	return(this->raw >= src.raw);
}

int		Fixed::operator<=(Fixed const &src)
{
	return(this->raw <= src.raw);
}

int		Fixed::operator==(Fixed const &src)
{
	return(this->raw == src.raw);
}

int		Fixed::operator!=(Fixed const &src)
{
	return(this->raw != src.raw);
}

void	Fixed::operator=(Fixed const &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->raw = src.getRawBits();
}

void	Fixed::operator+(Fixed const &src)
{
	this->raw + src.getRawBits();
}

void	Fixed::operator-(Fixed const &src)
{
	this->raw - src.getRawBits();
}

void	Fixed::operator*(Fixed const &src)
{
	this->raw - src.getRawBits();
}

void	Fixed::operator/(Fixed const &src)
{
	this->raw - src.getRawBits();
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
	raw << rhs.toFloat();
	return (raw);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
