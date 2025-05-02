/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:55:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:28:18 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	monsieur("Gerard Lopez", 31);
	Bureaucrat	monsieur2("Homme lambda", 100);
	try
	{
		Form	f1("contrat DNCG", 151, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	f1("contrat DNCG", 33, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	f1("Scam", 33, 42);
		monsieur2.signForm(f1);
		std::cout << f1;
		monsieur.signForm(f1);
		monsieur.signForm(f1);
		std::cout << f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	f1("contrat DNCG", 12, 42);
		monsieur.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
