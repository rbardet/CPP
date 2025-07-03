/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:01:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/07/03 15:45:34 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &src) {*this = src;}
void PmergeMe::operator=(const PmergeMe &src) {
	this->vect = src.vect;
	this->deq = src.deq;
}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const int &ac, char **av) {
	for (size_t i = 1; i < static_cast<size_t>(ac); i++) {
		this->vect.push_back(atoi(av[i]));
		this->deq.push_back(atoi(av[i]));
	}
}
