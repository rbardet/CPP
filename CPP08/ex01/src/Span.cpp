/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:21:40 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/05 11:16:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : N(0) {}

Span::Span(const Span &src) : N(src.N)
{
	for (size_t i = 0; i < N; i++)
		this->container[i] = src.container[i];
}

void	Span::operator=(const Span &src)
{
	this->N = src.N;
	for (size_t i = 0; i < N; i++)
		this->container[i] = src.container[i];
}

Span::~Span() {}

Span::Span(const unsigned int &max) : N(max) {}

void	Span::addNumber(const int &nb)
{
	if (this->container.size() >= this->N)
		throw(TooMuchValue());
	else
		this->container.push_back(nb);
}

int	Span::shortestSpan() const
{
	if (this->container.size() < 2)
		throw(CantFind());
	int	diff = diff = abs(this->container[0] - this->container[1]);
	for (size_t i = 0; i < this->container.size(); i++)
		for (size_t j = i + 1; j < this->container.size(); j++)
			if (diff > abs(this->container[i] - this->container[j]))
				diff = abs(this->container[i] - this->container[j]);
	return (diff);
}

int	Span::longestSpan() const
{
	if (this->container.size() < 2)
		throw(CantFind());
	int	diff = diff = abs(this->container[0] - this->container[1]);
	for (size_t i = 0; i < this->container.size(); i++)
		for (size_t j = i + 1; j < this->container.size(); j++)
			if (diff < abs(this->container[i] - this->container[j]))
				diff = abs(this->container[i] - this->container[j]);
	return (diff);
}

void	Span::fillContainer()
{
	srand(time(NULL));
	std::vector<int>::iterator end = this->container.begin() + this->N;
	for (std::vector<int>::iterator iterator = this->container.begin(); iterator < end; iterator++)
	{
		try
		{
			this->addNumber(rand());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void	Span::printContent() const
{
	for (size_t i = 0; i < this->container.size(); i++)
		std::cout << this->container[i] << std::endl;;
}
