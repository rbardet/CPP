/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 02:26:30 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 03:38:32 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			grade_to_sign;
	const int			grade_to_execute;
public:
	Form();
	Form(const Form &);
	void	operator=(const Form &);
	~Form();

	Form(const std::string &, const int &, const int &);
	const std::string	&getName() const;
	const bool			&getIsSigned() const;
	const int			&getGradeToSign() const;
	const int			&getGradeToExecute() const;
	void				beSigned(const Bureaucrat &);
	class GradeTooHighExecption : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade too high for the form");
			}
	};
	class GradeTooLowExecption : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade too low for the form");
			}
	};
};

std::ostream &operator<<(std::ostream &, const Form &);
