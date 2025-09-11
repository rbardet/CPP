/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:55:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 06:51:10 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"

int	main(void)
{
	Bureaucrat				employee("Robin", 1);
	Bureaucrat				employee2("pork", 150);
	Bureaucrat				employee3("3e homme", 12);
	Intern					intern;
	try
	{
		AForm	*form =	intern.makeForm("RobotomyRequestForm", "John");
		employee.signAForm(*form);
		employee.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm	*form =	intern.makeForm("PresidentialPardonForm", "Doe");
		employee.signAForm(*form);
		employee.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm	*form =	intern.makeForm("ShrubberyCreationForm", "Pork");
		employee.signAForm(*form);
		employee.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm	*form =	intern.makeForm("dwadwa", "John");
		employee.signAForm(*form);
		employee.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
