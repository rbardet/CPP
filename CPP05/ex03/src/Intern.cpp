/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 05:49:10 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:40:25 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{
	(void)src;
}

void	Intern::operator=(const Intern &src)
{
	(void)src;
}

Intern::~Intern()
{

}

AForm	*Intern::makeForm(std::string formName, std::string Target)
{
	std::string	goodForm[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm*(Intern::*ptr[3])(std::string) = {&Intern::newPresidentialPardonForm, &Intern::newRobotomyRequestForm, &Intern::newShrubberyCreationForm};
	for (size_t i = 0; i < 3; i++)
	{
		if (formName == goodForm[i])
		{
			std::cout << "Intern creates " << goodForm[i] << std::endl;
			return (this->*ptr[i])(Target);
		}
	}
	throw (Intern::impossibleForm());
}

AForm	*Intern::newPresidentialPardonForm(std::string Target)
{
	return (new PresidentialPardonForm(Target));
}

AForm	*Intern::newRobotomyRequestForm(std::string Target)
{
	return (new RobotomyRequestForm(Target));
}

AForm	*Intern::newShrubberyCreationForm(std::string Target)
{
	return (new ShrubberyCreationForm(Target));
}
