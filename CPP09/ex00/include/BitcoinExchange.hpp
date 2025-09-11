/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:11:55 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/10 20:31:20 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <iomanip>
#include <ctime>

#define DBSOURCE "data.csv"

#define NEGATIVEVALUE "Error not a positive number."
#define BADINPUT "Error: bad input."
#define TOOLARGE "Error: too large a number."
#define VALUENOTFOUND "Error: missing value"
#define CANTOPEN "Error: could not open file."
#define WRONGFORMAT "Error: invalid format (<date> | <value>)."
#define WRONGDATE "Error: bad input => "
#define TOOLOW "Error: not a positive number."


typedef struct t_close {
	std::string	date;
	float		value;
}				t_close;

class BitcoinExchange {
private:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	void	operator=(const BitcoinExchange &src);
	std::multimap<std::string, float>	container;
public:
	BitcoinExchange(std::ifstream &dataBase, const char &limiter);
	~BitcoinExchange();

	void	ExchangeRate(const BitcoinExchange &input) const;
	bool	isValidFormat(std::string date, float value) const;
	bool	isValidDate(std::string line) const;
	void	printContent() const;
	void	findExchangeRate(std::string date, float value) const;
	void	findClosest(t_close *closest, const std::string &itDate, const float &itValue, std::string &date) const;

	static time_t dateToTimestamp(const std::string& date);
	class CantOpenFile : public std::exception {
		public:
			const char* what() const throw() {
				return (CANTOPEN);
			}
	};
};
