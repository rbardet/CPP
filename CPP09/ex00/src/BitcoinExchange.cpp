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
		pos = line.find(',');
		if (pos == std::string::npos)
		{
			std::cout << WRONGFORMAT << std::endl;
			continue;
		}
		date = line.substr(0, pos);
		value = atof(line.substr(pos + 1).c_str());
		this->container[date] = value;
		i++;
	}
}

bool BitcoinExchange::isValidDate(std::string line) const
{

}

bool BitcoinExchange::isValidFormat(std::string line) const
{
	size_t pos = 0;
	float tmp = 0;

	pos = line.find('|');
	if (pos == std::string::npos)
	{
		std::cout << WRONGFORMAT << std::endl;
		return (false);
	}

	tmp = atof(line.substr(pos + 1).c_str());
	if (tmp < 0)
	{
		std::cout << TOOLOW << std::endl;
		return (false);
	}
	else if (tmp > 1000)
	{
		std::cout << TOOLARGE << std::endl;
		return (false);
	}


}

void BitcoinExchange::ExchangeRate(std::ifstream &dataBase) const
{

}

void BitcoinExchange::printContent() const
{
	for (std::map<std::string, float>::const_iterator it = this->container.begin(); it != this->container.end(); ++it)
	{
		std::cout << it->first << " => " << std::fixed << std::setprecision(2) << it->second << std::endl;
	}
}

