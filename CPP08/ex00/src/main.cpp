/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:36:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/06/27 02:23:43 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector <char> A;
	std::vector <int> B;
	A.push_back('a');
	A.push_back('b');
	A.push_back('c');
	B.push_back(3);
	B.push_back(15);
	B.push_back(1234);
	const std::vector <char> C = A;
	easyfind(C, 'c');
	easyfind(A, 'c');
	easyfind(A, 'z');
	easyfind(B, 15);
	easyfind(B, 1);
	return (0);
}
