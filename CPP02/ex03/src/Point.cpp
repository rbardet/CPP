/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 07:36:45 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 10:17:08 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void): x(0), y(0)
{

}

Point::Point(const float x, const float y): x(x), y(y)
{

}

Point::Point(const Point &src): x(src.x), y(src.y)
{

}

Point	Point::operator=(const Point &src)
{
	return (src);
}

Point::~Point(void)
{

}
