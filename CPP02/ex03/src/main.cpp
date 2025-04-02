/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 07:33:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:12 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int	main(void)
{
	Point	a(1, 0.1f);
	Point	b(-1, 1.5f);
	Point	c(0, 2.2f);
	Point	point(0, 0);

	int	result = bsp(a, b, c, point);
	switch (result)
	{
	case 1:
		std::cout << "The point is in the triangle" << std::endl;
		break ;
	default:
		std::cout << "The point is not in the triangle" << std::endl;
	}
	return (0);
}

// int	main(void)
// {
// 	Point	a(1, -0.1f);
// 	Point	b(-1, 1.5f);
// 	Point	c(0, 2.2f);
// 	Point	point(0, 0);

// 	int	result = bsp(a, b, c, point);
// 	switch (result)
// 	{
// 	case 1:
// 		std::cout << "The point is in the triangle" << std::endl;
// 		break ;
// 	default:
// 		std::cout << "The point is not in the triangle" << std::endl;
// 	}
// 	return (0);
// }
