/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:11:55 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/07 18:30:49 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <cstdlib>
#include <iomanip>

#define NEGATIVEVALUE "Error not a positive number."
#define BADINPUT "Error: bad input."
#define TOOLARGE "Error: too large number."
#define CANTOPEN "Error: could not open file."
#define WRONGFORMAT "Error: invalid format (<date>, <value>)."
#define TOOLOW "Error: not a positive number."

class BitcoinExchange
{
private:
	std::map<std::string, float>	container;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	void	operator=(const BitcoinExchange &src);
	~BitcoinExchange();

	BitcoinExchange(std::ifstream &dataBase);
	void	ExchangeRate(std::ifstream &dataBase) const;
	bool	isValidFormat(std::string line) const;
	bool	isValidDate(std::string line) const;
	void	printContent() const;
	class CantOpenFile : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return (CANTOPEN);
			}
	};
};



