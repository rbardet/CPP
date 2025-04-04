/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 07:57:14 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/04 04:28:03 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"

float get_triangle_area(Fixed const a_x, Fixed const b_x, Fixed const c_x, Fixed const a_y, Fixed const b_y, Fixed const c_y)
{
	float result = 0.5f * std::abs(a_x.toFloat() * (b_y.toFloat() - c_y.toFloat()) +
								  b_x.toFloat() * (c_y.toFloat() - a_y.toFloat()) +
								  c_x.toFloat() * (a_y.toFloat() - b_y.toFloat()));
	return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	area = get_triangle_area(a.get_x(), b.get_x(), c.get_x(), a.get_y(), b.get_y(), c.get_y());
	float	abpoint = get_triangle_area(a.get_x(), b.get_x(), point.get_x(), a.get_y(), b.get_y(), point.get_y());
	float	acpoint = get_triangle_area(a.get_x(), c.get_x(), point.get_x(), a.get_y(), c.get_y(), point.get_y());
	float	cbpoint = get_triangle_area(c.get_x(), b.get_x(), point.get_x(), c.get_y(), b.get_y(), point.get_y());

	float	total = abpoint + acpoint + cbpoint;
	std::cout << "Area : " << area << std::endl;
	std::cout << "Total : " << total << std::endl;
	std::cout << "abpoint : " << abpoint << std::endl;
	std::cout << "acpoint : " << acpoint << std::endl;
	std::cout << "cbpoint : " << cbpoint << std::endl;
	if (total != area || (abpoint == 0 || acpoint == 0 || cbpoint == 0))
		return (false);
	else
		return (true);
}
