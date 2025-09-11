/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:56:35 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:33:37 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name) , grade(src.grade)
{

}

void	Bureaucrat::operator=(const Bureaucrat &src)
{
	this->grade = src.getGrade();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowExecption());
	this->grade = grade;
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

void	Bureaucrat::Promote()
{
	if (this->grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
	{
		this->grade--;
		std::cout << this->getName()
		<< " has been promoted to grade "
		<< this->getGrade() << std::endl;
	}
}

void	Bureaucrat::Demote()
{
	if (this->grade == 150)
		throw(Bureaucrat::GradeTooLowExecption());
	else
	{
		this->grade++;
		std::cout << this->getName()
		<< " has been demoted to grade "
		<< this->getGrade() << std::endl;
	}
}

void	Bureaucrat::signAForm(AForm &AForm) const
{
	if (AForm.getIsSigned() == true)
	{
		std::cout << this->getName() << " couldn't sign " << AForm.getName()
		<< " because its already signed" << std::endl;
		return ;
	}
	AForm.beSigned(*this);
	if (AForm.getIsSigned() == true)
		std::cout << this->getName() << " signed " << AForm.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		std::cout << this->name << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
