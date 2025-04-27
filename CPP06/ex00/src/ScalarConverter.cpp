/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:57:57 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/26 06:58:13 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <string.h>
#include <math.h>
#include <limits.h>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

void    ScalarConverter::convert(const std::string &toConvert)
{
    char    toChar;
    int     toInt;
    float   toFloat;
    double  toDouble;

    if (toConvert.find('.'))
    {
        toDouble = atof(toConvert.c_str());
        toInt = static_cast<int>(toDouble);
        toChar = static_cast<char>(toDouble);
        toFloat = static_cast<float>(toDouble);
    }
    else
    {
        toInt = atoi(toConvert.c_str());
        toChar = static_cast<char>(toInt);
        toFloat = static_cast<float>(toInt);
        toDouble = static_cast<double>(toInt);
    }

    std::string c;
    std::string i;
    std::string f;
    std::string d;

    
    if (std::isprint(toChar))
        std::cout << "char: " << toChar << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << toFloat << std::endl;
    std::cout << "double: " << toDouble << std::endl;
}