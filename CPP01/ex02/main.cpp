/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:22:22 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 21:43:16 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string stringREF = string;

	std::cout << "memory address of string : " << &string << std::endl;
	std::cout << "memory address of stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address of stringREF : " << &stringREF << std::endl;

	std::cout << "value of string : " << string << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;
	return(0);
}
