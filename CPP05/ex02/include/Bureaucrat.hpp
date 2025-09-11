/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:56:31 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 04:12:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	void	operator=(const Bureaucrat &src);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat(const std::string &name, const int &grade);
	const std::string &getName() const;
	const	int	&getGrade() const;
	void					Promote();
	void					Demote();
	void					signAForm(AForm &) const;
	void					executeForm(AForm const & form) const;
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade can't go above 1");
			}
	};
	class GradeTooLowExecption : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Grade can't go under 150");
			}
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);
