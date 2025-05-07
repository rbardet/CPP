/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:12:03 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/07 18:30:50 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

// Canonical Form
BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) : container(src.container) {}
void	BitcoinExchange::operator=(const BitcoinExchange &src) {this->container = src.container;}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::ifstream &dataBase)
{
	if (!dataBase.is_open())
		throw(CantOpenFile());

	int				i = 0;
	std::string		line;
	std::string		date;
	float			value;
	size_t			pos = 0;

	while (std::getline(dataBase, line))
	{
		if (i == 0)
		{
			i++;
			continue ;
		}
		pos = line.find(',' || '|');
		if (pos == std::string::npos)
			pos = line.size();
		date = line.substr(0, pos);
		value = atof(line.substr(pos + 1).c_str());
		this->container[date] = value;
		i++;
	}
}

bool BitcoinExchange::isValidDate(std::string line) const
{
	size_t	posYear = 0;

	posYear = line.find('-');
	if (posYear == std::string::npos)
		return (false);
	int year = atoi(line.substr(0, posYear).c_str());
	if (year < 1000 || year > 9999)
		return (false);
	size_t posMonth = line.find(line.substr(posYear + 1, line.size()));
	if (posMonth == std::string::npos)
		return (false);
	int month = atoi(line.substr(posYear + 1, posMonth).c_str());
	if (month < 1 || month > 12)
		return (false);
	int day = atoi(line.substr(posMonth + 1, line.size()).c_str());
	if (day < 1 || day > 31 || (day > 29 && month == 2 && year % 4 != 0)) // february
		return (false);
	if ((day > 30 && month % 2 == 0) || month != 8 || month != 10 || month != 12)
		return (false);
	return (true);
}

bool BitcoinExchange::isValidFormat(std::string date, float value) const
{
	size_t pos = 0;

	pos = date.find('|');
	if (pos == std::string::npos)
	{
		std::cout << WRONGFORMAT << std::endl;
		return (false);
	}

	if (value < 0)
	{
		std::cout << TOOLOW << std::endl;
		return (false);
	}
	else if (value > 1000)
	{
		std::cout << TOOLARGE << std::endl;
		return (false);
	}

	if (!isValidDate(date))
	{
		std::cout << WRONGDATE << date << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::ExchangeRate(const BitcoinExchange &input) const
{
	std::string line;

	for (std::map<std::string, float>::const_iterator itInput = input.container.begin(); itInput != input.container.end(); ++itInput)
	{
		if (this->isValidFormat(itInput->first, itInput->second))
		{
			for (std::map<std::string, float>::const_iterator itDb = this->container.begin(); itDb != this->container.end(); ++itDb)
				if (line == itDb->first)
					std::cout << itDb->first << " => " << line.substr() << std::endl;
		}
	}
}

void BitcoinExchange::printContent() const
{
	for (std::map<std::string, float>::const_iterator it = this->container.begin(); it != this->container.end(); ++it)
	{
		std::cout << it->first << " => " << std::fixed << std::setprecision(2) << it->second << std::endl;
	}
}

