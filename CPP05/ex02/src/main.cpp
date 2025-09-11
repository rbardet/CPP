/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:55:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:37:17 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat				employee("Robin", 1);
	Bureaucrat				employee2("pork", 150);
	Bureaucrat				employee3("3e homme", 12);
	ShrubberyCreationForm	shrub("home");
	PresidentialPardonForm	presi("john");
	RobotomyRequestForm		robo("home");
	try
	{
		employee.signAForm(shrub);
		employee.executeForm(shrub);
		employee2.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		employee2.signAForm(presi);
		employee.executeForm(presi);
		employee2.executeForm(presi);
		employee.signAForm(presi);
		employee.executeForm(presi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		employee.signAForm(robo);
		employee3.executeForm(robo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
