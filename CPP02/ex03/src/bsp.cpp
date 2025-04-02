/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 07:57:14 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 11:20:29 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"

Fixed	get_min(Fixed const a, Fixed const b, Fixed const c)
{
	if (a.toFloat() < b.toFloat())
		return (Fixed::min(a, c));
	else
		return (Fixed::min(b, c));
}

Fixed	get_max(Fixed const a, Fixed const b, Fixed const c)
{
	if (a.toFloat() > b.toFloat())
		return (Fixed::max(a, c));
	else
		return (Fixed::max(b, c));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	max_x = get_max(a.get_x(), b.get_x(), c.get_x());
	Fixed	min_x = get_min(a.get_x(), b.get_x(), c.get_x());
	Fixed	max_y = get_max(a.get_y(), b.get_y(), c.get_y());
	Fixed	min_y = get_min(a.get_y(), b.get_y(), c.get_y());

	if (point.get_x() >= max_x || point.get_x() <= min_x
		|| point.get_y() >= max_y || point.get_y() <= min_y)
		return (false);
	return (true);
}
