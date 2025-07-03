/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:55:45 by robin             #+#    #+#             */
/*   Updated: 2025/07/03 15:45:24 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

static bool isDigital(const char *av) {
	for (size_t i = 0; i < strlen(av); i++) {
		if (!isdigit(av[i]))
			return (false);
	}
	return (true);
}

static bool checkDup(const int ac, char **av) {
	for (size_t i = 1; i < static_cast<size_t>(ac); i++) {
		for (size_t j = i + 1; j < static_cast<size_t>(ac); j++) {
			if (atoi(av[i]) == atoi(av[j])) {
				std::cout << NODUP << std::endl;
				return (false);
			}
		}
	}
	return (true);
}

int main(int ac, char **av) {
	if (ac < 2) {
		std::cout << WRONGARGNB << std::endl;
		return (127);
	}

	for (size_t i = 1; i < static_cast<size_t>(ac); i++) {
		if (!isDigital(av[i])) {
			std::cout << ONLYPOSITIVE << std::endl;
			return (127);
		}
	}

	if (!checkDup(ac, av))
		return (127);

	PmergeMe fj(ac, av);

	std::cout << "Before:	";
	for (size_t i = 1; i < static_cast<size_t>(ac); i++) {
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;


	return (0);
}
