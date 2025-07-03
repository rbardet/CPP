/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:55:45 by robin             #+#    #+#             */
/*   Updated: 2025/07/03 19:29:46 by rbardet-         ###   ########.fr       */
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

static void getTime(struct timeval src) {
	if (gettimeofday(&src, NULL) == -1)
		throw(TimeError());
}

static void timeToSort(const t_time &time, const std::string &type, const int &size) {
	std::cout << "Time to process a range of " << size
	<< " elements with " << type << " : "
	<< ((double)(time.postSort.tv_usec - time.preSort.tv_usec)) / 1000
	<< " ms" << std::endl;
}


static void sort(int ac, char **av) {
	PmergeMe fj(ac, av);
	std::vector<unsigned int>vect;
	std::deque<unsigned int>deq;

	std::cout << "Before:	";
	fj.printVect();

	t_time time;

	try {
		getTime(time.preSort);
		fj.sortVect(vect);
		getTime(time.postSort);
		std::cout << "After:	";
		fj.printVect();
		timeToSort(time, "std::vector", fj.getSize());

		getTime(time.preSort);
		fj.sortDeq(deq);
		getTime(time.postSort);
		timeToSort(time, "std::deque", fj.getSize());
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
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

	sort(ac, av);
	return (0);
}
