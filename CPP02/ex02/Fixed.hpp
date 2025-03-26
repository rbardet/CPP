/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:48:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/26 16:30:47 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
	int					raw;
	static const int	nb_bits = 8;
public:
	Fixed(void);
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &src);
	Fixed(const Fixed nb1, const Fixed nb2);
	int getRawBits(void) const;
	void setRawBits(int const raw );
	int operator>(Fixed const &src);
	int operator<(Fixed const &src);
	int operator>=(Fixed const &src);
	int operator<=(Fixed const &src);
	int operator==(Fixed const &src);
	int operator!=(Fixed const &src);
	void operator=(Fixed const &src);
	void operator+(Fixed const &src);
	void operator-(Fixed const &src);
	void operator*(Fixed const &src);
	void operator/(Fixed const &src);
	int toInt(void) const;
	float toFloat(void) const;
	~Fixed(void);
};

std::ostream &operator << (std::ostream &i, Fixed const &rhs);

#endif
