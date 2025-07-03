/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:56:18 by robin             #+#    #+#             */
/*   Updated: 2025/07/03 19:33:00 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <cstring>
#include <deque>
#include <vector>
#include <sys/time.h>

#define WRONGARGNB "Error: you need to pass at least one arg"
#define ONLYPOSITIVE "Error: only postive number allowed"
#define NODUP "Error: no duplicate allowed"
#define TIMEERROR "Error: failed to get actual time"

class PmergeMe
{
private:
	std::vector<unsigned int> vect;
	std::deque<unsigned int> deq;
	int	size;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	void operator=(const PmergeMe &src);
	~PmergeMe();

	PmergeMe(const int &ac, char **av);
	void printVect() const;
	void printDeq() const;
	const int &getSize() const;

	void sortVect(std::vector<unsigned int> greatest);
	void sortDeq(std::deque<unsigned int> greatest);
};

class TimeError : public std::exception {
	public:
		const char* what() const throw() {
			return (TIMEERROR);
		}
};

typedef struct s_time {
	struct timeval preSort;
	struct timeval postSort;
}				t_time;
