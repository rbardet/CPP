/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:01:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/07/03 22:06:52 by rbardet-         ###   ########.fr       */
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
	this->size = ac - 1;
}

void	PmergeMe::printVect() const {
	for (size_t i = 0; i < this->vect.size(); i++) {
		std::cout << this->vect[i] << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printDeq() const {
	for (size_t i = 0; i < this->deq.size(); i++) {
		std::cout << this->deq[i] << " ";
	}
	std::cout << std::endl;
}

const int &PmergeMe::getSize() const {
	return (this->size);
}

void PmergeMe::sortVect(std::vector<unsigned int> greatest) {
	unsigned int n1;
	unsigned int n2;

	if (this->size % 2 != 0) {
		int last = this->vect.back();
		this->vect.pop_back();
		greatest.push_back(last);
	}

	std::vector<unsigned int> toRemove;
	for (size_t i = 0; i < static_cast<size_t>(this->size) - 1; i+=2) {
		n1 = this->vect[i];
		n2 = this->vect[i + 1];

		if (n1 > n2) {
			greatest.push_back(n1);
			toRemove.push_back(i);
		} else {
			greatest.push_back(n2);
			toRemove.push_back(i + 1);
		}
	}

	for (size_t i = 0; i < toRemove.size(); i++) {
		this->vect.erase(this->vect.begin() + toRemove[i]);
	}

	this->size = greatest.size();
	if (greatest.size() > 1) {
		this->sortVect(vect);
	}

	for (size_t i = 0; i < static_cast<size_t>(greatest.size()); i++) {
		std::cout << greatest[i] << std::endl;
	}

}

void PmergeMe::sortDeq(std::deque<unsigned int> greatest) {
	(void)greatest;
}
