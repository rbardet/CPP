/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:56:18 by robin             #+#    #+#             */
/*   Updated: 2025/07/03 15:45:32 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <cstring>
#include <deque>
#include <vector>


#define WRONGARGNB "Error: you need to pass at least one arg"
#define ONLYPOSITIVE "Error: only postive number allowed"
#define NODUP "Error: no duplicate allowed"
class PmergeMe
{
private:
	std::vector<unsigned int> vect;
	std::deque<unsigned int> deq;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	void operator=(const PmergeMe &src);
	~PmergeMe();

	PmergeMe(const int &ac, char **av);
};
