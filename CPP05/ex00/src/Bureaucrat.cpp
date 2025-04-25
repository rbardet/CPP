/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:56:35 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 00:52:17 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Random Bureaucrat") , grade(150)
{
	std::cout << "Default constructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name) , grade(src.grade)
{
	std::cout << "Copy constructor called for Bureaucrat" << std::endl;
}

void	Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Assignement operator called for Bureaucrat" << std::endl;
	this->grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : name(name), grade(grade)
{
	std::cout << "Parameter Constructor called for Bureaucrat" << std::endl;
}

const std::string	&Bureaucrat::getName() const
{
	return(this->name);
}

const int	&Bureaucrat::getGrade() const
{
	return(this->grade);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (out);
}

int	Bureaucrat::GradeTooHighException()
{
	std::cout << "Trying to instantiate a Bureaucrat with a too high grade" << std::endl;
	return (this->getGrade());
}

int	Bureaucrat::GradeTooLowExecption()
{
	std::cout << "Trying to instantiate a Bureaucrat with a too low grade" << std::endl;
	return (this->getGrade());
}

int	Bureaucrat::Promote()
{
	try
	{
		if (this->grade == 1)
			throw(GradeTooHighException());
		else
		{
			this->grade--;
			std::cout << this->getName() << " has been promoted to grade "
			<< this->getGrade() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (this->grade);
}

int	Bureaucrat::Demote()
{
	try
	{
		if (this->grade == 150)
			throw(GradeTooHighException());
		else
		{
			this->grade++;
			std::cout << this->getName() << " has been demoted to grade "
			<< this->getGrade() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (this->grade);
}
