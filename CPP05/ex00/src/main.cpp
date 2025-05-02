/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:55:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:21:40 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1("Monsieur A", 151);
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	b1("Monsieur B", -1);
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	b1("Monsieur C", 12);
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	b2("Monsieur F", 92);
		Bureaucrat	b1("Monsieur D", 1);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		b1.Promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	b1("Monsieur E", 150);
		std::cout << b1 << std::endl;
		b1.Demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
