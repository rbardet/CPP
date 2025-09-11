/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:12:03 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/10 20:29:53 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) : container(src.container) {}
void	BitcoinExchange::operator=(const BitcoinExchange &src) {this->container = src.container;}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::ifstream &dataBase, const char &limiter) {
	if (!dataBase.is_open())
		throw(CantOpenFile());

	int				i = 0;
	std::string		line;
	std::string		date;
	float			value;
	size_t			pos = 0;

	while (std::getline(dataBase, line)) {
		if (i == 0) {
			i++;
			continue ;
		}
		pos = line.find(limiter);
		if (pos == std::string::npos) {
			this->container.insert(std::pair<std::string, float>(line, 0));
			continue ;
		}
		date = line.substr(0, pos);
		value = atof(line.substr(pos + 1).c_str());
		this->container.insert(std::pair<std::string, float>(date, value));
		i++;
	}
}

bool BitcoinExchange::isValidDate(std::string line) const {
	for (size_t i = 0; i < line.size(); i++) {
		if (!isdigit(line[i]) && line[i] != '-' && line[i] != ' ')
			return (false);
	}
	size_t posYear = line.find('-');
	if (posYear == std::string::npos || posYear != 4 || line.length() != 11)
		return (false);
	int year = atoi(line.substr(0, posYear).c_str());
	if (year < 1 || year > 9999)
		return (false);
	int month = atoi(line.substr(5, 6).c_str());
	if (month < 1 || month > 12)
		return (false);
	int day = atoi(line.substr(8, line.size()).c_str());
	if (month == 2) {
		if ((day < 1 || day > 29) || (day > 28 && (year % 4 != 0)) || (day > 28 && (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)))
			return (false);
		else
			return (true);
	}
	else if ((day < 1 || day > 31) || (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)))
		return (false);
	return (true);
}

bool BitcoinExchange::isValidFormat(std::string date, float value) const {
	if (!isValidDate(date)) {
		std::cout << WRONGDATE << date << std::endl;
		return (false);
	}

	if (value < 0) {
		std::cout << TOOLOW << " => " << value << std::endl;
		return (false);
	}
	else if (value > 1000) {
		std::cout << TOOLARGE << " => " << value << std::endl;
		return (false);
	}
	return (true);
}

time_t BitcoinExchange::dateToTimestamp(const std::string &date) {
	time_t rawtime;
	tm *timeinfo;

	time ( &rawtime );

	timeinfo = localtime ( &rawtime );

	timeinfo->tm_year = atoi(date.substr(0, 4).c_str()) - 1900;
	timeinfo->tm_mon = atoi(date.substr(5, 6).c_str()) - 1;
	timeinfo->tm_mday = atoi(date.substr(8, 9).c_str());
	timeinfo->tm_hour = 0;
	timeinfo->tm_min = 0;
	timeinfo->tm_sec = 0;

	return (timegm(timeinfo));
}

void	BitcoinExchange::findClosest(t_close *closest, const std::string &itDate, const float &itValue, std::string &date) const {
	time_t oldDate = dateToTimestamp(closest->date);
	time_t newDate = dateToTimestamp(itDate);
	time_t actualDate = dateToTimestamp(date);

	if (newDate > actualDate)
		return ;
	if (std::abs(actualDate - oldDate) > std::abs(actualDate - newDate)) {
		closest->date = itDate;
		closest->value = itValue;
	}
}

void	BitcoinExchange::findExchangeRate(std::string date, float value) const {
	t_close	closest;

	for (std::map<std::string, float>::const_iterator itDb = this->container.begin(); itDb != this->container.end(); ++itDb) {
		if (closest.date.empty()) {
			closest.date = itDb->first;
			closest.value = itDb->second;
		}

		if (itDb->first + ' ' == date) {
			std::cout << date << "=> " << value << " = " << value * itDb->second << std::endl;
			return ;
		}
		else
			this->findClosest(&closest, itDb->first, itDb->second, date);
	}
	if (dateToTimestamp(date) < dateToTimestamp(closest.date))
		std::cout << "Error : Bitcoin didn't exist at this date => " << date << std::endl;
	else
		std::cout << date << "=> " << value << " = " << value * closest.value << std::endl;
}

void BitcoinExchange::ExchangeRate(const BitcoinExchange &input) const {
	for (std::map<std::string, float>::const_iterator itInput = input.container.begin(); itInput != input.container.end(); ++itInput) {
		if (this->isValidFormat(itInput->first, itInput->second))
			this->findExchangeRate(itInput->first, itInput->second);
	}
}

void BitcoinExchange::printContent() const {
	for (std::map<std::string, float>::const_iterator it = this->container.begin(); it != this->container.end(); ++it) {
		std::cout << it->first << " => " << std::fixed << std::setprecision(2) << it->second << std::endl;
	}
}

