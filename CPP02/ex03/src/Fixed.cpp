/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:49:05 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 12:05:16 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

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

void	Fixed::operator=(Fixed const &src)
{
	this->raw = src.raw;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const Fixed nb1, const Fixed nb2)
{
	this->raw = nb1.toFloat() * nb2.toFloat();
}

float	Fixed::toFloat(void) const
{
	return ((float)this->raw / (1 << this->nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->raw / (1 << this->nb_bits));
}

//comparison operator
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

// arithmetic operators

float	Fixed::operator+(Fixed const &src)
{
	return(this->toFloat() + src.toFloat());
}

float	Fixed::operator-(Fixed const &src)
{
	return(this->toFloat() - src.toFloat());
}

float	Fixed::operator*(Fixed const &src)
{
	return(this->toFloat() * src.toFloat());
}

float	Fixed::operator/(Fixed const &src)
{
	if (this->raw == 0 || src.raw == 0)
	{
		std::cout << "Division can't be done with 0" << std::endl;
		return (0);
	}
	return(this->toFloat() / src.toFloat());
}

//increment operator
Fixed	&Fixed::operator++(void)
{
	this->raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->raw++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->raw--;
	return (tmp);
}

float	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

float	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

float	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
}

float Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a.toFloat());
	else
		return (b.toFloat());
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
	// std::cout << "Destructor called" << std::endl;
}
