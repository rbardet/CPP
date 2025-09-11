/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
protected:
	std::string	target;
private:
	const std::string	name;
	bool				is_signed;
	const int			grade_to_sign;
	const int			grade_to_execute;
public:
	AForm();
	AForm(const AForm &);
	void	operator=(const AForm &);
	virtual ~AForm();

	AForm(const std::string &, const int &, const int &);
	const std::string	&getName() const;
	const bool			&getIsSigned() const;
	const int			&getGradeToSign() const;
	const int			&getGradeToExecute() const;
	virtual void		beSigned(const Bureaucrat &);
	void				execute(Bureaucrat const &executor) const;
	virtual void		executeContract() const = 0;
	class GradeTooHighExecption : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade too high for the AForm");
			}
	};
	class GradeTooLowExecption : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade too low for the AForm");
			}
	};
	class CantExecute : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Can't execute the contract because the executer rank is too low");
			}
	};
	class NotSigned : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Can't execute the contract because it's not signed");
			}
	};
};

std::ostream &operator<<(std::ostream &, const AForm &);
