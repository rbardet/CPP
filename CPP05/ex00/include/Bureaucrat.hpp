/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:56:31 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 00:52:14 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
	int		GradeTooHighException();
	int		GradeTooLowExecption();
	int		Promote();
	int		Demote();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);
