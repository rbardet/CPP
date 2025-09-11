/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:57:57 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 06:40:55 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <string.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter	ScalarConverter::operator=(const ScalarConverter &src)
{
	return (src);
}

ScalarConverter::~ScalarConverter()
{

}


const std::string	charStr(const char &toChar, const int &toInt)
{
	std::ostringstream	tmp;
	std::string			c;

	if (toInt < 0 || toInt > 127)
		return ("Impossible");
	else if (!isprint(toInt))
		return ("Non displayable");
	else
	{
		tmp << "\'" << toChar << "\'";
		c = tmp.str();
		return (c);
	}
}

const std::string	intStr(int &toInt, const double &toDouble)
{
	std::ostringstream	tmp;
	std::string			i;

	if (toDouble < INT_MIN || toDouble > INT_MAX)
		return ("Impossible");
	else
	{
		tmp << toInt;
		i = tmp.str();
		return (i);
	}
}

const std::string	floatStr(const float &toFloat, const double &toDouble)
{
	std::ostringstream	tmp;
	std::string			f;

	if (toDouble < FLT_MIN || toDouble > FLT_MAX)
		return ("Impossible");
	else
	{
		tmp << std::setprecision(6) << toFloat;
		f = tmp.str();
		if (f.find('.') == std::string::npos)
			f += ".0f";
		else
			f += 'f';
		return (f);
	}
}

const std::string	doubleStr(const double &toDouble)
{
	std::ostringstream	tmp;
	std::string			d;

	tmp << std::setprecision(15) << toDouble;
	d = tmp.str();
	if (d.find('.') == std::string::npos)
		d += ".0";
	return (d);
}

void	printResult(std::string c, std::string i, std::string f, std::string d)
{
	std::cout << "char: " << c << std::endl
	<< "int: " << i << std::endl
	<< "float: " << f << std::endl
	<< "double: " << d << std::endl;
}

bool	specialCase(const std::string &toConvert)
{
	if (toConvert == "nan" || toConvert == "nanf")
	{
		printResult("Impossible", "Impossible", "nanf", "nan");
		return (true);
	}
	else if (toConvert == "-inff" || toConvert == "-inf")
	{
		printResult("Impossible", "Impossible", "-inff", "-inf");
		return (true);
	}
	else if (toConvert == "+inff" || toConvert == "+inf")
	{
		printResult("Impossible", "Impossible", "+inff", "+inf");
		return (true);
	}
	else
		return (false);
}

bool	isNotValidArg(const std::string &toConvert)
{
	size_t i;

	if (toConvert.length() == 1)
		return (false);
	for (i = 0; i < toConvert.length(); i++)
	{
		if (isdigit(toConvert[i]))
			break ;
	}
	if (i == toConvert.length())
	{
		std::cout << "Argument is not valid" << std::endl;
		return (true);
	}
	return (false);
}

void	ScalarConverter::convert(const std::string &toConvert)
{
	char		toChar;
	int			toInt;
	float		toFloat;
	double		toDouble;
	long		tmpInt;
	long double tmpDouble;

	if (specialCase(toConvert) || isNotValidArg(toConvert))
		return ;

	if (toConvert.length() == 1 && isalpha(toConvert[0]))
	{
		toChar = toConvert[0];
		toInt = static_cast<int>(toChar);
		toFloat = static_cast<float>(toChar);
		toDouble = static_cast<double>(toChar);
	}
	else if (toConvert[toConvert.length() - 1] == 'f')
	{
		tmpDouble = atof(toConvert.c_str());
		if ((tmpDouble < FLT_MIN || tmpDouble > FLT_MAX) && tmpDouble != 0)
		{
			std::cout << "Error: float overflow" << std::endl;
			return ;
		}
		toFloat = atof(toConvert.c_str());
		toChar = static_cast<char>(toFloat);
		toInt = static_cast<int>(toFloat);
		toDouble = static_cast<double>(toFloat);
	}
	else if (toConvert.find('.'))
	{
		tmpDouble = strtold(toConvert.c_str(), NULL);
		if (tmpDouble < DBL_MIN || tmpDouble > DBL_MAX)
		{
			std::cout << "Error: double overflow" << std::endl;
			return ;
		}
		toDouble = atof(toConvert.c_str());
		toInt = static_cast<int>(toDouble);
		toChar = static_cast<char>(toDouble);
		toFloat = static_cast<float>(toDouble);
	}
	else
	{
		tmpInt = atol(toConvert.c_str());
		if (tmpInt < INT_MIN || tmpInt > INT_MAX)
		{
			std::cout << "Error: int overflow" << std::endl;
			return ;
		}
		toInt = atoi(toConvert.c_str());
		toChar = static_cast<char>(toInt);
		toFloat = static_cast<float>(toInt);
		toDouble = static_cast<double>(toInt);
	}

	std::string	c;
	std::string	i;
	std::string f;
	std::string d;

	c = charStr(toChar, toInt);
	i = intStr(toInt, toDouble);
	f = floatStr(toFloat, toDouble);
	d = doubleStr(toDouble);

	printResult(c, i, f, d);
}
