/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:21:45 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/02 08:09:13 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void	squareRoot(int nb)
{
	std::cout << nb << " square root's : " << nb * nb << std::endl;
}

void	printStr(std::string arr)
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
