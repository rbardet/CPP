/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:10:51 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/10 20:31:11 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << CANTOPEN << std::endl;
		return (127);
	}
	try {
		std::ifstream dataBase(DBSOURCE);
		BitcoinExchange btc(dataBase, ',');
		std::ifstream src(av[1]);
		BitcoinExchange input(src, '|');
		btc.ExchangeRate(input);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}
