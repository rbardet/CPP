/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 03:50:09 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 05:09:33 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = src.target;
}

void	RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->target = src.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

void RobotomyRequestForm::executeContract() const
{
	std::cout << "Drilling noises....." << std::endl;
	std::time_t now = std::time(NULL); // truc du cpp00
	std::tm *localTime = std::localtime(&now); // truc du cpp00
	if (localTime->tm_sec % 2 == 0)
		std::cout << "The robotomy failed." << std::endl;
	else
		std::cout << this->target << " has been robotomized." << std::endl;
}
