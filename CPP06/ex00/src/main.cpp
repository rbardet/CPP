/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:53:44 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 05:45:04 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "ScalarConverter only take 1 argument as parameter." << std::endl
		<< "This argument will be converted in char , int , float and double." << std::endl;
		return (127);
	}
	std::string convert = av[1];
	if (convert.empty())
	{
		std::cout << "The argument is empty , please pass a valid parameter" << std::endl;
		return (127);
	}
	else
		ScalarConverter::convert(convert);
	return (0);
}
