/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 07:33:58 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 10:47:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
public:
	Point(void);
	Point(const float x, const float y);
	Fixed	get_x(void) const;
	Fixed	get_y(void) const;
	Point	operator=(const Point &src);
	Point(const Point &src);
	~Point(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
