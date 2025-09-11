/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 02:26:50 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 03:39:56 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm() : grade_to_sign(150), grade_to_execute(150)
{

}

AForm::AForm(const AForm &src) : name(src.getName()), is_signed(src.getIsSigned())
	, grade_to_sign(src.getGradeToSign()) , grade_to_execute(src.getGradeToExecute())
{

}

void	AForm::operator=(const AForm &src)
{
	this->is_signed = src.is_signed;
}

AForm::~AForm()
{

}

AForm::AForm(const std::string &name, const int &gradeToSign, const int &gradeToExecute)
	: name(name), is_signed(false), grade_to_sign(gradeToSign), grade_to_execute(gradeToExecute)
{
	if (this->getGradeToExecute() < 1 || this->getGradeToSign() < 1)
		throw(AForm::GradeTooLowExecption());
	else if (this->getGradeToExecute() > 150 || this->getGradeToSign() > 150)
		throw(AForm::GradeTooHighExecption());
}

void				AForm::beSigned(const Bureaucrat &employee)
{
	if (employee.getGrade() <= this->getGradeToSign())
	{
		if (this->getIsSigned() == false)
			this->is_signed = true;
	}
	else
	{
		std::cout << employee.getName() << " couldn't sign "
		<< this->name << " because grade is too low" << std::endl;
	}
}

const std::string	&AForm::getName() const
{
	return(this->name);
}

const bool			&AForm::getIsSigned() const
{
	return(this->is_signed);
}

const int			&AForm::getGradeToSign() const
{
	return(this->grade_to_sign);
}

const int			&AForm::getGradeToExecute() const
{
	return(this->grade_to_execute);
}

std::ostream	&operator<<(std::ostream &out, const AForm &src)
{
	out << src.getName() << std::endl
	<< "Is signed : " << src.getIsSigned() << std::endl
	<< "Grade to sign : " << src.getGradeToSign() << std::endl
	<< "Grade to execute : " << src.getGradeToExecute() << std::endl;
	return (out);
}
