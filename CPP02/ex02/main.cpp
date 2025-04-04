/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:18:38 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 12:05:24 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// arithmetic operators

// int	main(void)
// {
// 	Fixed	a(20);

// 	std::cout << a.operator+(20.1f) << std::endl;
// 	std::cout << a.operator-(5) << std::endl;
// 	std::cout << a.operator*(10) << std::endl;
// 	std::cout << a.operator/(10) << std::endl;
// 	std::cout << a.operator/(0) << std::endl;
// 	return(0);
// }

//comparison operator

// int	main(void)
// {
// 	Fixed	a(123);
// 	Fixed	b(12);
// 	Fixed	c(123);
// 	std::cout << a.operator<(b) << std::endl;
// 	std::cout << a.operator>(b) << std::endl;
// 	std::cout << a.operator>=(b) << std::endl;
// 	std::cout << a.operator<=(c) << std::endl;
// 	std::cout << a.operator!=(c) << std::endl;
// 	std::cout << a.operator==(c) << std::endl;
// 	return (0);
// }
