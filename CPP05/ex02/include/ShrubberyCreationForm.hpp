/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 03:48:55 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 05:35:45 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	void	operator=(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const std::string &target);
	void		executeContract() const;
};


