/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:57:36 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 06:40:45 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
public:
	~ScalarConverter();
	ScalarConverter	operator=(const ScalarConverter &src);
	static void	convert(const std::string &toConvert);
};


