/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 05:48:49 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 06:47:29 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &src);
	void	operator=(const Intern &src);
	~Intern();

	AForm	*makeForm(std::string formName, std::string Target);
	AForm	*newPresidentialPardonForm(std::string Target);
	AForm	*newRobotomyRequestForm(std::string Target);
	AForm	*newShrubberyCreationForm(std::string Target);
	class impossibleForm : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("This form doesn't exist");
			}
	};
};
