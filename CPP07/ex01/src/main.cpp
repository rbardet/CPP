/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:21:45 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/05 00:03:11 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void	squareRoot(int &nb)
{
	std::cout << nb << " square root's : " << nb * nb << std::endl;
}

void	printStr(std::string &arr)
{
	std::cout << arr << std::endl;
}

int	main(void)
{
	std::string	arr[4] = {"test", "de", "fou", "malade"};
	int			arrInt[4] = {100, 200, 300, 400};
	int			arrInt2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arr, 4, printStr);
	iter(arrInt, 4, squareRoot);
	iter(arrInt2, 10, squareRoot);
}

// class Awesome
// {
//  public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
//  private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
// 	o << rhs.get();
// 	return o;
// }

// template< typename T >
// void print( T& x )
// {
// 	std::cout << x << std::endl;
// 	return;
// }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];

// 	iter( tab, 5, print<const int> );
// 	iter( tab2, 5, print<Awesome> );

// 	return 0;
// }
