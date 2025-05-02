/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 02:26:50 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/30 09:31:21 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : grade_to_sign(150), grade_to_execute(150)
{

}

Form::Form(const Form &src) : name(src.getName()), is_signed(src.getIsSigned())
	, grade_to_sign(src.getGradeToSign()) , grade_to_execute(src.getGradeToExecute())
{

}

void	Form::operator=(const Form &src)
{
	this->is_signed = src.is_signed;
}

Form::~Form()
{

}

Form::Form(const std::string &name, const int &gradeToSign, const int &gradeToExecute)
	: name(name), is_signed(false), grade_to_sign(gradeToSign), grade_to_execute(gradeToExecute)
{
	if (this->getGradeToExecute() < 1 || this->getGradeToSign() < 1)
		throw(Form::GradeTooLowExecption());
	else if (this->getGradeToExecute() > 150 || this->getGradeToSign() > 150)
		throw(Form::GradeTooHighExecption());
}

void				Form::beSigned(const Bureaucrat &employee)
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

const std::string	&Form::getName() const
{
	return(this->name);
}

const bool			&Form::getIsSigned() const
{
	return(this->is_signed);
}

const int			&Form::getGradeToSign() const
{
	return(this->grade_to_sign);
}

const int			&Form::getGradeToExecute() const
{
	return(this->grade_to_execute);
}

std::ostream	&operator<<(std::ostream &out, const Form &src)
{
	out << src.getName() << std::endl
	<< "Is signed : " << src.getIsSigned() << std::endl
	<< "Grade to sign : " << src.getGradeToSign() << std::endl
	<< "Grade to execute : " << src.getGradeToExecute() << std::endl;
	return (out);
}
